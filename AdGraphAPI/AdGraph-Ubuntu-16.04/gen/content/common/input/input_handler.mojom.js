// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/input/input_handler.mojom';
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
  var synchronous_compositor$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/input/synchronous_compositor.mojom', 'synchronous_compositor.mojom.js');
  }
  var native_types$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/native_types.mojom', '../native_types.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var ime$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/ime/ime.mojom', '../../../services/ui/public/interfaces/ime/ime.mojom.js');
  }
  var selection_menu_behavior$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/selection_menu_behavior.mojom', '../../../third_party/blink/public/web/selection_menu_behavior.mojom.js');
  }
  var event$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event.mojom', '../../../ui/events/mojo/event.mojom.js');
  }
  var event_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event_constants.mojom', '../../../ui/events/mojo/event_constants.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var range$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/range/mojo/range.mojom', '../../../ui/gfx/range/mojo/range.mojom.js');
  }
  var latency_info$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/latency/mojo/latency_info.mojom', '../../../ui/latency/mojo/latency_info.mojom.js');
  }



  function KeyData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyData.prototype.initDefaults_ = function() {
    this.domKey = 0;
    this.domCode = 0;
    this.windowsKeyCode = 0;
    this.nativeKeyCode = 0;
    this.isSystemKey = false;
    this.isBrowserShortcut = false;
    this.text = null;
    this.unmodifiedText = null;
  };
  KeyData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyData.generate = function(generator_) {
    var generated = new KeyData;
    generated.domKey = generator_.generateInt32();
    generated.domCode = generator_.generateInt32();
    generated.windowsKeyCode = generator_.generateInt32();
    generated.nativeKeyCode = generator_.generateInt32();
    generated.isSystemKey = generator_.generateBool();
    generated.isBrowserShortcut = generator_.generateBool();
    generated.text = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.unmodifiedText = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  KeyData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.domKey = mutator_.mutateInt32(this.domKey);
    }
    if (mutator_.chooseMutateField()) {
      this.domCode = mutator_.mutateInt32(this.domCode);
    }
    if (mutator_.chooseMutateField()) {
      this.windowsKeyCode = mutator_.mutateInt32(this.windowsKeyCode);
    }
    if (mutator_.chooseMutateField()) {
      this.nativeKeyCode = mutator_.mutateInt32(this.nativeKeyCode);
    }
    if (mutator_.chooseMutateField()) {
      this.isSystemKey = mutator_.mutateBool(this.isSystemKey);
    }
    if (mutator_.chooseMutateField()) {
      this.isBrowserShortcut = mutator_.mutateBool(this.isBrowserShortcut);
    }
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.unmodifiedText = mutator_.mutateStruct(mojoBase.mojom.String16, false);
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
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;








    // validate KeyData.text
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate KeyData.unmodifiedText
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyData.encodedSize = codec.kStructHeaderSize + 40;

  KeyData.decode = function(decoder) {
    var packed;
    var val = new KeyData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.domKey = decoder.decodeStruct(codec.Int32);
    val.domCode = decoder.decodeStruct(codec.Int32);
    val.windowsKeyCode = decoder.decodeStruct(codec.Int32);
    val.nativeKeyCode = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isSystemKey = (packed >> 0) & 1 ? true : false;
    val.isBrowserShortcut = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.text = decoder.decodeStructPointer(string16$.String16);
    val.unmodifiedText = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  KeyData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.domKey);
    encoder.encodeStruct(codec.Int32, val.domCode);
    encoder.encodeStruct(codec.Int32, val.windowsKeyCode);
    encoder.encodeStruct(codec.Int32, val.nativeKeyCode);
    packed = 0;
    packed |= (val.isSystemKey & 1) << 0
    packed |= (val.isBrowserShortcut & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.text);
    encoder.encodeStructPointer(string16$.String16, val.unmodifiedText);
  };
  function PointerData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PointerData.prototype.initDefaults_ = function() {
    this.pointerId = 0;
    this.force = 0;
    this.tiltX = 0;
    this.tiltY = 0;
    this.tangentialPressure = 0;
    this.twist = 0;
    this.button = 0;
    this.pointerType = 0;
    this.movementX = 0;
    this.movementY = 0;
    this.widgetPosition = null;
    this.screenPosition = null;
    this.mouseData = null;
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
    generated.force = generator_.generateFloat();
    generated.tiltX = generator_.generateInt32();
    generated.tiltY = generator_.generateInt32();
    generated.tangentialPressure = generator_.generateFloat();
    generated.twist = generator_.generateInt32();
    generated.button = generator_.generateEnum();
    generated.pointerType = generator_.generateEnum();
    generated.movementX = generator_.generateInt32();
    generated.movementY = generator_.generateInt32();
    generated.widgetPosition = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.screenPosition = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.mouseData = generator_.generateStruct(content.mojom.MouseData, true);
    return generated;
  };

  PointerData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pointerId = mutator_.mutateInt32(this.pointerId);
    }
    if (mutator_.chooseMutateField()) {
      this.force = mutator_.mutateFloat(this.force);
    }
    if (mutator_.chooseMutateField()) {
      this.tiltX = mutator_.mutateInt32(this.tiltX);
    }
    if (mutator_.chooseMutateField()) {
      this.tiltY = mutator_.mutateInt32(this.tiltY);
    }
    if (mutator_.chooseMutateField()) {
      this.tangentialPressure = mutator_.mutateFloat(this.tangentialPressure);
    }
    if (mutator_.chooseMutateField()) {
      this.twist = mutator_.mutateInt32(this.twist);
    }
    if (mutator_.chooseMutateField()) {
      this.button = mutator_.mutateEnum(this.button);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerType = mutator_.mutateEnum(this.pointerType);
    }
    if (mutator_.chooseMutateField()) {
      this.movementX = mutator_.mutateInt32(this.movementX);
    }
    if (mutator_.chooseMutateField()) {
      this.movementY = mutator_.mutateInt32(this.movementY);
    }
    if (mutator_.chooseMutateField()) {
      this.widgetPosition = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.screenPosition = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mouseData = mutator_.mutateStruct(content.mojom.MouseData, true);
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
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;








    // validate PointerData.button
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, native_types$.Button);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PointerData.pointerType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 28, native_types$.PointerType);
    if (err !== validator.validationError.NONE)
        return err;




    // validate PointerData.widgetPosition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PointerData.screenPosition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PointerData.mouseData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, MouseData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PointerData.encodedSize = codec.kStructHeaderSize + 64;

  PointerData.decode = function(decoder) {
    var packed;
    var val = new PointerData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pointerId = decoder.decodeStruct(codec.Int32);
    val.force = decoder.decodeStruct(codec.Float);
    val.tiltX = decoder.decodeStruct(codec.Int32);
    val.tiltY = decoder.decodeStruct(codec.Int32);
    val.tangentialPressure = decoder.decodeStruct(codec.Float);
    val.twist = decoder.decodeStruct(codec.Int32);
    val.button = decoder.decodeStruct(codec.Int32);
    val.pointerType = decoder.decodeStruct(codec.Int32);
    val.movementX = decoder.decodeStruct(codec.Int32);
    val.movementY = decoder.decodeStruct(codec.Int32);
    val.widgetPosition = decoder.decodeStructPointer(geometry$.PointF);
    val.screenPosition = decoder.decodeStructPointer(geometry$.PointF);
    val.mouseData = decoder.decodeStructPointer(MouseData);
    return val;
  };

  PointerData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PointerData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pointerId);
    encoder.encodeStruct(codec.Float, val.force);
    encoder.encodeStruct(codec.Int32, val.tiltX);
    encoder.encodeStruct(codec.Int32, val.tiltY);
    encoder.encodeStruct(codec.Float, val.tangentialPressure);
    encoder.encodeStruct(codec.Int32, val.twist);
    encoder.encodeStruct(codec.Int32, val.button);
    encoder.encodeStruct(codec.Int32, val.pointerType);
    encoder.encodeStruct(codec.Int32, val.movementX);
    encoder.encodeStruct(codec.Int32, val.movementY);
    encoder.encodeStructPointer(geometry$.PointF, val.widgetPosition);
    encoder.encodeStructPointer(geometry$.PointF, val.screenPosition);
    encoder.encodeStructPointer(MouseData, val.mouseData);
  };
  function WheelData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WheelData.prototype.initDefaults_ = function() {
    this.deltaX = 0;
    this.deltaY = 0;
    this.wheelTicksX = 0;
    this.wheelTicksY = 0;
    this.accelerationRatioX = 0;
    this.accelerationRatioY = 0;
    this.resendingPluginId = 0;
    this.phase = 0;
    this.momentumPhase = 0;
    this.scrollByPage = false;
    this.hasPreciseScrollingDeltas = false;
    this.cancelable = 0;
  };
  WheelData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WheelData.generate = function(generator_) {
    var generated = new WheelData;
    generated.deltaX = generator_.generateFloat();
    generated.deltaY = generator_.generateFloat();
    generated.wheelTicksX = generator_.generateFloat();
    generated.wheelTicksY = generator_.generateFloat();
    generated.accelerationRatioX = generator_.generateFloat();
    generated.accelerationRatioY = generator_.generateFloat();
    generated.resendingPluginId = generator_.generateInt32();
    generated.phase = generator_.generateUint8();
    generated.momentumPhase = generator_.generateUint8();
    generated.scrollByPage = generator_.generateBool();
    generated.hasPreciseScrollingDeltas = generator_.generateBool();
    generated.cancelable = generator_.generateEnum();
    return generated;
  };

  WheelData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deltaX = mutator_.mutateFloat(this.deltaX);
    }
    if (mutator_.chooseMutateField()) {
      this.deltaY = mutator_.mutateFloat(this.deltaY);
    }
    if (mutator_.chooseMutateField()) {
      this.wheelTicksX = mutator_.mutateFloat(this.wheelTicksX);
    }
    if (mutator_.chooseMutateField()) {
      this.wheelTicksY = mutator_.mutateFloat(this.wheelTicksY);
    }
    if (mutator_.chooseMutateField()) {
      this.accelerationRatioX = mutator_.mutateFloat(this.accelerationRatioX);
    }
    if (mutator_.chooseMutateField()) {
      this.accelerationRatioY = mutator_.mutateFloat(this.accelerationRatioY);
    }
    if (mutator_.chooseMutateField()) {
      this.resendingPluginId = mutator_.mutateInt32(this.resendingPluginId);
    }
    if (mutator_.chooseMutateField()) {
      this.phase = mutator_.mutateUint8(this.phase);
    }
    if (mutator_.chooseMutateField()) {
      this.momentumPhase = mutator_.mutateUint8(this.momentumPhase);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollByPage = mutator_.mutateBool(this.scrollByPage);
    }
    if (mutator_.chooseMutateField()) {
      this.hasPreciseScrollingDeltas = mutator_.mutateBool(this.hasPreciseScrollingDeltas);
    }
    if (mutator_.chooseMutateField()) {
      this.cancelable = mutator_.mutateEnum(this.cancelable);
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
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;













    // validate WheelData.cancelable
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, native_types$.Cancelability);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WheelData.encodedSize = codec.kStructHeaderSize + 40;

  WheelData.decode = function(decoder) {
    var packed;
    var val = new WheelData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deltaX = decoder.decodeStruct(codec.Float);
    val.deltaY = decoder.decodeStruct(codec.Float);
    val.wheelTicksX = decoder.decodeStruct(codec.Float);
    val.wheelTicksY = decoder.decodeStruct(codec.Float);
    val.accelerationRatioX = decoder.decodeStruct(codec.Float);
    val.accelerationRatioY = decoder.decodeStruct(codec.Float);
    val.resendingPluginId = decoder.decodeStruct(codec.Int32);
    val.phase = decoder.decodeStruct(codec.Uint8);
    val.momentumPhase = decoder.decodeStruct(codec.Uint8);
    packed = decoder.readUint8();
    val.scrollByPage = (packed >> 0) & 1 ? true : false;
    val.hasPreciseScrollingDeltas = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    val.cancelable = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WheelData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WheelData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.deltaX);
    encoder.encodeStruct(codec.Float, val.deltaY);
    encoder.encodeStruct(codec.Float, val.wheelTicksX);
    encoder.encodeStruct(codec.Float, val.wheelTicksY);
    encoder.encodeStruct(codec.Float, val.accelerationRatioX);
    encoder.encodeStruct(codec.Float, val.accelerationRatioY);
    encoder.encodeStruct(codec.Int32, val.resendingPluginId);
    encoder.encodeStruct(codec.Uint8, val.phase);
    encoder.encodeStruct(codec.Uint8, val.momentumPhase);
    packed = 0;
    packed |= (val.scrollByPage & 1) << 0
    packed |= (val.hasPreciseScrollingDeltas & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.cancelable);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MouseData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MouseData.prototype.initDefaults_ = function() {
    this.clickCount = 0;
    this.wheelData = null;
  };
  MouseData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MouseData.generate = function(generator_) {
    var generated = new MouseData;
    generated.clickCount = generator_.generateInt32();
    generated.wheelData = generator_.generateStruct(content.mojom.WheelData, true);
    return generated;
  };

  MouseData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clickCount = mutator_.mutateInt32(this.clickCount);
    }
    if (mutator_.chooseMutateField()) {
      this.wheelData = mutator_.mutateStruct(content.mojom.WheelData, true);
    }
    return this;
  };
  MouseData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MouseData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MouseData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MouseData.validate = function(messageValidator, offset) {
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



    // validate MouseData.wheelData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, WheelData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MouseData.encodedSize = codec.kStructHeaderSize + 16;

  MouseData.decode = function(decoder) {
    var packed;
    var val = new MouseData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clickCount = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.wheelData = decoder.decodeStructPointer(WheelData);
    return val;
  };

  MouseData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MouseData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clickCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(WheelData, val.wheelData);
  };
  function ScrollUpdate(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScrollUpdate.prototype.initDefaults_ = function() {
    this.velocityX = 0;
    this.velocityY = 0;
    this.previousUpdateInSequencePrevented = false;
  };
  ScrollUpdate.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScrollUpdate.generate = function(generator_) {
    var generated = new ScrollUpdate;
    generated.velocityX = generator_.generateFloat();
    generated.velocityY = generator_.generateFloat();
    generated.previousUpdateInSequencePrevented = generator_.generateBool();
    return generated;
  };

  ScrollUpdate.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.velocityX = mutator_.mutateFloat(this.velocityX);
    }
    if (mutator_.chooseMutateField()) {
      this.velocityY = mutator_.mutateFloat(this.velocityY);
    }
    if (mutator_.chooseMutateField()) {
      this.previousUpdateInSequencePrevented = mutator_.mutateBool(this.previousUpdateInSequencePrevented);
    }
    return this;
  };
  ScrollUpdate.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScrollUpdate.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScrollUpdate.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScrollUpdate.validate = function(messageValidator, offset) {
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

  ScrollUpdate.encodedSize = codec.kStructHeaderSize + 16;

  ScrollUpdate.decode = function(decoder) {
    var packed;
    var val = new ScrollUpdate();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.velocityX = decoder.decodeStruct(codec.Float);
    val.velocityY = decoder.decodeStruct(codec.Float);
    packed = decoder.readUint8();
    val.previousUpdateInSequencePrevented = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ScrollUpdate.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScrollUpdate.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.velocityX);
    encoder.encodeStruct(codec.Float, val.velocityY);
    packed = 0;
    packed |= (val.previousUpdateInSequencePrevented & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ScrollData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScrollData.prototype.initDefaults_ = function() {
    this.deltaX = 0;
    this.deltaY = 0;
    this.deltaUnits = 0;
    this.targetViewport = false;
    this.synthetic = false;
    this.inertialPhase = 0;
    this.pointerCount = 0;
    this.updateDetails = null;
  };
  ScrollData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScrollData.generate = function(generator_) {
    var generated = new ScrollData;
    generated.deltaX = generator_.generateFloat();
    generated.deltaY = generator_.generateFloat();
    generated.deltaUnits = generator_.generateEnum();
    generated.targetViewport = generator_.generateBool();
    generated.inertialPhase = generator_.generateEnum();
    generated.synthetic = generator_.generateBool();
    generated.pointerCount = generator_.generateInt32();
    generated.updateDetails = generator_.generateStruct(content.mojom.ScrollUpdate, true);
    return generated;
  };

  ScrollData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deltaX = mutator_.mutateFloat(this.deltaX);
    }
    if (mutator_.chooseMutateField()) {
      this.deltaY = mutator_.mutateFloat(this.deltaY);
    }
    if (mutator_.chooseMutateField()) {
      this.deltaUnits = mutator_.mutateEnum(this.deltaUnits);
    }
    if (mutator_.chooseMutateField()) {
      this.targetViewport = mutator_.mutateBool(this.targetViewport);
    }
    if (mutator_.chooseMutateField()) {
      this.inertialPhase = mutator_.mutateEnum(this.inertialPhase);
    }
    if (mutator_.chooseMutateField()) {
      this.synthetic = mutator_.mutateBool(this.synthetic);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerCount = mutator_.mutateInt32(this.pointerCount);
    }
    if (mutator_.chooseMutateField()) {
      this.updateDetails = mutator_.mutateStruct(content.mojom.ScrollUpdate, true);
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
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate ScrollData.deltaUnits
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, native_types$.ScrollUnits);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ScrollData.inertialPhase
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, native_types$.InertialPhaseState);
    if (err !== validator.validationError.NONE)
        return err;




    // validate ScrollData.updateDetails
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, ScrollUpdate, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ScrollData.encodedSize = codec.kStructHeaderSize + 32;

  ScrollData.decode = function(decoder) {
    var packed;
    var val = new ScrollData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deltaX = decoder.decodeStruct(codec.Float);
    val.deltaY = decoder.decodeStruct(codec.Float);
    val.deltaUnits = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.targetViewport = (packed >> 0) & 1 ? true : false;
    val.synthetic = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.inertialPhase = decoder.decodeStruct(codec.Int32);
    val.pointerCount = decoder.decodeStruct(codec.Int32);
    val.updateDetails = decoder.decodeStructPointer(ScrollUpdate);
    return val;
  };

  ScrollData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScrollData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.deltaX);
    encoder.encodeStruct(codec.Float, val.deltaY);
    encoder.encodeStruct(codec.Int32, val.deltaUnits);
    packed = 0;
    packed |= (val.targetViewport & 1) << 0
    packed |= (val.synthetic & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.inertialPhase);
    encoder.encodeStruct(codec.Int32, val.pointerCount);
    encoder.encodeStructPointer(ScrollUpdate, val.updateDetails);
  };
  function PinchData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PinchData.prototype.initDefaults_ = function() {
    this.zoomDisabled = false;
    this.scale = 0;
  };
  PinchData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PinchData.generate = function(generator_) {
    var generated = new PinchData;
    generated.zoomDisabled = generator_.generateBool();
    generated.scale = generator_.generateFloat();
    return generated;
  };

  PinchData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.zoomDisabled = mutator_.mutateBool(this.zoomDisabled);
    }
    if (mutator_.chooseMutateField()) {
      this.scale = mutator_.mutateFloat(this.scale);
    }
    return this;
  };
  PinchData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PinchData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PinchData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PinchData.validate = function(messageValidator, offset) {
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

  PinchData.encodedSize = codec.kStructHeaderSize + 8;

  PinchData.decode = function(decoder) {
    var packed;
    var val = new PinchData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.zoomDisabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.scale = decoder.decodeStruct(codec.Float);
    return val;
  };

  PinchData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PinchData.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.zoomDisabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Float, val.scale);
  };
  function FlingData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FlingData.prototype.initDefaults_ = function() {
    this.velocityX = 0;
    this.velocityY = 0;
    this.targetViewport = false;
    this.preventBoosting = false;
  };
  FlingData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FlingData.generate = function(generator_) {
    var generated = new FlingData;
    generated.velocityX = generator_.generateFloat();
    generated.velocityY = generator_.generateFloat();
    generated.targetViewport = generator_.generateBool();
    generated.preventBoosting = generator_.generateBool();
    return generated;
  };

  FlingData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.velocityX = mutator_.mutateFloat(this.velocityX);
    }
    if (mutator_.chooseMutateField()) {
      this.velocityY = mutator_.mutateFloat(this.velocityY);
    }
    if (mutator_.chooseMutateField()) {
      this.targetViewport = mutator_.mutateBool(this.targetViewport);
    }
    if (mutator_.chooseMutateField()) {
      this.preventBoosting = mutator_.mutateBool(this.preventBoosting);
    }
    return this;
  };
  FlingData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FlingData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FlingData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FlingData.validate = function(messageValidator, offset) {
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

  FlingData.encodedSize = codec.kStructHeaderSize + 16;

  FlingData.decode = function(decoder) {
    var packed;
    var val = new FlingData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.velocityX = decoder.decodeStruct(codec.Float);
    val.velocityY = decoder.decodeStruct(codec.Float);
    packed = decoder.readUint8();
    val.targetViewport = (packed >> 0) & 1 ? true : false;
    val.preventBoosting = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FlingData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FlingData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.velocityX);
    encoder.encodeStruct(codec.Float, val.velocityY);
    packed = 0;
    packed |= (val.targetViewport & 1) << 0
    packed |= (val.preventBoosting & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function TapData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TapData.prototype.initDefaults_ = function() {
    this.tapCount = 0;
  };
  TapData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TapData.generate = function(generator_) {
    var generated = new TapData;
    generated.tapCount = generator_.generateInt32();
    return generated;
  };

  TapData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tapCount = mutator_.mutateInt32(this.tapCount);
    }
    return this;
  };
  TapData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TapData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TapData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TapData.validate = function(messageValidator, offset) {
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

  TapData.encodedSize = codec.kStructHeaderSize + 8;

  TapData.decode = function(decoder) {
    var packed;
    var val = new TapData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tapCount = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TapData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TapData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.tapCount);
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
    this.screenPosition = null;
    this.widgetPosition = null;
    this.sourceDevice = 0;
    this.isSourceTouchEventSetNonBlocking = false;
    this.primaryPointerType = 0;
    this.uniqueTouchEventId = 0;
    this.resendingPluginId = 0;
    this.contactSize = null;
    this.scrollData = null;
    this.pinchData = null;
    this.tapData = null;
    this.flingData = null;
  };
  GestureData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GestureData.generate = function(generator_) {
    var generated = new GestureData;
    generated.screenPosition = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.widgetPosition = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.sourceDevice = generator_.generateEnum();
    generated.isSourceTouchEventSetNonBlocking = generator_.generateBool();
    generated.primaryPointerType = generator_.generateEnum();
    generated.uniqueTouchEventId = generator_.generateInt32();
    generated.resendingPluginId = generator_.generateInt32();
    generated.contactSize = generator_.generateStruct(gfx.mojom.Size, true);
    generated.scrollData = generator_.generateStruct(content.mojom.ScrollData, true);
    generated.pinchData = generator_.generateStruct(content.mojom.PinchData, true);
    generated.tapData = generator_.generateStruct(content.mojom.TapData, true);
    generated.flingData = generator_.generateStruct(content.mojom.FlingData, true);
    return generated;
  };

  GestureData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.screenPosition = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.widgetPosition = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceDevice = mutator_.mutateEnum(this.sourceDevice);
    }
    if (mutator_.chooseMutateField()) {
      this.isSourceTouchEventSetNonBlocking = mutator_.mutateBool(this.isSourceTouchEventSetNonBlocking);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryPointerType = mutator_.mutateEnum(this.primaryPointerType);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueTouchEventId = mutator_.mutateInt32(this.uniqueTouchEventId);
    }
    if (mutator_.chooseMutateField()) {
      this.resendingPluginId = mutator_.mutateInt32(this.resendingPluginId);
    }
    if (mutator_.chooseMutateField()) {
      this.contactSize = mutator_.mutateStruct(gfx.mojom.Size, true);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollData = mutator_.mutateStruct(content.mojom.ScrollData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.pinchData = mutator_.mutateStruct(content.mojom.PinchData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.tapData = mutator_.mutateStruct(content.mojom.TapData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.flingData = mutator_.mutateStruct(content.mojom.FlingData, true);
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
      {version: 0, numBytes: 88}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GestureData.screenPosition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GestureData.widgetPosition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GestureData.sourceDevice
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, native_types$.GestureDevice);
    if (err !== validator.validationError.NONE)
        return err;



    // validate GestureData.primaryPointerType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, native_types$.PointerType);
    if (err !== validator.validationError.NONE)
        return err;




    // validate GestureData.contactSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, geometry$.Size, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GestureData.scrollData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, ScrollData, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GestureData.pinchData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, PinchData, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GestureData.tapData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 64, TapData, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GestureData.flingData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, FlingData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GestureData.encodedSize = codec.kStructHeaderSize + 80;

  GestureData.decode = function(decoder) {
    var packed;
    var val = new GestureData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.screenPosition = decoder.decodeStructPointer(geometry$.PointF);
    val.widgetPosition = decoder.decodeStructPointer(geometry$.PointF);
    val.sourceDevice = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isSourceTouchEventSetNonBlocking = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.primaryPointerType = decoder.decodeStruct(codec.Int32);
    val.uniqueTouchEventId = decoder.decodeStruct(codec.Int32);
    val.resendingPluginId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.contactSize = decoder.decodeStructPointer(geometry$.Size);
    val.scrollData = decoder.decodeStructPointer(ScrollData);
    val.pinchData = decoder.decodeStructPointer(PinchData);
    val.tapData = decoder.decodeStructPointer(TapData);
    val.flingData = decoder.decodeStructPointer(FlingData);
    return val;
  };

  GestureData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GestureData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.screenPosition);
    encoder.encodeStructPointer(geometry$.PointF, val.widgetPosition);
    encoder.encodeStruct(codec.Int32, val.sourceDevice);
    packed = 0;
    packed |= (val.isSourceTouchEventSetNonBlocking & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.primaryPointerType);
    encoder.encodeStruct(codec.Int32, val.uniqueTouchEventId);
    encoder.encodeStruct(codec.Int32, val.resendingPluginId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.contactSize);
    encoder.encodeStructPointer(ScrollData, val.scrollData);
    encoder.encodeStructPointer(PinchData, val.pinchData);
    encoder.encodeStructPointer(TapData, val.tapData);
    encoder.encodeStructPointer(FlingData, val.flingData);
  };
  function TouchPoint(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TouchPoint.prototype.initDefaults_ = function() {
    this.state = 0;
    this.radiusX = 0;
    this.radiusY = 0;
    this.rotationAngle = 0;
    this.pointerData = null;
  };
  TouchPoint.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TouchPoint.generate = function(generator_) {
    var generated = new TouchPoint;
    generated.state = generator_.generateEnum();
    generated.radiusX = generator_.generateFloat();
    generated.radiusY = generator_.generateFloat();
    generated.rotationAngle = generator_.generateFloat();
    generated.pointerData = generator_.generateStruct(content.mojom.PointerData, false);
    return generated;
  };

  TouchPoint.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state);
    }
    if (mutator_.chooseMutateField()) {
      this.radiusX = mutator_.mutateFloat(this.radiusX);
    }
    if (mutator_.chooseMutateField()) {
      this.radiusY = mutator_.mutateFloat(this.radiusY);
    }
    if (mutator_.chooseMutateField()) {
      this.rotationAngle = mutator_.mutateFloat(this.rotationAngle);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerData = mutator_.mutateStruct(content.mojom.PointerData, false);
    }
    return this;
  };
  TouchPoint.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TouchPoint.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TouchPoint.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TouchPoint.validate = function(messageValidator, offset) {
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


    // validate TouchPoint.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, native_types$.TouchState);
    if (err !== validator.validationError.NONE)
        return err;





    // validate TouchPoint.pointerData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PointerData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TouchPoint.encodedSize = codec.kStructHeaderSize + 24;

  TouchPoint.decode = function(decoder) {
    var packed;
    var val = new TouchPoint();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    val.radiusX = decoder.decodeStruct(codec.Float);
    val.radiusY = decoder.decodeStruct(codec.Float);
    val.rotationAngle = decoder.decodeStruct(codec.Float);
    val.pointerData = decoder.decodeStructPointer(PointerData);
    return val;
  };

  TouchPoint.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TouchPoint.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.encodeStruct(codec.Float, val.radiusX);
    encoder.encodeStruct(codec.Float, val.radiusY);
    encoder.encodeStruct(codec.Float, val.rotationAngle);
    encoder.encodeStructPointer(PointerData, val.pointerData);
  };
  function TouchData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TouchData.prototype.initDefaults_ = function() {
    this.cancelable = 0;
    this.movedBeyondSlopRegion = false;
    this.touchStartOrFirstMove = false;
    this.hovering = false;
    this.uniqueTouchEventId = 0;
    this.touches = null;
  };
  TouchData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TouchData.generate = function(generator_) {
    var generated = new TouchData;
    generated.cancelable = generator_.generateEnum();
    generated.movedBeyondSlopRegion = generator_.generateBool();
    generated.touchStartOrFirstMove = generator_.generateBool();
    generated.hovering = generator_.generateBool();
    generated.uniqueTouchEventId = generator_.generateUint32();
    generated.touches = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.TouchPoint, false);
    });
    return generated;
  };

  TouchData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cancelable = mutator_.mutateEnum(this.cancelable);
    }
    if (mutator_.chooseMutateField()) {
      this.movedBeyondSlopRegion = mutator_.mutateBool(this.movedBeyondSlopRegion);
    }
    if (mutator_.chooseMutateField()) {
      this.touchStartOrFirstMove = mutator_.mutateBool(this.touchStartOrFirstMove);
    }
    if (mutator_.chooseMutateField()) {
      this.hovering = mutator_.mutateBool(this.hovering);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueTouchEventId = mutator_.mutateUint32(this.uniqueTouchEventId);
    }
    if (mutator_.chooseMutateField()) {
      this.touches = mutator_.mutateArray(this.touches, function(val) {
        return mutator_.mutateStruct(content.mojom.TouchPoint, false);
      });
    }
    return this;
  };
  TouchData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TouchData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TouchData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TouchData.validate = function(messageValidator, offset) {
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


    // validate TouchData.cancelable
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, native_types$.Cancelability);
    if (err !== validator.validationError.NONE)
        return err;






    // validate TouchData.touches
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(TouchPoint), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TouchData.encodedSize = codec.kStructHeaderSize + 24;

  TouchData.decode = function(decoder) {
    var packed;
    var val = new TouchData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cancelable = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.movedBeyondSlopRegion = (packed >> 0) & 1 ? true : false;
    val.touchStartOrFirstMove = (packed >> 1) & 1 ? true : false;
    val.hovering = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.uniqueTouchEventId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.touches = decoder.decodeArrayPointer(new codec.PointerTo(TouchPoint));
    return val;
  };

  TouchData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TouchData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.cancelable);
    packed = 0;
    packed |= (val.movedBeyondSlopRegion & 1) << 0
    packed |= (val.touchStartOrFirstMove & 1) << 1
    packed |= (val.hovering & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.uniqueTouchEventId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(TouchPoint), val.touches);
  };
  function Event(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Event.prototype.initDefaults_ = function() {
    this.type = 0;
    this.modifiers = 0;
    this.timestamp = null;
    this.latency = null;
    this.keyData = null;
    this.pointerData = null;
    this.gestureData = null;
    this.touchData = null;
  };
  Event.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Event.generate = function(generator_) {
    var generated = new Event;
    generated.type = generator_.generateEnum();
    generated.modifiers = generator_.generateInt32();
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.latency = generator_.generateStruct(ui.mojom.LatencyInfo, false);
    generated.keyData = generator_.generateStruct(content.mojom.KeyData, true);
    generated.pointerData = generator_.generateStruct(content.mojom.PointerData, true);
    generated.gestureData = generator_.generateStruct(content.mojom.GestureData, true);
    generated.touchData = generator_.generateStruct(content.mojom.TouchData, true);
    return generated;
  };

  Event.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type);
    }
    if (mutator_.chooseMutateField()) {
      this.modifiers = mutator_.mutateInt32(this.modifiers);
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.latency = mutator_.mutateStruct(ui.mojom.LatencyInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyData = mutator_.mutateStruct(content.mojom.KeyData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerData = mutator_.mutateStruct(content.mojom.PointerData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.gestureData = mutator_.mutateStruct(content.mojom.GestureData, true);
    }
    if (mutator_.chooseMutateField()) {
      this.touchData = mutator_.mutateStruct(content.mojom.TouchData, true);
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


    // validate Event.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, native_types$.EventType);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Event.timestamp
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


    // validate Event.touchData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, TouchData, true);
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
    val.type = decoder.decodeStruct(codec.Int32);
    val.modifiers = decoder.decodeStruct(codec.Int32);
    val.timestamp = decoder.decodeStructPointer(time$.TimeTicks);
    val.latency = decoder.decodeStructPointer(latency_info$.LatencyInfo);
    val.keyData = decoder.decodeStructPointer(KeyData);
    val.pointerData = decoder.decodeStructPointer(PointerData);
    val.gestureData = decoder.decodeStructPointer(GestureData);
    val.touchData = decoder.decodeStructPointer(TouchData);
    return val;
  };

  Event.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Event.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Int32, val.modifiers);
    encoder.encodeStructPointer(time$.TimeTicks, val.timestamp);
    encoder.encodeStructPointer(latency_info$.LatencyInfo, val.latency);
    encoder.encodeStructPointer(KeyData, val.keyData);
    encoder.encodeStructPointer(PointerData, val.pointerData);
    encoder.encodeStructPointer(GestureData, val.gestureData);
    encoder.encodeStructPointer(TouchData, val.touchData);
  };
  function TouchActionOptional(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TouchActionOptional.prototype.initDefaults_ = function() {
    this.touchAction = 0;
  };
  TouchActionOptional.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TouchActionOptional.generate = function(generator_) {
    var generated = new TouchActionOptional;
    generated.touchAction = generator_.generateEnum();
    return generated;
  };

  TouchActionOptional.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.touchAction = mutator_.mutateEnum(this.touchAction);
    }
    return this;
  };
  TouchActionOptional.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TouchActionOptional.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TouchActionOptional.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TouchActionOptional.validate = function(messageValidator, offset) {
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


    // validate TouchActionOptional.touchAction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, native_types$.TouchAction);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TouchActionOptional.encodedSize = codec.kStructHeaderSize + 8;

  TouchActionOptional.decode = function(decoder) {
    var packed;
    var val = new TouchActionOptional();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.touchAction = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TouchActionOptional.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TouchActionOptional.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.touchAction);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WidgetInputHandlerHost_CancelTouchTimeout_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandlerHost_CancelTouchTimeout_Params.prototype.initDefaults_ = function() {
  };
  WidgetInputHandlerHost_CancelTouchTimeout_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandlerHost_CancelTouchTimeout_Params.generate = function(generator_) {
    var generated = new WidgetInputHandlerHost_CancelTouchTimeout_Params;
    return generated;
  };

  WidgetInputHandlerHost_CancelTouchTimeout_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WidgetInputHandlerHost_CancelTouchTimeout_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandlerHost_CancelTouchTimeout_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandlerHost_CancelTouchTimeout_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandlerHost_CancelTouchTimeout_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandlerHost_CancelTouchTimeout_Params.encodedSize = codec.kStructHeaderSize + 0;

  WidgetInputHandlerHost_CancelTouchTimeout_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandlerHost_CancelTouchTimeout_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WidgetInputHandlerHost_CancelTouchTimeout_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandlerHost_CancelTouchTimeout_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WidgetInputHandlerHost_SetWhiteListedTouchAction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.prototype.initDefaults_ = function() {
    this.touchAction = 0;
    this.uniqueTouchEventId = 0;
    this.state = 0;
  };
  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.generate = function(generator_) {
    var generated = new WidgetInputHandlerHost_SetWhiteListedTouchAction_Params;
    generated.touchAction = generator_.generateEnum();
    generated.uniqueTouchEventId = generator_.generateUint32();
    generated.state = generator_.generateEnum();
    return generated;
  };

  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.touchAction = mutator_.mutateEnum(this.touchAction);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueTouchEventId = mutator_.mutateUint32(this.uniqueTouchEventId);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state);
    }
    return this;
  };
  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.touchAction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, native_types$.TouchAction);
    if (err !== validator.validationError.NONE)
        return err;



    // validate WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, native_types$.InputEventAckState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.encodedSize = codec.kStructHeaderSize + 16;

  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandlerHost_SetWhiteListedTouchAction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.touchAction = decoder.decodeStruct(codec.Int32);
    val.uniqueTouchEventId = decoder.decodeStruct(codec.Uint32);
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.touchAction);
    encoder.encodeStruct(codec.Uint32, val.uniqueTouchEventId);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WidgetInputHandlerHost_DidOverscroll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandlerHost_DidOverscroll_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  WidgetInputHandlerHost_DidOverscroll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandlerHost_DidOverscroll_Params.generate = function(generator_) {
    var generated = new WidgetInputHandlerHost_DidOverscroll_Params;
    generated.params = generator_.generateStruct(content.mojom.DidOverscrollParams, false);
    return generated;
  };

  WidgetInputHandlerHost_DidOverscroll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.DidOverscrollParams, false);
    }
    return this;
  };
  WidgetInputHandlerHost_DidOverscroll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandlerHost_DidOverscroll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandlerHost_DidOverscroll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandlerHost_DidOverscroll_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandlerHost_DidOverscroll_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, native_types$.DidOverscrollParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandlerHost_DidOverscroll_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandlerHost_DidOverscroll_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandlerHost_DidOverscroll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(native_types$.DidOverscrollParams);
    return val;
  };

  WidgetInputHandlerHost_DidOverscroll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandlerHost_DidOverscroll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(native_types$.DidOverscrollParams, val.params);
  };
  function WidgetInputHandlerHost_DidStopFlinging_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandlerHost_DidStopFlinging_Params.prototype.initDefaults_ = function() {
  };
  WidgetInputHandlerHost_DidStopFlinging_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandlerHost_DidStopFlinging_Params.generate = function(generator_) {
    var generated = new WidgetInputHandlerHost_DidStopFlinging_Params;
    return generated;
  };

  WidgetInputHandlerHost_DidStopFlinging_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WidgetInputHandlerHost_DidStopFlinging_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandlerHost_DidStopFlinging_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandlerHost_DidStopFlinging_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandlerHost_DidStopFlinging_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandlerHost_DidStopFlinging_Params.encodedSize = codec.kStructHeaderSize + 0;

  WidgetInputHandlerHost_DidStopFlinging_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandlerHost_DidStopFlinging_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WidgetInputHandlerHost_DidStopFlinging_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandlerHost_DidStopFlinging_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WidgetInputHandlerHost_DidStartScrollingViewport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandlerHost_DidStartScrollingViewport_Params.prototype.initDefaults_ = function() {
  };
  WidgetInputHandlerHost_DidStartScrollingViewport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandlerHost_DidStartScrollingViewport_Params.generate = function(generator_) {
    var generated = new WidgetInputHandlerHost_DidStartScrollingViewport_Params;
    return generated;
  };

  WidgetInputHandlerHost_DidStartScrollingViewport_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WidgetInputHandlerHost_DidStartScrollingViewport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandlerHost_DidStartScrollingViewport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandlerHost_DidStartScrollingViewport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandlerHost_DidStartScrollingViewport_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandlerHost_DidStartScrollingViewport_Params.encodedSize = codec.kStructHeaderSize + 0;

  WidgetInputHandlerHost_DidStartScrollingViewport_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandlerHost_DidStartScrollingViewport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WidgetInputHandlerHost_DidStartScrollingViewport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandlerHost_DidStartScrollingViewport_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WidgetInputHandlerHost_ImeCancelComposition_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandlerHost_ImeCancelComposition_Params.prototype.initDefaults_ = function() {
  };
  WidgetInputHandlerHost_ImeCancelComposition_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandlerHost_ImeCancelComposition_Params.generate = function(generator_) {
    var generated = new WidgetInputHandlerHost_ImeCancelComposition_Params;
    return generated;
  };

  WidgetInputHandlerHost_ImeCancelComposition_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WidgetInputHandlerHost_ImeCancelComposition_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandlerHost_ImeCancelComposition_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandlerHost_ImeCancelComposition_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandlerHost_ImeCancelComposition_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandlerHost_ImeCancelComposition_Params.encodedSize = codec.kStructHeaderSize + 0;

  WidgetInputHandlerHost_ImeCancelComposition_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandlerHost_ImeCancelComposition_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WidgetInputHandlerHost_ImeCancelComposition_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandlerHost_ImeCancelComposition_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WidgetInputHandlerHost_ImeCompositionRangeChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.prototype.initDefaults_ = function() {
    this.range = null;
    this.bounds = null;
  };
  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.generate = function(generator_) {
    var generated = new WidgetInputHandlerHost_ImeCompositionRangeChanged_Params;
    generated.range = generator_.generateStruct(gfx.mojom.Range, false);
    generated.bounds = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.Rect, false);
    });
    return generated;
  };

  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.range = mutator_.mutateStruct(gfx.mojom.Range, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateArray(this.bounds, function(val) {
        return mutator_.mutateStruct(gfx.mojom.Rect, false);
      });
    }
    return this;
  };
  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.range
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, range$.Range, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.bounds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(geometry$.Rect), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandlerHost_ImeCompositionRangeChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.range = decoder.decodeStructPointer(range$.Range);
    val.bounds = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Rect));
    return val;
  };

  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(range$.Range, val.range);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Rect), val.bounds);
  };
  function WidgetInputHandler_SetFocus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_SetFocus_Params.prototype.initDefaults_ = function() {
    this.focused = false;
  };
  WidgetInputHandler_SetFocus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_SetFocus_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_SetFocus_Params;
    generated.focused = generator_.generateBool();
    return generated;
  };

  WidgetInputHandler_SetFocus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.focused = mutator_.mutateBool(this.focused);
    }
    return this;
  };
  WidgetInputHandler_SetFocus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_SetFocus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_SetFocus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_SetFocus_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandler_SetFocus_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandler_SetFocus_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_SetFocus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.focused = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WidgetInputHandler_SetFocus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_SetFocus_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.focused & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WidgetInputHandler_MouseCaptureLost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_MouseCaptureLost_Params.prototype.initDefaults_ = function() {
  };
  WidgetInputHandler_MouseCaptureLost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_MouseCaptureLost_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_MouseCaptureLost_Params;
    return generated;
  };

  WidgetInputHandler_MouseCaptureLost_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WidgetInputHandler_MouseCaptureLost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_MouseCaptureLost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_MouseCaptureLost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_MouseCaptureLost_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandler_MouseCaptureLost_Params.encodedSize = codec.kStructHeaderSize + 0;

  WidgetInputHandler_MouseCaptureLost_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_MouseCaptureLost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WidgetInputHandler_MouseCaptureLost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_MouseCaptureLost_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.prototype.initDefaults_ = function() {
    this.commands = null;
  };
  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params;
    generated.commands = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.EditCommand, false);
    });
    return generated;
  };

  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.commands = mutator_.mutateArray(this.commands, function(val) {
        return mutator_.mutateStruct(content.mojom.EditCommand, false);
      });
    }
    return this;
  };
  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.commands
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(native_types$.EditCommand), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.commands = decoder.decodeArrayPointer(new codec.PointerTo(native_types$.EditCommand));
    return val;
  };

  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(native_types$.EditCommand), val.commands);
  };
  function WidgetInputHandler_CursorVisibilityChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_CursorVisibilityChanged_Params.prototype.initDefaults_ = function() {
    this.visible = false;
  };
  WidgetInputHandler_CursorVisibilityChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_CursorVisibilityChanged_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_CursorVisibilityChanged_Params;
    generated.visible = generator_.generateBool();
    return generated;
  };

  WidgetInputHandler_CursorVisibilityChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  WidgetInputHandler_CursorVisibilityChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_CursorVisibilityChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_CursorVisibilityChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_CursorVisibilityChanged_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandler_CursorVisibilityChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandler_CursorVisibilityChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_CursorVisibilityChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.visible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WidgetInputHandler_CursorVisibilityChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_CursorVisibilityChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.visible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WidgetInputHandler_ImeSetComposition_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_ImeSetComposition_Params.prototype.initDefaults_ = function() {
    this.text = null;
    this.imeTextSpans = null;
    this.range = null;
    this.start = 0;
    this.end = 0;
  };
  WidgetInputHandler_ImeSetComposition_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_ImeSetComposition_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_ImeSetComposition_Params;
    generated.text = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.imeTextSpans = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.ImeTextSpan, false);
    });
    generated.range = generator_.generateStruct(gfx.mojom.Range, false);
    generated.start = generator_.generateInt32();
    generated.end = generator_.generateInt32();
    return generated;
  };

  WidgetInputHandler_ImeSetComposition_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.imeTextSpans = mutator_.mutateArray(this.imeTextSpans, function(val) {
        return mutator_.mutateStruct(ui.mojom.ImeTextSpan, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.range = mutator_.mutateStruct(gfx.mojom.Range, false);
    }
    if (mutator_.chooseMutateField()) {
      this.start = mutator_.mutateInt32(this.start);
    }
    if (mutator_.chooseMutateField()) {
      this.end = mutator_.mutateInt32(this.end);
    }
    return this;
  };
  WidgetInputHandler_ImeSetComposition_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_ImeSetComposition_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_ImeSetComposition_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_ImeSetComposition_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandler_ImeSetComposition_Params.text
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_ImeSetComposition_Params.imeTextSpans
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(ime$.ImeTextSpan), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_ImeSetComposition_Params.range
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, range$.Range, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WidgetInputHandler_ImeSetComposition_Params.encodedSize = codec.kStructHeaderSize + 32;

  WidgetInputHandler_ImeSetComposition_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_ImeSetComposition_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStructPointer(string16$.String16);
    val.imeTextSpans = decoder.decodeArrayPointer(new codec.PointerTo(ime$.ImeTextSpan));
    val.range = decoder.decodeStructPointer(range$.Range);
    val.start = decoder.decodeStruct(codec.Int32);
    val.end = decoder.decodeStruct(codec.Int32);
    return val;
  };

  WidgetInputHandler_ImeSetComposition_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_ImeSetComposition_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.text);
    encoder.encodeArrayPointer(new codec.PointerTo(ime$.ImeTextSpan), val.imeTextSpans);
    encoder.encodeStructPointer(range$.Range, val.range);
    encoder.encodeStruct(codec.Int32, val.start);
    encoder.encodeStruct(codec.Int32, val.end);
  };
  function WidgetInputHandler_ImeCommitText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_ImeCommitText_Params.prototype.initDefaults_ = function() {
    this.text = null;
    this.imeTextSpans = null;
    this.range = null;
    this.relativeCursorPosition = 0;
  };
  WidgetInputHandler_ImeCommitText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_ImeCommitText_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_ImeCommitText_Params;
    generated.text = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.imeTextSpans = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.ImeTextSpan, false);
    });
    generated.range = generator_.generateStruct(gfx.mojom.Range, false);
    generated.relativeCursorPosition = generator_.generateInt32();
    return generated;
  };

  WidgetInputHandler_ImeCommitText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.imeTextSpans = mutator_.mutateArray(this.imeTextSpans, function(val) {
        return mutator_.mutateStruct(ui.mojom.ImeTextSpan, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.range = mutator_.mutateStruct(gfx.mojom.Range, false);
    }
    if (mutator_.chooseMutateField()) {
      this.relativeCursorPosition = mutator_.mutateInt32(this.relativeCursorPosition);
    }
    return this;
  };
  WidgetInputHandler_ImeCommitText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_ImeCommitText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_ImeCommitText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_ImeCommitText_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandler_ImeCommitText_Params.text
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_ImeCommitText_Params.imeTextSpans
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(ime$.ImeTextSpan), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_ImeCommitText_Params.range
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, range$.Range, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WidgetInputHandler_ImeCommitText_Params.encodedSize = codec.kStructHeaderSize + 32;

  WidgetInputHandler_ImeCommitText_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_ImeCommitText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStructPointer(string16$.String16);
    val.imeTextSpans = decoder.decodeArrayPointer(new codec.PointerTo(ime$.ImeTextSpan));
    val.range = decoder.decodeStructPointer(range$.Range);
    val.relativeCursorPosition = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WidgetInputHandler_ImeCommitText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_ImeCommitText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.text);
    encoder.encodeArrayPointer(new codec.PointerTo(ime$.ImeTextSpan), val.imeTextSpans);
    encoder.encodeStructPointer(range$.Range, val.range);
    encoder.encodeStruct(codec.Int32, val.relativeCursorPosition);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WidgetInputHandler_ImeFinishComposingText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_ImeFinishComposingText_Params.prototype.initDefaults_ = function() {
    this.keepSelection = false;
  };
  WidgetInputHandler_ImeFinishComposingText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_ImeFinishComposingText_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_ImeFinishComposingText_Params;
    generated.keepSelection = generator_.generateBool();
    return generated;
  };

  WidgetInputHandler_ImeFinishComposingText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keepSelection = mutator_.mutateBool(this.keepSelection);
    }
    return this;
  };
  WidgetInputHandler_ImeFinishComposingText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_ImeFinishComposingText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_ImeFinishComposingText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_ImeFinishComposingText_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandler_ImeFinishComposingText_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandler_ImeFinishComposingText_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_ImeFinishComposingText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.keepSelection = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WidgetInputHandler_ImeFinishComposingText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_ImeFinishComposingText_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.keepSelection & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WidgetInputHandler_RequestTextInputStateUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_RequestTextInputStateUpdate_Params.prototype.initDefaults_ = function() {
  };
  WidgetInputHandler_RequestTextInputStateUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_RequestTextInputStateUpdate_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_RequestTextInputStateUpdate_Params;
    return generated;
  };

  WidgetInputHandler_RequestTextInputStateUpdate_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WidgetInputHandler_RequestTextInputStateUpdate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_RequestTextInputStateUpdate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_RequestTextInputStateUpdate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_RequestTextInputStateUpdate_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandler_RequestTextInputStateUpdate_Params.encodedSize = codec.kStructHeaderSize + 0;

  WidgetInputHandler_RequestTextInputStateUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_RequestTextInputStateUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WidgetInputHandler_RequestTextInputStateUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_RequestTextInputStateUpdate_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WidgetInputHandler_RequestCompositionUpdates_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_RequestCompositionUpdates_Params.prototype.initDefaults_ = function() {
    this.immediateRequest = false;
    this.monitorRequest = false;
  };
  WidgetInputHandler_RequestCompositionUpdates_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_RequestCompositionUpdates_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_RequestCompositionUpdates_Params;
    generated.immediateRequest = generator_.generateBool();
    generated.monitorRequest = generator_.generateBool();
    return generated;
  };

  WidgetInputHandler_RequestCompositionUpdates_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.immediateRequest = mutator_.mutateBool(this.immediateRequest);
    }
    if (mutator_.chooseMutateField()) {
      this.monitorRequest = mutator_.mutateBool(this.monitorRequest);
    }
    return this;
  };
  WidgetInputHandler_RequestCompositionUpdates_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_RequestCompositionUpdates_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_RequestCompositionUpdates_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_RequestCompositionUpdates_Params.validate = function(messageValidator, offset) {
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

  WidgetInputHandler_RequestCompositionUpdates_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandler_RequestCompositionUpdates_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_RequestCompositionUpdates_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.immediateRequest = (packed >> 0) & 1 ? true : false;
    val.monitorRequest = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WidgetInputHandler_RequestCompositionUpdates_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_RequestCompositionUpdates_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.immediateRequest & 1) << 0
    packed |= (val.monitorRequest & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WidgetInputHandler_DispatchEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_DispatchEvent_Params.prototype.initDefaults_ = function() {
    this.event = null;
  };
  WidgetInputHandler_DispatchEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_DispatchEvent_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_DispatchEvent_Params;
    generated.event = generator_.generateStruct(content.mojom.Event, false);
    return generated;
  };

  WidgetInputHandler_DispatchEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(content.mojom.Event, false);
    }
    return this;
  };
  WidgetInputHandler_DispatchEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_DispatchEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_DispatchEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_DispatchEvent_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandler_DispatchEvent_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandler_DispatchEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandler_DispatchEvent_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_DispatchEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(Event);
    return val;
  };

  WidgetInputHandler_DispatchEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_DispatchEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Event, val.event);
  };
  function WidgetInputHandler_DispatchEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_DispatchEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.source = 0;
    this.state = 0;
    this.updatedLatency = null;
    this.overscroll = null;
    this.touchAction = null;
  };
  WidgetInputHandler_DispatchEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_DispatchEvent_ResponseParams.generate = function(generator_) {
    var generated = new WidgetInputHandler_DispatchEvent_ResponseParams;
    generated.source = generator_.generateEnum();
    generated.updatedLatency = generator_.generateStruct(ui.mojom.LatencyInfo, false);
    generated.state = generator_.generateEnum();
    generated.overscroll = generator_.generateStruct(content.mojom.DidOverscrollParams, true);
    generated.touchAction = generator_.generateStruct(content.mojom.TouchActionOptional, true);
    return generated;
  };

  WidgetInputHandler_DispatchEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateEnum(this.source);
    }
    if (mutator_.chooseMutateField()) {
      this.updatedLatency = mutator_.mutateStruct(ui.mojom.LatencyInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state);
    }
    if (mutator_.chooseMutateField()) {
      this.overscroll = mutator_.mutateStruct(content.mojom.DidOverscrollParams, true);
    }
    if (mutator_.chooseMutateField()) {
      this.touchAction = mutator_.mutateStruct(content.mojom.TouchActionOptional, true);
    }
    return this;
  };
  WidgetInputHandler_DispatchEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_DispatchEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_DispatchEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_DispatchEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandler_DispatchEvent_ResponseParams.source
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, native_types$.InputEventAckSource);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_DispatchEvent_ResponseParams.updatedLatency
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, latency_info$.LatencyInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_DispatchEvent_ResponseParams.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, native_types$.InputEventAckState);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_DispatchEvent_ResponseParams.overscroll
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, native_types$.DidOverscrollParams, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_DispatchEvent_ResponseParams.touchAction
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, TouchActionOptional, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandler_DispatchEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 32;

  WidgetInputHandler_DispatchEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_DispatchEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.Int32);
    val.state = decoder.decodeStruct(codec.Int32);
    val.updatedLatency = decoder.decodeStructPointer(latency_info$.LatencyInfo);
    val.overscroll = decoder.decodeStructPointer(native_types$.DidOverscrollParams);
    val.touchAction = decoder.decodeStructPointer(TouchActionOptional);
    return val;
  };

  WidgetInputHandler_DispatchEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_DispatchEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.source);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.encodeStructPointer(latency_info$.LatencyInfo, val.updatedLatency);
    encoder.encodeStructPointer(native_types$.DidOverscrollParams, val.overscroll);
    encoder.encodeStructPointer(TouchActionOptional, val.touchAction);
  };
  function WidgetInputHandler_DispatchNonBlockingEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_DispatchNonBlockingEvent_Params.prototype.initDefaults_ = function() {
    this.event = null;
  };
  WidgetInputHandler_DispatchNonBlockingEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_DispatchNonBlockingEvent_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_DispatchNonBlockingEvent_Params;
    generated.event = generator_.generateStruct(content.mojom.Event, false);
    return generated;
  };

  WidgetInputHandler_DispatchNonBlockingEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(content.mojom.Event, false);
    }
    return this;
  };
  WidgetInputHandler_DispatchNonBlockingEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WidgetInputHandler_DispatchNonBlockingEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_DispatchNonBlockingEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WidgetInputHandler_DispatchNonBlockingEvent_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandler_DispatchNonBlockingEvent_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandler_DispatchNonBlockingEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  WidgetInputHandler_DispatchNonBlockingEvent_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_DispatchNonBlockingEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(Event);
    return val;
  };

  WidgetInputHandler_DispatchNonBlockingEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_DispatchNonBlockingEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Event, val.event);
  };
  function WidgetInputHandler_AttachSynchronousCompositor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WidgetInputHandler_AttachSynchronousCompositor_Params.prototype.initDefaults_ = function() {
    this.controlHost = new synchronous_compositor$.SynchronousCompositorControlHostPtr();
    this.host = new associatedBindings.AssociatedInterfacePtrInfo();
    this.compositorRequest = new associatedBindings.AssociatedInterfaceRequest();
  };
  WidgetInputHandler_AttachSynchronousCompositor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WidgetInputHandler_AttachSynchronousCompositor_Params.generate = function(generator_) {
    var generated = new WidgetInputHandler_AttachSynchronousCompositor_Params;
    generated.controlHost = generator_.generateInterface("content.mojom.SynchronousCompositorControlHost", false);
    generated.host = generator_.generateAssociatedInterface("content.mojom.SynchronousCompositorHost", false);
    generated.compositorRequest = generator_.generateAssociatedInterfaceRequest("content.mojom.SynchronousCompositor", false);
    return generated;
  };

  WidgetInputHandler_AttachSynchronousCompositor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.controlHost = mutator_.mutateInterface(this.controlHost, "content.mojom.SynchronousCompositorControlHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateAssociatedInterface(this.host, "content.mojom.SynchronousCompositorHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorRequest = mutator_.mutateAssociatedInterfaceRequest(this.compositorRequest, "content.mojom.SynchronousCompositor", false);
    }
    return this;
  };
  WidgetInputHandler_AttachSynchronousCompositor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.controlHost !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SynchronousCompositorControlHostPtr"]);
    }
    if (this.host !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SynchronousCompositorHostAssociatedPtr"]);
    }
    if (this.compositorRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SynchronousCompositorAssociatedRequest"]);
    }
    return handles;
  };

  WidgetInputHandler_AttachSynchronousCompositor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WidgetInputHandler_AttachSynchronousCompositor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.controlHost = handles[idx++];;
    this.host = handles[idx++];;
    this.compositorRequest = handles[idx++];;
    return idx;
  };

  WidgetInputHandler_AttachSynchronousCompositor_Params.validate = function(messageValidator, offset) {
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


    // validate WidgetInputHandler_AttachSynchronousCompositor_Params.controlHost
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_AttachSynchronousCompositor_Params.host
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WidgetInputHandler_AttachSynchronousCompositor_Params.compositorRequest
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WidgetInputHandler_AttachSynchronousCompositor_Params.encodedSize = codec.kStructHeaderSize + 24;

  WidgetInputHandler_AttachSynchronousCompositor_Params.decode = function(decoder) {
    var packed;
    var val = new WidgetInputHandler_AttachSynchronousCompositor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.controlHost = decoder.decodeStruct(new codec.Interface(synchronous_compositor$.SynchronousCompositorControlHostPtr));
    val.host = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.compositorRequest = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WidgetInputHandler_AttachSynchronousCompositor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WidgetInputHandler_AttachSynchronousCompositor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(synchronous_compositor$.SynchronousCompositorControlHostPtr), val.controlHost);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.host);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.compositorRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameInputHandler_SetCompositionFromExistingText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_SetCompositionFromExistingText_Params.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
    this.imeTextSpans = null;
  };
  FrameInputHandler_SetCompositionFromExistingText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_SetCompositionFromExistingText_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_SetCompositionFromExistingText_Params;
    generated.start = generator_.generateInt32();
    generated.end = generator_.generateInt32();
    generated.imeTextSpans = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.ImeTextSpan, false);
    });
    return generated;
  };

  FrameInputHandler_SetCompositionFromExistingText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.start = mutator_.mutateInt32(this.start);
    }
    if (mutator_.chooseMutateField()) {
      this.end = mutator_.mutateInt32(this.end);
    }
    if (mutator_.chooseMutateField()) {
      this.imeTextSpans = mutator_.mutateArray(this.imeTextSpans, function(val) {
        return mutator_.mutateStruct(ui.mojom.ImeTextSpan, false);
      });
    }
    return this;
  };
  FrameInputHandler_SetCompositionFromExistingText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_SetCompositionFromExistingText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_SetCompositionFromExistingText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_SetCompositionFromExistingText_Params.validate = function(messageValidator, offset) {
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




    // validate FrameInputHandler_SetCompositionFromExistingText_Params.imeTextSpans
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(ime$.ImeTextSpan), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_SetCompositionFromExistingText_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameInputHandler_SetCompositionFromExistingText_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_SetCompositionFromExistingText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Int32);
    val.end = decoder.decodeStruct(codec.Int32);
    val.imeTextSpans = decoder.decodeArrayPointer(new codec.PointerTo(ime$.ImeTextSpan));
    return val;
  };

  FrameInputHandler_SetCompositionFromExistingText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_SetCompositionFromExistingText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.start);
    encoder.encodeStruct(codec.Int32, val.end);
    encoder.encodeArrayPointer(new codec.PointerTo(ime$.ImeTextSpan), val.imeTextSpans);
  };
  function FrameInputHandler_ExtendSelectionAndDelete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_ExtendSelectionAndDelete_Params.prototype.initDefaults_ = function() {
    this.before = 0;
    this.after = 0;
  };
  FrameInputHandler_ExtendSelectionAndDelete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_ExtendSelectionAndDelete_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_ExtendSelectionAndDelete_Params;
    generated.before = generator_.generateInt32();
    generated.after = generator_.generateInt32();
    return generated;
  };

  FrameInputHandler_ExtendSelectionAndDelete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.before = mutator_.mutateInt32(this.before);
    }
    if (mutator_.chooseMutateField()) {
      this.after = mutator_.mutateInt32(this.after);
    }
    return this;
  };
  FrameInputHandler_ExtendSelectionAndDelete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_ExtendSelectionAndDelete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_ExtendSelectionAndDelete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_ExtendSelectionAndDelete_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_ExtendSelectionAndDelete_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_ExtendSelectionAndDelete_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_ExtendSelectionAndDelete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.before = decoder.decodeStruct(codec.Int32);
    val.after = decoder.decodeStruct(codec.Int32);
    return val;
  };

  FrameInputHandler_ExtendSelectionAndDelete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_ExtendSelectionAndDelete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.before);
    encoder.encodeStruct(codec.Int32, val.after);
  };
  function FrameInputHandler_DeleteSurroundingText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_DeleteSurroundingText_Params.prototype.initDefaults_ = function() {
    this.before = 0;
    this.after = 0;
  };
  FrameInputHandler_DeleteSurroundingText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_DeleteSurroundingText_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_DeleteSurroundingText_Params;
    generated.before = generator_.generateInt32();
    generated.after = generator_.generateInt32();
    return generated;
  };

  FrameInputHandler_DeleteSurroundingText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.before = mutator_.mutateInt32(this.before);
    }
    if (mutator_.chooseMutateField()) {
      this.after = mutator_.mutateInt32(this.after);
    }
    return this;
  };
  FrameInputHandler_DeleteSurroundingText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_DeleteSurroundingText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_DeleteSurroundingText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_DeleteSurroundingText_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_DeleteSurroundingText_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_DeleteSurroundingText_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_DeleteSurroundingText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.before = decoder.decodeStruct(codec.Int32);
    val.after = decoder.decodeStruct(codec.Int32);
    return val;
  };

  FrameInputHandler_DeleteSurroundingText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_DeleteSurroundingText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.before);
    encoder.encodeStruct(codec.Int32, val.after);
  };
  function FrameInputHandler_DeleteSurroundingTextInCodePoints_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.prototype.initDefaults_ = function() {
    this.before = 0;
    this.after = 0;
  };
  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_DeleteSurroundingTextInCodePoints_Params;
    generated.before = generator_.generateInt32();
    generated.after = generator_.generateInt32();
    return generated;
  };

  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.before = mutator_.mutateInt32(this.before);
    }
    if (mutator_.chooseMutateField()) {
      this.after = mutator_.mutateInt32(this.after);
    }
    return this;
  };
  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_DeleteSurroundingTextInCodePoints_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.before = decoder.decodeStruct(codec.Int32);
    val.after = decoder.decodeStruct(codec.Int32);
    return val;
  };

  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.before);
    encoder.encodeStruct(codec.Int32, val.after);
  };
  function FrameInputHandler_SetEditableSelectionOffsets_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_SetEditableSelectionOffsets_Params.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
  };
  FrameInputHandler_SetEditableSelectionOffsets_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_SetEditableSelectionOffsets_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_SetEditableSelectionOffsets_Params;
    generated.start = generator_.generateInt32();
    generated.end = generator_.generateInt32();
    return generated;
  };

  FrameInputHandler_SetEditableSelectionOffsets_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.start = mutator_.mutateInt32(this.start);
    }
    if (mutator_.chooseMutateField()) {
      this.end = mutator_.mutateInt32(this.end);
    }
    return this;
  };
  FrameInputHandler_SetEditableSelectionOffsets_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_SetEditableSelectionOffsets_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_SetEditableSelectionOffsets_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_SetEditableSelectionOffsets_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_SetEditableSelectionOffsets_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_SetEditableSelectionOffsets_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_SetEditableSelectionOffsets_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Int32);
    val.end = decoder.decodeStruct(codec.Int32);
    return val;
  };

  FrameInputHandler_SetEditableSelectionOffsets_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_SetEditableSelectionOffsets_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.start);
    encoder.encodeStruct(codec.Int32, val.end);
  };
  function FrameInputHandler_ExecuteEditCommand_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_ExecuteEditCommand_Params.prototype.initDefaults_ = function() {
    this.command = null;
    this.value = null;
  };
  FrameInputHandler_ExecuteEditCommand_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_ExecuteEditCommand_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_ExecuteEditCommand_Params;
    generated.command = generator_.generateString(false);
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, true);
    return generated;
  };

  FrameInputHandler_ExecuteEditCommand_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.command = mutator_.mutateString(this.command, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    return this;
  };
  FrameInputHandler_ExecuteEditCommand_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_ExecuteEditCommand_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_ExecuteEditCommand_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_ExecuteEditCommand_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_ExecuteEditCommand_Params.command
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameInputHandler_ExecuteEditCommand_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_ExecuteEditCommand_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameInputHandler_ExecuteEditCommand_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_ExecuteEditCommand_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.command = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  FrameInputHandler_ExecuteEditCommand_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_ExecuteEditCommand_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.command);
    encoder.encodeStructPointer(string16$.String16, val.value);
  };
  function FrameInputHandler_Undo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_Undo_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_Undo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_Undo_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_Undo_Params;
    return generated;
  };

  FrameInputHandler_Undo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_Undo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_Undo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_Undo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_Undo_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_Undo_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_Undo_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_Undo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_Undo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_Undo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_Redo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_Redo_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_Redo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_Redo_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_Redo_Params;
    return generated;
  };

  FrameInputHandler_Redo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_Redo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_Redo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_Redo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_Redo_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_Redo_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_Redo_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_Redo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_Redo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_Redo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_Cut_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_Cut_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_Cut_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_Cut_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_Cut_Params;
    return generated;
  };

  FrameInputHandler_Cut_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_Cut_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_Cut_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_Cut_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_Cut_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_Cut_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_Cut_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_Cut_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_Cut_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_Cut_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_Copy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_Copy_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_Copy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_Copy_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_Copy_Params;
    return generated;
  };

  FrameInputHandler_Copy_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_Copy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_Copy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_Copy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_Copy_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_Copy_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_Copy_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_Copy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_Copy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_Copy_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_CopyToFindPboard_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_CopyToFindPboard_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_CopyToFindPboard_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_CopyToFindPboard_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_CopyToFindPboard_Params;
    return generated;
  };

  FrameInputHandler_CopyToFindPboard_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_CopyToFindPboard_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_CopyToFindPboard_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_CopyToFindPboard_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_CopyToFindPboard_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_CopyToFindPboard_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_CopyToFindPboard_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_CopyToFindPboard_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_CopyToFindPboard_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_CopyToFindPboard_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_Paste_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_Paste_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_Paste_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_Paste_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_Paste_Params;
    return generated;
  };

  FrameInputHandler_Paste_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_Paste_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_Paste_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_Paste_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_Paste_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_Paste_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_Paste_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_Paste_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_Paste_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_Paste_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_PasteAndMatchStyle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_PasteAndMatchStyle_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_PasteAndMatchStyle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_PasteAndMatchStyle_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_PasteAndMatchStyle_Params;
    return generated;
  };

  FrameInputHandler_PasteAndMatchStyle_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_PasteAndMatchStyle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_PasteAndMatchStyle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_PasteAndMatchStyle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_PasteAndMatchStyle_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_PasteAndMatchStyle_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_PasteAndMatchStyle_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_PasteAndMatchStyle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_PasteAndMatchStyle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_PasteAndMatchStyle_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_Delete_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_Delete_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_Delete_Params;
    return generated;
  };

  FrameInputHandler_Delete_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_Delete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_Delete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_Delete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_Delete_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_Delete_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_Delete_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_SelectAll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_SelectAll_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_SelectAll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_SelectAll_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_SelectAll_Params;
    return generated;
  };

  FrameInputHandler_SelectAll_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_SelectAll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_SelectAll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_SelectAll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_SelectAll_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_SelectAll_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_SelectAll_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_SelectAll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_SelectAll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_SelectAll_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_CollapseSelection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_CollapseSelection_Params.prototype.initDefaults_ = function() {
  };
  FrameInputHandler_CollapseSelection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_CollapseSelection_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_CollapseSelection_Params;
    return generated;
  };

  FrameInputHandler_CollapseSelection_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameInputHandler_CollapseSelection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_CollapseSelection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_CollapseSelection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_CollapseSelection_Params.validate = function(messageValidator, offset) {
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

  FrameInputHandler_CollapseSelection_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameInputHandler_CollapseSelection_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_CollapseSelection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameInputHandler_CollapseSelection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_CollapseSelection_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameInputHandler_Replace_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_Replace_Params.prototype.initDefaults_ = function() {
    this.word = null;
  };
  FrameInputHandler_Replace_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_Replace_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_Replace_Params;
    generated.word = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  FrameInputHandler_Replace_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.word = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  FrameInputHandler_Replace_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_Replace_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_Replace_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_Replace_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_Replace_Params.word
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_Replace_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_Replace_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_Replace_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.word = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  FrameInputHandler_Replace_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_Replace_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.word);
  };
  function FrameInputHandler_ReplaceMisspelling_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_ReplaceMisspelling_Params.prototype.initDefaults_ = function() {
    this.word = null;
  };
  FrameInputHandler_ReplaceMisspelling_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_ReplaceMisspelling_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_ReplaceMisspelling_Params;
    generated.word = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  FrameInputHandler_ReplaceMisspelling_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.word = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  FrameInputHandler_ReplaceMisspelling_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_ReplaceMisspelling_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_ReplaceMisspelling_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_ReplaceMisspelling_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_ReplaceMisspelling_Params.word
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_ReplaceMisspelling_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_ReplaceMisspelling_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_ReplaceMisspelling_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.word = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  FrameInputHandler_ReplaceMisspelling_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_ReplaceMisspelling_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.word);
  };
  function FrameInputHandler_SelectRange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_SelectRange_Params.prototype.initDefaults_ = function() {
    this.base = null;
    this.extent = null;
  };
  FrameInputHandler_SelectRange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_SelectRange_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_SelectRange_Params;
    generated.base = generator_.generateStruct(gfx.mojom.Point, false);
    generated.extent = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  FrameInputHandler_SelectRange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.base = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.extent = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  FrameInputHandler_SelectRange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_SelectRange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_SelectRange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_SelectRange_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_SelectRange_Params.base
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameInputHandler_SelectRange_Params.extent
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_SelectRange_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameInputHandler_SelectRange_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_SelectRange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.base = decoder.decodeStructPointer(geometry$.Point);
    val.extent = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  FrameInputHandler_SelectRange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_SelectRange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Point, val.base);
    encoder.encodeStructPointer(geometry$.Point, val.extent);
  };
  function FrameInputHandler_AdjustSelectionByCharacterOffset_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
    this.behavior = 0;
  };
  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_AdjustSelectionByCharacterOffset_Params;
    generated.start = generator_.generateInt32();
    generated.end = generator_.generateInt32();
    generated.behavior = generator_.generateEnum(0, 1);
    return generated;
  };

  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.start = mutator_.mutateInt32(this.start);
    }
    if (mutator_.chooseMutateField()) {
      this.end = mutator_.mutateInt32(this.end);
    }
    if (mutator_.chooseMutateField()) {
      this.behavior = mutator_.mutateEnum(this.behavior, 0, 1);
    }
    return this;
  };
  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.validate = function(messageValidator, offset) {
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




    // validate FrameInputHandler_AdjustSelectionByCharacterOffset_Params.behavior
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, selection_menu_behavior$.SelectionMenuBehavior);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_AdjustSelectionByCharacterOffset_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Int32);
    val.end = decoder.decodeStruct(codec.Int32);
    val.behavior = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameInputHandler_AdjustSelectionByCharacterOffset_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_AdjustSelectionByCharacterOffset_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.start);
    encoder.encodeStruct(codec.Int32, val.end);
    encoder.encodeStruct(codec.Int32, val.behavior);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameInputHandler_MoveRangeSelectionExtent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_MoveRangeSelectionExtent_Params.prototype.initDefaults_ = function() {
    this.extent = null;
  };
  FrameInputHandler_MoveRangeSelectionExtent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_MoveRangeSelectionExtent_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_MoveRangeSelectionExtent_Params;
    generated.extent = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  FrameInputHandler_MoveRangeSelectionExtent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.extent = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  FrameInputHandler_MoveRangeSelectionExtent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_MoveRangeSelectionExtent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_MoveRangeSelectionExtent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_MoveRangeSelectionExtent_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_MoveRangeSelectionExtent_Params.extent
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_MoveRangeSelectionExtent_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_MoveRangeSelectionExtent_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_MoveRangeSelectionExtent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.extent = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  FrameInputHandler_MoveRangeSelectionExtent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_MoveRangeSelectionExtent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Point, val.extent);
  };
  function FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.prototype.initDefaults_ = function() {
    this.rect = null;
  };
  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params;
    generated.rect = generator_.generateStruct(gfx.mojom.Rect, false);
    return generated;
  };

  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    return this;
  };
  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rect = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.rect);
  };
  function FrameInputHandler_MoveCaret_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_MoveCaret_Params.prototype.initDefaults_ = function() {
    this.point = null;
  };
  FrameInputHandler_MoveCaret_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_MoveCaret_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_MoveCaret_Params;
    generated.point = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  FrameInputHandler_MoveCaret_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.point = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  FrameInputHandler_MoveCaret_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameInputHandler_MoveCaret_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_MoveCaret_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameInputHandler_MoveCaret_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_MoveCaret_Params.point
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_MoveCaret_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameInputHandler_MoveCaret_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_MoveCaret_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.point = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  FrameInputHandler_MoveCaret_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_MoveCaret_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Point, val.point);
  };
  function FrameInputHandler_GetWidgetInputHandler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameInputHandler_GetWidgetInputHandler_Params.prototype.initDefaults_ = function() {
    this.interfaceRequest = new associatedBindings.AssociatedInterfaceRequest();
    this.host = new WidgetInputHandlerHostPtr();
  };
  FrameInputHandler_GetWidgetInputHandler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameInputHandler_GetWidgetInputHandler_Params.generate = function(generator_) {
    var generated = new FrameInputHandler_GetWidgetInputHandler_Params;
    generated.interfaceRequest = generator_.generateAssociatedInterfaceRequest("content.mojom.WidgetInputHandler", false);
    generated.host = generator_.generateInterface("content.mojom.WidgetInputHandlerHost", false);
    return generated;
  };

  FrameInputHandler_GetWidgetInputHandler_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interfaceRequest = mutator_.mutateAssociatedInterfaceRequest(this.interfaceRequest, "content.mojom.WidgetInputHandler", false);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateInterface(this.host, "content.mojom.WidgetInputHandlerHost", false);
    }
    return this;
  };
  FrameInputHandler_GetWidgetInputHandler_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.interfaceRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.WidgetInputHandlerAssociatedRequest"]);
    }
    if (this.host !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.WidgetInputHandlerHostPtr"]);
    }
    return handles;
  };

  FrameInputHandler_GetWidgetInputHandler_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameInputHandler_GetWidgetInputHandler_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.interfaceRequest = handles[idx++];;
    this.host = handles[idx++];;
    return idx;
  };

  FrameInputHandler_GetWidgetInputHandler_Params.validate = function(messageValidator, offset) {
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


    // validate FrameInputHandler_GetWidgetInputHandler_Params.interfaceRequest
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameInputHandler_GetWidgetInputHandler_Params.host
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameInputHandler_GetWidgetInputHandler_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameInputHandler_GetWidgetInputHandler_Params.decode = function(decoder) {
    var packed;
    var val = new FrameInputHandler_GetWidgetInputHandler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaceRequest = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    val.host = decoder.decodeStruct(new codec.Interface(WidgetInputHandlerHostPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameInputHandler_GetWidgetInputHandler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameInputHandler_GetWidgetInputHandler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.interfaceRequest);
    encoder.encodeStruct(new codec.Interface(WidgetInputHandlerHostPtr), val.host);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWidgetInputHandlerHost_CancelTouchTimeout_Name = 1363612090;
  var kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name = 1855078617;
  var kWidgetInputHandlerHost_DidOverscroll_Name = 1120071619;
  var kWidgetInputHandlerHost_DidStopFlinging_Name = 481167471;
  var kWidgetInputHandlerHost_DidStartScrollingViewport_Name = 374382240;
  var kWidgetInputHandlerHost_ImeCancelComposition_Name = 101200975;
  var kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name = 1191434960;

  function WidgetInputHandlerHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WidgetInputHandlerHost,
                                                   handleOrPtrInfo);
  }

  function WidgetInputHandlerHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WidgetInputHandlerHost, associatedInterfacePtrInfo);
  }

  WidgetInputHandlerHostAssociatedPtr.prototype =
      Object.create(WidgetInputHandlerHostPtr.prototype);
  WidgetInputHandlerHostAssociatedPtr.prototype.constructor =
      WidgetInputHandlerHostAssociatedPtr;

  function WidgetInputHandlerHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  WidgetInputHandlerHostPtr.prototype.cancelTouchTimeout = function() {
    return WidgetInputHandlerHostProxy.prototype.cancelTouchTimeout
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerHostProxy.prototype.cancelTouchTimeout = function() {
    var params_ = new WidgetInputHandlerHost_CancelTouchTimeout_Params();
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandlerHost_CancelTouchTimeout_Name,
        codec.align(WidgetInputHandlerHost_CancelTouchTimeout_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandlerHost_CancelTouchTimeout_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerHostPtr.prototype.setWhiteListedTouchAction = function() {
    return WidgetInputHandlerHostProxy.prototype.setWhiteListedTouchAction
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerHostProxy.prototype.setWhiteListedTouchAction = function(touchAction, uniqueTouchEventId, state) {
    var params_ = new WidgetInputHandlerHost_SetWhiteListedTouchAction_Params();
    params_.touchAction = touchAction;
    params_.uniqueTouchEventId = uniqueTouchEventId;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name,
        codec.align(WidgetInputHandlerHost_SetWhiteListedTouchAction_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandlerHost_SetWhiteListedTouchAction_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerHostPtr.prototype.didOverscroll = function() {
    return WidgetInputHandlerHostProxy.prototype.didOverscroll
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerHostProxy.prototype.didOverscroll = function(params) {
    var params_ = new WidgetInputHandlerHost_DidOverscroll_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandlerHost_DidOverscroll_Name,
        codec.align(WidgetInputHandlerHost_DidOverscroll_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandlerHost_DidOverscroll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerHostPtr.prototype.didStopFlinging = function() {
    return WidgetInputHandlerHostProxy.prototype.didStopFlinging
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerHostProxy.prototype.didStopFlinging = function() {
    var params_ = new WidgetInputHandlerHost_DidStopFlinging_Params();
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandlerHost_DidStopFlinging_Name,
        codec.align(WidgetInputHandlerHost_DidStopFlinging_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandlerHost_DidStopFlinging_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerHostPtr.prototype.didStartScrollingViewport = function() {
    return WidgetInputHandlerHostProxy.prototype.didStartScrollingViewport
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerHostProxy.prototype.didStartScrollingViewport = function() {
    var params_ = new WidgetInputHandlerHost_DidStartScrollingViewport_Params();
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandlerHost_DidStartScrollingViewport_Name,
        codec.align(WidgetInputHandlerHost_DidStartScrollingViewport_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandlerHost_DidStartScrollingViewport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerHostPtr.prototype.imeCancelComposition = function() {
    return WidgetInputHandlerHostProxy.prototype.imeCancelComposition
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerHostProxy.prototype.imeCancelComposition = function() {
    var params_ = new WidgetInputHandlerHost_ImeCancelComposition_Params();
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandlerHost_ImeCancelComposition_Name,
        codec.align(WidgetInputHandlerHost_ImeCancelComposition_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandlerHost_ImeCancelComposition_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerHostPtr.prototype.imeCompositionRangeChanged = function() {
    return WidgetInputHandlerHostProxy.prototype.imeCompositionRangeChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerHostProxy.prototype.imeCompositionRangeChanged = function(range, bounds) {
    var params_ = new WidgetInputHandlerHost_ImeCompositionRangeChanged_Params();
    params_.range = range;
    params_.bounds = bounds;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name,
        codec.align(WidgetInputHandlerHost_ImeCompositionRangeChanged_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandlerHost_ImeCompositionRangeChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WidgetInputHandlerHostStub(delegate) {
    this.delegate_ = delegate;
  }
  WidgetInputHandlerHostStub.prototype.cancelTouchTimeout = function() {
    return this.delegate_ && this.delegate_.cancelTouchTimeout && this.delegate_.cancelTouchTimeout();
  }
  WidgetInputHandlerHostStub.prototype.setWhiteListedTouchAction = function(touchAction, uniqueTouchEventId, state) {
    return this.delegate_ && this.delegate_.setWhiteListedTouchAction && this.delegate_.setWhiteListedTouchAction(touchAction, uniqueTouchEventId, state);
  }
  WidgetInputHandlerHostStub.prototype.didOverscroll = function(params) {
    return this.delegate_ && this.delegate_.didOverscroll && this.delegate_.didOverscroll(params);
  }
  WidgetInputHandlerHostStub.prototype.didStopFlinging = function() {
    return this.delegate_ && this.delegate_.didStopFlinging && this.delegate_.didStopFlinging();
  }
  WidgetInputHandlerHostStub.prototype.didStartScrollingViewport = function() {
    return this.delegate_ && this.delegate_.didStartScrollingViewport && this.delegate_.didStartScrollingViewport();
  }
  WidgetInputHandlerHostStub.prototype.imeCancelComposition = function() {
    return this.delegate_ && this.delegate_.imeCancelComposition && this.delegate_.imeCancelComposition();
  }
  WidgetInputHandlerHostStub.prototype.imeCompositionRangeChanged = function(range, bounds) {
    return this.delegate_ && this.delegate_.imeCompositionRangeChanged && this.delegate_.imeCompositionRangeChanged(range, bounds);
  }

  WidgetInputHandlerHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWidgetInputHandlerHost_CancelTouchTimeout_Name:
      var params = reader.decodeStruct(WidgetInputHandlerHost_CancelTouchTimeout_Params);
      this.cancelTouchTimeout();
      return true;
    case kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name:
      var params = reader.decodeStruct(WidgetInputHandlerHost_SetWhiteListedTouchAction_Params);
      this.setWhiteListedTouchAction(params.touchAction, params.uniqueTouchEventId, params.state);
      return true;
    case kWidgetInputHandlerHost_DidOverscroll_Name:
      var params = reader.decodeStruct(WidgetInputHandlerHost_DidOverscroll_Params);
      this.didOverscroll(params.params);
      return true;
    case kWidgetInputHandlerHost_DidStopFlinging_Name:
      var params = reader.decodeStruct(WidgetInputHandlerHost_DidStopFlinging_Params);
      this.didStopFlinging();
      return true;
    case kWidgetInputHandlerHost_DidStartScrollingViewport_Name:
      var params = reader.decodeStruct(WidgetInputHandlerHost_DidStartScrollingViewport_Params);
      this.didStartScrollingViewport();
      return true;
    case kWidgetInputHandlerHost_ImeCancelComposition_Name:
      var params = reader.decodeStruct(WidgetInputHandlerHost_ImeCancelComposition_Params);
      this.imeCancelComposition();
      return true;
    case kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name:
      var params = reader.decodeStruct(WidgetInputHandlerHost_ImeCompositionRangeChanged_Params);
      this.imeCompositionRangeChanged(params.range, params.bounds);
      return true;
    default:
      return false;
    }
  };

  WidgetInputHandlerHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWidgetInputHandlerHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWidgetInputHandlerHost_CancelTouchTimeout_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandlerHost_CancelTouchTimeout_Params;
      break;
      case kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandlerHost_SetWhiteListedTouchAction_Params;
      break;
      case kWidgetInputHandlerHost_DidOverscroll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandlerHost_DidOverscroll_Params;
      break;
      case kWidgetInputHandlerHost_DidStopFlinging_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandlerHost_DidStopFlinging_Params;
      break;
      case kWidgetInputHandlerHost_DidStartScrollingViewport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandlerHost_DidStartScrollingViewport_Params;
      break;
      case kWidgetInputHandlerHost_ImeCancelComposition_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandlerHost_ImeCancelComposition_Params;
      break;
      case kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandlerHost_ImeCompositionRangeChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWidgetInputHandlerHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WidgetInputHandlerHost = {
    name: 'content.mojom.WidgetInputHandlerHost',
    kVersion: 0,
    ptrClass: WidgetInputHandlerHostPtr,
    proxyClass: WidgetInputHandlerHostProxy,
    stubClass: WidgetInputHandlerHostStub,
    validateRequest: validateWidgetInputHandlerHostRequest,
    validateResponse: null,
    mojomId: 'content/common/input/input_handler.mojom',
    fuzzMethods: {
      cancelTouchTimeout: {
        params: WidgetInputHandlerHost_CancelTouchTimeout_Params,
      },
      setWhiteListedTouchAction: {
        params: WidgetInputHandlerHost_SetWhiteListedTouchAction_Params,
      },
      didOverscroll: {
        params: WidgetInputHandlerHost_DidOverscroll_Params,
      },
      didStopFlinging: {
        params: WidgetInputHandlerHost_DidStopFlinging_Params,
      },
      didStartScrollingViewport: {
        params: WidgetInputHandlerHost_DidStartScrollingViewport_Params,
      },
      imeCancelComposition: {
        params: WidgetInputHandlerHost_ImeCancelComposition_Params,
      },
      imeCompositionRangeChanged: {
        params: WidgetInputHandlerHost_ImeCompositionRangeChanged_Params,
      },
    },
  };
  WidgetInputHandlerHostStub.prototype.validator = validateWidgetInputHandlerHostRequest;
  WidgetInputHandlerHostProxy.prototype.validator = null;
  var kWidgetInputHandler_SetFocus_Name = 344833781;
  var kWidgetInputHandler_MouseCaptureLost_Name = 576805990;
  var kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name = 1636237917;
  var kWidgetInputHandler_CursorVisibilityChanged_Name = 292536066;
  var kWidgetInputHandler_ImeSetComposition_Name = 746573975;
  var kWidgetInputHandler_ImeCommitText_Name = 1640565420;
  var kWidgetInputHandler_ImeFinishComposingText_Name = 1317839388;
  var kWidgetInputHandler_RequestTextInputStateUpdate_Name = 232750075;
  var kWidgetInputHandler_RequestCompositionUpdates_Name = 1310987914;
  var kWidgetInputHandler_DispatchEvent_Name = 152073011;
  var kWidgetInputHandler_DispatchNonBlockingEvent_Name = 946082215;
  var kWidgetInputHandler_AttachSynchronousCompositor_Name = 508453052;

  function WidgetInputHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WidgetInputHandler,
                                                   handleOrPtrInfo);
  }

  function WidgetInputHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WidgetInputHandler, associatedInterfacePtrInfo);
  }

  WidgetInputHandlerAssociatedPtr.prototype =
      Object.create(WidgetInputHandlerPtr.prototype);
  WidgetInputHandlerAssociatedPtr.prototype.constructor =
      WidgetInputHandlerAssociatedPtr;

  function WidgetInputHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  WidgetInputHandlerPtr.prototype.setFocus = function() {
    return WidgetInputHandlerProxy.prototype.setFocus
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.setFocus = function(focused) {
    var params_ = new WidgetInputHandler_SetFocus_Params();
    params_.focused = focused;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_SetFocus_Name,
        codec.align(WidgetInputHandler_SetFocus_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_SetFocus_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.mouseCaptureLost = function() {
    return WidgetInputHandlerProxy.prototype.mouseCaptureLost
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.mouseCaptureLost = function() {
    var params_ = new WidgetInputHandler_MouseCaptureLost_Params();
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_MouseCaptureLost_Name,
        codec.align(WidgetInputHandler_MouseCaptureLost_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_MouseCaptureLost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.setEditCommandsForNextKeyEvent = function() {
    return WidgetInputHandlerProxy.prototype.setEditCommandsForNextKeyEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.setEditCommandsForNextKeyEvent = function(commands) {
    var params_ = new WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params();
    params_.commands = commands;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name,
        codec.align(WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.cursorVisibilityChanged = function() {
    return WidgetInputHandlerProxy.prototype.cursorVisibilityChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.cursorVisibilityChanged = function(visible) {
    var params_ = new WidgetInputHandler_CursorVisibilityChanged_Params();
    params_.visible = visible;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_CursorVisibilityChanged_Name,
        codec.align(WidgetInputHandler_CursorVisibilityChanged_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_CursorVisibilityChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.imeSetComposition = function() {
    return WidgetInputHandlerProxy.prototype.imeSetComposition
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.imeSetComposition = function(text, imeTextSpans, range, start, end) {
    var params_ = new WidgetInputHandler_ImeSetComposition_Params();
    params_.text = text;
    params_.imeTextSpans = imeTextSpans;
    params_.range = range;
    params_.start = start;
    params_.end = end;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_ImeSetComposition_Name,
        codec.align(WidgetInputHandler_ImeSetComposition_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_ImeSetComposition_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.imeCommitText = function() {
    return WidgetInputHandlerProxy.prototype.imeCommitText
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.imeCommitText = function(text, imeTextSpans, range, relativeCursorPosition) {
    var params_ = new WidgetInputHandler_ImeCommitText_Params();
    params_.text = text;
    params_.imeTextSpans = imeTextSpans;
    params_.range = range;
    params_.relativeCursorPosition = relativeCursorPosition;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_ImeCommitText_Name,
        codec.align(WidgetInputHandler_ImeCommitText_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_ImeCommitText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.imeFinishComposingText = function() {
    return WidgetInputHandlerProxy.prototype.imeFinishComposingText
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.imeFinishComposingText = function(keepSelection) {
    var params_ = new WidgetInputHandler_ImeFinishComposingText_Params();
    params_.keepSelection = keepSelection;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_ImeFinishComposingText_Name,
        codec.align(WidgetInputHandler_ImeFinishComposingText_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_ImeFinishComposingText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.requestTextInputStateUpdate = function() {
    return WidgetInputHandlerProxy.prototype.requestTextInputStateUpdate
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.requestTextInputStateUpdate = function() {
    var params_ = new WidgetInputHandler_RequestTextInputStateUpdate_Params();
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_RequestTextInputStateUpdate_Name,
        codec.align(WidgetInputHandler_RequestTextInputStateUpdate_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_RequestTextInputStateUpdate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.requestCompositionUpdates = function() {
    return WidgetInputHandlerProxy.prototype.requestCompositionUpdates
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.requestCompositionUpdates = function(immediateRequest, monitorRequest) {
    var params_ = new WidgetInputHandler_RequestCompositionUpdates_Params();
    params_.immediateRequest = immediateRequest;
    params_.monitorRequest = monitorRequest;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_RequestCompositionUpdates_Name,
        codec.align(WidgetInputHandler_RequestCompositionUpdates_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_RequestCompositionUpdates_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.dispatchEvent = function() {
    return WidgetInputHandlerProxy.prototype.dispatchEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.dispatchEvent = function(event) {
    var params_ = new WidgetInputHandler_DispatchEvent_Params();
    params_.event = event;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWidgetInputHandler_DispatchEvent_Name,
          codec.align(WidgetInputHandler_DispatchEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WidgetInputHandler_DispatchEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WidgetInputHandler_DispatchEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WidgetInputHandlerPtr.prototype.dispatchNonBlockingEvent = function() {
    return WidgetInputHandlerProxy.prototype.dispatchNonBlockingEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.dispatchNonBlockingEvent = function(event) {
    var params_ = new WidgetInputHandler_DispatchNonBlockingEvent_Params();
    params_.event = event;
    var builder = new codec.MessageV0Builder(
        kWidgetInputHandler_DispatchNonBlockingEvent_Name,
        codec.align(WidgetInputHandler_DispatchNonBlockingEvent_Params.encodedSize));
    builder.encodeStruct(WidgetInputHandler_DispatchNonBlockingEvent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WidgetInputHandlerPtr.prototype.attachSynchronousCompositor = function() {
    return WidgetInputHandlerProxy.prototype.attachSynchronousCompositor
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetInputHandlerProxy.prototype.attachSynchronousCompositor = function(controlHost, host, compositorRequest) {
    var params_ = new WidgetInputHandler_AttachSynchronousCompositor_Params();
    params_.controlHost = controlHost;
    params_.host = host;
    params_.compositorRequest = compositorRequest;
    var builder = new codec.MessageV2Builder(
        kWidgetInputHandler_AttachSynchronousCompositor_Name,
        codec.align(WidgetInputHandler_AttachSynchronousCompositor_Params.encodedSize));
    builder.setPayload(WidgetInputHandler_AttachSynchronousCompositor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WidgetInputHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  WidgetInputHandlerStub.prototype.setFocus = function(focused) {
    return this.delegate_ && this.delegate_.setFocus && this.delegate_.setFocus(focused);
  }
  WidgetInputHandlerStub.prototype.mouseCaptureLost = function() {
    return this.delegate_ && this.delegate_.mouseCaptureLost && this.delegate_.mouseCaptureLost();
  }
  WidgetInputHandlerStub.prototype.setEditCommandsForNextKeyEvent = function(commands) {
    return this.delegate_ && this.delegate_.setEditCommandsForNextKeyEvent && this.delegate_.setEditCommandsForNextKeyEvent(commands);
  }
  WidgetInputHandlerStub.prototype.cursorVisibilityChanged = function(visible) {
    return this.delegate_ && this.delegate_.cursorVisibilityChanged && this.delegate_.cursorVisibilityChanged(visible);
  }
  WidgetInputHandlerStub.prototype.imeSetComposition = function(text, imeTextSpans, range, start, end) {
    return this.delegate_ && this.delegate_.imeSetComposition && this.delegate_.imeSetComposition(text, imeTextSpans, range, start, end);
  }
  WidgetInputHandlerStub.prototype.imeCommitText = function(text, imeTextSpans, range, relativeCursorPosition) {
    return this.delegate_ && this.delegate_.imeCommitText && this.delegate_.imeCommitText(text, imeTextSpans, range, relativeCursorPosition);
  }
  WidgetInputHandlerStub.prototype.imeFinishComposingText = function(keepSelection) {
    return this.delegate_ && this.delegate_.imeFinishComposingText && this.delegate_.imeFinishComposingText(keepSelection);
  }
  WidgetInputHandlerStub.prototype.requestTextInputStateUpdate = function() {
    return this.delegate_ && this.delegate_.requestTextInputStateUpdate && this.delegate_.requestTextInputStateUpdate();
  }
  WidgetInputHandlerStub.prototype.requestCompositionUpdates = function(immediateRequest, monitorRequest) {
    return this.delegate_ && this.delegate_.requestCompositionUpdates && this.delegate_.requestCompositionUpdates(immediateRequest, monitorRequest);
  }
  WidgetInputHandlerStub.prototype.dispatchEvent = function(event) {
    return this.delegate_ && this.delegate_.dispatchEvent && this.delegate_.dispatchEvent(event);
  }
  WidgetInputHandlerStub.prototype.dispatchNonBlockingEvent = function(event) {
    return this.delegate_ && this.delegate_.dispatchNonBlockingEvent && this.delegate_.dispatchNonBlockingEvent(event);
  }
  WidgetInputHandlerStub.prototype.attachSynchronousCompositor = function(controlHost, host, compositorRequest) {
    return this.delegate_ && this.delegate_.attachSynchronousCompositor && this.delegate_.attachSynchronousCompositor(controlHost, host, compositorRequest);
  }

  WidgetInputHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWidgetInputHandler_SetFocus_Name:
      var params = reader.decodeStruct(WidgetInputHandler_SetFocus_Params);
      this.setFocus(params.focused);
      return true;
    case kWidgetInputHandler_MouseCaptureLost_Name:
      var params = reader.decodeStruct(WidgetInputHandler_MouseCaptureLost_Params);
      this.mouseCaptureLost();
      return true;
    case kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name:
      var params = reader.decodeStruct(WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params);
      this.setEditCommandsForNextKeyEvent(params.commands);
      return true;
    case kWidgetInputHandler_CursorVisibilityChanged_Name:
      var params = reader.decodeStruct(WidgetInputHandler_CursorVisibilityChanged_Params);
      this.cursorVisibilityChanged(params.visible);
      return true;
    case kWidgetInputHandler_ImeSetComposition_Name:
      var params = reader.decodeStruct(WidgetInputHandler_ImeSetComposition_Params);
      this.imeSetComposition(params.text, params.imeTextSpans, params.range, params.start, params.end);
      return true;
    case kWidgetInputHandler_ImeCommitText_Name:
      var params = reader.decodeStruct(WidgetInputHandler_ImeCommitText_Params);
      this.imeCommitText(params.text, params.imeTextSpans, params.range, params.relativeCursorPosition);
      return true;
    case kWidgetInputHandler_ImeFinishComposingText_Name:
      var params = reader.decodeStruct(WidgetInputHandler_ImeFinishComposingText_Params);
      this.imeFinishComposingText(params.keepSelection);
      return true;
    case kWidgetInputHandler_RequestTextInputStateUpdate_Name:
      var params = reader.decodeStruct(WidgetInputHandler_RequestTextInputStateUpdate_Params);
      this.requestTextInputStateUpdate();
      return true;
    case kWidgetInputHandler_RequestCompositionUpdates_Name:
      var params = reader.decodeStruct(WidgetInputHandler_RequestCompositionUpdates_Params);
      this.requestCompositionUpdates(params.immediateRequest, params.monitorRequest);
      return true;
    case kWidgetInputHandler_DispatchNonBlockingEvent_Name:
      var params = reader.decodeStruct(WidgetInputHandler_DispatchNonBlockingEvent_Params);
      this.dispatchNonBlockingEvent(params.event);
      return true;
    case kWidgetInputHandler_AttachSynchronousCompositor_Name:
      var params = reader.decodeStruct(WidgetInputHandler_AttachSynchronousCompositor_Params);
      this.attachSynchronousCompositor(params.controlHost, params.host, params.compositorRequest);
      return true;
    default:
      return false;
    }
  };

  WidgetInputHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWidgetInputHandler_DispatchEvent_Name:
      var params = reader.decodeStruct(WidgetInputHandler_DispatchEvent_Params);
      this.dispatchEvent(params.event).then(function(response) {
        var responseParams =
            new WidgetInputHandler_DispatchEvent_ResponseParams();
        responseParams.source = response.source;
        responseParams.updatedLatency = response.updatedLatency;
        responseParams.state = response.state;
        responseParams.overscroll = response.overscroll;
        responseParams.touchAction = response.touchAction;
        var builder = new codec.MessageV1Builder(
            kWidgetInputHandler_DispatchEvent_Name,
            codec.align(WidgetInputHandler_DispatchEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WidgetInputHandler_DispatchEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWidgetInputHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWidgetInputHandler_SetFocus_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_SetFocus_Params;
      break;
      case kWidgetInputHandler_MouseCaptureLost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_MouseCaptureLost_Params;
      break;
      case kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params;
      break;
      case kWidgetInputHandler_CursorVisibilityChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_CursorVisibilityChanged_Params;
      break;
      case kWidgetInputHandler_ImeSetComposition_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_ImeSetComposition_Params;
      break;
      case kWidgetInputHandler_ImeCommitText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_ImeCommitText_Params;
      break;
      case kWidgetInputHandler_ImeFinishComposingText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_ImeFinishComposingText_Params;
      break;
      case kWidgetInputHandler_RequestTextInputStateUpdate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_RequestTextInputStateUpdate_Params;
      break;
      case kWidgetInputHandler_RequestCompositionUpdates_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_RequestCompositionUpdates_Params;
      break;
      case kWidgetInputHandler_DispatchEvent_Name:
        if (message.expectsResponse())
          paramsClass = WidgetInputHandler_DispatchEvent_Params;
      break;
      case kWidgetInputHandler_DispatchNonBlockingEvent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_DispatchNonBlockingEvent_Params;
      break;
      case kWidgetInputHandler_AttachSynchronousCompositor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WidgetInputHandler_AttachSynchronousCompositor_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWidgetInputHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWidgetInputHandler_DispatchEvent_Name:
        if (message.isResponse())
          paramsClass = WidgetInputHandler_DispatchEvent_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WidgetInputHandler = {
    name: 'content.mojom.WidgetInputHandler',
    kVersion: 0,
    ptrClass: WidgetInputHandlerPtr,
    proxyClass: WidgetInputHandlerProxy,
    stubClass: WidgetInputHandlerStub,
    validateRequest: validateWidgetInputHandlerRequest,
    validateResponse: validateWidgetInputHandlerResponse,
    mojomId: 'content/common/input/input_handler.mojom',
    fuzzMethods: {
      setFocus: {
        params: WidgetInputHandler_SetFocus_Params,
      },
      mouseCaptureLost: {
        params: WidgetInputHandler_MouseCaptureLost_Params,
      },
      setEditCommandsForNextKeyEvent: {
        params: WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params,
      },
      cursorVisibilityChanged: {
        params: WidgetInputHandler_CursorVisibilityChanged_Params,
      },
      imeSetComposition: {
        params: WidgetInputHandler_ImeSetComposition_Params,
      },
      imeCommitText: {
        params: WidgetInputHandler_ImeCommitText_Params,
      },
      imeFinishComposingText: {
        params: WidgetInputHandler_ImeFinishComposingText_Params,
      },
      requestTextInputStateUpdate: {
        params: WidgetInputHandler_RequestTextInputStateUpdate_Params,
      },
      requestCompositionUpdates: {
        params: WidgetInputHandler_RequestCompositionUpdates_Params,
      },
      dispatchEvent: {
        params: WidgetInputHandler_DispatchEvent_Params,
      },
      dispatchNonBlockingEvent: {
        params: WidgetInputHandler_DispatchNonBlockingEvent_Params,
      },
      attachSynchronousCompositor: {
        params: WidgetInputHandler_AttachSynchronousCompositor_Params,
      },
    },
  };
  WidgetInputHandlerStub.prototype.validator = validateWidgetInputHandlerRequest;
  WidgetInputHandlerProxy.prototype.validator = validateWidgetInputHandlerResponse;
  var kFrameInputHandler_SetCompositionFromExistingText_Name = 1905843189;
  var kFrameInputHandler_ExtendSelectionAndDelete_Name = 1319472820;
  var kFrameInputHandler_DeleteSurroundingText_Name = 188948026;
  var kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name = 1284099676;
  var kFrameInputHandler_SetEditableSelectionOffsets_Name = 223880070;
  var kFrameInputHandler_ExecuteEditCommand_Name = 409570272;
  var kFrameInputHandler_Undo_Name = 289977356;
  var kFrameInputHandler_Redo_Name = 1413275758;
  var kFrameInputHandler_Cut_Name = 2026260662;
  var kFrameInputHandler_Copy_Name = 2075016960;
  var kFrameInputHandler_CopyToFindPboard_Name = 560922131;
  var kFrameInputHandler_Paste_Name = 1601395863;
  var kFrameInputHandler_PasteAndMatchStyle_Name = 1183160414;
  var kFrameInputHandler_Delete_Name = 1464345136;
  var kFrameInputHandler_SelectAll_Name = 564082965;
  var kFrameInputHandler_CollapseSelection_Name = 584820430;
  var kFrameInputHandler_Replace_Name = 58866812;
  var kFrameInputHandler_ReplaceMisspelling_Name = 885174488;
  var kFrameInputHandler_SelectRange_Name = 849912490;
  var kFrameInputHandler_AdjustSelectionByCharacterOffset_Name = 1675633658;
  var kFrameInputHandler_MoveRangeSelectionExtent_Name = 752469135;
  var kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name = 783660211;
  var kFrameInputHandler_MoveCaret_Name = 360191822;
  var kFrameInputHandler_GetWidgetInputHandler_Name = 656937302;

  function FrameInputHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameInputHandler,
                                                   handleOrPtrInfo);
  }

  function FrameInputHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameInputHandler, associatedInterfacePtrInfo);
  }

  FrameInputHandlerAssociatedPtr.prototype =
      Object.create(FrameInputHandlerPtr.prototype);
  FrameInputHandlerAssociatedPtr.prototype.constructor =
      FrameInputHandlerAssociatedPtr;

  function FrameInputHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameInputHandlerPtr.prototype.setCompositionFromExistingText = function() {
    return FrameInputHandlerProxy.prototype.setCompositionFromExistingText
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.setCompositionFromExistingText = function(start, end, imeTextSpans) {
    var params_ = new FrameInputHandler_SetCompositionFromExistingText_Params();
    params_.start = start;
    params_.end = end;
    params_.imeTextSpans = imeTextSpans;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_SetCompositionFromExistingText_Name,
        codec.align(FrameInputHandler_SetCompositionFromExistingText_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_SetCompositionFromExistingText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.extendSelectionAndDelete = function() {
    return FrameInputHandlerProxy.prototype.extendSelectionAndDelete
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.extendSelectionAndDelete = function(before, after) {
    var params_ = new FrameInputHandler_ExtendSelectionAndDelete_Params();
    params_.before = before;
    params_.after = after;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_ExtendSelectionAndDelete_Name,
        codec.align(FrameInputHandler_ExtendSelectionAndDelete_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_ExtendSelectionAndDelete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.deleteSurroundingText = function() {
    return FrameInputHandlerProxy.prototype.deleteSurroundingText
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.deleteSurroundingText = function(before, after) {
    var params_ = new FrameInputHandler_DeleteSurroundingText_Params();
    params_.before = before;
    params_.after = after;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_DeleteSurroundingText_Name,
        codec.align(FrameInputHandler_DeleteSurroundingText_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_DeleteSurroundingText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.deleteSurroundingTextInCodePoints = function() {
    return FrameInputHandlerProxy.prototype.deleteSurroundingTextInCodePoints
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.deleteSurroundingTextInCodePoints = function(before, after) {
    var params_ = new FrameInputHandler_DeleteSurroundingTextInCodePoints_Params();
    params_.before = before;
    params_.after = after;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name,
        codec.align(FrameInputHandler_DeleteSurroundingTextInCodePoints_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_DeleteSurroundingTextInCodePoints_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.setEditableSelectionOffsets = function() {
    return FrameInputHandlerProxy.prototype.setEditableSelectionOffsets
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.setEditableSelectionOffsets = function(start, end) {
    var params_ = new FrameInputHandler_SetEditableSelectionOffsets_Params();
    params_.start = start;
    params_.end = end;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_SetEditableSelectionOffsets_Name,
        codec.align(FrameInputHandler_SetEditableSelectionOffsets_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_SetEditableSelectionOffsets_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.executeEditCommand = function() {
    return FrameInputHandlerProxy.prototype.executeEditCommand
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.executeEditCommand = function(command, value) {
    var params_ = new FrameInputHandler_ExecuteEditCommand_Params();
    params_.command = command;
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_ExecuteEditCommand_Name,
        codec.align(FrameInputHandler_ExecuteEditCommand_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_ExecuteEditCommand_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.undo = function() {
    return FrameInputHandlerProxy.prototype.undo
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.undo = function() {
    var params_ = new FrameInputHandler_Undo_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_Undo_Name,
        codec.align(FrameInputHandler_Undo_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_Undo_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.redo = function() {
    return FrameInputHandlerProxy.prototype.redo
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.redo = function() {
    var params_ = new FrameInputHandler_Redo_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_Redo_Name,
        codec.align(FrameInputHandler_Redo_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_Redo_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.cut = function() {
    return FrameInputHandlerProxy.prototype.cut
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.cut = function() {
    var params_ = new FrameInputHandler_Cut_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_Cut_Name,
        codec.align(FrameInputHandler_Cut_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_Cut_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.copy = function() {
    return FrameInputHandlerProxy.prototype.copy
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.copy = function() {
    var params_ = new FrameInputHandler_Copy_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_Copy_Name,
        codec.align(FrameInputHandler_Copy_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_Copy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.copyToFindPboard = function() {
    return FrameInputHandlerProxy.prototype.copyToFindPboard
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.copyToFindPboard = function() {
    var params_ = new FrameInputHandler_CopyToFindPboard_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_CopyToFindPboard_Name,
        codec.align(FrameInputHandler_CopyToFindPboard_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_CopyToFindPboard_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.paste = function() {
    return FrameInputHandlerProxy.prototype.paste
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.paste = function() {
    var params_ = new FrameInputHandler_Paste_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_Paste_Name,
        codec.align(FrameInputHandler_Paste_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_Paste_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.pasteAndMatchStyle = function() {
    return FrameInputHandlerProxy.prototype.pasteAndMatchStyle
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.pasteAndMatchStyle = function() {
    var params_ = new FrameInputHandler_PasteAndMatchStyle_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_PasteAndMatchStyle_Name,
        codec.align(FrameInputHandler_PasteAndMatchStyle_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_PasteAndMatchStyle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.delete = function() {
    return FrameInputHandlerProxy.prototype.delete
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.delete = function() {
    var params_ = new FrameInputHandler_Delete_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_Delete_Name,
        codec.align(FrameInputHandler_Delete_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_Delete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.selectAll = function() {
    return FrameInputHandlerProxy.prototype.selectAll
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.selectAll = function() {
    var params_ = new FrameInputHandler_SelectAll_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_SelectAll_Name,
        codec.align(FrameInputHandler_SelectAll_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_SelectAll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.collapseSelection = function() {
    return FrameInputHandlerProxy.prototype.collapseSelection
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.collapseSelection = function() {
    var params_ = new FrameInputHandler_CollapseSelection_Params();
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_CollapseSelection_Name,
        codec.align(FrameInputHandler_CollapseSelection_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_CollapseSelection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.replace = function() {
    return FrameInputHandlerProxy.prototype.replace
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.replace = function(word) {
    var params_ = new FrameInputHandler_Replace_Params();
    params_.word = word;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_Replace_Name,
        codec.align(FrameInputHandler_Replace_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_Replace_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.replaceMisspelling = function() {
    return FrameInputHandlerProxy.prototype.replaceMisspelling
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.replaceMisspelling = function(word) {
    var params_ = new FrameInputHandler_ReplaceMisspelling_Params();
    params_.word = word;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_ReplaceMisspelling_Name,
        codec.align(FrameInputHandler_ReplaceMisspelling_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_ReplaceMisspelling_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.selectRange = function() {
    return FrameInputHandlerProxy.prototype.selectRange
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.selectRange = function(base, extent) {
    var params_ = new FrameInputHandler_SelectRange_Params();
    params_.base = base;
    params_.extent = extent;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_SelectRange_Name,
        codec.align(FrameInputHandler_SelectRange_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_SelectRange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.adjustSelectionByCharacterOffset = function() {
    return FrameInputHandlerProxy.prototype.adjustSelectionByCharacterOffset
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.adjustSelectionByCharacterOffset = function(start, end, behavior) {
    var params_ = new FrameInputHandler_AdjustSelectionByCharacterOffset_Params();
    params_.start = start;
    params_.end = end;
    params_.behavior = behavior;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_AdjustSelectionByCharacterOffset_Name,
        codec.align(FrameInputHandler_AdjustSelectionByCharacterOffset_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_AdjustSelectionByCharacterOffset_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.moveRangeSelectionExtent = function() {
    return FrameInputHandlerProxy.prototype.moveRangeSelectionExtent
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.moveRangeSelectionExtent = function(extent) {
    var params_ = new FrameInputHandler_MoveRangeSelectionExtent_Params();
    params_.extent = extent;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_MoveRangeSelectionExtent_Name,
        codec.align(FrameInputHandler_MoveRangeSelectionExtent_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_MoveRangeSelectionExtent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.scrollFocusedEditableNodeIntoRect = function() {
    return FrameInputHandlerProxy.prototype.scrollFocusedEditableNodeIntoRect
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.scrollFocusedEditableNodeIntoRect = function(rect) {
    var params_ = new FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params();
    params_.rect = rect;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name,
        codec.align(FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.moveCaret = function() {
    return FrameInputHandlerProxy.prototype.moveCaret
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.moveCaret = function(point) {
    var params_ = new FrameInputHandler_MoveCaret_Params();
    params_.point = point;
    var builder = new codec.MessageV0Builder(
        kFrameInputHandler_MoveCaret_Name,
        codec.align(FrameInputHandler_MoveCaret_Params.encodedSize));
    builder.encodeStruct(FrameInputHandler_MoveCaret_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameInputHandlerPtr.prototype.getWidgetInputHandler = function() {
    return FrameInputHandlerProxy.prototype.getWidgetInputHandler
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameInputHandlerProxy.prototype.getWidgetInputHandler = function(interfaceRequest, host) {
    var params_ = new FrameInputHandler_GetWidgetInputHandler_Params();
    params_.interfaceRequest = interfaceRequest;
    params_.host = host;
    var builder = new codec.MessageV2Builder(
        kFrameInputHandler_GetWidgetInputHandler_Name,
        codec.align(FrameInputHandler_GetWidgetInputHandler_Params.encodedSize));
    builder.setPayload(FrameInputHandler_GetWidgetInputHandler_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameInputHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameInputHandlerStub.prototype.setCompositionFromExistingText = function(start, end, imeTextSpans) {
    return this.delegate_ && this.delegate_.setCompositionFromExistingText && this.delegate_.setCompositionFromExistingText(start, end, imeTextSpans);
  }
  FrameInputHandlerStub.prototype.extendSelectionAndDelete = function(before, after) {
    return this.delegate_ && this.delegate_.extendSelectionAndDelete && this.delegate_.extendSelectionAndDelete(before, after);
  }
  FrameInputHandlerStub.prototype.deleteSurroundingText = function(before, after) {
    return this.delegate_ && this.delegate_.deleteSurroundingText && this.delegate_.deleteSurroundingText(before, after);
  }
  FrameInputHandlerStub.prototype.deleteSurroundingTextInCodePoints = function(before, after) {
    return this.delegate_ && this.delegate_.deleteSurroundingTextInCodePoints && this.delegate_.deleteSurroundingTextInCodePoints(before, after);
  }
  FrameInputHandlerStub.prototype.setEditableSelectionOffsets = function(start, end) {
    return this.delegate_ && this.delegate_.setEditableSelectionOffsets && this.delegate_.setEditableSelectionOffsets(start, end);
  }
  FrameInputHandlerStub.prototype.executeEditCommand = function(command, value) {
    return this.delegate_ && this.delegate_.executeEditCommand && this.delegate_.executeEditCommand(command, value);
  }
  FrameInputHandlerStub.prototype.undo = function() {
    return this.delegate_ && this.delegate_.undo && this.delegate_.undo();
  }
  FrameInputHandlerStub.prototype.redo = function() {
    return this.delegate_ && this.delegate_.redo && this.delegate_.redo();
  }
  FrameInputHandlerStub.prototype.cut = function() {
    return this.delegate_ && this.delegate_.cut && this.delegate_.cut();
  }
  FrameInputHandlerStub.prototype.copy = function() {
    return this.delegate_ && this.delegate_.copy && this.delegate_.copy();
  }
  FrameInputHandlerStub.prototype.copyToFindPboard = function() {
    return this.delegate_ && this.delegate_.copyToFindPboard && this.delegate_.copyToFindPboard();
  }
  FrameInputHandlerStub.prototype.paste = function() {
    return this.delegate_ && this.delegate_.paste && this.delegate_.paste();
  }
  FrameInputHandlerStub.prototype.pasteAndMatchStyle = function() {
    return this.delegate_ && this.delegate_.pasteAndMatchStyle && this.delegate_.pasteAndMatchStyle();
  }
  FrameInputHandlerStub.prototype.delete = function() {
    return this.delegate_ && this.delegate_.delete && this.delegate_.delete();
  }
  FrameInputHandlerStub.prototype.selectAll = function() {
    return this.delegate_ && this.delegate_.selectAll && this.delegate_.selectAll();
  }
  FrameInputHandlerStub.prototype.collapseSelection = function() {
    return this.delegate_ && this.delegate_.collapseSelection && this.delegate_.collapseSelection();
  }
  FrameInputHandlerStub.prototype.replace = function(word) {
    return this.delegate_ && this.delegate_.replace && this.delegate_.replace(word);
  }
  FrameInputHandlerStub.prototype.replaceMisspelling = function(word) {
    return this.delegate_ && this.delegate_.replaceMisspelling && this.delegate_.replaceMisspelling(word);
  }
  FrameInputHandlerStub.prototype.selectRange = function(base, extent) {
    return this.delegate_ && this.delegate_.selectRange && this.delegate_.selectRange(base, extent);
  }
  FrameInputHandlerStub.prototype.adjustSelectionByCharacterOffset = function(start, end, behavior) {
    return this.delegate_ && this.delegate_.adjustSelectionByCharacterOffset && this.delegate_.adjustSelectionByCharacterOffset(start, end, behavior);
  }
  FrameInputHandlerStub.prototype.moveRangeSelectionExtent = function(extent) {
    return this.delegate_ && this.delegate_.moveRangeSelectionExtent && this.delegate_.moveRangeSelectionExtent(extent);
  }
  FrameInputHandlerStub.prototype.scrollFocusedEditableNodeIntoRect = function(rect) {
    return this.delegate_ && this.delegate_.scrollFocusedEditableNodeIntoRect && this.delegate_.scrollFocusedEditableNodeIntoRect(rect);
  }
  FrameInputHandlerStub.prototype.moveCaret = function(point) {
    return this.delegate_ && this.delegate_.moveCaret && this.delegate_.moveCaret(point);
  }
  FrameInputHandlerStub.prototype.getWidgetInputHandler = function(interfaceRequest, host) {
    return this.delegate_ && this.delegate_.getWidgetInputHandler && this.delegate_.getWidgetInputHandler(interfaceRequest, host);
  }

  FrameInputHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameInputHandler_SetCompositionFromExistingText_Name:
      var params = reader.decodeStruct(FrameInputHandler_SetCompositionFromExistingText_Params);
      this.setCompositionFromExistingText(params.start, params.end, params.imeTextSpans);
      return true;
    case kFrameInputHandler_ExtendSelectionAndDelete_Name:
      var params = reader.decodeStruct(FrameInputHandler_ExtendSelectionAndDelete_Params);
      this.extendSelectionAndDelete(params.before, params.after);
      return true;
    case kFrameInputHandler_DeleteSurroundingText_Name:
      var params = reader.decodeStruct(FrameInputHandler_DeleteSurroundingText_Params);
      this.deleteSurroundingText(params.before, params.after);
      return true;
    case kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name:
      var params = reader.decodeStruct(FrameInputHandler_DeleteSurroundingTextInCodePoints_Params);
      this.deleteSurroundingTextInCodePoints(params.before, params.after);
      return true;
    case kFrameInputHandler_SetEditableSelectionOffsets_Name:
      var params = reader.decodeStruct(FrameInputHandler_SetEditableSelectionOffsets_Params);
      this.setEditableSelectionOffsets(params.start, params.end);
      return true;
    case kFrameInputHandler_ExecuteEditCommand_Name:
      var params = reader.decodeStruct(FrameInputHandler_ExecuteEditCommand_Params);
      this.executeEditCommand(params.command, params.value);
      return true;
    case kFrameInputHandler_Undo_Name:
      var params = reader.decodeStruct(FrameInputHandler_Undo_Params);
      this.undo();
      return true;
    case kFrameInputHandler_Redo_Name:
      var params = reader.decodeStruct(FrameInputHandler_Redo_Params);
      this.redo();
      return true;
    case kFrameInputHandler_Cut_Name:
      var params = reader.decodeStruct(FrameInputHandler_Cut_Params);
      this.cut();
      return true;
    case kFrameInputHandler_Copy_Name:
      var params = reader.decodeStruct(FrameInputHandler_Copy_Params);
      this.copy();
      return true;
    case kFrameInputHandler_CopyToFindPboard_Name:
      var params = reader.decodeStruct(FrameInputHandler_CopyToFindPboard_Params);
      this.copyToFindPboard();
      return true;
    case kFrameInputHandler_Paste_Name:
      var params = reader.decodeStruct(FrameInputHandler_Paste_Params);
      this.paste();
      return true;
    case kFrameInputHandler_PasteAndMatchStyle_Name:
      var params = reader.decodeStruct(FrameInputHandler_PasteAndMatchStyle_Params);
      this.pasteAndMatchStyle();
      return true;
    case kFrameInputHandler_Delete_Name:
      var params = reader.decodeStruct(FrameInputHandler_Delete_Params);
      this.delete();
      return true;
    case kFrameInputHandler_SelectAll_Name:
      var params = reader.decodeStruct(FrameInputHandler_SelectAll_Params);
      this.selectAll();
      return true;
    case kFrameInputHandler_CollapseSelection_Name:
      var params = reader.decodeStruct(FrameInputHandler_CollapseSelection_Params);
      this.collapseSelection();
      return true;
    case kFrameInputHandler_Replace_Name:
      var params = reader.decodeStruct(FrameInputHandler_Replace_Params);
      this.replace(params.word);
      return true;
    case kFrameInputHandler_ReplaceMisspelling_Name:
      var params = reader.decodeStruct(FrameInputHandler_ReplaceMisspelling_Params);
      this.replaceMisspelling(params.word);
      return true;
    case kFrameInputHandler_SelectRange_Name:
      var params = reader.decodeStruct(FrameInputHandler_SelectRange_Params);
      this.selectRange(params.base, params.extent);
      return true;
    case kFrameInputHandler_AdjustSelectionByCharacterOffset_Name:
      var params = reader.decodeStruct(FrameInputHandler_AdjustSelectionByCharacterOffset_Params);
      this.adjustSelectionByCharacterOffset(params.start, params.end, params.behavior);
      return true;
    case kFrameInputHandler_MoveRangeSelectionExtent_Name:
      var params = reader.decodeStruct(FrameInputHandler_MoveRangeSelectionExtent_Params);
      this.moveRangeSelectionExtent(params.extent);
      return true;
    case kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name:
      var params = reader.decodeStruct(FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params);
      this.scrollFocusedEditableNodeIntoRect(params.rect);
      return true;
    case kFrameInputHandler_MoveCaret_Name:
      var params = reader.decodeStruct(FrameInputHandler_MoveCaret_Params);
      this.moveCaret(params.point);
      return true;
    case kFrameInputHandler_GetWidgetInputHandler_Name:
      var params = reader.decodeStruct(FrameInputHandler_GetWidgetInputHandler_Params);
      this.getWidgetInputHandler(params.interfaceRequest, params.host);
      return true;
    default:
      return false;
    }
  };

  FrameInputHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameInputHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameInputHandler_SetCompositionFromExistingText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_SetCompositionFromExistingText_Params;
      break;
      case kFrameInputHandler_ExtendSelectionAndDelete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_ExtendSelectionAndDelete_Params;
      break;
      case kFrameInputHandler_DeleteSurroundingText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_DeleteSurroundingText_Params;
      break;
      case kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_DeleteSurroundingTextInCodePoints_Params;
      break;
      case kFrameInputHandler_SetEditableSelectionOffsets_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_SetEditableSelectionOffsets_Params;
      break;
      case kFrameInputHandler_ExecuteEditCommand_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_ExecuteEditCommand_Params;
      break;
      case kFrameInputHandler_Undo_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_Undo_Params;
      break;
      case kFrameInputHandler_Redo_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_Redo_Params;
      break;
      case kFrameInputHandler_Cut_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_Cut_Params;
      break;
      case kFrameInputHandler_Copy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_Copy_Params;
      break;
      case kFrameInputHandler_CopyToFindPboard_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_CopyToFindPboard_Params;
      break;
      case kFrameInputHandler_Paste_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_Paste_Params;
      break;
      case kFrameInputHandler_PasteAndMatchStyle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_PasteAndMatchStyle_Params;
      break;
      case kFrameInputHandler_Delete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_Delete_Params;
      break;
      case kFrameInputHandler_SelectAll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_SelectAll_Params;
      break;
      case kFrameInputHandler_CollapseSelection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_CollapseSelection_Params;
      break;
      case kFrameInputHandler_Replace_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_Replace_Params;
      break;
      case kFrameInputHandler_ReplaceMisspelling_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_ReplaceMisspelling_Params;
      break;
      case kFrameInputHandler_SelectRange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_SelectRange_Params;
      break;
      case kFrameInputHandler_AdjustSelectionByCharacterOffset_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_AdjustSelectionByCharacterOffset_Params;
      break;
      case kFrameInputHandler_MoveRangeSelectionExtent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_MoveRangeSelectionExtent_Params;
      break;
      case kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params;
      break;
      case kFrameInputHandler_MoveCaret_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_MoveCaret_Params;
      break;
      case kFrameInputHandler_GetWidgetInputHandler_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameInputHandler_GetWidgetInputHandler_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameInputHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameInputHandler = {
    name: 'content.mojom.FrameInputHandler',
    kVersion: 0,
    ptrClass: FrameInputHandlerPtr,
    proxyClass: FrameInputHandlerProxy,
    stubClass: FrameInputHandlerStub,
    validateRequest: validateFrameInputHandlerRequest,
    validateResponse: null,
    mojomId: 'content/common/input/input_handler.mojom',
    fuzzMethods: {
      setCompositionFromExistingText: {
        params: FrameInputHandler_SetCompositionFromExistingText_Params,
      },
      extendSelectionAndDelete: {
        params: FrameInputHandler_ExtendSelectionAndDelete_Params,
      },
      deleteSurroundingText: {
        params: FrameInputHandler_DeleteSurroundingText_Params,
      },
      deleteSurroundingTextInCodePoints: {
        params: FrameInputHandler_DeleteSurroundingTextInCodePoints_Params,
      },
      setEditableSelectionOffsets: {
        params: FrameInputHandler_SetEditableSelectionOffsets_Params,
      },
      executeEditCommand: {
        params: FrameInputHandler_ExecuteEditCommand_Params,
      },
      undo: {
        params: FrameInputHandler_Undo_Params,
      },
      redo: {
        params: FrameInputHandler_Redo_Params,
      },
      cut: {
        params: FrameInputHandler_Cut_Params,
      },
      copy: {
        params: FrameInputHandler_Copy_Params,
      },
      copyToFindPboard: {
        params: FrameInputHandler_CopyToFindPboard_Params,
      },
      paste: {
        params: FrameInputHandler_Paste_Params,
      },
      pasteAndMatchStyle: {
        params: FrameInputHandler_PasteAndMatchStyle_Params,
      },
      delete: {
        params: FrameInputHandler_Delete_Params,
      },
      selectAll: {
        params: FrameInputHandler_SelectAll_Params,
      },
      collapseSelection: {
        params: FrameInputHandler_CollapseSelection_Params,
      },
      replace: {
        params: FrameInputHandler_Replace_Params,
      },
      replaceMisspelling: {
        params: FrameInputHandler_ReplaceMisspelling_Params,
      },
      selectRange: {
        params: FrameInputHandler_SelectRange_Params,
      },
      adjustSelectionByCharacterOffset: {
        params: FrameInputHandler_AdjustSelectionByCharacterOffset_Params,
      },
      moveRangeSelectionExtent: {
        params: FrameInputHandler_MoveRangeSelectionExtent_Params,
      },
      scrollFocusedEditableNodeIntoRect: {
        params: FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params,
      },
      moveCaret: {
        params: FrameInputHandler_MoveCaret_Params,
      },
      getWidgetInputHandler: {
        params: FrameInputHandler_GetWidgetInputHandler_Params,
      },
    },
  };
  FrameInputHandlerStub.prototype.validator = validateFrameInputHandlerRequest;
  FrameInputHandlerProxy.prototype.validator = null;
  exports.KeyData = KeyData;
  exports.PointerData = PointerData;
  exports.WheelData = WheelData;
  exports.MouseData = MouseData;
  exports.ScrollUpdate = ScrollUpdate;
  exports.ScrollData = ScrollData;
  exports.PinchData = PinchData;
  exports.FlingData = FlingData;
  exports.TapData = TapData;
  exports.GestureData = GestureData;
  exports.TouchPoint = TouchPoint;
  exports.TouchData = TouchData;
  exports.Event = Event;
  exports.TouchActionOptional = TouchActionOptional;
  exports.WidgetInputHandlerHost = WidgetInputHandlerHost;
  exports.WidgetInputHandlerHostPtr = WidgetInputHandlerHostPtr;
  exports.WidgetInputHandlerHostAssociatedPtr = WidgetInputHandlerHostAssociatedPtr;
  exports.WidgetInputHandler = WidgetInputHandler;
  exports.WidgetInputHandlerPtr = WidgetInputHandlerPtr;
  exports.WidgetInputHandlerAssociatedPtr = WidgetInputHandlerAssociatedPtr;
  exports.FrameInputHandler = FrameInputHandler;
  exports.FrameInputHandlerPtr = FrameInputHandlerPtr;
  exports.FrameInputHandlerAssociatedPtr = FrameInputHandlerAssociatedPtr;
})();