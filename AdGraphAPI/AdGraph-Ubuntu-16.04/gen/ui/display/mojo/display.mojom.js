// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/display/mojo/display.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('display.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../gfx/geometry/mojo/geometry.mojom.js');
  }


  var Rotation = {};
  Rotation.VALUE_0 = 0;
  Rotation.VALUE_90 = Rotation.VALUE_0 + 1;
  Rotation.VALUE_180 = Rotation.VALUE_90 + 1;
  Rotation.VALUE_270 = Rotation.VALUE_180 + 1;

  Rotation.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  Rotation.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TouchSupport = {};
  TouchSupport.UNKNOWN = 0;
  TouchSupport.AVAILABLE = TouchSupport.UNKNOWN + 1;
  TouchSupport.UNAVAILABLE = TouchSupport.AVAILABLE + 1;

  TouchSupport.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  TouchSupport.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AccelerometerSupport = {};
  AccelerometerSupport.UNKNOWN = 0;
  AccelerometerSupport.AVAILABLE = AccelerometerSupport.UNKNOWN + 1;
  AccelerometerSupport.UNAVAILABLE = AccelerometerSupport.AVAILABLE + 1;

  AccelerometerSupport.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  AccelerometerSupport.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function Display(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Display.prototype.initDefaults_ = function() {
    this.id = 0;
    this.bounds = null;
    this.sizeInPixels = null;
    this.workArea = null;
    this.deviceScaleFactor = 0;
    this.rotation = 0;
    this.touchSupport = 0;
    this.accelerometerSupport = 0;
    this.maximumCursorSize = null;
    this.colorDepth = 0;
    this.depthPerComponent = 0;
    this.isMonochrome = false;
  };
  Display.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Display.generate = function(generator_) {
    var generated = new Display;
    generated.id = generator_.generateInt64();
    generated.bounds = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.sizeInPixels = generator_.generateStruct(gfx.mojom.Size, false);
    generated.workArea = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.deviceScaleFactor = generator_.generateFloat();
    generated.rotation = generator_.generateEnum(0, 3);
    generated.touchSupport = generator_.generateEnum(0, 2);
    generated.accelerometerSupport = generator_.generateEnum(0, 2);
    generated.maximumCursorSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.colorDepth = generator_.generateInt32();
    generated.depthPerComponent = generator_.generateInt32();
    generated.isMonochrome = generator_.generateBool();
    return generated;
  };

  Display.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sizeInPixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.workArea = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceScaleFactor = mutator_.mutateFloat(this.deviceScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.rotation = mutator_.mutateEnum(this.rotation, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.touchSupport = mutator_.mutateEnum(this.touchSupport, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.accelerometerSupport = mutator_.mutateEnum(this.accelerometerSupport, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.maximumCursorSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.colorDepth = mutator_.mutateInt32(this.colorDepth);
    }
    if (mutator_.chooseMutateField()) {
      this.depthPerComponent = mutator_.mutateInt32(this.depthPerComponent);
    }
    if (mutator_.chooseMutateField()) {
      this.isMonochrome = mutator_.mutateBool(this.isMonochrome);
    }
    return this;
  };
  Display.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Display.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Display.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Display.validate = function(messageValidator, offset) {
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



    // validate Display.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Display.sizeInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Display.workArea
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Display.rotation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 36, Rotation);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Display.touchSupport
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 40, TouchSupport);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Display.accelerometerSupport
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 44, AccelerometerSupport);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Display.maximumCursorSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  Display.encodedSize = codec.kStructHeaderSize + 72;

  Display.decode = function(decoder) {
    var packed;
    var val = new Display();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.bounds = decoder.decodeStructPointer(geometry$.Rect);
    val.sizeInPixels = decoder.decodeStructPointer(geometry$.Size);
    val.workArea = decoder.decodeStructPointer(geometry$.Rect);
    val.deviceScaleFactor = decoder.decodeStruct(codec.Float);
    val.rotation = decoder.decodeStruct(codec.Int32);
    val.touchSupport = decoder.decodeStruct(codec.Int32);
    val.accelerometerSupport = decoder.decodeStruct(codec.Int32);
    val.maximumCursorSize = decoder.decodeStructPointer(geometry$.Size);
    val.colorDepth = decoder.decodeStruct(codec.Int32);
    val.depthPerComponent = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isMonochrome = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Display.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Display.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeStructPointer(geometry$.Rect, val.bounds);
    encoder.encodeStructPointer(geometry$.Size, val.sizeInPixels);
    encoder.encodeStructPointer(geometry$.Rect, val.workArea);
    encoder.encodeStruct(codec.Float, val.deviceScaleFactor);
    encoder.encodeStruct(codec.Int32, val.rotation);
    encoder.encodeStruct(codec.Int32, val.touchSupport);
    encoder.encodeStruct(codec.Int32, val.accelerometerSupport);
    encoder.encodeStructPointer(geometry$.Size, val.maximumCursorSize);
    encoder.encodeStruct(codec.Int32, val.colorDepth);
    encoder.encodeStruct(codec.Int32, val.depthPerComponent);
    packed = 0;
    packed |= (val.isMonochrome & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.Rotation = Rotation;
  exports.TouchSupport = TouchSupport;
  exports.AccelerometerSupport = AccelerometerSupport;
  exports.Display = Display;
})();