// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom';
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
  var begin_frame_args$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/begin_frame_args.mojom', 'begin_frame_args.mojom.js');
  }
  var frame_deadline$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/frame_deadline.mojom', 'frame_deadline.mojom.js');
  }
  var selection$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/selection.mojom', 'selection.mojom.js');
  }
  var surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_id.mojom', 'surface_id.mojom.js');
  }
  var latency_info$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/latency/mojo/latency_info.mojom', '../../../../../ui/latency/mojo/latency_info.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function CompositorFrameMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CompositorFrameMetadata.prototype.initDefaults_ = function() {
    this.deviceScaleFactor = 0;
    this.pageScaleFactor = 0;
    this.rootScrollOffset = null;
    this.scrollableViewportSize = null;
    this.rootLayerSize = null;
    this.minPageScaleFactor = 0;
    this.maxPageScaleFactor = 0;
    this.rootOverflowYHidden = false;
    this.mayContainVideo = false;
    this.isResourcelessSoftwareDrawWithScrollOrAnimation = false;
    this.topControlsHeight = 0;
    this.topControlsShownRatio = 0;
    this.bottomControlsHeight = 0;
    this.bottomControlsShownRatio = 0;
    this.rootBackgroundColor = 0;
    this.selection = null;
    this.latencyInfo = null;
    this.referencedSurfaces = null;
    this.deadline = null;
    this.activationDependencies = null;
    this.contentSourceId = 0;
    this.frameToken = 0;
    this.beginFrameAck = null;
    this.presentationToken = 0;
  };
  CompositorFrameMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CompositorFrameMetadata.generate = function(generator_) {
    var generated = new CompositorFrameMetadata;
    generated.deviceScaleFactor = generator_.generateFloat();
    generated.rootScrollOffset = generator_.generateStruct(gfx.mojom.Vector2dF, false);
    generated.pageScaleFactor = generator_.generateFloat();
    generated.scrollableViewportSize = generator_.generateStruct(gfx.mojom.SizeF, false);
    generated.rootLayerSize = generator_.generateStruct(gfx.mojom.SizeF, false);
    generated.minPageScaleFactor = generator_.generateFloat();
    generated.maxPageScaleFactor = generator_.generateFloat();
    generated.rootOverflowYHidden = generator_.generateBool();
    generated.mayContainVideo = generator_.generateBool();
    generated.isResourcelessSoftwareDrawWithScrollOrAnimation = generator_.generateBool();
    generated.topControlsHeight = generator_.generateFloat();
    generated.topControlsShownRatio = generator_.generateFloat();
    generated.bottomControlsHeight = generator_.generateFloat();
    generated.bottomControlsShownRatio = generator_.generateFloat();
    generated.rootBackgroundColor = generator_.generateUint32();
    generated.selection = generator_.generateStruct(viz.mojom.Selection, false);
    generated.latencyInfo = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.LatencyInfo, false);
    });
    generated.referencedSurfaces = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.SurfaceId, false);
    });
    generated.deadline = generator_.generateStruct(viz.mojom.FrameDeadline, false);
    generated.activationDependencies = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.SurfaceId, false);
    });
    generated.contentSourceId = generator_.generateUint32();
    generated.beginFrameAck = generator_.generateStruct(viz.mojom.BeginFrameAck, false);
    generated.frameToken = generator_.generateUint32();
    generated.presentationToken = generator_.generateUint32();
    return generated;
  };

  CompositorFrameMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceScaleFactor = mutator_.mutateFloat(this.deviceScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.rootScrollOffset = mutator_.mutateStruct(gfx.mojom.Vector2dF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pageScaleFactor = mutator_.mutateFloat(this.pageScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollableViewportSize = mutator_.mutateStruct(gfx.mojom.SizeF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rootLayerSize = mutator_.mutateStruct(gfx.mojom.SizeF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.minPageScaleFactor = mutator_.mutateFloat(this.minPageScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.maxPageScaleFactor = mutator_.mutateFloat(this.maxPageScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.rootOverflowYHidden = mutator_.mutateBool(this.rootOverflowYHidden);
    }
    if (mutator_.chooseMutateField()) {
      this.mayContainVideo = mutator_.mutateBool(this.mayContainVideo);
    }
    if (mutator_.chooseMutateField()) {
      this.isResourcelessSoftwareDrawWithScrollOrAnimation = mutator_.mutateBool(this.isResourcelessSoftwareDrawWithScrollOrAnimation);
    }
    if (mutator_.chooseMutateField()) {
      this.topControlsHeight = mutator_.mutateFloat(this.topControlsHeight);
    }
    if (mutator_.chooseMutateField()) {
      this.topControlsShownRatio = mutator_.mutateFloat(this.topControlsShownRatio);
    }
    if (mutator_.chooseMutateField()) {
      this.bottomControlsHeight = mutator_.mutateFloat(this.bottomControlsHeight);
    }
    if (mutator_.chooseMutateField()) {
      this.bottomControlsShownRatio = mutator_.mutateFloat(this.bottomControlsShownRatio);
    }
    if (mutator_.chooseMutateField()) {
      this.rootBackgroundColor = mutator_.mutateUint32(this.rootBackgroundColor);
    }
    if (mutator_.chooseMutateField()) {
      this.selection = mutator_.mutateStruct(viz.mojom.Selection, false);
    }
    if (mutator_.chooseMutateField()) {
      this.latencyInfo = mutator_.mutateArray(this.latencyInfo, function(val) {
        return mutator_.mutateStruct(ui.mojom.LatencyInfo, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.referencedSurfaces = mutator_.mutateArray(this.referencedSurfaces, function(val) {
        return mutator_.mutateStruct(viz.mojom.SurfaceId, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.deadline = mutator_.mutateStruct(viz.mojom.FrameDeadline, false);
    }
    if (mutator_.chooseMutateField()) {
      this.activationDependencies = mutator_.mutateArray(this.activationDependencies, function(val) {
        return mutator_.mutateStruct(viz.mojom.SurfaceId, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.contentSourceId = mutator_.mutateUint32(this.contentSourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.beginFrameAck = mutator_.mutateStruct(viz.mojom.BeginFrameAck, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameToken = mutator_.mutateUint32(this.frameToken);
    }
    if (mutator_.chooseMutateField()) {
      this.presentationToken = mutator_.mutateUint32(this.presentationToken);
    }
    return this;
  };
  CompositorFrameMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CompositorFrameMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CompositorFrameMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CompositorFrameMetadata.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 136}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CompositorFrameMetadata.rootScrollOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Vector2dF, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CompositorFrameMetadata.scrollableViewportSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.SizeF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CompositorFrameMetadata.rootLayerSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.SizeF, false);
    if (err !== validator.validationError.NONE)
        return err;












    // validate CompositorFrameMetadata.selection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 64, selection$.Selection, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CompositorFrameMetadata.latencyInfo
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 72, 8, new codec.PointerTo(latency_info$.LatencyInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CompositorFrameMetadata.referencedSurfaces
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 80, 8, new codec.PointerTo(surface_id$.SurfaceId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CompositorFrameMetadata.deadline
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 88, frame_deadline$.FrameDeadline, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CompositorFrameMetadata.activationDependencies
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 96, 8, new codec.PointerTo(surface_id$.SurfaceId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CompositorFrameMetadata.beginFrameAck
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 112, begin_frame_args$.BeginFrameAck, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  CompositorFrameMetadata.encodedSize = codec.kStructHeaderSize + 128;

  CompositorFrameMetadata.decode = function(decoder) {
    var packed;
    var val = new CompositorFrameMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceScaleFactor = decoder.decodeStruct(codec.Float);
    val.pageScaleFactor = decoder.decodeStruct(codec.Float);
    val.rootScrollOffset = decoder.decodeStructPointer(geometry$.Vector2dF);
    val.scrollableViewportSize = decoder.decodeStructPointer(geometry$.SizeF);
    val.rootLayerSize = decoder.decodeStructPointer(geometry$.SizeF);
    val.minPageScaleFactor = decoder.decodeStruct(codec.Float);
    val.maxPageScaleFactor = decoder.decodeStruct(codec.Float);
    packed = decoder.readUint8();
    val.rootOverflowYHidden = (packed >> 0) & 1 ? true : false;
    val.mayContainVideo = (packed >> 1) & 1 ? true : false;
    val.isResourcelessSoftwareDrawWithScrollOrAnimation = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.topControlsHeight = decoder.decodeStruct(codec.Float);
    val.topControlsShownRatio = decoder.decodeStruct(codec.Float);
    val.bottomControlsHeight = decoder.decodeStruct(codec.Float);
    val.bottomControlsShownRatio = decoder.decodeStruct(codec.Float);
    val.rootBackgroundColor = decoder.decodeStruct(codec.Uint32);
    val.selection = decoder.decodeStructPointer(selection$.Selection);
    val.latencyInfo = decoder.decodeArrayPointer(new codec.PointerTo(latency_info$.LatencyInfo));
    val.referencedSurfaces = decoder.decodeArrayPointer(new codec.PointerTo(surface_id$.SurfaceId));
    val.deadline = decoder.decodeStructPointer(frame_deadline$.FrameDeadline);
    val.activationDependencies = decoder.decodeArrayPointer(new codec.PointerTo(surface_id$.SurfaceId));
    val.contentSourceId = decoder.decodeStruct(codec.Uint32);
    val.frameToken = decoder.decodeStruct(codec.Uint32);
    val.beginFrameAck = decoder.decodeStructPointer(begin_frame_args$.BeginFrameAck);
    val.presentationToken = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CompositorFrameMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CompositorFrameMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.deviceScaleFactor);
    encoder.encodeStruct(codec.Float, val.pageScaleFactor);
    encoder.encodeStructPointer(geometry$.Vector2dF, val.rootScrollOffset);
    encoder.encodeStructPointer(geometry$.SizeF, val.scrollableViewportSize);
    encoder.encodeStructPointer(geometry$.SizeF, val.rootLayerSize);
    encoder.encodeStruct(codec.Float, val.minPageScaleFactor);
    encoder.encodeStruct(codec.Float, val.maxPageScaleFactor);
    packed = 0;
    packed |= (val.rootOverflowYHidden & 1) << 0
    packed |= (val.mayContainVideo & 1) << 1
    packed |= (val.isResourcelessSoftwareDrawWithScrollOrAnimation & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Float, val.topControlsHeight);
    encoder.encodeStruct(codec.Float, val.topControlsShownRatio);
    encoder.encodeStruct(codec.Float, val.bottomControlsHeight);
    encoder.encodeStruct(codec.Float, val.bottomControlsShownRatio);
    encoder.encodeStruct(codec.Uint32, val.rootBackgroundColor);
    encoder.encodeStructPointer(selection$.Selection, val.selection);
    encoder.encodeArrayPointer(new codec.PointerTo(latency_info$.LatencyInfo), val.latencyInfo);
    encoder.encodeArrayPointer(new codec.PointerTo(surface_id$.SurfaceId), val.referencedSurfaces);
    encoder.encodeStructPointer(frame_deadline$.FrameDeadline, val.deadline);
    encoder.encodeArrayPointer(new codec.PointerTo(surface_id$.SurfaceId), val.activationDependencies);
    encoder.encodeStruct(codec.Uint32, val.contentSourceId);
    encoder.encodeStruct(codec.Uint32, val.frameToken);
    encoder.encodeStructPointer(begin_frame_args$.BeginFrameAck, val.beginFrameAck);
    encoder.encodeStruct(codec.Uint32, val.presentationToken);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.CompositorFrameMetadata = CompositorFrameMetadata;
})();