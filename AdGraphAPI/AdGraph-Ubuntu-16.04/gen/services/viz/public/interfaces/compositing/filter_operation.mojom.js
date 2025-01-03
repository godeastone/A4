// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/filter_operation.mojom';
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
  var paint_filter$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/paint_filter.mojom', 'paint_filter.mojom.js');
  }
  var blur_image_filter_tile_mode$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/blur_image_filter_tile_mode.mojom', '../../../../../skia/public/interfaces/blur_image_filter_tile_mode.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var FilterType = {};
  FilterType.GRAYSCALE = 0;
  FilterType.SEPIA = FilterType.GRAYSCALE + 1;
  FilterType.SATURATE = FilterType.SEPIA + 1;
  FilterType.HUE_ROTATE = FilterType.SATURATE + 1;
  FilterType.INVERT = FilterType.HUE_ROTATE + 1;
  FilterType.BRIGHTNESS = FilterType.INVERT + 1;
  FilterType.CONTRAST = FilterType.BRIGHTNESS + 1;
  FilterType.OPACITY = FilterType.CONTRAST + 1;
  FilterType.BLUR = FilterType.OPACITY + 1;
  FilterType.DROP_SHADOW = FilterType.BLUR + 1;
  FilterType.COLOR_MATRIX = FilterType.DROP_SHADOW + 1;
  FilterType.ZOOM = FilterType.COLOR_MATRIX + 1;
  FilterType.REFERENCE = FilterType.ZOOM + 1;
  FilterType.SATURATING_BRIGHTNESS = FilterType.REFERENCE + 1;
  FilterType.ALPHA_THRESHOLD = FilterType.SATURATING_BRIGHTNESS + 1;
  FilterType.FILTER_TYPE_LAST = FilterType.ALPHA_THRESHOLD;

  FilterType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      return true;
    }
    return false;
  };

  FilterType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FilterOperation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilterOperation.prototype.initDefaults_ = function() {
    this.type = 0;
    this.amount = 0;
    this.outerThreshold = 0;
    this.dropShadowColor = 0;
    this.dropShadowOffset = null;
    this.imageFilter = null;
    this.matrix = null;
    this.zoomInset = 0;
    this.blurTileMode = 0;
    this.shape = null;
  };
  FilterOperation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FilterOperation.generate = function(generator_) {
    var generated = new FilterOperation;
    generated.type = generator_.generateEnum(0, 14);
    generated.amount = generator_.generateFloat();
    generated.outerThreshold = generator_.generateFloat();
    generated.dropShadowOffset = generator_.generateStruct(gfx.mojom.Point, false);
    generated.dropShadowColor = generator_.generateUint32();
    generated.imageFilter = generator_.generateStruct(viz.mojom.PaintFilter, false);
    generated.matrix = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.zoomInset = generator_.generateInt32();
    generated.blurTileMode = generator_.generateEnum(0, 2);
    generated.shape = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.Rect, false);
    });
    return generated;
  };

  FilterOperation.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 14);
    }
    if (mutator_.chooseMutateField()) {
      this.amount = mutator_.mutateFloat(this.amount);
    }
    if (mutator_.chooseMutateField()) {
      this.outerThreshold = mutator_.mutateFloat(this.outerThreshold);
    }
    if (mutator_.chooseMutateField()) {
      this.dropShadowOffset = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dropShadowColor = mutator_.mutateUint32(this.dropShadowColor);
    }
    if (mutator_.chooseMutateField()) {
      this.imageFilter = mutator_.mutateStruct(viz.mojom.PaintFilter, false);
    }
    if (mutator_.chooseMutateField()) {
      this.matrix = mutator_.mutateArray(this.matrix, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.zoomInset = mutator_.mutateInt32(this.zoomInset);
    }
    if (mutator_.chooseMutateField()) {
      this.blurTileMode = mutator_.mutateEnum(this.blurTileMode, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.shape = mutator_.mutateArray(this.shape, function(val) {
        return mutator_.mutateStruct(gfx.mojom.Rect, false);
      });
    }
    return this;
  };
  FilterOperation.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FilterOperation.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FilterOperation.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FilterOperation.validate = function(messageValidator, offset) {
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


    // validate FilterOperation.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, FilterType);
    if (err !== validator.validationError.NONE)
        return err;




    // validate FilterOperation.dropShadowOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate FilterOperation.imageFilter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, paint_filter$.PaintFilter, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FilterOperation.matrix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 4, codec.Float, true, [20], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate FilterOperation.blurTileMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 44, blur_image_filter_tile_mode$.BlurTileMode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FilterOperation.shape
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(geometry$.Rect), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FilterOperation.encodedSize = codec.kStructHeaderSize + 56;

  FilterOperation.decode = function(decoder) {
    var packed;
    var val = new FilterOperation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.amount = decoder.decodeStruct(codec.Float);
    val.outerThreshold = decoder.decodeStruct(codec.Float);
    val.dropShadowColor = decoder.decodeStruct(codec.Uint32);
    val.dropShadowOffset = decoder.decodeStructPointer(geometry$.Point);
    val.imageFilter = decoder.decodeStructPointer(paint_filter$.PaintFilter);
    val.matrix = decoder.decodeArrayPointer(codec.Float);
    val.zoomInset = decoder.decodeStruct(codec.Int32);
    val.blurTileMode = decoder.decodeStruct(codec.Int32);
    val.shape = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Rect));
    return val;
  };

  FilterOperation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilterOperation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Float, val.amount);
    encoder.encodeStruct(codec.Float, val.outerThreshold);
    encoder.encodeStruct(codec.Uint32, val.dropShadowColor);
    encoder.encodeStructPointer(geometry$.Point, val.dropShadowOffset);
    encoder.encodeStructPointer(paint_filter$.PaintFilter, val.imageFilter);
    encoder.encodeArrayPointer(codec.Float, val.matrix);
    encoder.encodeStruct(codec.Int32, val.zoomInset);
    encoder.encodeStruct(codec.Int32, val.blurTileMode);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Rect), val.shape);
  };
  exports.FilterType = FilterType;
  exports.FilterOperation = FilterOperation;
})();