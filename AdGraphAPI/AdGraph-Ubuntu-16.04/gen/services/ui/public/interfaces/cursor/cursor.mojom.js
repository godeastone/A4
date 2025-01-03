// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/cursor/cursor.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../../../skia/public/interfaces/bitmap.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var CursorType = {};
  CursorType.kNull = 0;
  CursorType.kPointer = CursorType.kNull + 1;
  CursorType.kCross = CursorType.kPointer + 1;
  CursorType.kHand = CursorType.kCross + 1;
  CursorType.kIBeam = CursorType.kHand + 1;
  CursorType.kWait = CursorType.kIBeam + 1;
  CursorType.kHelp = CursorType.kWait + 1;
  CursorType.kEastResize = CursorType.kHelp + 1;
  CursorType.kNorthResize = CursorType.kEastResize + 1;
  CursorType.kNorthEastResize = CursorType.kNorthResize + 1;
  CursorType.kNorthWestResize = CursorType.kNorthEastResize + 1;
  CursorType.kSouthResize = CursorType.kNorthWestResize + 1;
  CursorType.kSouthEastResize = CursorType.kSouthResize + 1;
  CursorType.kSouthWestResize = CursorType.kSouthEastResize + 1;
  CursorType.kWestResize = CursorType.kSouthWestResize + 1;
  CursorType.kNorthSouthResize = CursorType.kWestResize + 1;
  CursorType.kEastWestResize = CursorType.kNorthSouthResize + 1;
  CursorType.kNorthEastSouthWestResize = CursorType.kEastWestResize + 1;
  CursorType.kNorthWestSouthEastResize = CursorType.kNorthEastSouthWestResize + 1;
  CursorType.kColumnResize = CursorType.kNorthWestSouthEastResize + 1;
  CursorType.kRowResize = CursorType.kColumnResize + 1;
  CursorType.kMiddlePanning = CursorType.kRowResize + 1;
  CursorType.kEastPanning = CursorType.kMiddlePanning + 1;
  CursorType.kNorthPanning = CursorType.kEastPanning + 1;
  CursorType.kNorthEastPanning = CursorType.kNorthPanning + 1;
  CursorType.kNorthWestPanning = CursorType.kNorthEastPanning + 1;
  CursorType.kSouthPanning = CursorType.kNorthWestPanning + 1;
  CursorType.kSouthEastPanning = CursorType.kSouthPanning + 1;
  CursorType.kSouthWestPanning = CursorType.kSouthEastPanning + 1;
  CursorType.kWestPanning = CursorType.kSouthWestPanning + 1;
  CursorType.kMove = CursorType.kWestPanning + 1;
  CursorType.kVerticalText = CursorType.kMove + 1;
  CursorType.kCell = CursorType.kVerticalText + 1;
  CursorType.kContextMenu = CursorType.kCell + 1;
  CursorType.kAlias = CursorType.kContextMenu + 1;
  CursorType.kProgress = CursorType.kAlias + 1;
  CursorType.kNoDrop = CursorType.kProgress + 1;
  CursorType.kCopy = CursorType.kNoDrop + 1;
  CursorType.kNone = CursorType.kCopy + 1;
  CursorType.kNotAllowed = CursorType.kNone + 1;
  CursorType.kZoomIn = CursorType.kNotAllowed + 1;
  CursorType.kZoomOut = CursorType.kZoomIn + 1;
  CursorType.kGrab = CursorType.kZoomOut + 1;
  CursorType.kGrabbing = CursorType.kGrab + 1;
  CursorType.kCustom = CursorType.kGrabbing + 1;

  CursorType.isKnownEnumValue = function(value) {
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
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
      return true;
    }
    return false;
  };

  CursorType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CursorSize = {};
  CursorSize.kNormal = 0;
  CursorSize.kLarge = CursorSize.kNormal + 1;

  CursorSize.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  CursorSize.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CursorData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CursorData.prototype.initDefaults_ = function() {
    this.cursorType = 0;
    this.scaleFactor = 0;
    this.frameDelay = null;
    this.hotspotInPixels = null;
    this.cursorFrames = null;
  };
  CursorData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CursorData.generate = function(generator_) {
    var generated = new CursorData;
    generated.cursorType = generator_.generateEnum(0, 44);
    generated.frameDelay = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.hotspotInPixels = generator_.generateStruct(gfx.mojom.Point, false);
    generated.cursorFrames = generator_.generateArray(function() {
      return generator_.generateStruct(skia.mojom.Bitmap, true);
    });
    generated.scaleFactor = generator_.generateFloat();
    return generated;
  };

  CursorData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cursorType = mutator_.mutateEnum(this.cursorType, 0, 44);
    }
    if (mutator_.chooseMutateField()) {
      this.frameDelay = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hotspotInPixels = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cursorFrames = mutator_.mutateArray(this.cursorFrames, function(val) {
        return mutator_.mutateStruct(skia.mojom.Bitmap, true);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.scaleFactor = mutator_.mutateFloat(this.scaleFactor);
    }
    return this;
  };
  CursorData.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cursorFrames !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.cursorFrames.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  CursorData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CursorData.prototype.setHandlesInternal_ = function(handles, idx) {
    this.cursorFrames.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  CursorData.validate = function(messageValidator, offset) {
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


    // validate CursorData.cursorType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CursorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CursorData.frameDelay
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CursorData.hotspotInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CursorData.cursorFrames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.NullablePointerTo(bitmap$.Bitmap), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CursorData.encodedSize = codec.kStructHeaderSize + 32;

  CursorData.decode = function(decoder) {
    var packed;
    var val = new CursorData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cursorType = decoder.decodeStruct(codec.Int32);
    val.scaleFactor = decoder.decodeStruct(codec.Float);
    val.frameDelay = decoder.decodeStructPointer(time$.TimeDelta);
    val.hotspotInPixels = decoder.decodeStructPointer(geometry$.Point);
    val.cursorFrames = decoder.decodeArrayPointer(new codec.NullablePointerTo(bitmap$.Bitmap));
    return val;
  };

  CursorData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CursorData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.cursorType);
    encoder.encodeStruct(codec.Float, val.scaleFactor);
    encoder.encodeStructPointer(time$.TimeDelta, val.frameDelay);
    encoder.encodeStructPointer(geometry$.Point, val.hotspotInPixels);
    encoder.encodeArrayPointer(new codec.NullablePointerTo(bitmap$.Bitmap), val.cursorFrames);
  };
  exports.CursorType = CursorType;
  exports.CursorSize = CursorSize;
  exports.CursorData = CursorData;
})();