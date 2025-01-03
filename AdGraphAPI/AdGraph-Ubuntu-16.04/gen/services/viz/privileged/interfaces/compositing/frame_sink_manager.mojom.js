// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom';
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
  var surface_handle$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/surface_handle.mojom', '../../../../../gpu/ipc/common/surface_handle.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var display_private$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/compositing/display_private.mojom', 'display_private.mojom.js');
  }
  var external_begin_frame_controller$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom', 'external_begin_frame_controller.mojom.js');
  }
  var frame_sink_video_capture$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom', 'frame_sink_video_capture.mojom.js');
  }
  var renderer_settings$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/compositing/renderer_settings.mojom', 'renderer_settings.mojom.js');
  }
  var compositor_frame_sink$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/compositor_frame_sink.mojom', '../../../public/interfaces/compositing/compositor_frame_sink.mojom.js');
  }
  var copy_output_request$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/copy_output_request.mojom', '../../../public/interfaces/compositing/copy_output_request.mojom.js');
  }
  var frame_sink_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/frame_sink_id.mojom', '../../../public/interfaces/compositing/frame_sink_id.mojom.js');
  }
  var local_surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/local_surface_id.mojom', '../../../public/interfaces/compositing/local_surface_id.mojom.js');
  }
  var surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_id.mojom', '../../../public/interfaces/compositing/surface_id.mojom.js');
  }
  var surface_info$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_info.mojom', '../../../public/interfaces/compositing/surface_info.mojom.js');
  }
  var aggregated_hit_test_region$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom', '../../../public/interfaces/hit_test/aggregated_hit_test_region.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var video_detector_observer$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/video_detector_observer.mojom', '../../../public/interfaces/compositing/video_detector_observer.mojom.js');
  }



  function RootCompositorFrameSinkParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RootCompositorFrameSinkParams.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.widget = null;
    this.gpuCompositing = true;
    this.compositorFrameSink = new associatedBindings.AssociatedInterfaceRequest();
    this.rendererSettings = null;
    this.compositorFrameSinkClient = new compositor_frame_sink$.CompositorFrameSinkClientPtr();
    this.displayPrivate = new associatedBindings.AssociatedInterfaceRequest();
    this.displayClient = new display_private$.DisplayClientPtr();
    this.externalBeginFrameController = new associatedBindings.AssociatedInterfaceRequest();
    this.externalBeginFrameControllerClient = new external_begin_frame_controller$.ExternalBeginFrameControllerClientPtr();
  };
  RootCompositorFrameSinkParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RootCompositorFrameSinkParams.generate = function(generator_) {
    var generated = new RootCompositorFrameSinkParams;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.widget = generator_.generateStruct(gpu.mojom.SurfaceHandle, false);
    generated.gpuCompositing = generator_.generateBool();
    generated.rendererSettings = generator_.generateStruct(viz.mojom.RendererSettings, false);
    generated.compositorFrameSink = generator_.generateAssociatedInterfaceRequest("viz.mojom.CompositorFrameSink", false);
    generated.compositorFrameSinkClient = generator_.generateInterface("viz.mojom.CompositorFrameSinkClient", false);
    generated.displayPrivate = generator_.generateAssociatedInterfaceRequest("viz.mojom.DisplayPrivate", false);
    generated.displayClient = generator_.generateInterface("viz.mojom.DisplayClient", false);
    generated.externalBeginFrameController = generator_.generateAssociatedInterfaceRequest("viz.mojom.ExternalBeginFrameController", true);
    generated.externalBeginFrameControllerClient = generator_.generateInterface("viz.mojom.ExternalBeginFrameControllerClient", true);
    return generated;
  };

  RootCompositorFrameSinkParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.widget = mutator_.mutateStruct(gpu.mojom.SurfaceHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuCompositing = mutator_.mutateBool(this.gpuCompositing);
    }
    if (mutator_.chooseMutateField()) {
      this.rendererSettings = mutator_.mutateStruct(viz.mojom.RendererSettings, false);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorFrameSink = mutator_.mutateAssociatedInterfaceRequest(this.compositorFrameSink, "viz.mojom.CompositorFrameSink", false);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorFrameSinkClient = mutator_.mutateInterface(this.compositorFrameSinkClient, "viz.mojom.CompositorFrameSinkClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayPrivate = mutator_.mutateAssociatedInterfaceRequest(this.displayPrivate, "viz.mojom.DisplayPrivate", false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayClient = mutator_.mutateInterface(this.displayClient, "viz.mojom.DisplayClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.externalBeginFrameController = mutator_.mutateAssociatedInterfaceRequest(this.externalBeginFrameController, "viz.mojom.ExternalBeginFrameController", true);
    }
    if (mutator_.chooseMutateField()) {
      this.externalBeginFrameControllerClient = mutator_.mutateInterface(this.externalBeginFrameControllerClient, "viz.mojom.ExternalBeginFrameControllerClient", true);
    }
    return this;
  };
  RootCompositorFrameSinkParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.compositorFrameSink !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkAssociatedRequest"]);
    }
    if (this.compositorFrameSinkClient !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkClientPtr"]);
    }
    if (this.displayPrivate !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.DisplayPrivateAssociatedRequest"]);
    }
    if (this.displayClient !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.DisplayClientPtr"]);
    }
    if (this.externalBeginFrameController !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.ExternalBeginFrameControllerAssociatedRequest"]);
    }
    if (this.externalBeginFrameControllerClient !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.ExternalBeginFrameControllerClientPtr"]);
    }
    return handles;
  };

  RootCompositorFrameSinkParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RootCompositorFrameSinkParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.compositorFrameSink = handles[idx++];;
    this.compositorFrameSinkClient = handles[idx++];;
    this.displayPrivate = handles[idx++];;
    this.displayClient = handles[idx++];;
    this.externalBeginFrameController = handles[idx++];;
    this.externalBeginFrameControllerClient = handles[idx++];;
    return idx;
  };

  RootCompositorFrameSinkParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.widget
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, surface_handle$.SurfaceHandle, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RootCompositorFrameSinkParams.rendererSettings
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, renderer_settings$.RendererSettings, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.compositorFrameSink
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 20, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.compositorFrameSinkClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 32, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.displayPrivate
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.displayClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 44, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.externalBeginFrameController
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 52, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RootCompositorFrameSinkParams.externalBeginFrameControllerClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 56, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RootCompositorFrameSinkParams.encodedSize = codec.kStructHeaderSize + 64;

  RootCompositorFrameSinkParams.decode = function(decoder) {
    var packed;
    var val = new RootCompositorFrameSinkParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.widget = decoder.decodeStructPointer(surface_handle$.SurfaceHandle);
    packed = decoder.readUint8();
    val.gpuCompositing = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.compositorFrameSink = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    val.rendererSettings = decoder.decodeStructPointer(renderer_settings$.RendererSettings);
    val.compositorFrameSinkClient = decoder.decodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr));
    val.displayPrivate = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    val.displayClient = decoder.decodeStruct(new codec.Interface(display_private$.DisplayClientPtr));
    val.externalBeginFrameController = decoder.decodeStruct(codec.NullableAssociatedInterfaceRequest);
    val.externalBeginFrameControllerClient = decoder.decodeStruct(new codec.NullableInterface(external_begin_frame_controller$.ExternalBeginFrameControllerClientPtr));
    return val;
  };

  RootCompositorFrameSinkParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RootCompositorFrameSinkParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStructPointer(surface_handle$.SurfaceHandle, val.widget);
    packed = 0;
    packed |= (val.gpuCompositing & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.compositorFrameSink);
    encoder.encodeStructPointer(renderer_settings$.RendererSettings, val.rendererSettings);
    encoder.encodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr), val.compositorFrameSinkClient);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.displayPrivate);
    encoder.encodeStruct(new codec.Interface(display_private$.DisplayClientPtr), val.displayClient);
    encoder.encodeStruct(codec.NullableAssociatedInterfaceRequest, val.externalBeginFrameController);
    encoder.encodeStruct(new codec.NullableInterface(external_begin_frame_controller$.ExternalBeginFrameControllerClientPtr), val.externalBeginFrameControllerClient);
  };
  function FrameSinkManager_RegisterFrameSinkId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_RegisterFrameSinkId_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
  };
  FrameSinkManager_RegisterFrameSinkId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_RegisterFrameSinkId_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_RegisterFrameSinkId_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkManager_RegisterFrameSinkId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkManager_RegisterFrameSinkId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_RegisterFrameSinkId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_RegisterFrameSinkId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_RegisterFrameSinkId_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_RegisterFrameSinkId_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_RegisterFrameSinkId_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_RegisterFrameSinkId_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_RegisterFrameSinkId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkManager_RegisterFrameSinkId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_RegisterFrameSinkId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
  };
  function FrameSinkManager_InvalidateFrameSinkId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_InvalidateFrameSinkId_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
  };
  FrameSinkManager_InvalidateFrameSinkId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_InvalidateFrameSinkId_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_InvalidateFrameSinkId_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkManager_InvalidateFrameSinkId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkManager_InvalidateFrameSinkId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_InvalidateFrameSinkId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_InvalidateFrameSinkId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_InvalidateFrameSinkId_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_InvalidateFrameSinkId_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_InvalidateFrameSinkId_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_InvalidateFrameSinkId_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_InvalidateFrameSinkId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkManager_InvalidateFrameSinkId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_InvalidateFrameSinkId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
  };
  function FrameSinkManager_EnableSynchronizationReporting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_EnableSynchronizationReporting_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.reportingLabel = null;
  };
  FrameSinkManager_EnableSynchronizationReporting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_EnableSynchronizationReporting_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_EnableSynchronizationReporting_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.reportingLabel = generator_.generateString(false);
    return generated;
  };

  FrameSinkManager_EnableSynchronizationReporting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.reportingLabel = mutator_.mutateString(this.reportingLabel, false);
    }
    return this;
  };
  FrameSinkManager_EnableSynchronizationReporting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_EnableSynchronizationReporting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_EnableSynchronizationReporting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_EnableSynchronizationReporting_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_EnableSynchronizationReporting_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_EnableSynchronizationReporting_Params.reportingLabel
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_EnableSynchronizationReporting_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManager_EnableSynchronizationReporting_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_EnableSynchronizationReporting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.reportingLabel = decoder.decodeStruct(codec.String);
    return val;
  };

  FrameSinkManager_EnableSynchronizationReporting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_EnableSynchronizationReporting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(codec.String, val.reportingLabel);
  };
  function FrameSinkManager_SetFrameSinkDebugLabel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_SetFrameSinkDebugLabel_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.debugLabel = null;
  };
  FrameSinkManager_SetFrameSinkDebugLabel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_SetFrameSinkDebugLabel_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_SetFrameSinkDebugLabel_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.debugLabel = generator_.generateString(false);
    return generated;
  };

  FrameSinkManager_SetFrameSinkDebugLabel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.debugLabel = mutator_.mutateString(this.debugLabel, false);
    }
    return this;
  };
  FrameSinkManager_SetFrameSinkDebugLabel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_SetFrameSinkDebugLabel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_SetFrameSinkDebugLabel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_SetFrameSinkDebugLabel_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_SetFrameSinkDebugLabel_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_SetFrameSinkDebugLabel_Params.debugLabel
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_SetFrameSinkDebugLabel_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManager_SetFrameSinkDebugLabel_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_SetFrameSinkDebugLabel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.debugLabel = decoder.decodeStruct(codec.String);
    return val;
  };

  FrameSinkManager_SetFrameSinkDebugLabel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_SetFrameSinkDebugLabel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(codec.String, val.debugLabel);
  };
  function FrameSinkManager_CreateRootCompositorFrameSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_CreateRootCompositorFrameSink_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  FrameSinkManager_CreateRootCompositorFrameSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_CreateRootCompositorFrameSink_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_CreateRootCompositorFrameSink_Params;
    generated.params = generator_.generateStruct(viz.mojom.RootCompositorFrameSinkParams, false);
    return generated;
  };

  FrameSinkManager_CreateRootCompositorFrameSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(viz.mojom.RootCompositorFrameSinkParams, false);
    }
    return this;
  };
  FrameSinkManager_CreateRootCompositorFrameSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  FrameSinkManager_CreateRootCompositorFrameSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_CreateRootCompositorFrameSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  FrameSinkManager_CreateRootCompositorFrameSink_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_CreateRootCompositorFrameSink_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, RootCompositorFrameSinkParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_CreateRootCompositorFrameSink_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_CreateRootCompositorFrameSink_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_CreateRootCompositorFrameSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(RootCompositorFrameSinkParams);
    return val;
  };

  FrameSinkManager_CreateRootCompositorFrameSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_CreateRootCompositorFrameSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(RootCompositorFrameSinkParams, val.params);
  };
  function FrameSinkManager_CreateCompositorFrameSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_CreateCompositorFrameSink_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.compositorFrameSink = new bindings.InterfaceRequest();
    this.compositorFrameSinkClient = new compositor_frame_sink$.CompositorFrameSinkClientPtr();
  };
  FrameSinkManager_CreateCompositorFrameSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_CreateCompositorFrameSink_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_CreateCompositorFrameSink_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.compositorFrameSink = generator_.generateInterfaceRequest("viz.mojom.CompositorFrameSink", false);
    generated.compositorFrameSinkClient = generator_.generateInterface("viz.mojom.CompositorFrameSinkClient", false);
    return generated;
  };

  FrameSinkManager_CreateCompositorFrameSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorFrameSink = mutator_.mutateInterfaceRequest(this.compositorFrameSink, "viz.mojom.CompositorFrameSink", false);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorFrameSinkClient = mutator_.mutateInterface(this.compositorFrameSinkClient, "viz.mojom.CompositorFrameSinkClient", false);
    }
    return this;
  };
  FrameSinkManager_CreateCompositorFrameSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.compositorFrameSink !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkRequest"]);
    }
    if (this.compositorFrameSinkClient !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkClientPtr"]);
    }
    return handles;
  };

  FrameSinkManager_CreateCompositorFrameSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_CreateCompositorFrameSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.compositorFrameSink = handles[idx++];;
    this.compositorFrameSinkClient = handles[idx++];;
    return idx;
  };

  FrameSinkManager_CreateCompositorFrameSink_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_CreateCompositorFrameSink_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_CreateCompositorFrameSink_Params.compositorFrameSink
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_CreateCompositorFrameSink_Params.compositorFrameSinkClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_CreateCompositorFrameSink_Params.encodedSize = codec.kStructHeaderSize + 24;

  FrameSinkManager_CreateCompositorFrameSink_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_CreateCompositorFrameSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.compositorFrameSink = decoder.decodeStruct(codec.InterfaceRequest);
    val.compositorFrameSinkClient = decoder.decodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameSinkManager_CreateCompositorFrameSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_CreateCompositorFrameSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(codec.InterfaceRequest, val.compositorFrameSink);
    encoder.encodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr), val.compositorFrameSinkClient);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameSinkManager_DestroyCompositorFrameSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_DestroyCompositorFrameSink_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
  };
  FrameSinkManager_DestroyCompositorFrameSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_DestroyCompositorFrameSink_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_DestroyCompositorFrameSink_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkManager_DestroyCompositorFrameSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkManager_DestroyCompositorFrameSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_DestroyCompositorFrameSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_DestroyCompositorFrameSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_DestroyCompositorFrameSink_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_DestroyCompositorFrameSink_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_DestroyCompositorFrameSink_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_DestroyCompositorFrameSink_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_DestroyCompositorFrameSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkManager_DestroyCompositorFrameSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_DestroyCompositorFrameSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
  };
  function FrameSinkManager_DestroyCompositorFrameSink_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.prototype.initDefaults_ = function() {
  };
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.generate = function(generator_) {
    var generated = new FrameSinkManager_DestroyCompositorFrameSink_ResponseParams;
    return generated;
  };

  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.validate = function(messageValidator, offset) {
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

  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_DestroyCompositorFrameSink_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameSinkManager_RegisterFrameSinkHierarchy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_RegisterFrameSinkHierarchy_Params.prototype.initDefaults_ = function() {
    this.parentFrameSinkId = null;
    this.childFrameSinkId = null;
  };
  FrameSinkManager_RegisterFrameSinkHierarchy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_RegisterFrameSinkHierarchy_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_RegisterFrameSinkHierarchy_Params;
    generated.parentFrameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.childFrameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkManager_RegisterFrameSinkHierarchy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parentFrameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.childFrameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkManager_RegisterFrameSinkHierarchy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_RegisterFrameSinkHierarchy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_RegisterFrameSinkHierarchy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_RegisterFrameSinkHierarchy_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_RegisterFrameSinkHierarchy_Params.parentFrameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_RegisterFrameSinkHierarchy_Params.childFrameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_RegisterFrameSinkHierarchy_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManager_RegisterFrameSinkHierarchy_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_RegisterFrameSinkHierarchy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parentFrameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.childFrameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkManager_RegisterFrameSinkHierarchy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_RegisterFrameSinkHierarchy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.parentFrameSinkId);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.childFrameSinkId);
  };
  function FrameSinkManager_UnregisterFrameSinkHierarchy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.prototype.initDefaults_ = function() {
    this.parentFrameSinkId = null;
    this.childFrameSinkId = null;
  };
  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_UnregisterFrameSinkHierarchy_Params;
    generated.parentFrameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.childFrameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parentFrameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.childFrameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_UnregisterFrameSinkHierarchy_Params.parentFrameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_UnregisterFrameSinkHierarchy_Params.childFrameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_UnregisterFrameSinkHierarchy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parentFrameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.childFrameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkManager_UnregisterFrameSinkHierarchy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_UnregisterFrameSinkHierarchy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.parentFrameSinkId);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.childFrameSinkId);
  };
  function FrameSinkManager_AssignTemporaryReference_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_AssignTemporaryReference_Params.prototype.initDefaults_ = function() {
    this.surfaceId = null;
    this.owner = null;
  };
  FrameSinkManager_AssignTemporaryReference_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_AssignTemporaryReference_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_AssignTemporaryReference_Params;
    generated.surfaceId = generator_.generateStruct(viz.mojom.SurfaceId, false);
    generated.owner = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkManager_AssignTemporaryReference_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceId = mutator_.mutateStruct(viz.mojom.SurfaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.owner = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkManager_AssignTemporaryReference_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_AssignTemporaryReference_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_AssignTemporaryReference_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_AssignTemporaryReference_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_AssignTemporaryReference_Params.surfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_AssignTemporaryReference_Params.owner
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_AssignTemporaryReference_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManager_AssignTemporaryReference_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_AssignTemporaryReference_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceId = decoder.decodeStructPointer(surface_id$.SurfaceId);
    val.owner = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkManager_AssignTemporaryReference_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_AssignTemporaryReference_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surfaceId);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.owner);
  };
  function FrameSinkManager_DropTemporaryReference_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_DropTemporaryReference_Params.prototype.initDefaults_ = function() {
    this.surfaceId = null;
  };
  FrameSinkManager_DropTemporaryReference_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_DropTemporaryReference_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_DropTemporaryReference_Params;
    generated.surfaceId = generator_.generateStruct(viz.mojom.SurfaceId, false);
    return generated;
  };

  FrameSinkManager_DropTemporaryReference_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceId = mutator_.mutateStruct(viz.mojom.SurfaceId, false);
    }
    return this;
  };
  FrameSinkManager_DropTemporaryReference_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_DropTemporaryReference_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_DropTemporaryReference_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_DropTemporaryReference_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_DropTemporaryReference_Params.surfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_DropTemporaryReference_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_DropTemporaryReference_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_DropTemporaryReference_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceId = decoder.decodeStructPointer(surface_id$.SurfaceId);
    return val;
  };

  FrameSinkManager_DropTemporaryReference_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_DropTemporaryReference_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surfaceId);
  };
  function FrameSinkManager_AddVideoDetectorObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_AddVideoDetectorObserver_Params.prototype.initDefaults_ = function() {
    this.observer = new video_detector_observer$.VideoDetectorObserverPtr();
  };
  FrameSinkManager_AddVideoDetectorObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_AddVideoDetectorObserver_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_AddVideoDetectorObserver_Params;
    generated.observer = generator_.generateInterface("viz.mojom.VideoDetectorObserver", false);
    return generated;
  };

  FrameSinkManager_AddVideoDetectorObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "viz.mojom.VideoDetectorObserver", false);
    }
    return this;
  };
  FrameSinkManager_AddVideoDetectorObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.VideoDetectorObserverPtr"]);
    }
    return handles;
  };

  FrameSinkManager_AddVideoDetectorObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_AddVideoDetectorObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  FrameSinkManager_AddVideoDetectorObserver_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_AddVideoDetectorObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_AddVideoDetectorObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_AddVideoDetectorObserver_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_AddVideoDetectorObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(new codec.Interface(video_detector_observer$.VideoDetectorObserverPtr));
    return val;
  };

  FrameSinkManager_AddVideoDetectorObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_AddVideoDetectorObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(video_detector_observer$.VideoDetectorObserverPtr), val.observer);
  };
  function FrameSinkManager_CreateVideoCapturer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_CreateVideoCapturer_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  FrameSinkManager_CreateVideoCapturer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_CreateVideoCapturer_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_CreateVideoCapturer_Params;
    generated.request = generator_.generateInterfaceRequest("viz.mojom.FrameSinkVideoCapturer", false);
    return generated;
  };

  FrameSinkManager_CreateVideoCapturer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "viz.mojom.FrameSinkVideoCapturer", false);
    }
    return this;
  };
  FrameSinkManager_CreateVideoCapturer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.FrameSinkVideoCapturerRequest"]);
    }
    return handles;
  };

  FrameSinkManager_CreateVideoCapturer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_CreateVideoCapturer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  FrameSinkManager_CreateVideoCapturer_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_CreateVideoCapturer_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_CreateVideoCapturer_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_CreateVideoCapturer_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_CreateVideoCapturer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameSinkManager_CreateVideoCapturer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_CreateVideoCapturer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameSinkManager_EvictSurfaces_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_EvictSurfaces_Params.prototype.initDefaults_ = function() {
    this.surfaceIds = null;
  };
  FrameSinkManager_EvictSurfaces_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_EvictSurfaces_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_EvictSurfaces_Params;
    generated.surfaceIds = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.SurfaceId, false);
    });
    return generated;
  };

  FrameSinkManager_EvictSurfaces_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceIds = mutator_.mutateArray(this.surfaceIds, function(val) {
        return mutator_.mutateStruct(viz.mojom.SurfaceId, false);
      });
    }
    return this;
  };
  FrameSinkManager_EvictSurfaces_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManager_EvictSurfaces_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_EvictSurfaces_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManager_EvictSurfaces_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_EvictSurfaces_Params.surfaceIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(surface_id$.SurfaceId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_EvictSurfaces_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManager_EvictSurfaces_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_EvictSurfaces_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceIds = decoder.decodeArrayPointer(new codec.PointerTo(surface_id$.SurfaceId));
    return val;
  };

  FrameSinkManager_EvictSurfaces_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_EvictSurfaces_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(surface_id$.SurfaceId), val.surfaceIds);
  };
  function FrameSinkManager_RequestCopyOfOutput_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManager_RequestCopyOfOutput_Params.prototype.initDefaults_ = function() {
    this.surfaceId = null;
    this.request = null;
  };
  FrameSinkManager_RequestCopyOfOutput_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManager_RequestCopyOfOutput_Params.generate = function(generator_) {
    var generated = new FrameSinkManager_RequestCopyOfOutput_Params;
    generated.surfaceId = generator_.generateStruct(viz.mojom.SurfaceId, false);
    generated.request = generator_.generateStruct(viz.mojom.CopyOutputRequest, false);
    return generated;
  };

  FrameSinkManager_RequestCopyOfOutput_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceId = mutator_.mutateStruct(viz.mojom.SurfaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(viz.mojom.CopyOutputRequest, false);
    }
    return this;
  };
  FrameSinkManager_RequestCopyOfOutput_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, this.request.getHandleDeps());
    }
    return handles;
  };

  FrameSinkManager_RequestCopyOfOutput_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManager_RequestCopyOfOutput_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.request.setHandlesInternal_(handles, idx);
    return idx;
  };

  FrameSinkManager_RequestCopyOfOutput_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManager_RequestCopyOfOutput_Params.surfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManager_RequestCopyOfOutput_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, copy_output_request$.CopyOutputRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManager_RequestCopyOfOutput_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManager_RequestCopyOfOutput_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManager_RequestCopyOfOutput_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceId = decoder.decodeStructPointer(surface_id$.SurfaceId);
    val.request = decoder.decodeStructPointer(copy_output_request$.CopyOutputRequest);
    return val;
  };

  FrameSinkManager_RequestCopyOfOutput_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManager_RequestCopyOfOutput_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surfaceId);
    encoder.encodeStructPointer(copy_output_request$.CopyOutputRequest, val.request);
  };
  function FrameSinkManagerClient_OnSurfaceCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManagerClient_OnSurfaceCreated_Params.prototype.initDefaults_ = function() {
    this.surfaceId = null;
  };
  FrameSinkManagerClient_OnSurfaceCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManagerClient_OnSurfaceCreated_Params.generate = function(generator_) {
    var generated = new FrameSinkManagerClient_OnSurfaceCreated_Params;
    generated.surfaceId = generator_.generateStruct(viz.mojom.SurfaceId, false);
    return generated;
  };

  FrameSinkManagerClient_OnSurfaceCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceId = mutator_.mutateStruct(viz.mojom.SurfaceId, false);
    }
    return this;
  };
  FrameSinkManagerClient_OnSurfaceCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManagerClient_OnSurfaceCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManagerClient_OnSurfaceCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManagerClient_OnSurfaceCreated_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManagerClient_OnSurfaceCreated_Params.surfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManagerClient_OnSurfaceCreated_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManagerClient_OnSurfaceCreated_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManagerClient_OnSurfaceCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceId = decoder.decodeStructPointer(surface_id$.SurfaceId);
    return val;
  };

  FrameSinkManagerClient_OnSurfaceCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManagerClient_OnSurfaceCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surfaceId);
  };
  function FrameSinkManagerClient_OnFirstSurfaceActivation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.prototype.initDefaults_ = function() {
    this.surfaceInfo = null;
  };
  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.generate = function(generator_) {
    var generated = new FrameSinkManagerClient_OnFirstSurfaceActivation_Params;
    generated.surfaceInfo = generator_.generateStruct(viz.mojom.SurfaceInfo, false);
    return generated;
  };

  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceInfo = mutator_.mutateStruct(viz.mojom.SurfaceInfo, false);
    }
    return this;
  };
  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManagerClient_OnFirstSurfaceActivation_Params.surfaceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_info$.SurfaceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManagerClient_OnFirstSurfaceActivation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceInfo = decoder.decodeStructPointer(surface_info$.SurfaceInfo);
    return val;
  };

  FrameSinkManagerClient_OnFirstSurfaceActivation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManagerClient_OnFirstSurfaceActivation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_info$.SurfaceInfo, val.surfaceInfo);
  };
  function FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.hitTestData = null;
  };
  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.generate = function(generator_) {
    var generated = new FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.hitTestData = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.AggregatedHitTestRegion, false);
    });
    return generated;
  };

  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hitTestData = mutator_.mutateArray(this.hitTestData, function(val) {
        return mutator_.mutateStruct(viz.mojom.AggregatedHitTestRegion, false);
      });
    }
    return this;
  };
  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.hitTestData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(aggregated_hit_test_region$.AggregatedHitTestRegion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.hitTestData = decoder.decodeArrayPointer(new codec.PointerTo(aggregated_hit_test_region$.AggregatedHitTestRegion));
    return val;
  };

  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeArrayPointer(new codec.PointerTo(aggregated_hit_test_region$.AggregatedHitTestRegion), val.hitTestData);
  };
  function FrameSinkManagerClient_OnFrameTokenChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManagerClient_OnFrameTokenChanged_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.frameToken = 0;
  };
  FrameSinkManagerClient_OnFrameTokenChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManagerClient_OnFrameTokenChanged_Params.generate = function(generator_) {
    var generated = new FrameSinkManagerClient_OnFrameTokenChanged_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.frameToken = generator_.generateUint32();
    return generated;
  };

  FrameSinkManagerClient_OnFrameTokenChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameToken = mutator_.mutateUint32(this.frameToken);
    }
    return this;
  };
  FrameSinkManagerClient_OnFrameTokenChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkManagerClient_OnFrameTokenChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManagerClient_OnFrameTokenChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkManagerClient_OnFrameTokenChanged_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkManagerClient_OnFrameTokenChanged_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FrameSinkManagerClient_OnFrameTokenChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkManagerClient_OnFrameTokenChanged_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManagerClient_OnFrameTokenChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.frameToken = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameSinkManagerClient_OnFrameTokenChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManagerClient_OnFrameTokenChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(codec.Uint32, val.frameToken);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kFrameSinkManager_RegisterFrameSinkId_Name = 757378363;
  var kFrameSinkManager_InvalidateFrameSinkId_Name = 1300414562;
  var kFrameSinkManager_EnableSynchronizationReporting_Name = 16619313;
  var kFrameSinkManager_SetFrameSinkDebugLabel_Name = 1246569811;
  var kFrameSinkManager_CreateRootCompositorFrameSink_Name = 41062304;
  var kFrameSinkManager_CreateCompositorFrameSink_Name = 345992590;
  var kFrameSinkManager_DestroyCompositorFrameSink_Name = 1703206269;
  var kFrameSinkManager_RegisterFrameSinkHierarchy_Name = 1928556807;
  var kFrameSinkManager_UnregisterFrameSinkHierarchy_Name = 1521645240;
  var kFrameSinkManager_AssignTemporaryReference_Name = 1946407373;
  var kFrameSinkManager_DropTemporaryReference_Name = 323413015;
  var kFrameSinkManager_AddVideoDetectorObserver_Name = 580310205;
  var kFrameSinkManager_CreateVideoCapturer_Name = 2134994527;
  var kFrameSinkManager_EvictSurfaces_Name = 187200848;
  var kFrameSinkManager_RequestCopyOfOutput_Name = 606815420;

  function FrameSinkManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameSinkManager,
                                                   handleOrPtrInfo);
  }

  function FrameSinkManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameSinkManager, associatedInterfacePtrInfo);
  }

  FrameSinkManagerAssociatedPtr.prototype =
      Object.create(FrameSinkManagerPtr.prototype);
  FrameSinkManagerAssociatedPtr.prototype.constructor =
      FrameSinkManagerAssociatedPtr;

  function FrameSinkManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameSinkManagerPtr.prototype.registerFrameSinkId = function() {
    return FrameSinkManagerProxy.prototype.registerFrameSinkId
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.registerFrameSinkId = function(frameSinkId) {
    var params_ = new FrameSinkManager_RegisterFrameSinkId_Params();
    params_.frameSinkId = frameSinkId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_RegisterFrameSinkId_Name,
        codec.align(FrameSinkManager_RegisterFrameSinkId_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_RegisterFrameSinkId_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.invalidateFrameSinkId = function() {
    return FrameSinkManagerProxy.prototype.invalidateFrameSinkId
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.invalidateFrameSinkId = function(frameSinkId) {
    var params_ = new FrameSinkManager_InvalidateFrameSinkId_Params();
    params_.frameSinkId = frameSinkId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_InvalidateFrameSinkId_Name,
        codec.align(FrameSinkManager_InvalidateFrameSinkId_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_InvalidateFrameSinkId_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.enableSynchronizationReporting = function() {
    return FrameSinkManagerProxy.prototype.enableSynchronizationReporting
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.enableSynchronizationReporting = function(frameSinkId, reportingLabel) {
    var params_ = new FrameSinkManager_EnableSynchronizationReporting_Params();
    params_.frameSinkId = frameSinkId;
    params_.reportingLabel = reportingLabel;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_EnableSynchronizationReporting_Name,
        codec.align(FrameSinkManager_EnableSynchronizationReporting_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_EnableSynchronizationReporting_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.setFrameSinkDebugLabel = function() {
    return FrameSinkManagerProxy.prototype.setFrameSinkDebugLabel
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.setFrameSinkDebugLabel = function(frameSinkId, debugLabel) {
    var params_ = new FrameSinkManager_SetFrameSinkDebugLabel_Params();
    params_.frameSinkId = frameSinkId;
    params_.debugLabel = debugLabel;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_SetFrameSinkDebugLabel_Name,
        codec.align(FrameSinkManager_SetFrameSinkDebugLabel_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_SetFrameSinkDebugLabel_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.createRootCompositorFrameSink = function() {
    return FrameSinkManagerProxy.prototype.createRootCompositorFrameSink
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.createRootCompositorFrameSink = function(params) {
    var params_ = new FrameSinkManager_CreateRootCompositorFrameSink_Params();
    params_.params = params;
    var builder = new codec.MessageV2Builder(
        kFrameSinkManager_CreateRootCompositorFrameSink_Name,
        codec.align(FrameSinkManager_CreateRootCompositorFrameSink_Params.encodedSize));
    builder.setPayload(FrameSinkManager_CreateRootCompositorFrameSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.createCompositorFrameSink = function() {
    return FrameSinkManagerProxy.prototype.createCompositorFrameSink
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.createCompositorFrameSink = function(frameSinkId, compositorFrameSink, compositorFrameSinkClient) {
    var params_ = new FrameSinkManager_CreateCompositorFrameSink_Params();
    params_.frameSinkId = frameSinkId;
    params_.compositorFrameSink = compositorFrameSink;
    params_.compositorFrameSinkClient = compositorFrameSinkClient;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_CreateCompositorFrameSink_Name,
        codec.align(FrameSinkManager_CreateCompositorFrameSink_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_CreateCompositorFrameSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.destroyCompositorFrameSink = function() {
    return FrameSinkManagerProxy.prototype.destroyCompositorFrameSink
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.destroyCompositorFrameSink = function(frameSinkId) {
    var params_ = new FrameSinkManager_DestroyCompositorFrameSink_Params();
    params_.frameSinkId = frameSinkId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFrameSinkManager_DestroyCompositorFrameSink_Name,
          codec.align(FrameSinkManager_DestroyCompositorFrameSink_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FrameSinkManager_DestroyCompositorFrameSink_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FrameSinkManager_DestroyCompositorFrameSink_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FrameSinkManagerPtr.prototype.registerFrameSinkHierarchy = function() {
    return FrameSinkManagerProxy.prototype.registerFrameSinkHierarchy
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.registerFrameSinkHierarchy = function(parentFrameSinkId, childFrameSinkId) {
    var params_ = new FrameSinkManager_RegisterFrameSinkHierarchy_Params();
    params_.parentFrameSinkId = parentFrameSinkId;
    params_.childFrameSinkId = childFrameSinkId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_RegisterFrameSinkHierarchy_Name,
        codec.align(FrameSinkManager_RegisterFrameSinkHierarchy_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_RegisterFrameSinkHierarchy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.unregisterFrameSinkHierarchy = function() {
    return FrameSinkManagerProxy.prototype.unregisterFrameSinkHierarchy
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.unregisterFrameSinkHierarchy = function(parentFrameSinkId, childFrameSinkId) {
    var params_ = new FrameSinkManager_UnregisterFrameSinkHierarchy_Params();
    params_.parentFrameSinkId = parentFrameSinkId;
    params_.childFrameSinkId = childFrameSinkId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_UnregisterFrameSinkHierarchy_Name,
        codec.align(FrameSinkManager_UnregisterFrameSinkHierarchy_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_UnregisterFrameSinkHierarchy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.assignTemporaryReference = function() {
    return FrameSinkManagerProxy.prototype.assignTemporaryReference
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.assignTemporaryReference = function(surfaceId, owner) {
    var params_ = new FrameSinkManager_AssignTemporaryReference_Params();
    params_.surfaceId = surfaceId;
    params_.owner = owner;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_AssignTemporaryReference_Name,
        codec.align(FrameSinkManager_AssignTemporaryReference_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_AssignTemporaryReference_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.dropTemporaryReference = function() {
    return FrameSinkManagerProxy.prototype.dropTemporaryReference
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.dropTemporaryReference = function(surfaceId) {
    var params_ = new FrameSinkManager_DropTemporaryReference_Params();
    params_.surfaceId = surfaceId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_DropTemporaryReference_Name,
        codec.align(FrameSinkManager_DropTemporaryReference_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_DropTemporaryReference_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.addVideoDetectorObserver = function() {
    return FrameSinkManagerProxy.prototype.addVideoDetectorObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.addVideoDetectorObserver = function(observer) {
    var params_ = new FrameSinkManager_AddVideoDetectorObserver_Params();
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_AddVideoDetectorObserver_Name,
        codec.align(FrameSinkManager_AddVideoDetectorObserver_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_AddVideoDetectorObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.createVideoCapturer = function() {
    return FrameSinkManagerProxy.prototype.createVideoCapturer
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.createVideoCapturer = function(request) {
    var params_ = new FrameSinkManager_CreateVideoCapturer_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_CreateVideoCapturer_Name,
        codec.align(FrameSinkManager_CreateVideoCapturer_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_CreateVideoCapturer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.evictSurfaces = function() {
    return FrameSinkManagerProxy.prototype.evictSurfaces
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.evictSurfaces = function(surfaceIds) {
    var params_ = new FrameSinkManager_EvictSurfaces_Params();
    params_.surfaceIds = surfaceIds;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_EvictSurfaces_Name,
        codec.align(FrameSinkManager_EvictSurfaces_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_EvictSurfaces_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerPtr.prototype.requestCopyOfOutput = function() {
    return FrameSinkManagerProxy.prototype.requestCopyOfOutput
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerProxy.prototype.requestCopyOfOutput = function(surfaceId, request) {
    var params_ = new FrameSinkManager_RequestCopyOfOutput_Params();
    params_.surfaceId = surfaceId;
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManager_RequestCopyOfOutput_Name,
        codec.align(FrameSinkManager_RequestCopyOfOutput_Params.encodedSize));
    builder.encodeStruct(FrameSinkManager_RequestCopyOfOutput_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameSinkManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameSinkManagerStub.prototype.registerFrameSinkId = function(frameSinkId) {
    return this.delegate_ && this.delegate_.registerFrameSinkId && this.delegate_.registerFrameSinkId(frameSinkId);
  }
  FrameSinkManagerStub.prototype.invalidateFrameSinkId = function(frameSinkId) {
    return this.delegate_ && this.delegate_.invalidateFrameSinkId && this.delegate_.invalidateFrameSinkId(frameSinkId);
  }
  FrameSinkManagerStub.prototype.enableSynchronizationReporting = function(frameSinkId, reportingLabel) {
    return this.delegate_ && this.delegate_.enableSynchronizationReporting && this.delegate_.enableSynchronizationReporting(frameSinkId, reportingLabel);
  }
  FrameSinkManagerStub.prototype.setFrameSinkDebugLabel = function(frameSinkId, debugLabel) {
    return this.delegate_ && this.delegate_.setFrameSinkDebugLabel && this.delegate_.setFrameSinkDebugLabel(frameSinkId, debugLabel);
  }
  FrameSinkManagerStub.prototype.createRootCompositorFrameSink = function(params) {
    return this.delegate_ && this.delegate_.createRootCompositorFrameSink && this.delegate_.createRootCompositorFrameSink(params);
  }
  FrameSinkManagerStub.prototype.createCompositorFrameSink = function(frameSinkId, compositorFrameSink, compositorFrameSinkClient) {
    return this.delegate_ && this.delegate_.createCompositorFrameSink && this.delegate_.createCompositorFrameSink(frameSinkId, compositorFrameSink, compositorFrameSinkClient);
  }
  FrameSinkManagerStub.prototype.destroyCompositorFrameSink = function(frameSinkId) {
    return this.delegate_ && this.delegate_.destroyCompositorFrameSink && this.delegate_.destroyCompositorFrameSink(frameSinkId);
  }
  FrameSinkManagerStub.prototype.registerFrameSinkHierarchy = function(parentFrameSinkId, childFrameSinkId) {
    return this.delegate_ && this.delegate_.registerFrameSinkHierarchy && this.delegate_.registerFrameSinkHierarchy(parentFrameSinkId, childFrameSinkId);
  }
  FrameSinkManagerStub.prototype.unregisterFrameSinkHierarchy = function(parentFrameSinkId, childFrameSinkId) {
    return this.delegate_ && this.delegate_.unregisterFrameSinkHierarchy && this.delegate_.unregisterFrameSinkHierarchy(parentFrameSinkId, childFrameSinkId);
  }
  FrameSinkManagerStub.prototype.assignTemporaryReference = function(surfaceId, owner) {
    return this.delegate_ && this.delegate_.assignTemporaryReference && this.delegate_.assignTemporaryReference(surfaceId, owner);
  }
  FrameSinkManagerStub.prototype.dropTemporaryReference = function(surfaceId) {
    return this.delegate_ && this.delegate_.dropTemporaryReference && this.delegate_.dropTemporaryReference(surfaceId);
  }
  FrameSinkManagerStub.prototype.addVideoDetectorObserver = function(observer) {
    return this.delegate_ && this.delegate_.addVideoDetectorObserver && this.delegate_.addVideoDetectorObserver(observer);
  }
  FrameSinkManagerStub.prototype.createVideoCapturer = function(request) {
    return this.delegate_ && this.delegate_.createVideoCapturer && this.delegate_.createVideoCapturer(request);
  }
  FrameSinkManagerStub.prototype.evictSurfaces = function(surfaceIds) {
    return this.delegate_ && this.delegate_.evictSurfaces && this.delegate_.evictSurfaces(surfaceIds);
  }
  FrameSinkManagerStub.prototype.requestCopyOfOutput = function(surfaceId, request) {
    return this.delegate_ && this.delegate_.requestCopyOfOutput && this.delegate_.requestCopyOfOutput(surfaceId, request);
  }

  FrameSinkManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameSinkManager_RegisterFrameSinkId_Name:
      var params = reader.decodeStruct(FrameSinkManager_RegisterFrameSinkId_Params);
      this.registerFrameSinkId(params.frameSinkId);
      return true;
    case kFrameSinkManager_InvalidateFrameSinkId_Name:
      var params = reader.decodeStruct(FrameSinkManager_InvalidateFrameSinkId_Params);
      this.invalidateFrameSinkId(params.frameSinkId);
      return true;
    case kFrameSinkManager_EnableSynchronizationReporting_Name:
      var params = reader.decodeStruct(FrameSinkManager_EnableSynchronizationReporting_Params);
      this.enableSynchronizationReporting(params.frameSinkId, params.reportingLabel);
      return true;
    case kFrameSinkManager_SetFrameSinkDebugLabel_Name:
      var params = reader.decodeStruct(FrameSinkManager_SetFrameSinkDebugLabel_Params);
      this.setFrameSinkDebugLabel(params.frameSinkId, params.debugLabel);
      return true;
    case kFrameSinkManager_CreateRootCompositorFrameSink_Name:
      var params = reader.decodeStruct(FrameSinkManager_CreateRootCompositorFrameSink_Params);
      this.createRootCompositorFrameSink(params.params);
      return true;
    case kFrameSinkManager_CreateCompositorFrameSink_Name:
      var params = reader.decodeStruct(FrameSinkManager_CreateCompositorFrameSink_Params);
      this.createCompositorFrameSink(params.frameSinkId, params.compositorFrameSink, params.compositorFrameSinkClient);
      return true;
    case kFrameSinkManager_RegisterFrameSinkHierarchy_Name:
      var params = reader.decodeStruct(FrameSinkManager_RegisterFrameSinkHierarchy_Params);
      this.registerFrameSinkHierarchy(params.parentFrameSinkId, params.childFrameSinkId);
      return true;
    case kFrameSinkManager_UnregisterFrameSinkHierarchy_Name:
      var params = reader.decodeStruct(FrameSinkManager_UnregisterFrameSinkHierarchy_Params);
      this.unregisterFrameSinkHierarchy(params.parentFrameSinkId, params.childFrameSinkId);
      return true;
    case kFrameSinkManager_AssignTemporaryReference_Name:
      var params = reader.decodeStruct(FrameSinkManager_AssignTemporaryReference_Params);
      this.assignTemporaryReference(params.surfaceId, params.owner);
      return true;
    case kFrameSinkManager_DropTemporaryReference_Name:
      var params = reader.decodeStruct(FrameSinkManager_DropTemporaryReference_Params);
      this.dropTemporaryReference(params.surfaceId);
      return true;
    case kFrameSinkManager_AddVideoDetectorObserver_Name:
      var params = reader.decodeStruct(FrameSinkManager_AddVideoDetectorObserver_Params);
      this.addVideoDetectorObserver(params.observer);
      return true;
    case kFrameSinkManager_CreateVideoCapturer_Name:
      var params = reader.decodeStruct(FrameSinkManager_CreateVideoCapturer_Params);
      this.createVideoCapturer(params.request);
      return true;
    case kFrameSinkManager_EvictSurfaces_Name:
      var params = reader.decodeStruct(FrameSinkManager_EvictSurfaces_Params);
      this.evictSurfaces(params.surfaceIds);
      return true;
    case kFrameSinkManager_RequestCopyOfOutput_Name:
      var params = reader.decodeStruct(FrameSinkManager_RequestCopyOfOutput_Params);
      this.requestCopyOfOutput(params.surfaceId, params.request);
      return true;
    default:
      return false;
    }
  };

  FrameSinkManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameSinkManager_DestroyCompositorFrameSink_Name:
      var params = reader.decodeStruct(FrameSinkManager_DestroyCompositorFrameSink_Params);
      this.destroyCompositorFrameSink(params.frameSinkId).then(function(response) {
        var responseParams =
            new FrameSinkManager_DestroyCompositorFrameSink_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kFrameSinkManager_DestroyCompositorFrameSink_Name,
            codec.align(FrameSinkManager_DestroyCompositorFrameSink_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FrameSinkManager_DestroyCompositorFrameSink_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFrameSinkManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameSinkManager_RegisterFrameSinkId_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_RegisterFrameSinkId_Params;
      break;
      case kFrameSinkManager_InvalidateFrameSinkId_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_InvalidateFrameSinkId_Params;
      break;
      case kFrameSinkManager_EnableSynchronizationReporting_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_EnableSynchronizationReporting_Params;
      break;
      case kFrameSinkManager_SetFrameSinkDebugLabel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_SetFrameSinkDebugLabel_Params;
      break;
      case kFrameSinkManager_CreateRootCompositorFrameSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_CreateRootCompositorFrameSink_Params;
      break;
      case kFrameSinkManager_CreateCompositorFrameSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_CreateCompositorFrameSink_Params;
      break;
      case kFrameSinkManager_DestroyCompositorFrameSink_Name:
        if (message.expectsResponse())
          paramsClass = FrameSinkManager_DestroyCompositorFrameSink_Params;
      break;
      case kFrameSinkManager_RegisterFrameSinkHierarchy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_RegisterFrameSinkHierarchy_Params;
      break;
      case kFrameSinkManager_UnregisterFrameSinkHierarchy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_UnregisterFrameSinkHierarchy_Params;
      break;
      case kFrameSinkManager_AssignTemporaryReference_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_AssignTemporaryReference_Params;
      break;
      case kFrameSinkManager_DropTemporaryReference_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_DropTemporaryReference_Params;
      break;
      case kFrameSinkManager_AddVideoDetectorObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_AddVideoDetectorObserver_Params;
      break;
      case kFrameSinkManager_CreateVideoCapturer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_CreateVideoCapturer_Params;
      break;
      case kFrameSinkManager_EvictSurfaces_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_EvictSurfaces_Params;
      break;
      case kFrameSinkManager_RequestCopyOfOutput_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManager_RequestCopyOfOutput_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameSinkManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFrameSinkManager_DestroyCompositorFrameSink_Name:
        if (message.isResponse())
          paramsClass = FrameSinkManager_DestroyCompositorFrameSink_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FrameSinkManager = {
    name: 'viz.mojom.FrameSinkManager',
    kVersion: 0,
    ptrClass: FrameSinkManagerPtr,
    proxyClass: FrameSinkManagerProxy,
    stubClass: FrameSinkManagerStub,
    validateRequest: validateFrameSinkManagerRequest,
    validateResponse: validateFrameSinkManagerResponse,
    mojomId: 'services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom',
    fuzzMethods: {
      registerFrameSinkId: {
        params: FrameSinkManager_RegisterFrameSinkId_Params,
      },
      invalidateFrameSinkId: {
        params: FrameSinkManager_InvalidateFrameSinkId_Params,
      },
      enableSynchronizationReporting: {
        params: FrameSinkManager_EnableSynchronizationReporting_Params,
      },
      setFrameSinkDebugLabel: {
        params: FrameSinkManager_SetFrameSinkDebugLabel_Params,
      },
      createRootCompositorFrameSink: {
        params: FrameSinkManager_CreateRootCompositorFrameSink_Params,
      },
      createCompositorFrameSink: {
        params: FrameSinkManager_CreateCompositorFrameSink_Params,
      },
      destroyCompositorFrameSink: {
        params: FrameSinkManager_DestroyCompositorFrameSink_Params,
      },
      registerFrameSinkHierarchy: {
        params: FrameSinkManager_RegisterFrameSinkHierarchy_Params,
      },
      unregisterFrameSinkHierarchy: {
        params: FrameSinkManager_UnregisterFrameSinkHierarchy_Params,
      },
      assignTemporaryReference: {
        params: FrameSinkManager_AssignTemporaryReference_Params,
      },
      dropTemporaryReference: {
        params: FrameSinkManager_DropTemporaryReference_Params,
      },
      addVideoDetectorObserver: {
        params: FrameSinkManager_AddVideoDetectorObserver_Params,
      },
      createVideoCapturer: {
        params: FrameSinkManager_CreateVideoCapturer_Params,
      },
      evictSurfaces: {
        params: FrameSinkManager_EvictSurfaces_Params,
      },
      requestCopyOfOutput: {
        params: FrameSinkManager_RequestCopyOfOutput_Params,
      },
    },
  };
  FrameSinkManagerStub.prototype.validator = validateFrameSinkManagerRequest;
  FrameSinkManagerProxy.prototype.validator = validateFrameSinkManagerResponse;
  var kFrameSinkManagerClient_OnSurfaceCreated_Name = 997492612;
  var kFrameSinkManagerClient_OnFirstSurfaceActivation_Name = 896881227;
  var kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name = 2133495397;
  var kFrameSinkManagerClient_OnFrameTokenChanged_Name = 1949797652;

  function FrameSinkManagerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameSinkManagerClient,
                                                   handleOrPtrInfo);
  }

  function FrameSinkManagerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameSinkManagerClient, associatedInterfacePtrInfo);
  }

  FrameSinkManagerClientAssociatedPtr.prototype =
      Object.create(FrameSinkManagerClientPtr.prototype);
  FrameSinkManagerClientAssociatedPtr.prototype.constructor =
      FrameSinkManagerClientAssociatedPtr;

  function FrameSinkManagerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameSinkManagerClientPtr.prototype.onSurfaceCreated = function() {
    return FrameSinkManagerClientProxy.prototype.onSurfaceCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerClientProxy.prototype.onSurfaceCreated = function(surfaceId) {
    var params_ = new FrameSinkManagerClient_OnSurfaceCreated_Params();
    params_.surfaceId = surfaceId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManagerClient_OnSurfaceCreated_Name,
        codec.align(FrameSinkManagerClient_OnSurfaceCreated_Params.encodedSize));
    builder.encodeStruct(FrameSinkManagerClient_OnSurfaceCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerClientPtr.prototype.onFirstSurfaceActivation = function() {
    return FrameSinkManagerClientProxy.prototype.onFirstSurfaceActivation
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerClientProxy.prototype.onFirstSurfaceActivation = function(surfaceInfo) {
    var params_ = new FrameSinkManagerClient_OnFirstSurfaceActivation_Params();
    params_.surfaceInfo = surfaceInfo;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManagerClient_OnFirstSurfaceActivation_Name,
        codec.align(FrameSinkManagerClient_OnFirstSurfaceActivation_Params.encodedSize));
    builder.encodeStruct(FrameSinkManagerClient_OnFirstSurfaceActivation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerClientPtr.prototype.onAggregatedHitTestRegionListUpdated = function() {
    return FrameSinkManagerClientProxy.prototype.onAggregatedHitTestRegionListUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerClientProxy.prototype.onAggregatedHitTestRegionListUpdated = function(frameSinkId, hitTestData) {
    var params_ = new FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params();
    params_.frameSinkId = frameSinkId;
    params_.hitTestData = hitTestData;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name,
        codec.align(FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params.encodedSize));
    builder.encodeStruct(FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkManagerClientPtr.prototype.onFrameTokenChanged = function() {
    return FrameSinkManagerClientProxy.prototype.onFrameTokenChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkManagerClientProxy.prototype.onFrameTokenChanged = function(frameSinkId, frameToken) {
    var params_ = new FrameSinkManagerClient_OnFrameTokenChanged_Params();
    params_.frameSinkId = frameSinkId;
    params_.frameToken = frameToken;
    var builder = new codec.MessageV0Builder(
        kFrameSinkManagerClient_OnFrameTokenChanged_Name,
        codec.align(FrameSinkManagerClient_OnFrameTokenChanged_Params.encodedSize));
    builder.encodeStruct(FrameSinkManagerClient_OnFrameTokenChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameSinkManagerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameSinkManagerClientStub.prototype.onSurfaceCreated = function(surfaceId) {
    return this.delegate_ && this.delegate_.onSurfaceCreated && this.delegate_.onSurfaceCreated(surfaceId);
  }
  FrameSinkManagerClientStub.prototype.onFirstSurfaceActivation = function(surfaceInfo) {
    return this.delegate_ && this.delegate_.onFirstSurfaceActivation && this.delegate_.onFirstSurfaceActivation(surfaceInfo);
  }
  FrameSinkManagerClientStub.prototype.onAggregatedHitTestRegionListUpdated = function(frameSinkId, hitTestData) {
    return this.delegate_ && this.delegate_.onAggregatedHitTestRegionListUpdated && this.delegate_.onAggregatedHitTestRegionListUpdated(frameSinkId, hitTestData);
  }
  FrameSinkManagerClientStub.prototype.onFrameTokenChanged = function(frameSinkId, frameToken) {
    return this.delegate_ && this.delegate_.onFrameTokenChanged && this.delegate_.onFrameTokenChanged(frameSinkId, frameToken);
  }

  FrameSinkManagerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameSinkManagerClient_OnSurfaceCreated_Name:
      var params = reader.decodeStruct(FrameSinkManagerClient_OnSurfaceCreated_Params);
      this.onSurfaceCreated(params.surfaceId);
      return true;
    case kFrameSinkManagerClient_OnFirstSurfaceActivation_Name:
      var params = reader.decodeStruct(FrameSinkManagerClient_OnFirstSurfaceActivation_Params);
      this.onFirstSurfaceActivation(params.surfaceInfo);
      return true;
    case kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name:
      var params = reader.decodeStruct(FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params);
      this.onAggregatedHitTestRegionListUpdated(params.frameSinkId, params.hitTestData);
      return true;
    case kFrameSinkManagerClient_OnFrameTokenChanged_Name:
      var params = reader.decodeStruct(FrameSinkManagerClient_OnFrameTokenChanged_Params);
      this.onFrameTokenChanged(params.frameSinkId, params.frameToken);
      return true;
    default:
      return false;
    }
  };

  FrameSinkManagerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameSinkManagerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameSinkManagerClient_OnSurfaceCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManagerClient_OnSurfaceCreated_Params;
      break;
      case kFrameSinkManagerClient_OnFirstSurfaceActivation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManagerClient_OnFirstSurfaceActivation_Params;
      break;
      case kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params;
      break;
      case kFrameSinkManagerClient_OnFrameTokenChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkManagerClient_OnFrameTokenChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameSinkManagerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameSinkManagerClient = {
    name: 'viz.mojom.FrameSinkManagerClient',
    kVersion: 0,
    ptrClass: FrameSinkManagerClientPtr,
    proxyClass: FrameSinkManagerClientProxy,
    stubClass: FrameSinkManagerClientStub,
    validateRequest: validateFrameSinkManagerClientRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom',
    fuzzMethods: {
      onSurfaceCreated: {
        params: FrameSinkManagerClient_OnSurfaceCreated_Params,
      },
      onFirstSurfaceActivation: {
        params: FrameSinkManagerClient_OnFirstSurfaceActivation_Params,
      },
      onAggregatedHitTestRegionListUpdated: {
        params: FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params,
      },
      onFrameTokenChanged: {
        params: FrameSinkManagerClient_OnFrameTokenChanged_Params,
      },
    },
  };
  FrameSinkManagerClientStub.prototype.validator = validateFrameSinkManagerClientRequest;
  FrameSinkManagerClientProxy.prototype.validator = null;
  exports.RootCompositorFrameSinkParams = RootCompositorFrameSinkParams;
  exports.FrameSinkManager = FrameSinkManager;
  exports.FrameSinkManagerPtr = FrameSinkManagerPtr;
  exports.FrameSinkManagerAssociatedPtr = FrameSinkManagerAssociatedPtr;
  exports.FrameSinkManagerClient = FrameSinkManagerClient;
  exports.FrameSinkManagerClientPtr = FrameSinkManagerClientPtr;
  exports.FrameSinkManagerClientAssociatedPtr = FrameSinkManagerClientAssociatedPtr;
})();