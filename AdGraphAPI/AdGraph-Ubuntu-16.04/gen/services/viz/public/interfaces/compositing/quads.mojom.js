// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/quads.mojom';
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
  var surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_id.mojom', 'surface_id.mojom.js');
  }
  var shared_quad_state$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/shared_quad_state.mojom', 'shared_quad_state.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/color_space.mojom', '../../../../../ui/gfx/mojo/color_space.mojom.js');
  }
  var transform$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/transform.mojom', '../../../../../ui/gfx/mojo/transform.mojom.js');
  }



  function DebugBorderQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DebugBorderQuadState.prototype.initDefaults_ = function() {
    this.color = 0;
    this.width = 0;
  };
  DebugBorderQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DebugBorderQuadState.generate = function(generator_) {
    var generated = new DebugBorderQuadState;
    generated.color = generator_.generateUint32();
    generated.width = generator_.generateInt32();
    return generated;
  };

  DebugBorderQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.color = mutator_.mutateUint32(this.color);
    }
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateInt32(this.width);
    }
    return this;
  };
  DebugBorderQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DebugBorderQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DebugBorderQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DebugBorderQuadState.validate = function(messageValidator, offset) {
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

  DebugBorderQuadState.encodedSize = codec.kStructHeaderSize + 8;

  DebugBorderQuadState.decode = function(decoder) {
    var packed;
    var val = new DebugBorderQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.color = decoder.decodeStruct(codec.Uint32);
    val.width = decoder.decodeStruct(codec.Int32);
    return val;
  };

  DebugBorderQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DebugBorderQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.color);
    encoder.encodeStruct(codec.Int32, val.width);
  };
  function RenderPassQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderPassQuadState.prototype.initDefaults_ = function() {
    this.renderPassId = 0;
    this.maskResourceId = 0;
    this.forceAntiAliasingOff = false;
    this.maskUvRect = null;
    this.maskTextureSize = null;
    this.filtersScale = null;
    this.filtersOrigin = null;
    this.texCoordRect = null;
  };
  RenderPassQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderPassQuadState.generate = function(generator_) {
    var generated = new RenderPassQuadState;
    generated.renderPassId = generator_.generateUint64();
    generated.maskResourceId = generator_.generateUint32();
    generated.maskUvRect = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.maskTextureSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.filtersScale = generator_.generateStruct(gfx.mojom.Vector2dF, false);
    generated.filtersOrigin = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.texCoordRect = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.forceAntiAliasingOff = generator_.generateBool();
    return generated;
  };

  RenderPassQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.renderPassId = mutator_.mutateUint64(this.renderPassId);
    }
    if (mutator_.chooseMutateField()) {
      this.maskResourceId = mutator_.mutateUint32(this.maskResourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.maskUvRect = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maskTextureSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.filtersScale = mutator_.mutateStruct(gfx.mojom.Vector2dF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.filtersOrigin = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.texCoordRect = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.forceAntiAliasingOff = mutator_.mutateBool(this.forceAntiAliasingOff);
    }
    return this;
  };
  RenderPassQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderPassQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderPassQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderPassQuadState.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate RenderPassQuadState.maskUvRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPassQuadState.maskTextureSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPassQuadState.filtersScale
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.Vector2dF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPassQuadState.filtersOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPassQuadState.texCoordRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  RenderPassQuadState.encodedSize = codec.kStructHeaderSize + 56;

  RenderPassQuadState.decode = function(decoder) {
    var packed;
    var val = new RenderPassQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderPassId = decoder.decodeStruct(codec.Uint64);
    val.maskResourceId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.forceAntiAliasingOff = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maskUvRect = decoder.decodeStructPointer(geometry$.RectF);
    val.maskTextureSize = decoder.decodeStructPointer(geometry$.Size);
    val.filtersScale = decoder.decodeStructPointer(geometry$.Vector2dF);
    val.filtersOrigin = decoder.decodeStructPointer(geometry$.PointF);
    val.texCoordRect = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  RenderPassQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderPassQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.renderPassId);
    encoder.encodeStruct(codec.Uint32, val.maskResourceId);
    packed = 0;
    packed |= (val.forceAntiAliasingOff & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.RectF, val.maskUvRect);
    encoder.encodeStructPointer(geometry$.Size, val.maskTextureSize);
    encoder.encodeStructPointer(geometry$.Vector2dF, val.filtersScale);
    encoder.encodeStructPointer(geometry$.PointF, val.filtersOrigin);
    encoder.encodeStructPointer(geometry$.RectF, val.texCoordRect);
  };
  function SolidColorQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SolidColorQuadState.prototype.initDefaults_ = function() {
    this.color = 0;
    this.forceAntiAliasingOff = false;
  };
  SolidColorQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SolidColorQuadState.generate = function(generator_) {
    var generated = new SolidColorQuadState;
    generated.color = generator_.generateUint32();
    generated.forceAntiAliasingOff = generator_.generateBool();
    return generated;
  };

  SolidColorQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.color = mutator_.mutateUint32(this.color);
    }
    if (mutator_.chooseMutateField()) {
      this.forceAntiAliasingOff = mutator_.mutateBool(this.forceAntiAliasingOff);
    }
    return this;
  };
  SolidColorQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SolidColorQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SolidColorQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SolidColorQuadState.validate = function(messageValidator, offset) {
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

  SolidColorQuadState.encodedSize = codec.kStructHeaderSize + 8;

  SolidColorQuadState.decode = function(decoder) {
    var packed;
    var val = new SolidColorQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.color = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.forceAntiAliasingOff = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SolidColorQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SolidColorQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.color);
    packed = 0;
    packed |= (val.forceAntiAliasingOff & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function StreamVideoQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamVideoQuadState.prototype.initDefaults_ = function() {
    this.resourceId = 0;
    this.resourceSizeInPixels = null;
    this.matrix = null;
  };
  StreamVideoQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamVideoQuadState.generate = function(generator_) {
    var generated = new StreamVideoQuadState;
    generated.resourceId = generator_.generateUint32();
    generated.resourceSizeInPixels = generator_.generateStruct(gfx.mojom.Size, false);
    generated.matrix = generator_.generateStruct(gfx.mojom.Transform, false);
    return generated;
  };

  StreamVideoQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.resourceId = mutator_.mutateUint32(this.resourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceSizeInPixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.matrix = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    return this;
  };
  StreamVideoQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  StreamVideoQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamVideoQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  StreamVideoQuadState.validate = function(messageValidator, offset) {
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



    // validate StreamVideoQuadState.resourceSizeInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamVideoQuadState.matrix
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamVideoQuadState.encodedSize = codec.kStructHeaderSize + 24;

  StreamVideoQuadState.decode = function(decoder) {
    var packed;
    var val = new StreamVideoQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resourceId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.resourceSizeInPixels = decoder.decodeStructPointer(geometry$.Size);
    val.matrix = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  StreamVideoQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamVideoQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.resourceId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.resourceSizeInPixels);
    encoder.encodeStructPointer(transform$.Transform, val.matrix);
  };
  function SurfaceQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SurfaceQuadState.prototype.initDefaults_ = function() {
    this.primarySurfaceId = null;
    this.fallbackSurfaceId = null;
    this.defaultBackgroundColor = 0;
    this.stretchContentToFillBounds = false;
  };
  SurfaceQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SurfaceQuadState.generate = function(generator_) {
    var generated = new SurfaceQuadState;
    generated.primarySurfaceId = generator_.generateStruct(viz.mojom.SurfaceId, false);
    generated.fallbackSurfaceId = generator_.generateStruct(viz.mojom.SurfaceId, true);
    generated.defaultBackgroundColor = generator_.generateUint32();
    generated.stretchContentToFillBounds = generator_.generateBool();
    return generated;
  };

  SurfaceQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.primarySurfaceId = mutator_.mutateStruct(viz.mojom.SurfaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fallbackSurfaceId = mutator_.mutateStruct(viz.mojom.SurfaceId, true);
    }
    if (mutator_.chooseMutateField()) {
      this.defaultBackgroundColor = mutator_.mutateUint32(this.defaultBackgroundColor);
    }
    if (mutator_.chooseMutateField()) {
      this.stretchContentToFillBounds = mutator_.mutateBool(this.stretchContentToFillBounds);
    }
    return this;
  };
  SurfaceQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SurfaceQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SurfaceQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SurfaceQuadState.validate = function(messageValidator, offset) {
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


    // validate SurfaceQuadState.primarySurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SurfaceQuadState.fallbackSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, surface_id$.SurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SurfaceQuadState.encodedSize = codec.kStructHeaderSize + 24;

  SurfaceQuadState.decode = function(decoder) {
    var packed;
    var val = new SurfaceQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.primarySurfaceId = decoder.decodeStructPointer(surface_id$.SurfaceId);
    val.fallbackSurfaceId = decoder.decodeStructPointer(surface_id$.SurfaceId);
    val.defaultBackgroundColor = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.stretchContentToFillBounds = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SurfaceQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SurfaceQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.primarySurfaceId);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.fallbackSurfaceId);
    encoder.encodeStruct(codec.Uint32, val.defaultBackgroundColor);
    packed = 0;
    packed |= (val.stretchContentToFillBounds & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function TextureQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextureQuadState.prototype.initDefaults_ = function() {
    this.resourceId = 0;
    this.premultipliedAlpha = false;
    this.yFlipped = false;
    this.nearestNeighbor = false;
    this.secureOutputOnly = false;
    this.resourceSizeInPixels = null;
    this.uvTopLeft = null;
    this.uvBottomRight = null;
    this.backgroundColor = 0;
    this.vertexOpacity = null;
  };
  TextureQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextureQuadState.generate = function(generator_) {
    var generated = new TextureQuadState;
    generated.resourceId = generator_.generateUint32();
    generated.resourceSizeInPixels = generator_.generateStruct(gfx.mojom.Size, false);
    generated.premultipliedAlpha = generator_.generateBool();
    generated.uvTopLeft = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.uvBottomRight = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.backgroundColor = generator_.generateUint32();
    generated.vertexOpacity = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.yFlipped = generator_.generateBool();
    generated.nearestNeighbor = generator_.generateBool();
    generated.secureOutputOnly = generator_.generateBool();
    return generated;
  };

  TextureQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.resourceId = mutator_.mutateUint32(this.resourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceSizeInPixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.premultipliedAlpha = mutator_.mutateBool(this.premultipliedAlpha);
    }
    if (mutator_.chooseMutateField()) {
      this.uvTopLeft = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uvBottomRight = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.backgroundColor = mutator_.mutateUint32(this.backgroundColor);
    }
    if (mutator_.chooseMutateField()) {
      this.vertexOpacity = mutator_.mutateArray(this.vertexOpacity, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.yFlipped = mutator_.mutateBool(this.yFlipped);
    }
    if (mutator_.chooseMutateField()) {
      this.nearestNeighbor = mutator_.mutateBool(this.nearestNeighbor);
    }
    if (mutator_.chooseMutateField()) {
      this.secureOutputOnly = mutator_.mutateBool(this.secureOutputOnly);
    }
    return this;
  };
  TextureQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextureQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextureQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextureQuadState.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate TextureQuadState.resourceSizeInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate TextureQuadState.uvTopLeft
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextureQuadState.uvBottomRight
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate TextureQuadState.vertexOpacity
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, codec.Float, false, [4], 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  TextureQuadState.encodedSize = codec.kStructHeaderSize + 48;

  TextureQuadState.decode = function(decoder) {
    var packed;
    var val = new TextureQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resourceId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.premultipliedAlpha = (packed >> 0) & 1 ? true : false;
    val.yFlipped = (packed >> 1) & 1 ? true : false;
    val.nearestNeighbor = (packed >> 2) & 1 ? true : false;
    val.secureOutputOnly = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.resourceSizeInPixels = decoder.decodeStructPointer(geometry$.Size);
    val.uvTopLeft = decoder.decodeStructPointer(geometry$.PointF);
    val.uvBottomRight = decoder.decodeStructPointer(geometry$.PointF);
    val.backgroundColor = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.vertexOpacity = decoder.decodeArrayPointer(codec.Float);
    return val;
  };

  TextureQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextureQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.resourceId);
    packed = 0;
    packed |= (val.premultipliedAlpha & 1) << 0
    packed |= (val.yFlipped & 1) << 1
    packed |= (val.nearestNeighbor & 1) << 2
    packed |= (val.secureOutputOnly & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.resourceSizeInPixels);
    encoder.encodeStructPointer(geometry$.PointF, val.uvTopLeft);
    encoder.encodeStructPointer(geometry$.PointF, val.uvBottomRight);
    encoder.encodeStruct(codec.Uint32, val.backgroundColor);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Float, val.vertexOpacity);
  };
  function TileQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TileQuadState.prototype.initDefaults_ = function() {
    this.texCoordRect = null;
    this.textureSize = null;
    this.swizzleContents = false;
    this.isPremultiplied = false;
    this.nearestNeighbor = false;
    this.forceAntiAliasingOff = false;
    this.resourceId = 0;
  };
  TileQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TileQuadState.generate = function(generator_) {
    var generated = new TileQuadState;
    generated.texCoordRect = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.textureSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.swizzleContents = generator_.generateBool();
    generated.isPremultiplied = generator_.generateBool();
    generated.resourceId = generator_.generateUint32();
    generated.nearestNeighbor = generator_.generateBool();
    generated.forceAntiAliasingOff = generator_.generateBool();
    return generated;
  };

  TileQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.texCoordRect = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.textureSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.swizzleContents = mutator_.mutateBool(this.swizzleContents);
    }
    if (mutator_.chooseMutateField()) {
      this.isPremultiplied = mutator_.mutateBool(this.isPremultiplied);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceId = mutator_.mutateUint32(this.resourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.nearestNeighbor = mutator_.mutateBool(this.nearestNeighbor);
    }
    if (mutator_.chooseMutateField()) {
      this.forceAntiAliasingOff = mutator_.mutateBool(this.forceAntiAliasingOff);
    }
    return this;
  };
  TileQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TileQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TileQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TileQuadState.validate = function(messageValidator, offset) {
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


    // validate TileQuadState.texCoordRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TileQuadState.textureSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;






    return validator.validationError.NONE;
  };

  TileQuadState.encodedSize = codec.kStructHeaderSize + 24;

  TileQuadState.decode = function(decoder) {
    var packed;
    var val = new TileQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.texCoordRect = decoder.decodeStructPointer(geometry$.RectF);
    val.textureSize = decoder.decodeStructPointer(geometry$.Size);
    packed = decoder.readUint8();
    val.swizzleContents = (packed >> 0) & 1 ? true : false;
    val.isPremultiplied = (packed >> 1) & 1 ? true : false;
    val.nearestNeighbor = (packed >> 2) & 1 ? true : false;
    val.forceAntiAliasingOff = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.resourceId = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  TileQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TileQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.RectF, val.texCoordRect);
    encoder.encodeStructPointer(geometry$.Size, val.textureSize);
    packed = 0;
    packed |= (val.swizzleContents & 1) << 0
    packed |= (val.isPremultiplied & 1) << 1
    packed |= (val.nearestNeighbor & 1) << 2
    packed |= (val.forceAntiAliasingOff & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.resourceId);
  };
  function YUVVideoQuadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  YUVVideoQuadState.prototype.initDefaults_ = function() {
    this.yaTexCoordRect = null;
    this.uvTexCoordRect = null;
    this.yaTexSize = null;
    this.uvTexSize = null;
    this.yPlaneResourceId = 0;
    this.uPlaneResourceId = 0;
    this.vPlaneResourceId = 0;
    this.aPlaneResourceId = 0;
    this.resourceOffset = 0;
    this.resourceMultiplier = 0;
    this.bitsPerChannel = 0;
    this.requireOverlay = false;
    this.isProtectedVideo = false;
    this.videoColorSpace = null;
  };
  YUVVideoQuadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  YUVVideoQuadState.generate = function(generator_) {
    var generated = new YUVVideoQuadState;
    generated.yaTexCoordRect = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.uvTexCoordRect = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.yaTexSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.uvTexSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.yPlaneResourceId = generator_.generateUint32();
    generated.uPlaneResourceId = generator_.generateUint32();
    generated.vPlaneResourceId = generator_.generateUint32();
    generated.aPlaneResourceId = generator_.generateUint32();
    generated.resourceOffset = generator_.generateFloat();
    generated.resourceMultiplier = generator_.generateFloat();
    generated.bitsPerChannel = generator_.generateUint32();
    generated.videoColorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, false);
    generated.requireOverlay = generator_.generateBool();
    generated.isProtectedVideo = generator_.generateBool();
    return generated;
  };

  YUVVideoQuadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.yaTexCoordRect = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uvTexCoordRect = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.yaTexSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uvTexSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.yPlaneResourceId = mutator_.mutateUint32(this.yPlaneResourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.uPlaneResourceId = mutator_.mutateUint32(this.uPlaneResourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.vPlaneResourceId = mutator_.mutateUint32(this.vPlaneResourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.aPlaneResourceId = mutator_.mutateUint32(this.aPlaneResourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceOffset = mutator_.mutateFloat(this.resourceOffset);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceMultiplier = mutator_.mutateFloat(this.resourceMultiplier);
    }
    if (mutator_.chooseMutateField()) {
      this.bitsPerChannel = mutator_.mutateUint32(this.bitsPerChannel);
    }
    if (mutator_.chooseMutateField()) {
      this.videoColorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requireOverlay = mutator_.mutateBool(this.requireOverlay);
    }
    if (mutator_.chooseMutateField()) {
      this.isProtectedVideo = mutator_.mutateBool(this.isProtectedVideo);
    }
    return this;
  };
  YUVVideoQuadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  YUVVideoQuadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  YUVVideoQuadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  YUVVideoQuadState.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 80}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate YUVVideoQuadState.yaTexCoordRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate YUVVideoQuadState.uvTexCoordRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate YUVVideoQuadState.yaTexSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate YUVVideoQuadState.uvTexSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;









    // validate YUVVideoQuadState.videoColorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 64, color_space$.ColorSpace, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  YUVVideoQuadState.encodedSize = codec.kStructHeaderSize + 72;

  YUVVideoQuadState.decode = function(decoder) {
    var packed;
    var val = new YUVVideoQuadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.yaTexCoordRect = decoder.decodeStructPointer(geometry$.RectF);
    val.uvTexCoordRect = decoder.decodeStructPointer(geometry$.RectF);
    val.yaTexSize = decoder.decodeStructPointer(geometry$.Size);
    val.uvTexSize = decoder.decodeStructPointer(geometry$.Size);
    val.yPlaneResourceId = decoder.decodeStruct(codec.Uint32);
    val.uPlaneResourceId = decoder.decodeStruct(codec.Uint32);
    val.vPlaneResourceId = decoder.decodeStruct(codec.Uint32);
    val.aPlaneResourceId = decoder.decodeStruct(codec.Uint32);
    val.resourceOffset = decoder.decodeStruct(codec.Float);
    val.resourceMultiplier = decoder.decodeStruct(codec.Float);
    val.bitsPerChannel = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.requireOverlay = (packed >> 0) & 1 ? true : false;
    val.isProtectedVideo = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.videoColorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    return val;
  };

  YUVVideoQuadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(YUVVideoQuadState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.RectF, val.yaTexCoordRect);
    encoder.encodeStructPointer(geometry$.RectF, val.uvTexCoordRect);
    encoder.encodeStructPointer(geometry$.Size, val.yaTexSize);
    encoder.encodeStructPointer(geometry$.Size, val.uvTexSize);
    encoder.encodeStruct(codec.Uint32, val.yPlaneResourceId);
    encoder.encodeStruct(codec.Uint32, val.uPlaneResourceId);
    encoder.encodeStruct(codec.Uint32, val.vPlaneResourceId);
    encoder.encodeStruct(codec.Uint32, val.aPlaneResourceId);
    encoder.encodeStruct(codec.Float, val.resourceOffset);
    encoder.encodeStruct(codec.Float, val.resourceMultiplier);
    encoder.encodeStruct(codec.Uint32, val.bitsPerChannel);
    packed = 0;
    packed |= (val.requireOverlay & 1) << 0
    packed |= (val.isProtectedVideo & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.videoColorSpace);
  };
  function DrawQuad(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DrawQuad.prototype.initDefaults_ = function() {
    this.rect = null;
    this.visibleRect = null;
    this.needsBlending = false;
    this.sqs = null;
    this.drawQuadState = null;
  };
  DrawQuad.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DrawQuad.generate = function(generator_) {
    var generated = new DrawQuad;
    generated.rect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.visibleRect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.needsBlending = generator_.generateBool();
    generated.sqs = generator_.generateStruct(viz.mojom.SharedQuadState, true);
    generated.drawQuadState = generator_.generateUnion(viz.mojom.DrawQuadState, false);
    return generated;
  };

  DrawQuad.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.visibleRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.needsBlending = mutator_.mutateBool(this.needsBlending);
    }
    if (mutator_.chooseMutateField()) {
      this.sqs = mutator_.mutateStruct(viz.mojom.SharedQuadState, true);
    }
    if (mutator_.chooseMutateField()) {
      this.drawQuadState = mutator_.mutateUnion(viz.mojom.DrawQuadState, false);
    }
    return this;
  };
  DrawQuad.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DrawQuad.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DrawQuad.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DrawQuad.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DrawQuad.rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DrawQuad.visibleRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate DrawQuad.sqs
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, shared_quad_state$.SharedQuadState, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DrawQuad.drawQuadState
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 32, DrawQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DrawQuad.encodedSize = codec.kStructHeaderSize + 48;

  DrawQuad.decode = function(decoder) {
    var packed;
    var val = new DrawQuad();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rect = decoder.decodeStructPointer(geometry$.Rect);
    val.visibleRect = decoder.decodeStructPointer(geometry$.Rect);
    packed = decoder.readUint8();
    val.needsBlending = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sqs = decoder.decodeStructPointer(shared_quad_state$.SharedQuadState);
    val.drawQuadState = decoder.decodeStruct(DrawQuadState);
    return val;
  };

  DrawQuad.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DrawQuad.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.rect);
    encoder.encodeStructPointer(geometry$.Rect, val.visibleRect);
    packed = 0;
    packed |= (val.needsBlending & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(shared_quad_state$.SharedQuadState, val.sqs);
    encoder.encodeStruct(DrawQuadState, val.drawQuadState);
  };

  function DrawQuadState(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  DrawQuadState.Tags = {
    debugBorderQuadState: 0,
    renderPassQuadState: 1,
    solidColorQuadState: 2,
    streamVideoQuadState: 3,
    surfaceQuadState: 4,
    textureQuadState: 5,
    tileQuadState: 6,
    yuvVideoQuadState: 7,
  };

  DrawQuadState.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  DrawQuadState.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "debugBorderQuadState",
        "renderPassQuadState",
        "solidColorQuadState",
        "streamVideoQuadState",
        "surfaceQuadState",
        "textureQuadState",
        "tileQuadState",
        "yuvVideoQuadState",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a DrawQuadState member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  DrawQuadState.generate = function(generator_) {
    var generated = new DrawQuadState;
    var generators = [
      {
        field: "debugBorderQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.DebugBorderQuadState, false); },
      },
      {
        field: "renderPassQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.RenderPassQuadState, false); },
      },
      {
        field: "solidColorQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.SolidColorQuadState, false); },
      },
      {
        field: "streamVideoQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.StreamVideoQuadState, false); },
      },
      {
        field: "surfaceQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.SurfaceQuadState, false); },
      },
      {
        field: "textureQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.TextureQuadState, false); },
      },
      {
        field: "tileQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.TileQuadState, false); },
      },
      {
        field: "yuvVideoQuadState",

        generator: function() { return generator_.generateStruct(viz.mojom.YUVVideoQuadState, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  DrawQuadState.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "debugBorderQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.DebugBorderQuadState, false); },
      },
      {
        field: "renderPassQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.RenderPassQuadState, false); },
      },
      {
        field: "solidColorQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.SolidColorQuadState, false); },
      },
      {
        field: "streamVideoQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.StreamVideoQuadState, false); },
      },
      {
        field: "surfaceQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.SurfaceQuadState, false); },
      },
      {
        field: "textureQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.TextureQuadState, false); },
      },
      {
        field: "tileQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.TileQuadState, false); },
      },
      {
        field: "yuvVideoQuadState",

        mutator: function() { return mutator_.mutateStruct(viz.mojom.YUVVideoQuadState, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  DrawQuadState.prototype.getHandleDeps = function() {
    return [];
  }
  DrawQuadState.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(DrawQuadState.prototype, "debugBorderQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.debugBorderQuadState) {
        throw new ReferenceError(
            "DrawQuadState.debugBorderQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.debugBorderQuadState;
      this.$data = value;
    }
  });
  Object.defineProperty(DrawQuadState.prototype, "renderPassQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.renderPassQuadState) {
        throw new ReferenceError(
            "DrawQuadState.renderPassQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.renderPassQuadState;
      this.$data = value;
    }
  });
  Object.defineProperty(DrawQuadState.prototype, "solidColorQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.solidColorQuadState) {
        throw new ReferenceError(
            "DrawQuadState.solidColorQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.solidColorQuadState;
      this.$data = value;
    }
  });
  Object.defineProperty(DrawQuadState.prototype, "streamVideoQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.streamVideoQuadState) {
        throw new ReferenceError(
            "DrawQuadState.streamVideoQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.streamVideoQuadState;
      this.$data = value;
    }
  });
  Object.defineProperty(DrawQuadState.prototype, "surfaceQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.surfaceQuadState) {
        throw new ReferenceError(
            "DrawQuadState.surfaceQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.surfaceQuadState;
      this.$data = value;
    }
  });
  Object.defineProperty(DrawQuadState.prototype, "textureQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.textureQuadState) {
        throw new ReferenceError(
            "DrawQuadState.textureQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.textureQuadState;
      this.$data = value;
    }
  });
  Object.defineProperty(DrawQuadState.prototype, "tileQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.tileQuadState) {
        throw new ReferenceError(
            "DrawQuadState.tileQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.tileQuadState;
      this.$data = value;
    }
  });
  Object.defineProperty(DrawQuadState.prototype, "yuvVideoQuadState", {
    get: function() {
      if (this.$tag != DrawQuadState.Tags.yuvVideoQuadState) {
        throw new ReferenceError(
            "DrawQuadState.yuvVideoQuadState is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DrawQuadState.Tags.yuvVideoQuadState;
      this.$data = value;
    }
  });


    DrawQuadState.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case DrawQuadState.Tags.debugBorderQuadState:
          encoder.encodeStructPointer(DebugBorderQuadState, val.debugBorderQuadState);
          break;
        case DrawQuadState.Tags.renderPassQuadState:
          encoder.encodeStructPointer(RenderPassQuadState, val.renderPassQuadState);
          break;
        case DrawQuadState.Tags.solidColorQuadState:
          encoder.encodeStructPointer(SolidColorQuadState, val.solidColorQuadState);
          break;
        case DrawQuadState.Tags.streamVideoQuadState:
          encoder.encodeStructPointer(StreamVideoQuadState, val.streamVideoQuadState);
          break;
        case DrawQuadState.Tags.surfaceQuadState:
          encoder.encodeStructPointer(SurfaceQuadState, val.surfaceQuadState);
          break;
        case DrawQuadState.Tags.textureQuadState:
          encoder.encodeStructPointer(TextureQuadState, val.textureQuadState);
          break;
        case DrawQuadState.Tags.tileQuadState:
          encoder.encodeStructPointer(TileQuadState, val.tileQuadState);
          break;
        case DrawQuadState.Tags.yuvVideoQuadState:
          encoder.encodeStructPointer(YUVVideoQuadState, val.yuvVideoQuadState);
          break;
      }
      encoder.align();
    };


    DrawQuadState.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new DrawQuadState();
      var tag = decoder.readUint32();
      switch (tag) {
        case DrawQuadState.Tags.debugBorderQuadState:
          result.debugBorderQuadState = decoder.decodeStructPointer(DebugBorderQuadState);
          break;
        case DrawQuadState.Tags.renderPassQuadState:
          result.renderPassQuadState = decoder.decodeStructPointer(RenderPassQuadState);
          break;
        case DrawQuadState.Tags.solidColorQuadState:
          result.solidColorQuadState = decoder.decodeStructPointer(SolidColorQuadState);
          break;
        case DrawQuadState.Tags.streamVideoQuadState:
          result.streamVideoQuadState = decoder.decodeStructPointer(StreamVideoQuadState);
          break;
        case DrawQuadState.Tags.surfaceQuadState:
          result.surfaceQuadState = decoder.decodeStructPointer(SurfaceQuadState);
          break;
        case DrawQuadState.Tags.textureQuadState:
          result.textureQuadState = decoder.decodeStructPointer(TextureQuadState);
          break;
        case DrawQuadState.Tags.tileQuadState:
          result.tileQuadState = decoder.decodeStructPointer(TileQuadState);
          break;
        case DrawQuadState.Tags.yuvVideoQuadState:
          result.yuvVideoQuadState = decoder.decodeStructPointer(YUVVideoQuadState);
          break;
      }
      decoder.align();

      return result;
    };


    DrawQuadState.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case DrawQuadState.Tags.debugBorderQuadState:
          

    // validate DrawQuadState.debugBorderQuadState
    err = messageValidator.validateStructPointer(data_offset, DebugBorderQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DrawQuadState.Tags.renderPassQuadState:
          

    // validate DrawQuadState.renderPassQuadState
    err = messageValidator.validateStructPointer(data_offset, RenderPassQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DrawQuadState.Tags.solidColorQuadState:
          

    // validate DrawQuadState.solidColorQuadState
    err = messageValidator.validateStructPointer(data_offset, SolidColorQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DrawQuadState.Tags.streamVideoQuadState:
          

    // validate DrawQuadState.streamVideoQuadState
    err = messageValidator.validateStructPointer(data_offset, StreamVideoQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DrawQuadState.Tags.surfaceQuadState:
          

    // validate DrawQuadState.surfaceQuadState
    err = messageValidator.validateStructPointer(data_offset, SurfaceQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DrawQuadState.Tags.textureQuadState:
          

    // validate DrawQuadState.textureQuadState
    err = messageValidator.validateStructPointer(data_offset, TextureQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DrawQuadState.Tags.tileQuadState:
          

    // validate DrawQuadState.tileQuadState
    err = messageValidator.validateStructPointer(data_offset, TileQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DrawQuadState.Tags.yuvVideoQuadState:
          

    // validate DrawQuadState.yuvVideoQuadState
    err = messageValidator.validateStructPointer(data_offset, YUVVideoQuadState, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  DrawQuadState.encodedSize = 16;
  exports.DebugBorderQuadState = DebugBorderQuadState;
  exports.RenderPassQuadState = RenderPassQuadState;
  exports.SolidColorQuadState = SolidColorQuadState;
  exports.StreamVideoQuadState = StreamVideoQuadState;
  exports.SurfaceQuadState = SurfaceQuadState;
  exports.TextureQuadState = TextureQuadState;
  exports.TileQuadState = TileQuadState;
  exports.YUVVideoQuadState = YUVVideoQuadState;
  exports.DrawQuad = DrawQuad;
  exports.DrawQuadState = DrawQuadState;
})();