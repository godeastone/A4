// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/input/synchronous_compositor.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var begin_frame_args$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/begin_frame_args.mojom', '../../../services/viz/public/interfaces/compositing/begin_frame_args.mojom.js');
  }
  var compositor_frame$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/compositor_frame.mojom', '../../../services/viz/public/interfaces/compositing/compositor_frame.mojom.js');
  }
  var compositor_frame_metadata$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom', '../../../services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom.js');
  }
  var returned_resource$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/returned_resource.mojom', '../../../services/viz/public/interfaces/compositing/returned_resource.mojom.js');
  }



  function SyncCompositorDemandDrawHwParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncCompositorDemandDrawHwParams.prototype.initDefaults_ = function() {
  };
  SyncCompositorDemandDrawHwParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyncCompositorDemandDrawHwParams.generate = function(generator_) {
    var generated = new SyncCompositorDemandDrawHwParams;
    return generated;
  };

  SyncCompositorDemandDrawHwParams.prototype.mutate = function(mutator_) {
    return this;
  };
  SyncCompositorDemandDrawHwParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyncCompositorDemandDrawHwParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyncCompositorDemandDrawHwParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyncCompositorDemandDrawHwParams.validate = function(messageValidator, offset) {
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

  SyncCompositorDemandDrawHwParams.encodedSize = codec.kStructHeaderSize + 0;

  SyncCompositorDemandDrawHwParams.decode = function(decoder) {
    var packed;
    var val = new SyncCompositorDemandDrawHwParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyncCompositorDemandDrawHwParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncCompositorDemandDrawHwParams.encodedSize);
    encoder.writeUint32(0);
  };
  function SyncCompositorSetSharedMemoryParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncCompositorSetSharedMemoryParams.prototype.initDefaults_ = function() {
  };
  SyncCompositorSetSharedMemoryParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyncCompositorSetSharedMemoryParams.generate = function(generator_) {
    var generated = new SyncCompositorSetSharedMemoryParams;
    return generated;
  };

  SyncCompositorSetSharedMemoryParams.prototype.mutate = function(mutator_) {
    return this;
  };
  SyncCompositorSetSharedMemoryParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyncCompositorSetSharedMemoryParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyncCompositorSetSharedMemoryParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyncCompositorSetSharedMemoryParams.validate = function(messageValidator, offset) {
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

  SyncCompositorSetSharedMemoryParams.encodedSize = codec.kStructHeaderSize + 0;

  SyncCompositorSetSharedMemoryParams.decode = function(decoder) {
    var packed;
    var val = new SyncCompositorSetSharedMemoryParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyncCompositorSetSharedMemoryParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncCompositorSetSharedMemoryParams.encodedSize);
    encoder.writeUint32(0);
  };
  function SyncCompositorDemandDrawSwParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncCompositorDemandDrawSwParams.prototype.initDefaults_ = function() {
  };
  SyncCompositorDemandDrawSwParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyncCompositorDemandDrawSwParams.generate = function(generator_) {
    var generated = new SyncCompositorDemandDrawSwParams;
    return generated;
  };

  SyncCompositorDemandDrawSwParams.prototype.mutate = function(mutator_) {
    return this;
  };
  SyncCompositorDemandDrawSwParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyncCompositorDemandDrawSwParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyncCompositorDemandDrawSwParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyncCompositorDemandDrawSwParams.validate = function(messageValidator, offset) {
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

  SyncCompositorDemandDrawSwParams.encodedSize = codec.kStructHeaderSize + 0;

  SyncCompositorDemandDrawSwParams.decode = function(decoder) {
    var packed;
    var val = new SyncCompositorDemandDrawSwParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyncCompositorDemandDrawSwParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncCompositorDemandDrawSwParams.encodedSize);
    encoder.writeUint32(0);
  };
  function SyncCompositorCommonRendererParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncCompositorCommonRendererParams.prototype.initDefaults_ = function() {
  };
  SyncCompositorCommonRendererParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyncCompositorCommonRendererParams.generate = function(generator_) {
    var generated = new SyncCompositorCommonRendererParams;
    return generated;
  };

  SyncCompositorCommonRendererParams.prototype.mutate = function(mutator_) {
    return this;
  };
  SyncCompositorCommonRendererParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyncCompositorCommonRendererParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyncCompositorCommonRendererParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyncCompositorCommonRendererParams.validate = function(messageValidator, offset) {
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

  SyncCompositorCommonRendererParams.encodedSize = codec.kStructHeaderSize + 0;

  SyncCompositorCommonRendererParams.decode = function(decoder) {
    var packed;
    var val = new SyncCompositorCommonRendererParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyncCompositorCommonRendererParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncCompositorCommonRendererParams.encodedSize);
    encoder.writeUint32(0);
  };
  function SynchronousCompositor_ComputeScroll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_ComputeScroll_Params.prototype.initDefaults_ = function() {
    this.time = null;
  };
  SynchronousCompositor_ComputeScroll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_ComputeScroll_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_ComputeScroll_Params;
    generated.time = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  SynchronousCompositor_ComputeScroll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  SynchronousCompositor_ComputeScroll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_ComputeScroll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_ComputeScroll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_ComputeScroll_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_ComputeScroll_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_ComputeScroll_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_ComputeScroll_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_ComputeScroll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  SynchronousCompositor_ComputeScroll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_ComputeScroll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.time);
  };
  function SynchronousCompositor_DemandDrawHwAsync_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_DemandDrawHwAsync_Params.prototype.initDefaults_ = function() {
    this.drawParams = null;
  };
  SynchronousCompositor_DemandDrawHwAsync_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_DemandDrawHwAsync_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_DemandDrawHwAsync_Params;
    generated.drawParams = generator_.generateStruct(content.mojom.SyncCompositorDemandDrawHwParams, false);
    return generated;
  };

  SynchronousCompositor_DemandDrawHwAsync_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.drawParams = mutator_.mutateStruct(content.mojom.SyncCompositorDemandDrawHwParams, false);
    }
    return this;
  };
  SynchronousCompositor_DemandDrawHwAsync_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_DemandDrawHwAsync_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_DemandDrawHwAsync_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_DemandDrawHwAsync_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_DemandDrawHwAsync_Params.drawParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorDemandDrawHwParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_DemandDrawHwAsync_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_DemandDrawHwAsync_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_DemandDrawHwAsync_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.drawParams = decoder.decodeStructPointer(SyncCompositorDemandDrawHwParams);
    return val;
  };

  SynchronousCompositor_DemandDrawHwAsync_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_DemandDrawHwAsync_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorDemandDrawHwParams, val.drawParams);
  };
  function SynchronousCompositor_DemandDrawHw_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_DemandDrawHw_Params.prototype.initDefaults_ = function() {
    this.drawParams = null;
  };
  SynchronousCompositor_DemandDrawHw_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_DemandDrawHw_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_DemandDrawHw_Params;
    generated.drawParams = generator_.generateStruct(content.mojom.SyncCompositorDemandDrawHwParams, false);
    return generated;
  };

  SynchronousCompositor_DemandDrawHw_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.drawParams = mutator_.mutateStruct(content.mojom.SyncCompositorDemandDrawHwParams, false);
    }
    return this;
  };
  SynchronousCompositor_DemandDrawHw_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_DemandDrawHw_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_DemandDrawHw_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_DemandDrawHw_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_DemandDrawHw_Params.drawParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorDemandDrawHwParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_DemandDrawHw_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_DemandDrawHw_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_DemandDrawHw_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.drawParams = decoder.decodeStructPointer(SyncCompositorDemandDrawHwParams);
    return val;
  };

  SynchronousCompositor_DemandDrawHw_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_DemandDrawHw_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorDemandDrawHwParams, val.drawParams);
  };
  function SynchronousCompositor_DemandDrawHw_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_DemandDrawHw_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.layerTreeFrameSinkId = 0;
    this.metadataVersion = 0;
    this.frame = null;
  };
  SynchronousCompositor_DemandDrawHw_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_DemandDrawHw_ResponseParams.generate = function(generator_) {
    var generated = new SynchronousCompositor_DemandDrawHw_ResponseParams;
    generated.result = generator_.generateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    generated.layerTreeFrameSinkId = generator_.generateUint32();
    generated.metadataVersion = generator_.generateUint32();
    generated.frame = generator_.generateStruct(viz.mojom.CompositorFrame, true);
    return generated;
  };

  SynchronousCompositor_DemandDrawHw_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.layerTreeFrameSinkId = mutator_.mutateUint32(this.layerTreeFrameSinkId);
    }
    if (mutator_.chooseMutateField()) {
      this.metadataVersion = mutator_.mutateUint32(this.metadataVersion);
    }
    if (mutator_.chooseMutateField()) {
      this.frame = mutator_.mutateStruct(viz.mojom.CompositorFrame, true);
    }
    return this;
  };
  SynchronousCompositor_DemandDrawHw_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.frame !== null) {
      Array.prototype.push.apply(handles, this.frame.getHandleDeps());
    }
    return handles;
  };

  SynchronousCompositor_DemandDrawHw_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_DemandDrawHw_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.frame.setHandlesInternal_(handles, idx);
    return idx;
  };

  SynchronousCompositor_DemandDrawHw_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_DemandDrawHw_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorCommonRendererParams, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate SynchronousCompositor_DemandDrawHw_ResponseParams.frame
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, compositor_frame$.CompositorFrame, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_DemandDrawHw_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  SynchronousCompositor_DemandDrawHw_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_DemandDrawHw_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(SyncCompositorCommonRendererParams);
    val.layerTreeFrameSinkId = decoder.decodeStruct(codec.Uint32);
    val.metadataVersion = decoder.decodeStruct(codec.Uint32);
    val.frame = decoder.decodeStructPointer(compositor_frame$.CompositorFrame);
    return val;
  };

  SynchronousCompositor_DemandDrawHw_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_DemandDrawHw_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorCommonRendererParams, val.result);
    encoder.encodeStruct(codec.Uint32, val.layerTreeFrameSinkId);
    encoder.encodeStruct(codec.Uint32, val.metadataVersion);
    encoder.encodeStructPointer(compositor_frame$.CompositorFrame, val.frame);
  };
  function SynchronousCompositor_SetSharedMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_SetSharedMemory_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  SynchronousCompositor_SetSharedMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_SetSharedMemory_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_SetSharedMemory_Params;
    generated.params = generator_.generateStruct(content.mojom.SyncCompositorSetSharedMemoryParams, false);
    return generated;
  };

  SynchronousCompositor_SetSharedMemory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.SyncCompositorSetSharedMemoryParams, false);
    }
    return this;
  };
  SynchronousCompositor_SetSharedMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_SetSharedMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_SetSharedMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_SetSharedMemory_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_SetSharedMemory_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorSetSharedMemoryParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_SetSharedMemory_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_SetSharedMemory_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_SetSharedMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(SyncCompositorSetSharedMemoryParams);
    return val;
  };

  SynchronousCompositor_SetSharedMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_SetSharedMemory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorSetSharedMemoryParams, val.params);
  };
  function SynchronousCompositor_SetSharedMemory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_SetSharedMemory_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.result = null;
  };
  SynchronousCompositor_SetSharedMemory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_SetSharedMemory_ResponseParams.generate = function(generator_) {
    var generated = new SynchronousCompositor_SetSharedMemory_ResponseParams;
    generated.success = generator_.generateBool();
    generated.result = generator_.generateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    return generated;
  };

  SynchronousCompositor_SetSharedMemory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    }
    return this;
  };
  SynchronousCompositor_SetSharedMemory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_SetSharedMemory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_SetSharedMemory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_SetSharedMemory_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate SynchronousCompositor_SetSharedMemory_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, SyncCompositorCommonRendererParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_SetSharedMemory_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  SynchronousCompositor_SetSharedMemory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_SetSharedMemory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.result = decoder.decodeStructPointer(SyncCompositorCommonRendererParams);
    return val;
  };

  SynchronousCompositor_SetSharedMemory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_SetSharedMemory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(SyncCompositorCommonRendererParams, val.result);
  };
  function SynchronousCompositor_DemandDrawSw_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_DemandDrawSw_Params.prototype.initDefaults_ = function() {
    this.drawParams = null;
  };
  SynchronousCompositor_DemandDrawSw_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_DemandDrawSw_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_DemandDrawSw_Params;
    generated.drawParams = generator_.generateStruct(content.mojom.SyncCompositorDemandDrawSwParams, false);
    return generated;
  };

  SynchronousCompositor_DemandDrawSw_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.drawParams = mutator_.mutateStruct(content.mojom.SyncCompositorDemandDrawSwParams, false);
    }
    return this;
  };
  SynchronousCompositor_DemandDrawSw_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_DemandDrawSw_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_DemandDrawSw_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_DemandDrawSw_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_DemandDrawSw_Params.drawParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorDemandDrawSwParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_DemandDrawSw_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_DemandDrawSw_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_DemandDrawSw_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.drawParams = decoder.decodeStructPointer(SyncCompositorDemandDrawSwParams);
    return val;
  };

  SynchronousCompositor_DemandDrawSw_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_DemandDrawSw_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorDemandDrawSwParams, val.drawParams);
  };
  function SynchronousCompositor_DemandDrawSw_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_DemandDrawSw_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.metadataVersion = 0;
    this.metaData = null;
  };
  SynchronousCompositor_DemandDrawSw_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_DemandDrawSw_ResponseParams.generate = function(generator_) {
    var generated = new SynchronousCompositor_DemandDrawSw_ResponseParams;
    generated.result = generator_.generateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    generated.metadataVersion = generator_.generateUint32();
    generated.metaData = generator_.generateStruct(viz.mojom.CompositorFrameMetadata, true);
    return generated;
  };

  SynchronousCompositor_DemandDrawSw_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.metadataVersion = mutator_.mutateUint32(this.metadataVersion);
    }
    if (mutator_.chooseMutateField()) {
      this.metaData = mutator_.mutateStruct(viz.mojom.CompositorFrameMetadata, true);
    }
    return this;
  };
  SynchronousCompositor_DemandDrawSw_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_DemandDrawSw_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_DemandDrawSw_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_DemandDrawSw_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_DemandDrawSw_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorCommonRendererParams, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate SynchronousCompositor_DemandDrawSw_ResponseParams.metaData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, compositor_frame_metadata$.CompositorFrameMetadata, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_DemandDrawSw_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  SynchronousCompositor_DemandDrawSw_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_DemandDrawSw_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(SyncCompositorCommonRendererParams);
    val.metadataVersion = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.metaData = decoder.decodeStructPointer(compositor_frame_metadata$.CompositorFrameMetadata);
    return val;
  };

  SynchronousCompositor_DemandDrawSw_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_DemandDrawSw_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorCommonRendererParams, val.result);
    encoder.encodeStruct(codec.Uint32, val.metadataVersion);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(compositor_frame_metadata$.CompositorFrameMetadata, val.metaData);
  };
  function SynchronousCompositor_ZeroSharedMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_ZeroSharedMemory_Params.prototype.initDefaults_ = function() {
  };
  SynchronousCompositor_ZeroSharedMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_ZeroSharedMemory_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_ZeroSharedMemory_Params;
    return generated;
  };

  SynchronousCompositor_ZeroSharedMemory_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SynchronousCompositor_ZeroSharedMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_ZeroSharedMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_ZeroSharedMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_ZeroSharedMemory_Params.validate = function(messageValidator, offset) {
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

  SynchronousCompositor_ZeroSharedMemory_Params.encodedSize = codec.kStructHeaderSize + 0;

  SynchronousCompositor_ZeroSharedMemory_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_ZeroSharedMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SynchronousCompositor_ZeroSharedMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_ZeroSharedMemory_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SynchronousCompositor_ZoomBy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_ZoomBy_Params.prototype.initDefaults_ = function() {
    this.delta = 0;
    this.anchor = null;
  };
  SynchronousCompositor_ZoomBy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_ZoomBy_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_ZoomBy_Params;
    generated.delta = generator_.generateFloat();
    generated.anchor = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  SynchronousCompositor_ZoomBy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.delta = mutator_.mutateFloat(this.delta);
    }
    if (mutator_.chooseMutateField()) {
      this.anchor = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  SynchronousCompositor_ZoomBy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_ZoomBy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_ZoomBy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_ZoomBy_Params.validate = function(messageValidator, offset) {
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



    // validate SynchronousCompositor_ZoomBy_Params.anchor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_ZoomBy_Params.encodedSize = codec.kStructHeaderSize + 16;

  SynchronousCompositor_ZoomBy_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_ZoomBy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.delta = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.anchor = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  SynchronousCompositor_ZoomBy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_ZoomBy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.delta);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Point, val.anchor);
  };
  function SynchronousCompositor_ZoomBy_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_ZoomBy_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  SynchronousCompositor_ZoomBy_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_ZoomBy_ResponseParams.generate = function(generator_) {
    var generated = new SynchronousCompositor_ZoomBy_ResponseParams;
    generated.result = generator_.generateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    return generated;
  };

  SynchronousCompositor_ZoomBy_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    }
    return this;
  };
  SynchronousCompositor_ZoomBy_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_ZoomBy_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_ZoomBy_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_ZoomBy_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_ZoomBy_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorCommonRendererParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_ZoomBy_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_ZoomBy_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_ZoomBy_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(SyncCompositorCommonRendererParams);
    return val;
  };

  SynchronousCompositor_ZoomBy_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_ZoomBy_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorCommonRendererParams, val.result);
  };
  function SynchronousCompositor_SetMemoryPolicy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_SetMemoryPolicy_Params.prototype.initDefaults_ = function() {
    this.bytesLimit = 0;
  };
  SynchronousCompositor_SetMemoryPolicy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_SetMemoryPolicy_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_SetMemoryPolicy_Params;
    generated.bytesLimit = generator_.generateUint32();
    return generated;
  };

  SynchronousCompositor_SetMemoryPolicy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bytesLimit = mutator_.mutateUint32(this.bytesLimit);
    }
    return this;
  };
  SynchronousCompositor_SetMemoryPolicy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_SetMemoryPolicy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_SetMemoryPolicy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_SetMemoryPolicy_Params.validate = function(messageValidator, offset) {
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

  SynchronousCompositor_SetMemoryPolicy_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_SetMemoryPolicy_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_SetMemoryPolicy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bytesLimit = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SynchronousCompositor_SetMemoryPolicy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_SetMemoryPolicy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bytesLimit);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SynchronousCompositor_ReclaimResources_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_ReclaimResources_Params.prototype.initDefaults_ = function() {
    this.layerTreeFrameSinkId = 0;
    this.resources = null;
  };
  SynchronousCompositor_ReclaimResources_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_ReclaimResources_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_ReclaimResources_Params;
    generated.layerTreeFrameSinkId = generator_.generateUint32();
    generated.resources = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.ReturnedResource, false);
    });
    return generated;
  };

  SynchronousCompositor_ReclaimResources_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.layerTreeFrameSinkId = mutator_.mutateUint32(this.layerTreeFrameSinkId);
    }
    if (mutator_.chooseMutateField()) {
      this.resources = mutator_.mutateArray(this.resources, function(val) {
        return mutator_.mutateStruct(viz.mojom.ReturnedResource, false);
      });
    }
    return this;
  };
  SynchronousCompositor_ReclaimResources_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_ReclaimResources_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_ReclaimResources_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_ReclaimResources_Params.validate = function(messageValidator, offset) {
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



    // validate SynchronousCompositor_ReclaimResources_Params.resources
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(returned_resource$.ReturnedResource), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_ReclaimResources_Params.encodedSize = codec.kStructHeaderSize + 16;

  SynchronousCompositor_ReclaimResources_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_ReclaimResources_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.layerTreeFrameSinkId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.resources = decoder.decodeArrayPointer(new codec.PointerTo(returned_resource$.ReturnedResource));
    return val;
  };

  SynchronousCompositor_ReclaimResources_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_ReclaimResources_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.layerTreeFrameSinkId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(returned_resource$.ReturnedResource), val.resources);
  };
  function SynchronousCompositor_SetScroll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_SetScroll_Params.prototype.initDefaults_ = function() {
    this.offset = null;
  };
  SynchronousCompositor_SetScroll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_SetScroll_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_SetScroll_Params;
    generated.offset = generator_.generateStruct(gfx.mojom.ScrollOffset, false);
    return generated;
  };

  SynchronousCompositor_SetScroll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateStruct(gfx.mojom.ScrollOffset, false);
    }
    return this;
  };
  SynchronousCompositor_SetScroll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_SetScroll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_SetScroll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_SetScroll_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_SetScroll_Params.offset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.ScrollOffset, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_SetScroll_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_SetScroll_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_SetScroll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.offset = decoder.decodeStructPointer(geometry$.ScrollOffset);
    return val;
  };

  SynchronousCompositor_SetScroll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_SetScroll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.ScrollOffset, val.offset);
  };
  function SynchronousCompositor_BeginFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_BeginFrame_Params.prototype.initDefaults_ = function() {
    this.args = null;
  };
  SynchronousCompositor_BeginFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_BeginFrame_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_BeginFrame_Params;
    generated.args = generator_.generateStruct(viz.mojom.BeginFrameArgs, false);
    return generated;
  };

  SynchronousCompositor_BeginFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.args = mutator_.mutateStruct(viz.mojom.BeginFrameArgs, false);
    }
    return this;
  };
  SynchronousCompositor_BeginFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_BeginFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_BeginFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_BeginFrame_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositor_BeginFrame_Params.args
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, begin_frame_args$.BeginFrameArgs, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositor_BeginFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_BeginFrame_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_BeginFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.args = decoder.decodeStructPointer(begin_frame_args$.BeginFrameArgs);
    return val;
  };

  SynchronousCompositor_BeginFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_BeginFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(begin_frame_args$.BeginFrameArgs, val.args);
  };
  function SynchronousCompositor_SetBeginFrameSourcePaused_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositor_SetBeginFrameSourcePaused_Params.prototype.initDefaults_ = function() {
    this.paused = false;
  };
  SynchronousCompositor_SetBeginFrameSourcePaused_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositor_SetBeginFrameSourcePaused_Params.generate = function(generator_) {
    var generated = new SynchronousCompositor_SetBeginFrameSourcePaused_Params;
    generated.paused = generator_.generateBool();
    return generated;
  };

  SynchronousCompositor_SetBeginFrameSourcePaused_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.paused = mutator_.mutateBool(this.paused);
    }
    return this;
  };
  SynchronousCompositor_SetBeginFrameSourcePaused_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositor_SetBeginFrameSourcePaused_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositor_SetBeginFrameSourcePaused_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositor_SetBeginFrameSourcePaused_Params.validate = function(messageValidator, offset) {
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

  SynchronousCompositor_SetBeginFrameSourcePaused_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositor_SetBeginFrameSourcePaused_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositor_SetBeginFrameSourcePaused_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.paused = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SynchronousCompositor_SetBeginFrameSourcePaused_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositor_SetBeginFrameSourcePaused_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.paused & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.prototype.initDefaults_ = function() {
  };
  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.generate = function(generator_) {
    var generated = new SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params;
    return generated;
  };

  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.validate = function(messageValidator, offset) {
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

  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.encodedSize = codec.kStructHeaderSize + 0;

  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SynchronousCompositorHost_UpdateState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositorHost_UpdateState_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  SynchronousCompositorHost_UpdateState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositorHost_UpdateState_Params.generate = function(generator_) {
    var generated = new SynchronousCompositorHost_UpdateState_Params;
    generated.params = generator_.generateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    return generated;
  };

  SynchronousCompositorHost_UpdateState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    }
    return this;
  };
  SynchronousCompositorHost_UpdateState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositorHost_UpdateState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositorHost_UpdateState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositorHost_UpdateState_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositorHost_UpdateState_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorCommonRendererParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositorHost_UpdateState_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositorHost_UpdateState_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositorHost_UpdateState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(SyncCompositorCommonRendererParams);
    return val;
  };

  SynchronousCompositorHost_UpdateState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositorHost_UpdateState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorCommonRendererParams, val.params);
  };
  function SynchronousCompositorHost_SetNeedsBeginFrames_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositorHost_SetNeedsBeginFrames_Params.prototype.initDefaults_ = function() {
    this.needsBeginFrames = false;
  };
  SynchronousCompositorHost_SetNeedsBeginFrames_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositorHost_SetNeedsBeginFrames_Params.generate = function(generator_) {
    var generated = new SynchronousCompositorHost_SetNeedsBeginFrames_Params;
    generated.needsBeginFrames = generator_.generateBool();
    return generated;
  };

  SynchronousCompositorHost_SetNeedsBeginFrames_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.needsBeginFrames = mutator_.mutateBool(this.needsBeginFrames);
    }
    return this;
  };
  SynchronousCompositorHost_SetNeedsBeginFrames_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositorHost_SetNeedsBeginFrames_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositorHost_SetNeedsBeginFrames_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositorHost_SetNeedsBeginFrames_Params.validate = function(messageValidator, offset) {
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

  SynchronousCompositorHost_SetNeedsBeginFrames_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositorHost_SetNeedsBeginFrames_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositorHost_SetNeedsBeginFrames_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.needsBeginFrames = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SynchronousCompositorHost_SetNeedsBeginFrames_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositorHost_SetNeedsBeginFrames_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.needsBeginFrames & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SynchronousCompositorControlHost_ReturnFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositorControlHost_ReturnFrame_Params.prototype.initDefaults_ = function() {
    this.layerTreeFrameSinkId = 0;
    this.metadataVersion = 0;
    this.frame = null;
  };
  SynchronousCompositorControlHost_ReturnFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositorControlHost_ReturnFrame_Params.generate = function(generator_) {
    var generated = new SynchronousCompositorControlHost_ReturnFrame_Params;
    generated.layerTreeFrameSinkId = generator_.generateUint32();
    generated.metadataVersion = generator_.generateUint32();
    generated.frame = generator_.generateStruct(viz.mojom.CompositorFrame, true);
    return generated;
  };

  SynchronousCompositorControlHost_ReturnFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.layerTreeFrameSinkId = mutator_.mutateUint32(this.layerTreeFrameSinkId);
    }
    if (mutator_.chooseMutateField()) {
      this.metadataVersion = mutator_.mutateUint32(this.metadataVersion);
    }
    if (mutator_.chooseMutateField()) {
      this.frame = mutator_.mutateStruct(viz.mojom.CompositorFrame, true);
    }
    return this;
  };
  SynchronousCompositorControlHost_ReturnFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.frame !== null) {
      Array.prototype.push.apply(handles, this.frame.getHandleDeps());
    }
    return handles;
  };

  SynchronousCompositorControlHost_ReturnFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositorControlHost_ReturnFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.frame.setHandlesInternal_(handles, idx);
    return idx;
  };

  SynchronousCompositorControlHost_ReturnFrame_Params.validate = function(messageValidator, offset) {
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




    // validate SynchronousCompositorControlHost_ReturnFrame_Params.frame
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, compositor_frame$.CompositorFrame, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositorControlHost_ReturnFrame_Params.encodedSize = codec.kStructHeaderSize + 16;

  SynchronousCompositorControlHost_ReturnFrame_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositorControlHost_ReturnFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.layerTreeFrameSinkId = decoder.decodeStruct(codec.Uint32);
    val.metadataVersion = decoder.decodeStruct(codec.Uint32);
    val.frame = decoder.decodeStructPointer(compositor_frame$.CompositorFrame);
    return val;
  };

  SynchronousCompositorControlHost_ReturnFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositorControlHost_ReturnFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.layerTreeFrameSinkId);
    encoder.encodeStruct(codec.Uint32, val.metadataVersion);
    encoder.encodeStructPointer(compositor_frame$.CompositorFrame, val.frame);
  };
  function SynchronousCompositorControlHost_BeginFrameResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SynchronousCompositorControlHost_BeginFrameResponse_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  SynchronousCompositorControlHost_BeginFrameResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SynchronousCompositorControlHost_BeginFrameResponse_Params.generate = function(generator_) {
    var generated = new SynchronousCompositorControlHost_BeginFrameResponse_Params;
    generated.params = generator_.generateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    return generated;
  };

  SynchronousCompositorControlHost_BeginFrameResponse_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.SyncCompositorCommonRendererParams, false);
    }
    return this;
  };
  SynchronousCompositorControlHost_BeginFrameResponse_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SynchronousCompositorControlHost_BeginFrameResponse_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SynchronousCompositorControlHost_BeginFrameResponse_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SynchronousCompositorControlHost_BeginFrameResponse_Params.validate = function(messageValidator, offset) {
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


    // validate SynchronousCompositorControlHost_BeginFrameResponse_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncCompositorCommonRendererParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SynchronousCompositorControlHost_BeginFrameResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  SynchronousCompositorControlHost_BeginFrameResponse_Params.decode = function(decoder) {
    var packed;
    var val = new SynchronousCompositorControlHost_BeginFrameResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(SyncCompositorCommonRendererParams);
    return val;
  };

  SynchronousCompositorControlHost_BeginFrameResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SynchronousCompositorControlHost_BeginFrameResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncCompositorCommonRendererParams, val.params);
  };
  var kSynchronousCompositor_ComputeScroll_Name = 286118353;
  var kSynchronousCompositor_DemandDrawHwAsync_Name = 507053162;
  var kSynchronousCompositor_DemandDrawHw_Name = 444280150;
  var kSynchronousCompositor_SetSharedMemory_Name = 1484784000;
  var kSynchronousCompositor_DemandDrawSw_Name = 2089107563;
  var kSynchronousCompositor_ZeroSharedMemory_Name = 1736192262;
  var kSynchronousCompositor_ZoomBy_Name = 1465815187;
  var kSynchronousCompositor_SetMemoryPolicy_Name = 824777130;
  var kSynchronousCompositor_ReclaimResources_Name = 259946049;
  var kSynchronousCompositor_SetScroll_Name = 107200661;
  var kSynchronousCompositor_BeginFrame_Name = 1962919686;
  var kSynchronousCompositor_SetBeginFrameSourcePaused_Name = 1191799552;

  function SynchronousCompositorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SynchronousCompositor,
                                                   handleOrPtrInfo);
  }

  function SynchronousCompositorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SynchronousCompositor, associatedInterfacePtrInfo);
  }

  SynchronousCompositorAssociatedPtr.prototype =
      Object.create(SynchronousCompositorPtr.prototype);
  SynchronousCompositorAssociatedPtr.prototype.constructor =
      SynchronousCompositorAssociatedPtr;

  function SynchronousCompositorProxy(receiver) {
    this.receiver_ = receiver;
  }
  SynchronousCompositorPtr.prototype.computeScroll = function() {
    return SynchronousCompositorProxy.prototype.computeScroll
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.computeScroll = function(time) {
    var params_ = new SynchronousCompositor_ComputeScroll_Params();
    params_.time = time;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_ComputeScroll_Name,
        codec.align(SynchronousCompositor_ComputeScroll_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_ComputeScroll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorPtr.prototype.demandDrawHwAsync = function() {
    return SynchronousCompositorProxy.prototype.demandDrawHwAsync
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.demandDrawHwAsync = function(drawParams) {
    var params_ = new SynchronousCompositor_DemandDrawHwAsync_Params();
    params_.drawParams = drawParams;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_DemandDrawHwAsync_Name,
        codec.align(SynchronousCompositor_DemandDrawHwAsync_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_DemandDrawHwAsync_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorPtr.prototype.demandDrawHw = function() {
    return SynchronousCompositorProxy.prototype.demandDrawHw
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.demandDrawHw = function(drawParams) {
    var params_ = new SynchronousCompositor_DemandDrawHw_Params();
    params_.drawParams = drawParams;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSynchronousCompositor_DemandDrawHw_Name,
          codec.align(SynchronousCompositor_DemandDrawHw_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SynchronousCompositor_DemandDrawHw_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SynchronousCompositor_DemandDrawHw_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SynchronousCompositorPtr.prototype.setSharedMemory = function() {
    return SynchronousCompositorProxy.prototype.setSharedMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.setSharedMemory = function(params) {
    var params_ = new SynchronousCompositor_SetSharedMemory_Params();
    params_.params = params;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSynchronousCompositor_SetSharedMemory_Name,
          codec.align(SynchronousCompositor_SetSharedMemory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SynchronousCompositor_SetSharedMemory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SynchronousCompositor_SetSharedMemory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SynchronousCompositorPtr.prototype.demandDrawSw = function() {
    return SynchronousCompositorProxy.prototype.demandDrawSw
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.demandDrawSw = function(drawParams) {
    var params_ = new SynchronousCompositor_DemandDrawSw_Params();
    params_.drawParams = drawParams;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSynchronousCompositor_DemandDrawSw_Name,
          codec.align(SynchronousCompositor_DemandDrawSw_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SynchronousCompositor_DemandDrawSw_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SynchronousCompositor_DemandDrawSw_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SynchronousCompositorPtr.prototype.zeroSharedMemory = function() {
    return SynchronousCompositorProxy.prototype.zeroSharedMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.zeroSharedMemory = function() {
    var params_ = new SynchronousCompositor_ZeroSharedMemory_Params();
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_ZeroSharedMemory_Name,
        codec.align(SynchronousCompositor_ZeroSharedMemory_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_ZeroSharedMemory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorPtr.prototype.zoomBy = function() {
    return SynchronousCompositorProxy.prototype.zoomBy
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.zoomBy = function(delta, anchor) {
    var params_ = new SynchronousCompositor_ZoomBy_Params();
    params_.delta = delta;
    params_.anchor = anchor;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSynchronousCompositor_ZoomBy_Name,
          codec.align(SynchronousCompositor_ZoomBy_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SynchronousCompositor_ZoomBy_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SynchronousCompositor_ZoomBy_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SynchronousCompositorPtr.prototype.setMemoryPolicy = function() {
    return SynchronousCompositorProxy.prototype.setMemoryPolicy
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.setMemoryPolicy = function(bytesLimit) {
    var params_ = new SynchronousCompositor_SetMemoryPolicy_Params();
    params_.bytesLimit = bytesLimit;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_SetMemoryPolicy_Name,
        codec.align(SynchronousCompositor_SetMemoryPolicy_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_SetMemoryPolicy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorPtr.prototype.reclaimResources = function() {
    return SynchronousCompositorProxy.prototype.reclaimResources
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.reclaimResources = function(layerTreeFrameSinkId, resources) {
    var params_ = new SynchronousCompositor_ReclaimResources_Params();
    params_.layerTreeFrameSinkId = layerTreeFrameSinkId;
    params_.resources = resources;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_ReclaimResources_Name,
        codec.align(SynchronousCompositor_ReclaimResources_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_ReclaimResources_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorPtr.prototype.setScroll = function() {
    return SynchronousCompositorProxy.prototype.setScroll
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.setScroll = function(offset) {
    var params_ = new SynchronousCompositor_SetScroll_Params();
    params_.offset = offset;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_SetScroll_Name,
        codec.align(SynchronousCompositor_SetScroll_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_SetScroll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorPtr.prototype.beginFrame = function() {
    return SynchronousCompositorProxy.prototype.beginFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.beginFrame = function(args) {
    var params_ = new SynchronousCompositor_BeginFrame_Params();
    params_.args = args;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_BeginFrame_Name,
        codec.align(SynchronousCompositor_BeginFrame_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_BeginFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorPtr.prototype.setBeginFrameSourcePaused = function() {
    return SynchronousCompositorProxy.prototype.setBeginFrameSourcePaused
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorProxy.prototype.setBeginFrameSourcePaused = function(paused) {
    var params_ = new SynchronousCompositor_SetBeginFrameSourcePaused_Params();
    params_.paused = paused;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositor_SetBeginFrameSourcePaused_Name,
        codec.align(SynchronousCompositor_SetBeginFrameSourcePaused_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositor_SetBeginFrameSourcePaused_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SynchronousCompositorStub(delegate) {
    this.delegate_ = delegate;
  }
  SynchronousCompositorStub.prototype.computeScroll = function(time) {
    return this.delegate_ && this.delegate_.computeScroll && this.delegate_.computeScroll(time);
  }
  SynchronousCompositorStub.prototype.demandDrawHwAsync = function(drawParams) {
    return this.delegate_ && this.delegate_.demandDrawHwAsync && this.delegate_.demandDrawHwAsync(drawParams);
  }
  SynchronousCompositorStub.prototype.demandDrawHw = function(drawParams) {
    return this.delegate_ && this.delegate_.demandDrawHw && this.delegate_.demandDrawHw(drawParams);
  }
  SynchronousCompositorStub.prototype.setSharedMemory = function(params) {
    return this.delegate_ && this.delegate_.setSharedMemory && this.delegate_.setSharedMemory(params);
  }
  SynchronousCompositorStub.prototype.demandDrawSw = function(drawParams) {
    return this.delegate_ && this.delegate_.demandDrawSw && this.delegate_.demandDrawSw(drawParams);
  }
  SynchronousCompositorStub.prototype.zeroSharedMemory = function() {
    return this.delegate_ && this.delegate_.zeroSharedMemory && this.delegate_.zeroSharedMemory();
  }
  SynchronousCompositorStub.prototype.zoomBy = function(delta, anchor) {
    return this.delegate_ && this.delegate_.zoomBy && this.delegate_.zoomBy(delta, anchor);
  }
  SynchronousCompositorStub.prototype.setMemoryPolicy = function(bytesLimit) {
    return this.delegate_ && this.delegate_.setMemoryPolicy && this.delegate_.setMemoryPolicy(bytesLimit);
  }
  SynchronousCompositorStub.prototype.reclaimResources = function(layerTreeFrameSinkId, resources) {
    return this.delegate_ && this.delegate_.reclaimResources && this.delegate_.reclaimResources(layerTreeFrameSinkId, resources);
  }
  SynchronousCompositorStub.prototype.setScroll = function(offset) {
    return this.delegate_ && this.delegate_.setScroll && this.delegate_.setScroll(offset);
  }
  SynchronousCompositorStub.prototype.beginFrame = function(args) {
    return this.delegate_ && this.delegate_.beginFrame && this.delegate_.beginFrame(args);
  }
  SynchronousCompositorStub.prototype.setBeginFrameSourcePaused = function(paused) {
    return this.delegate_ && this.delegate_.setBeginFrameSourcePaused && this.delegate_.setBeginFrameSourcePaused(paused);
  }

  SynchronousCompositorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSynchronousCompositor_ComputeScroll_Name:
      var params = reader.decodeStruct(SynchronousCompositor_ComputeScroll_Params);
      this.computeScroll(params.time);
      return true;
    case kSynchronousCompositor_DemandDrawHwAsync_Name:
      var params = reader.decodeStruct(SynchronousCompositor_DemandDrawHwAsync_Params);
      this.demandDrawHwAsync(params.drawParams);
      return true;
    case kSynchronousCompositor_ZeroSharedMemory_Name:
      var params = reader.decodeStruct(SynchronousCompositor_ZeroSharedMemory_Params);
      this.zeroSharedMemory();
      return true;
    case kSynchronousCompositor_SetMemoryPolicy_Name:
      var params = reader.decodeStruct(SynchronousCompositor_SetMemoryPolicy_Params);
      this.setMemoryPolicy(params.bytesLimit);
      return true;
    case kSynchronousCompositor_ReclaimResources_Name:
      var params = reader.decodeStruct(SynchronousCompositor_ReclaimResources_Params);
      this.reclaimResources(params.layerTreeFrameSinkId, params.resources);
      return true;
    case kSynchronousCompositor_SetScroll_Name:
      var params = reader.decodeStruct(SynchronousCompositor_SetScroll_Params);
      this.setScroll(params.offset);
      return true;
    case kSynchronousCompositor_BeginFrame_Name:
      var params = reader.decodeStruct(SynchronousCompositor_BeginFrame_Params);
      this.beginFrame(params.args);
      return true;
    case kSynchronousCompositor_SetBeginFrameSourcePaused_Name:
      var params = reader.decodeStruct(SynchronousCompositor_SetBeginFrameSourcePaused_Params);
      this.setBeginFrameSourcePaused(params.paused);
      return true;
    default:
      return false;
    }
  };

  SynchronousCompositorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSynchronousCompositor_DemandDrawHw_Name:
      var params = reader.decodeStruct(SynchronousCompositor_DemandDrawHw_Params);
      this.demandDrawHw(params.drawParams).then(function(response) {
        var responseParams =
            new SynchronousCompositor_DemandDrawHw_ResponseParams();
        responseParams.result = response.result;
        responseParams.layerTreeFrameSinkId = response.layerTreeFrameSinkId;
        responseParams.metadataVersion = response.metadataVersion;
        responseParams.frame = response.frame;
        var builder = new codec.MessageV1Builder(
            kSynchronousCompositor_DemandDrawHw_Name,
            codec.align(SynchronousCompositor_DemandDrawHw_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SynchronousCompositor_DemandDrawHw_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSynchronousCompositor_SetSharedMemory_Name:
      var params = reader.decodeStruct(SynchronousCompositor_SetSharedMemory_Params);
      this.setSharedMemory(params.params).then(function(response) {
        var responseParams =
            new SynchronousCompositor_SetSharedMemory_ResponseParams();
        responseParams.success = response.success;
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kSynchronousCompositor_SetSharedMemory_Name,
            codec.align(SynchronousCompositor_SetSharedMemory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SynchronousCompositor_SetSharedMemory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSynchronousCompositor_DemandDrawSw_Name:
      var params = reader.decodeStruct(SynchronousCompositor_DemandDrawSw_Params);
      this.demandDrawSw(params.drawParams).then(function(response) {
        var responseParams =
            new SynchronousCompositor_DemandDrawSw_ResponseParams();
        responseParams.result = response.result;
        responseParams.metadataVersion = response.metadataVersion;
        responseParams.metaData = response.metaData;
        var builder = new codec.MessageV1Builder(
            kSynchronousCompositor_DemandDrawSw_Name,
            codec.align(SynchronousCompositor_DemandDrawSw_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SynchronousCompositor_DemandDrawSw_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSynchronousCompositor_ZoomBy_Name:
      var params = reader.decodeStruct(SynchronousCompositor_ZoomBy_Params);
      this.zoomBy(params.delta, params.anchor).then(function(response) {
        var responseParams =
            new SynchronousCompositor_ZoomBy_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kSynchronousCompositor_ZoomBy_Name,
            codec.align(SynchronousCompositor_ZoomBy_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SynchronousCompositor_ZoomBy_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSynchronousCompositorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSynchronousCompositor_ComputeScroll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_ComputeScroll_Params;
      break;
      case kSynchronousCompositor_DemandDrawHwAsync_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_DemandDrawHwAsync_Params;
      break;
      case kSynchronousCompositor_DemandDrawHw_Name:
        if (message.expectsResponse())
          paramsClass = SynchronousCompositor_DemandDrawHw_Params;
      break;
      case kSynchronousCompositor_SetSharedMemory_Name:
        if (message.expectsResponse())
          paramsClass = SynchronousCompositor_SetSharedMemory_Params;
      break;
      case kSynchronousCompositor_DemandDrawSw_Name:
        if (message.expectsResponse())
          paramsClass = SynchronousCompositor_DemandDrawSw_Params;
      break;
      case kSynchronousCompositor_ZeroSharedMemory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_ZeroSharedMemory_Params;
      break;
      case kSynchronousCompositor_ZoomBy_Name:
        if (message.expectsResponse())
          paramsClass = SynchronousCompositor_ZoomBy_Params;
      break;
      case kSynchronousCompositor_SetMemoryPolicy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_SetMemoryPolicy_Params;
      break;
      case kSynchronousCompositor_ReclaimResources_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_ReclaimResources_Params;
      break;
      case kSynchronousCompositor_SetScroll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_SetScroll_Params;
      break;
      case kSynchronousCompositor_BeginFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_BeginFrame_Params;
      break;
      case kSynchronousCompositor_SetBeginFrameSourcePaused_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositor_SetBeginFrameSourcePaused_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSynchronousCompositorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSynchronousCompositor_DemandDrawHw_Name:
        if (message.isResponse())
          paramsClass = SynchronousCompositor_DemandDrawHw_ResponseParams;
        break;
      case kSynchronousCompositor_SetSharedMemory_Name:
        if (message.isResponse())
          paramsClass = SynchronousCompositor_SetSharedMemory_ResponseParams;
        break;
      case kSynchronousCompositor_DemandDrawSw_Name:
        if (message.isResponse())
          paramsClass = SynchronousCompositor_DemandDrawSw_ResponseParams;
        break;
      case kSynchronousCompositor_ZoomBy_Name:
        if (message.isResponse())
          paramsClass = SynchronousCompositor_ZoomBy_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SynchronousCompositor = {
    name: 'content.mojom.SynchronousCompositor',
    kVersion: 0,
    ptrClass: SynchronousCompositorPtr,
    proxyClass: SynchronousCompositorProxy,
    stubClass: SynchronousCompositorStub,
    validateRequest: validateSynchronousCompositorRequest,
    validateResponse: validateSynchronousCompositorResponse,
    mojomId: 'content/common/input/synchronous_compositor.mojom',
    fuzzMethods: {
      computeScroll: {
        params: SynchronousCompositor_ComputeScroll_Params,
      },
      demandDrawHwAsync: {
        params: SynchronousCompositor_DemandDrawHwAsync_Params,
      },
      demandDrawHw: {
        params: SynchronousCompositor_DemandDrawHw_Params,
      },
      setSharedMemory: {
        params: SynchronousCompositor_SetSharedMemory_Params,
      },
      demandDrawSw: {
        params: SynchronousCompositor_DemandDrawSw_Params,
      },
      zeroSharedMemory: {
        params: SynchronousCompositor_ZeroSharedMemory_Params,
      },
      zoomBy: {
        params: SynchronousCompositor_ZoomBy_Params,
      },
      setMemoryPolicy: {
        params: SynchronousCompositor_SetMemoryPolicy_Params,
      },
      reclaimResources: {
        params: SynchronousCompositor_ReclaimResources_Params,
      },
      setScroll: {
        params: SynchronousCompositor_SetScroll_Params,
      },
      beginFrame: {
        params: SynchronousCompositor_BeginFrame_Params,
      },
      setBeginFrameSourcePaused: {
        params: SynchronousCompositor_SetBeginFrameSourcePaused_Params,
      },
    },
  };
  SynchronousCompositorStub.prototype.validator = validateSynchronousCompositorRequest;
  SynchronousCompositorProxy.prototype.validator = validateSynchronousCompositorResponse;
  var kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name = 1780471468;
  var kSynchronousCompositorHost_UpdateState_Name = 1130795770;
  var kSynchronousCompositorHost_SetNeedsBeginFrames_Name = 1965888808;

  function SynchronousCompositorHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SynchronousCompositorHost,
                                                   handleOrPtrInfo);
  }

  function SynchronousCompositorHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SynchronousCompositorHost, associatedInterfacePtrInfo);
  }

  SynchronousCompositorHostAssociatedPtr.prototype =
      Object.create(SynchronousCompositorHostPtr.prototype);
  SynchronousCompositorHostAssociatedPtr.prototype.constructor =
      SynchronousCompositorHostAssociatedPtr;

  function SynchronousCompositorHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  SynchronousCompositorHostPtr.prototype.layerTreeFrameSinkCreated = function() {
    return SynchronousCompositorHostProxy.prototype.layerTreeFrameSinkCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorHostProxy.prototype.layerTreeFrameSinkCreated = function() {
    var params_ = new SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params();
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name,
        codec.align(SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorHostPtr.prototype.updateState = function() {
    return SynchronousCompositorHostProxy.prototype.updateState
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorHostProxy.prototype.updateState = function(params) {
    var params_ = new SynchronousCompositorHost_UpdateState_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositorHost_UpdateState_Name,
        codec.align(SynchronousCompositorHost_UpdateState_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositorHost_UpdateState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorHostPtr.prototype.setNeedsBeginFrames = function() {
    return SynchronousCompositorHostProxy.prototype.setNeedsBeginFrames
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorHostProxy.prototype.setNeedsBeginFrames = function(needsBeginFrames) {
    var params_ = new SynchronousCompositorHost_SetNeedsBeginFrames_Params();
    params_.needsBeginFrames = needsBeginFrames;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositorHost_SetNeedsBeginFrames_Name,
        codec.align(SynchronousCompositorHost_SetNeedsBeginFrames_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositorHost_SetNeedsBeginFrames_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SynchronousCompositorHostStub(delegate) {
    this.delegate_ = delegate;
  }
  SynchronousCompositorHostStub.prototype.layerTreeFrameSinkCreated = function() {
    return this.delegate_ && this.delegate_.layerTreeFrameSinkCreated && this.delegate_.layerTreeFrameSinkCreated();
  }
  SynchronousCompositorHostStub.prototype.updateState = function(params) {
    return this.delegate_ && this.delegate_.updateState && this.delegate_.updateState(params);
  }
  SynchronousCompositorHostStub.prototype.setNeedsBeginFrames = function(needsBeginFrames) {
    return this.delegate_ && this.delegate_.setNeedsBeginFrames && this.delegate_.setNeedsBeginFrames(needsBeginFrames);
  }

  SynchronousCompositorHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name:
      var params = reader.decodeStruct(SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params);
      this.layerTreeFrameSinkCreated();
      return true;
    case kSynchronousCompositorHost_UpdateState_Name:
      var params = reader.decodeStruct(SynchronousCompositorHost_UpdateState_Params);
      this.updateState(params.params);
      return true;
    case kSynchronousCompositorHost_SetNeedsBeginFrames_Name:
      var params = reader.decodeStruct(SynchronousCompositorHost_SetNeedsBeginFrames_Params);
      this.setNeedsBeginFrames(params.needsBeginFrames);
      return true;
    default:
      return false;
    }
  };

  SynchronousCompositorHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSynchronousCompositorHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params;
      break;
      case kSynchronousCompositorHost_UpdateState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositorHost_UpdateState_Params;
      break;
      case kSynchronousCompositorHost_SetNeedsBeginFrames_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositorHost_SetNeedsBeginFrames_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSynchronousCompositorHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SynchronousCompositorHost = {
    name: 'content.mojom.SynchronousCompositorHost',
    kVersion: 0,
    ptrClass: SynchronousCompositorHostPtr,
    proxyClass: SynchronousCompositorHostProxy,
    stubClass: SynchronousCompositorHostStub,
    validateRequest: validateSynchronousCompositorHostRequest,
    validateResponse: null,
    mojomId: 'content/common/input/synchronous_compositor.mojom',
    fuzzMethods: {
      layerTreeFrameSinkCreated: {
        params: SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params,
      },
      updateState: {
        params: SynchronousCompositorHost_UpdateState_Params,
      },
      setNeedsBeginFrames: {
        params: SynchronousCompositorHost_SetNeedsBeginFrames_Params,
      },
    },
  };
  SynchronousCompositorHostStub.prototype.validator = validateSynchronousCompositorHostRequest;
  SynchronousCompositorHostProxy.prototype.validator = null;
  var kSynchronousCompositorControlHost_ReturnFrame_Name = 320650776;
  var kSynchronousCompositorControlHost_BeginFrameResponse_Name = 801266427;

  function SynchronousCompositorControlHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SynchronousCompositorControlHost,
                                                   handleOrPtrInfo);
  }

  function SynchronousCompositorControlHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SynchronousCompositorControlHost, associatedInterfacePtrInfo);
  }

  SynchronousCompositorControlHostAssociatedPtr.prototype =
      Object.create(SynchronousCompositorControlHostPtr.prototype);
  SynchronousCompositorControlHostAssociatedPtr.prototype.constructor =
      SynchronousCompositorControlHostAssociatedPtr;

  function SynchronousCompositorControlHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  SynchronousCompositorControlHostPtr.prototype.returnFrame = function() {
    return SynchronousCompositorControlHostProxy.prototype.returnFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorControlHostProxy.prototype.returnFrame = function(layerTreeFrameSinkId, metadataVersion, frame) {
    var params_ = new SynchronousCompositorControlHost_ReturnFrame_Params();
    params_.layerTreeFrameSinkId = layerTreeFrameSinkId;
    params_.metadataVersion = metadataVersion;
    params_.frame = frame;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositorControlHost_ReturnFrame_Name,
        codec.align(SynchronousCompositorControlHost_ReturnFrame_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositorControlHost_ReturnFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SynchronousCompositorControlHostPtr.prototype.beginFrameResponse = function() {
    return SynchronousCompositorControlHostProxy.prototype.beginFrameResponse
        .apply(this.ptr.getProxy(), arguments);
  };

  SynchronousCompositorControlHostProxy.prototype.beginFrameResponse = function(params) {
    var params_ = new SynchronousCompositorControlHost_BeginFrameResponse_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kSynchronousCompositorControlHost_BeginFrameResponse_Name,
        codec.align(SynchronousCompositorControlHost_BeginFrameResponse_Params.encodedSize));
    builder.encodeStruct(SynchronousCompositorControlHost_BeginFrameResponse_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SynchronousCompositorControlHostStub(delegate) {
    this.delegate_ = delegate;
  }
  SynchronousCompositorControlHostStub.prototype.returnFrame = function(layerTreeFrameSinkId, metadataVersion, frame) {
    return this.delegate_ && this.delegate_.returnFrame && this.delegate_.returnFrame(layerTreeFrameSinkId, metadataVersion, frame);
  }
  SynchronousCompositorControlHostStub.prototype.beginFrameResponse = function(params) {
    return this.delegate_ && this.delegate_.beginFrameResponse && this.delegate_.beginFrameResponse(params);
  }

  SynchronousCompositorControlHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSynchronousCompositorControlHost_ReturnFrame_Name:
      var params = reader.decodeStruct(SynchronousCompositorControlHost_ReturnFrame_Params);
      this.returnFrame(params.layerTreeFrameSinkId, params.metadataVersion, params.frame);
      return true;
    case kSynchronousCompositorControlHost_BeginFrameResponse_Name:
      var params = reader.decodeStruct(SynchronousCompositorControlHost_BeginFrameResponse_Params);
      this.beginFrameResponse(params.params);
      return true;
    default:
      return false;
    }
  };

  SynchronousCompositorControlHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSynchronousCompositorControlHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSynchronousCompositorControlHost_ReturnFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositorControlHost_ReturnFrame_Params;
      break;
      case kSynchronousCompositorControlHost_BeginFrameResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SynchronousCompositorControlHost_BeginFrameResponse_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSynchronousCompositorControlHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SynchronousCompositorControlHost = {
    name: 'content.mojom.SynchronousCompositorControlHost',
    kVersion: 0,
    ptrClass: SynchronousCompositorControlHostPtr,
    proxyClass: SynchronousCompositorControlHostProxy,
    stubClass: SynchronousCompositorControlHostStub,
    validateRequest: validateSynchronousCompositorControlHostRequest,
    validateResponse: null,
    mojomId: 'content/common/input/synchronous_compositor.mojom',
    fuzzMethods: {
      returnFrame: {
        params: SynchronousCompositorControlHost_ReturnFrame_Params,
      },
      beginFrameResponse: {
        params: SynchronousCompositorControlHost_BeginFrameResponse_Params,
      },
    },
  };
  SynchronousCompositorControlHostStub.prototype.validator = validateSynchronousCompositorControlHostRequest;
  SynchronousCompositorControlHostProxy.prototype.validator = null;
  exports.SyncCompositorDemandDrawHwParams = SyncCompositorDemandDrawHwParams;
  exports.SyncCompositorSetSharedMemoryParams = SyncCompositorSetSharedMemoryParams;
  exports.SyncCompositorDemandDrawSwParams = SyncCompositorDemandDrawSwParams;
  exports.SyncCompositorCommonRendererParams = SyncCompositorCommonRendererParams;
  exports.SynchronousCompositor = SynchronousCompositor;
  exports.SynchronousCompositorPtr = SynchronousCompositorPtr;
  exports.SynchronousCompositorAssociatedPtr = SynchronousCompositorAssociatedPtr;
  exports.SynchronousCompositorHost = SynchronousCompositorHost;
  exports.SynchronousCompositorHostPtr = SynchronousCompositorHostPtr;
  exports.SynchronousCompositorHostAssociatedPtr = SynchronousCompositorHostAssociatedPtr;
  exports.SynchronousCompositorControlHost = SynchronousCompositorControlHost;
  exports.SynchronousCompositorControlHostPtr = SynchronousCompositorControlHostPtr;
  exports.SynchronousCompositorControlHostAssociatedPtr = SynchronousCompositorControlHostAssociatedPtr;
})();