// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/events/mojo/event.mojom';
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
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var event_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event_constants.mojom', 'event_constants.mojom.js');
  }
  var keyboard_codes$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/keyboard_codes.mojom', 'keyboard_codes.mojom.js');
  }
  var latency_info$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/latency/mojo/latency_info.mojom', '../../latency/mojo/latency_info.mojom.js');
  }



  function KeyData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyData.prototype.initDefaults_ = function() {
    this.keyCode = 0;
    this.isChar = false;
    this.character = 0;
    this.windowsKeyCode = 0;
    this.nativeKeyCode = 0;
    this.text = 0;
    this.unmodifiedText = 0;
    this.properties = null;
  };
  KeyData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyData.generate = function(generator_) {
    var generated = new KeyData;
    generated.keyCode = generator_.generateInt32();
    generated.isChar = generator_.generateBool();
    generated.character = generator_.generateUint16();
    generated.windowsKeyCode = generator_.generateEnum(0, 254);
    generated.nativeKeyCode = generator_.generateInt32();
    generated.text = generator_.generateUint16();
    generated.unmodifiedText = generator_.generateUint16();
    generated.properties = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateUint8();
        });
      });
    return generated;
  };

  KeyData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyCode = mutator_.mutateInt32(this.keyCode);
    }
    if (mutator_.chooseMutateField()) {
      this.isChar = mutator_.mutateBool(this.isChar);
    }
    if (mutator_.chooseMutateField()) {
      this.character = mutator_.mutateUint16(this.character);
    }
    if (mutator_.chooseMutateField()) {
      this.windowsKeyCode = mutator_.mutateEnum(this.windowsKeyCode, 0, 254);
    }
    if (mutator_.chooseMutateField()) {
      this.nativeKeyCode = mutator_.mutateInt32(this.nativeKeyCode);
    }
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateUint16(this.text);
    }
    if (mutator_.chooseMutateField()) {
      this.unmodifiedText = mutator_.mutateUint16(this.unmodifiedText);
    }
    if (mutator_.chooseMutateField()) {
      this.properties = mutator_.mutateMap(this.properties,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateArray(val, function(val) {
            return mutator_.mutateUint8(val);
          });
        });
    }
    return this;
  };
  KeyData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyData.validate = function(messageValidator, offset) {
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





    // validate KeyData.windowsKeyCode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, keyboard_codes$.KeyboardCode);
    if (err !== validator.validationError.NONE)
        return err;





    // validate KeyData.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 24, true, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyData.encodedSize = codec.kStructHeaderSize + 32;

  KeyData.decode = function(decoder) {
    var packed;
    var val = new KeyData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyCode = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isChar = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    val.character = decoder.decodeStruct(codec.Uint16);
    val.windowsKeyCode = decoder.decodeStruct(codec.Int32);
    val.nativeKeyCode = decoder.decodeStruct(codec.Int32);
    val.text = decoder.decodeStruct(codec.Uint16);
    val.unmodifiedText = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  KeyData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.keyCode);
    packed = 0;
    packed |= (val.isChar & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.character);
    encoder.encodeStruct(codec.Int32, val.windowsKeyCode);
    encoder.encodeStruct(codec.Int32, val.nativeKeyCode);
    encoder.encodeStruct(codec.Uint16, val.text);
    encoder.encodeStruct(codec.Uint16, val.unmodifiedText);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
  };
  function LocationData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LocationData.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.screenX = 0;
    this.screenY = 0;
  };
  LocationData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LocationData.generate = function(generator_) {
    var generated = new LocationData;
    generated.x = generator_.generateFloat();
    generated.y = generator_.generateFloat();
    generated.screenX = generator_.generateFloat();
    generated.screenY = generator_.generateFloat();
    return generated;
  };

  LocationData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateFloat(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateFloat(this.y);
    }
    if (mutator_.chooseMutateField()) {
      this.screenX = mutator_.mutateFloat(this.screenX);
    }
    if (mutator_.chooseMutateField()) {
      this.screenY = mutator_.mutateFloat(this.screenY);
    }
    return this;
  };
  LocationData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LocationData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LocationData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LocationData.validate = function(messageValidator, offset) {
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

  LocationData.encodedSize = codec.kStructHeaderSize + 16;

  LocationData.decode = function(decoder) {
    var packed;
    var val = new LocationData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.screenX = decoder.decodeStruct(codec.Float);
    val.screenY = decoder.decodeStruct(codec.Float);
    return val;
  };

  LocationData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LocationData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.screenX);
    encoder.encodeStruct(codec.Float, val.screenY);
  };
  function PointerData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PointerData.prototype.initDefaults_ = function() {
    this.pointerId = 0;
    this.changedButtonFlags = 0;
    this.kind = 0;
    this.location = null;
    this.brushData = null;
    this.wheelData = null;
  };
  PointerData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PointerData.generate = function(generator_) {
    var generated = new PointerData;
    generated.pointerId = generator_.generateInt32();
    generated.changedButtonFlags = generator_.generateInt32();
    generated.kind = generator_.generateEnum(0, 3);
    generated.location = generator_.generateStruct(ui.mojom.LocationData, false);
    generated.brushData = generator_.generateStruct(ui.mojom.BrushData, true);
    generated.wheelData = generator_.generateStruct(ui.mojom.WheelData, true);
    return generated;
  };

  PointerData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pointerId = mutator_.mutateInt32(this.pointerId);
    }
    if (mutator_.chooseMutateField()) {
      this.changedButtonFlags = mutator_.mutateInt32(this.changedButtonFlags);
    }
    if (mutator_.chooseMutateField()) {
      this.kind = mutator_.mutateEnum(this.kind, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.location = mutator_.mutateStruct(ui.mojom.LocationData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.brushData = mutator_.mutateStruct(ui.mojom.BrushData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.wheelData = mutator_.mutateStruct(ui.mojom.WheelData, true);
    }
    return this;
  };
  PointerData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PointerData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PointerData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PointerData.validate = function(messageValidator, offset) {
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




    // validate PointerData.kind
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, event_constants$.PointerKind);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PointerData.location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, LocationData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PointerData.brushData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, BrushData, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PointerData.wheelData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, WheelData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PointerData.encodedSize = codec.kStructHeaderSize + 40;

  PointerData.decode = function(decoder) {
    var packed;
    var val = new PointerData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pointerId = decoder.decodeStruct(codec.Int32);
    val.changedButtonFlags = decoder.decodeStruct(codec.Int32);
    val.kind = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.location = decoder.decodeStructPointer(LocationData);
    val.brushData = decoder.decodeStructPointer(BrushData);
    val.wheelData = decoder.decodeStructPointer(WheelData);
    return val;
  };

  PointerData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PointerData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pointerId);
    encoder.encodeStruct(codec.Int32, val.changedButtonFlags);
    encoder.encodeStruct(codec.Int32, val.kind);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(LocationData, val.location);
    encoder.encodeStructPointer(BrushData, val.brushData);
    encoder.encodeStructPointer(WheelData, val.wheelData);
  };
  function WheelData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WheelData.prototype.initDefaults_ = function() {
    this.mode = 0;
    this.deltaX = 0;
    this.deltaY = 0;
    this.deltaZ = 0;
  };
  WheelData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WheelData.generate = function(generator_) {
    var generated = new WheelData;
    generated.mode = generator_.generateEnum(0, 3);
    generated.deltaX = generator_.generateFloat();
    generated.deltaY = generator_.generateFloat();
    generated.deltaZ = generator_.generateFloat();
    return generated;
  };

  WheelData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mode = mutator_.mutateEnum(this.mode, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.deltaX = mutator_.mutateFloat(this.deltaX);
    }
    if (mutator_.chooseMutateField()) {
      this.deltaY = mutator_.mutateFloat(this.deltaY);
    }
    if (mutator_.chooseMutateField()) {
      this.deltaZ = mutator_.mutateFloat(this.deltaZ);
    }
    return this;
  };
  WheelData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WheelData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WheelData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WheelData.validate = function(messageValidator, offset) {
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


    // validate WheelData.mode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, event_constants$.WheelMode);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  WheelData.encodedSize = codec.kStructHeaderSize + 16;

  WheelData.decode = function(decoder) {
    var packed;
    var val = new WheelData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mode = decoder.decodeStruct(codec.Int32);
    val.deltaX = decoder.decodeStruct(codec.Float);
    val.deltaY = decoder.decodeStruct(codec.Float);
    val.deltaZ = decoder.decodeStruct(codec.Float);
    return val;
  };

  WheelData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WheelData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.mode);
    encoder.encodeStruct(codec.Float, val.deltaX);
    encoder.encodeStruct(codec.Float, val.deltaY);
    encoder.encodeStruct(codec.Float, val.deltaZ);
  };
  function BrushData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BrushData.prototype.initDefaults_ = function() {
    this.width = 0;
    this.height = 0;
    this.pressure = 0;
    this.tiltX = 0;
    this.tiltY = 0;
    this.tangentialPressure = 0;
    this.twist = 0;
  };
  BrushData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BrushData.generate = function(generator_) {
    var generated = new BrushData;
    generated.width = generator_.generateFloat();
    generated.height = generator_.generateFloat();
    generated.pressure = generator_.generateFloat();
    generated.tiltX = generator_.generateFloat();
    generated.tiltY = generator_.generateFloat();
    generated.tangentialPressure = generator_.generateFloat();
    generated.twist = generator_.generateInt32();
    return generated;
  };

  BrushData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateFloat(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateFloat(this.height);
    }
    if (mutator_.chooseMutateField()) {
      this.pressure = mutator_.mutateFloat(this.pressure);
    }
    if (mutator_.chooseMutateField()) {
      this.tiltX = mutator_.mutateFloat(this.tiltX);
    }
    if (mutator_.chooseMutateField()) {
      this.tiltY = mutator_.mutateFloat(this.tiltY);
    }
    if (mutator_.chooseMutateField()) {
      this.tangentialPressure = mutator_.mutateFloat(this.tangentialPressure);
    }
    if (mutator_.chooseMutateField()) {
      this.twist = mutator_.mutateInt32(this.twist);
    }
    return this;
  };
  BrushData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BrushData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BrushData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BrushData.validate = function(messageValidator, offset) {
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








    return validator.validationError.NONE;
  };

  BrushData.encodedSize = codec.kStructHeaderSize + 32;

  BrushData.decode = function(decoder) {
    var packed;
    var val = new BrushData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.width = decoder.decodeStruct(codec.Float);
    val.height = decoder.decodeStruct(codec.Float);
    val.pressure = decoder.decodeStruct(codec.Float);
    val.tiltX = decoder.decodeStruct(codec.Float);
    val.tiltY = decoder.decodeStruct(codec.Float);
    val.tangentialPressure = decoder.decodeStruct(codec.Float);
    val.twist = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BrushData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BrushData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.width);
    encoder.encodeStruct(codec.Float, val.height);
    encoder.encodeStruct(codec.Float, val.pressure);
    encoder.encodeStruct(codec.Float, val.tiltX);
    encoder.encodeStruct(codec.Float, val.tiltY);
    encoder.encodeStruct(codec.Float, val.tangentialPressure);
    encoder.encodeStruct(codec.Int32, val.twist);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GestureData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GestureData.prototype.initDefaults_ = function() {
    this.location = null;
  };
  GestureData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GestureData.generate = function(generator_) {
    var generated = new GestureData;
    generated.location = generator_.generateStruct(ui.mojom.LocationData, false);
    return generated;
  };

  GestureData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.location = mutator_.mutateStruct(ui.mojom.LocationData, false);
    }
    return this;
  };
  GestureData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GestureData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GestureData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GestureData.validate = function(messageValidator, offset) {
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


    // validate GestureData.location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, LocationData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GestureData.encodedSize = codec.kStructHeaderSize + 8;

  GestureData.decode = function(decoder) {
    var packed;
    var val = new GestureData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.location = decoder.decodeStructPointer(LocationData);
    return val;
  };

  GestureData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GestureData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(LocationData, val.location);
  };
  function ScrollData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScrollData.prototype.initDefaults_ = function() {
    this.location = null;
    this.xOffset = 0;
    this.yOffset = 0;
    this.xOffsetOrdinal = 0;
    this.yOffsetOrdinal = 0;
    this.fingerCount = 0;
    this.momentumPhase = 0;
    this.scrollEventPhase = 0;
  };
  ScrollData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScrollData.generate = function(generator_) {
    var generated = new ScrollData;
    generated.location = generator_.generateStruct(ui.mojom.LocationData, false);
    generated.xOffset = generator_.generateFloat();
    generated.yOffset = generator_.generateFloat();
    generated.xOffsetOrdinal = generator_.generateFloat();
    generated.yOffsetOrdinal = generator_.generateFloat();
    generated.fingerCount = generator_.generateInt32();
    generated.momentumPhase = generator_.generateEnum(0, 4);
    generated.scrollEventPhase = generator_.generateEnum(0, 3);
    return generated;
  };

  ScrollData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.location = mutator_.mutateStruct(ui.mojom.LocationData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.xOffset = mutator_.mutateFloat(this.xOffset);
    }
    if (mutator_.chooseMutateField()) {
      this.yOffset = mutator_.mutateFloat(this.yOffset);
    }
    if (mutator_.chooseMutateField()) {
      this.xOffsetOrdinal = mutator_.mutateFloat(this.xOffsetOrdinal);
    }
    if (mutator_.chooseMutateField()) {
      this.yOffsetOrdinal = mutator_.mutateFloat(this.yOffsetOrdinal);
    }
    if (mutator_.chooseMutateField()) {
      this.fingerCount = mutator_.mutateInt32(this.fingerCount);
    }
    if (mutator_.chooseMutateField()) {
      this.momentumPhase = mutator_.mutateEnum(this.momentumPhase, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollEventPhase = mutator_.mutateEnum(this.scrollEventPhase, 0, 3);
    }
    return this;
  };
  ScrollData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScrollData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScrollData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScrollData.validate = function(messageValidator, offset) {
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


    // validate ScrollData.location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, LocationData, false);
    if (err !== validator.validationError.NONE)
        return err;







    // validate ScrollData.momentumPhase
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 28, event_constants$.EventMomentumPhase);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ScrollData.scrollEventPhase
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, event_constants$.ScrollEventPhase);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ScrollData.encodedSize = codec.kStructHeaderSize + 40;

  ScrollData.decode = function(decoder) {
    var packed;
    var val = new ScrollData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.location = decoder.decodeStructPointer(LocationData);
    val.xOffset = decoder.decodeStruct(codec.Float);
    val.yOffset = decoder.decodeStruct(codec.Float);
    val.xOffsetOrdinal = decoder.decodeStruct(codec.Float);
    val.yOffsetOrdinal = decoder.decodeStruct(codec.Float);
    val.fingerCount = decoder.decodeStruct(codec.Int32);
    val.momentumPhase = decoder.decodeStruct(codec.Int32);
    val.scrollEventPhase = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ScrollData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScrollData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(LocationData, val.location);
    encoder.encodeStruct(codec.Float, val.xOffset);
    encoder.encodeStruct(codec.Float, val.yOffset);
    encoder.encodeStruct(codec.Float, val.xOffsetOrdinal);
    encoder.encodeStruct(codec.Float, val.yOffsetOrdinal);
    encoder.encodeStruct(codec.Int32, val.fingerCount);
    encoder.encodeStruct(codec.Int32, val.momentumPhase);
    encoder.encodeStruct(codec.Int32, val.scrollEventPhase);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Event(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Event.prototype.initDefaults_ = function() {
    this.action = 0;
    this.flags = 0;
    this.timeStamp = null;
    this.latency = null;
    this.keyData = null;
    this.pointerData = null;
    this.gestureData = null;
    this.scrollData = null;
  };
  Event.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Event.generate = function(generator_) {
    var generated = new Event;
    generated.action = generator_.generateEnum(0, 14);
    generated.flags = generator_.generateInt32();
    generated.timeStamp = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.latency = generator_.generateStruct(ui.mojom.LatencyInfo, false);
    generated.keyData = generator_.generateStruct(ui.mojom.KeyData, true);
    generated.pointerData = generator_.generateStruct(ui.mojom.PointerData, true);
    generated.gestureData = generator_.generateStruct(ui.mojom.GestureData, true);
    generated.scrollData = generator_.generateStruct(ui.mojom.ScrollData, true);
    return generated;
  };

  Event.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateEnum(this.action, 0, 14);
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateInt32(this.flags);
    }
    if (mutator_.chooseMutateField()) {
      this.timeStamp = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.latency = mutator_.mutateStruct(ui.mojom.LatencyInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyData = mutator_.mutateStruct(ui.mojom.KeyData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerData = mutator_.mutateStruct(ui.mojom.PointerData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.gestureData = mutator_.mutateStruct(ui.mojom.GestureData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollData = mutator_.mutateStruct(ui.mojom.ScrollData, true);
    }
    return this;
  };
  Event.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Event.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Event.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Event.validate = function(messageValidator, offset) {
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


    // validate Event.action
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, event_constants$.EventType);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Event.timeStamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Event.latency
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, latency_info$.LatencyInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Event.keyData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, KeyData, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Event.pointerData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, PointerData, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Event.gestureData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, GestureData, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Event.scrollData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, ScrollData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Event.encodedSize = codec.kStructHeaderSize + 56;

  Event.decode = function(decoder) {
    var packed;
    var val = new Event();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.action = decoder.decodeStruct(codec.Int32);
    val.flags = decoder.decodeStruct(codec.Int32);
    val.timeStamp = decoder.decodeStructPointer(time$.TimeTicks);
    val.latency = decoder.decodeStructPointer(latency_info$.LatencyInfo);
    val.keyData = decoder.decodeStructPointer(KeyData);
    val.pointerData = decoder.decodeStructPointer(PointerData);
    val.gestureData = decoder.decodeStructPointer(GestureData);
    val.scrollData = decoder.decodeStructPointer(ScrollData);
    return val;
  };

  Event.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Event.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.action);
    encoder.encodeStruct(codec.Int32, val.flags);
    encoder.encodeStructPointer(time$.TimeTicks, val.timeStamp);
    encoder.encodeStructPointer(latency_info$.LatencyInfo, val.latency);
    encoder.encodeStructPointer(KeyData, val.keyData);
    encoder.encodeStructPointer(PointerData, val.pointerData);
    encoder.encodeStructPointer(GestureData, val.gestureData);
    encoder.encodeStructPointer(ScrollData, val.scrollData);
  };
  exports.KeyData = KeyData;
  exports.LocationData = LocationData;
  exports.PointerData = PointerData;
  exports.WheelData = WheelData;
  exports.BrushData = BrushData;
  exports.GestureData = GestureData;
  exports.ScrollData = ScrollData;
  exports.Event = Event;
})();