// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'device/gamepad/public/mojom/gamepad.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');


  var GamepadHand = {};
  GamepadHand.GamepadHandNone = 0;
  GamepadHand.GamepadHandLeft = 1;
  GamepadHand.GamepadHandRight = 2;

  GamepadHand.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  GamepadHand.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GamepadHapticActuatorType = {};
  GamepadHapticActuatorType.GamepadHapticActuatorTypeVibration = 0;
  GamepadHapticActuatorType.GamepadHapticActuatorTypeDualRumble = 1;

  GamepadHapticActuatorType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  GamepadHapticActuatorType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GamepadHapticEffectType = {};
  GamepadHapticEffectType.GamepadHapticEffectTypeDualRumble = 0;

  GamepadHapticEffectType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  GamepadHapticEffectType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GamepadHapticsResult = {};
  GamepadHapticsResult.GamepadHapticsResultError = 0;
  GamepadHapticsResult.GamepadHapticsResultComplete = 1;
  GamepadHapticsResult.GamepadHapticsResultPreempted = 2;
  GamepadHapticsResult.GamepadHapticsResultInvalidParameter = 3;
  GamepadHapticsResult.GamepadHapticsResultNotSupported = 4;

  GamepadHapticsResult.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  GamepadHapticsResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function GamepadQuaternion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadQuaternion.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.z = 0;
    this.w = 0;
  };
  GamepadQuaternion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadQuaternion.generate = function(generator_) {
    var generated = new GamepadQuaternion;
    generated.x = generator_.generateFloat();
    generated.y = generator_.generateFloat();
    generated.z = generator_.generateFloat();
    generated.w = generator_.generateFloat();
    return generated;
  };

  GamepadQuaternion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateFloat(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateFloat(this.y);
    }
    if (mutator_.chooseMutateField()) {
      this.z = mutator_.mutateFloat(this.z);
    }
    if (mutator_.chooseMutateField()) {
      this.w = mutator_.mutateFloat(this.w);
    }
    return this;
  };
  GamepadQuaternion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadQuaternion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadQuaternion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadQuaternion.validate = function(messageValidator, offset) {
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

  GamepadQuaternion.encodedSize = codec.kStructHeaderSize + 16;

  GamepadQuaternion.decode = function(decoder) {
    var packed;
    var val = new GamepadQuaternion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.z = decoder.decodeStruct(codec.Float);
    val.w = decoder.decodeStruct(codec.Float);
    return val;
  };

  GamepadQuaternion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadQuaternion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.z);
    encoder.encodeStruct(codec.Float, val.w);
  };
  function GamepadVector(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadVector.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.z = 0;
  };
  GamepadVector.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadVector.generate = function(generator_) {
    var generated = new GamepadVector;
    generated.x = generator_.generateFloat();
    generated.y = generator_.generateFloat();
    generated.z = generator_.generateFloat();
    return generated;
  };

  GamepadVector.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateFloat(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateFloat(this.y);
    }
    if (mutator_.chooseMutateField()) {
      this.z = mutator_.mutateFloat(this.z);
    }
    return this;
  };
  GamepadVector.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadVector.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadVector.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadVector.validate = function(messageValidator, offset) {
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

  GamepadVector.encodedSize = codec.kStructHeaderSize + 16;

  GamepadVector.decode = function(decoder) {
    var packed;
    var val = new GamepadVector();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.z = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GamepadVector.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadVector.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.z);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GamepadButton(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadButton.prototype.initDefaults_ = function() {
    this.pressed = false;
    this.touched = false;
    this.value = 0;
  };
  GamepadButton.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadButton.generate = function(generator_) {
    var generated = new GamepadButton;
    generated.pressed = generator_.generateBool();
    generated.touched = generator_.generateBool();
    generated.value = generator_.generateDouble();
    return generated;
  };

  GamepadButton.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pressed = mutator_.mutateBool(this.pressed);
    }
    if (mutator_.chooseMutateField()) {
      this.touched = mutator_.mutateBool(this.touched);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateDouble(this.value);
    }
    return this;
  };
  GamepadButton.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadButton.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadButton.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadButton.validate = function(messageValidator, offset) {
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

  GamepadButton.encodedSize = codec.kStructHeaderSize + 16;

  GamepadButton.decode = function(decoder) {
    var packed;
    var val = new GamepadButton();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.pressed = (packed >> 0) & 1 ? true : false;
    val.touched = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.value = decoder.decodeStruct(codec.Double);
    return val;
  };

  GamepadButton.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadButton.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.pressed & 1) << 0
    packed |= (val.touched & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Double, val.value);
  };
  function GamepadPose(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadPose.prototype.initDefaults_ = function() {
    this.orientation = null;
    this.position = null;
    this.angularVelocity = null;
    this.linearVelocity = null;
    this.angularAcceleration = null;
    this.linearAcceleration = null;
  };
  GamepadPose.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadPose.generate = function(generator_) {
    var generated = new GamepadPose;
    generated.orientation = generator_.generateStruct(device.mojom.GamepadQuaternion, true);
    generated.position = generator_.generateStruct(device.mojom.GamepadVector, true);
    generated.angularVelocity = generator_.generateStruct(device.mojom.GamepadVector, true);
    generated.linearVelocity = generator_.generateStruct(device.mojom.GamepadVector, true);
    generated.angularAcceleration = generator_.generateStruct(device.mojom.GamepadVector, true);
    generated.linearAcceleration = generator_.generateStruct(device.mojom.GamepadVector, true);
    return generated;
  };

  GamepadPose.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.orientation = mutator_.mutateStruct(device.mojom.GamepadQuaternion, true);
    }
    if (mutator_.chooseMutateField()) {
      this.position = mutator_.mutateStruct(device.mojom.GamepadVector, true);
    }
    if (mutator_.chooseMutateField()) {
      this.angularVelocity = mutator_.mutateStruct(device.mojom.GamepadVector, true);
    }
    if (mutator_.chooseMutateField()) {
      this.linearVelocity = mutator_.mutateStruct(device.mojom.GamepadVector, true);
    }
    if (mutator_.chooseMutateField()) {
      this.angularAcceleration = mutator_.mutateStruct(device.mojom.GamepadVector, true);
    }
    if (mutator_.chooseMutateField()) {
      this.linearAcceleration = mutator_.mutateStruct(device.mojom.GamepadVector, true);
    }
    return this;
  };
  GamepadPose.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadPose.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadPose.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadPose.validate = function(messageValidator, offset) {
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


    // validate GamepadPose.orientation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, GamepadQuaternion, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GamepadPose.position
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GamepadVector, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GamepadPose.angularVelocity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, GamepadVector, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GamepadPose.linearVelocity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, GamepadVector, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GamepadPose.angularAcceleration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, GamepadVector, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GamepadPose.linearAcceleration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, GamepadVector, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadPose.encodedSize = codec.kStructHeaderSize + 48;

  GamepadPose.decode = function(decoder) {
    var packed;
    var val = new GamepadPose();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.orientation = decoder.decodeStructPointer(GamepadQuaternion);
    val.position = decoder.decodeStructPointer(GamepadVector);
    val.angularVelocity = decoder.decodeStructPointer(GamepadVector);
    val.linearVelocity = decoder.decodeStructPointer(GamepadVector);
    val.angularAcceleration = decoder.decodeStructPointer(GamepadVector);
    val.linearAcceleration = decoder.decodeStructPointer(GamepadVector);
    return val;
  };

  GamepadPose.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadPose.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(GamepadQuaternion, val.orientation);
    encoder.encodeStructPointer(GamepadVector, val.position);
    encoder.encodeStructPointer(GamepadVector, val.angularVelocity);
    encoder.encodeStructPointer(GamepadVector, val.linearVelocity);
    encoder.encodeStructPointer(GamepadVector, val.angularAcceleration);
    encoder.encodeStructPointer(GamepadVector, val.linearAcceleration);
  };
  function GamepadHapticActuator(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadHapticActuator.prototype.initDefaults_ = function() {
    this.type = 0;
  };
  GamepadHapticActuator.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadHapticActuator.generate = function(generator_) {
    var generated = new GamepadHapticActuator;
    generated.type = generator_.generateEnum(0, 1);
    return generated;
  };

  GamepadHapticActuator.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 1);
    }
    return this;
  };
  GamepadHapticActuator.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadHapticActuator.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadHapticActuator.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadHapticActuator.validate = function(messageValidator, offset) {
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


    // validate GamepadHapticActuator.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GamepadHapticActuatorType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadHapticActuator.encodedSize = codec.kStructHeaderSize + 8;

  GamepadHapticActuator.decode = function(decoder) {
    var packed;
    var val = new GamepadHapticActuator();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GamepadHapticActuator.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadHapticActuator.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Gamepad(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gamepad.prototype.initDefaults_ = function() {
    this.connected = false;
    this.hand = 0;
    this.id = null;
    this.timestamp = 0;
    this.axes = null;
    this.buttons = null;
    this.vibrationActuator = null;
    this.mapping = null;
    this.pose = null;
    this.displayId = 0;
  };
  Gamepad.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gamepad.generate = function(generator_) {
    var generated = new Gamepad;
    generated.connected = generator_.generateBool();
    generated.id = generator_.generateArray(function() {
      return generator_.generateUint16();
    });
    generated.timestamp = generator_.generateUint64();
    generated.axes = generator_.generateArray(function() {
      return generator_.generateDouble();
    });
    generated.buttons = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.GamepadButton, false);
    });
    generated.vibrationActuator = generator_.generateStruct(device.mojom.GamepadHapticActuator, true);
    generated.mapping = generator_.generateArray(function() {
      return generator_.generateUint16();
    });
    generated.pose = generator_.generateStruct(device.mojom.GamepadPose, true);
    generated.hand = generator_.generateEnum(0, 2);
    generated.displayId = generator_.generateUint32();
    return generated;
  };

  Gamepad.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.connected = mutator_.mutateBool(this.connected);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateArray(this.id, function(val) {
        return mutator_.mutateUint16(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateUint64(this.timestamp);
    }
    if (mutator_.chooseMutateField()) {
      this.axes = mutator_.mutateArray(this.axes, function(val) {
        return mutator_.mutateDouble(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.buttons = mutator_.mutateArray(this.buttons, function(val) {
        return mutator_.mutateStruct(device.mojom.GamepadButton, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.vibrationActuator = mutator_.mutateStruct(device.mojom.GamepadHapticActuator, true);
    }
    if (mutator_.chooseMutateField()) {
      this.mapping = mutator_.mutateArray(this.mapping, function(val) {
        return mutator_.mutateUint16(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.pose = mutator_.mutateStruct(device.mojom.GamepadPose, true);
    }
    if (mutator_.chooseMutateField()) {
      this.hand = mutator_.mutateEnum(this.hand, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateUint32(this.displayId);
    }
    return this;
  };
  Gamepad.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Gamepad.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gamepad.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Gamepad.validate = function(messageValidator, offset) {
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



    // validate Gamepad.id
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 2, codec.Uint16, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Gamepad.axes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, codec.Double, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gamepad.buttons
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.PointerTo(GamepadButton), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gamepad.vibrationActuator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, GamepadHapticActuator, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gamepad.mapping
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 2, codec.Uint16, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gamepad.pose
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, GamepadPose, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gamepad.hand
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, GamepadHand);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Gamepad.encodedSize = codec.kStructHeaderSize + 72;

  Gamepad.decode = function(decoder) {
    var packed;
    var val = new Gamepad();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.connected = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.hand = decoder.decodeStruct(codec.Int32);
    val.id = decoder.decodeArrayPointer(codec.Uint16);
    val.timestamp = decoder.decodeStruct(codec.Uint64);
    val.axes = decoder.decodeArrayPointer(codec.Double);
    val.buttons = decoder.decodeArrayPointer(new codec.PointerTo(GamepadButton));
    val.vibrationActuator = decoder.decodeStructPointer(GamepadHapticActuator);
    val.mapping = decoder.decodeArrayPointer(codec.Uint16);
    val.pose = decoder.decodeStructPointer(GamepadPose);
    val.displayId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Gamepad.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gamepad.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.connected & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.hand);
    encoder.encodeArrayPointer(codec.Uint16, val.id);
    encoder.encodeStruct(codec.Uint64, val.timestamp);
    encoder.encodeArrayPointer(codec.Double, val.axes);
    encoder.encodeArrayPointer(new codec.PointerTo(GamepadButton), val.buttons);
    encoder.encodeStructPointer(GamepadHapticActuator, val.vibrationActuator);
    encoder.encodeArrayPointer(codec.Uint16, val.mapping);
    encoder.encodeStructPointer(GamepadPose, val.pose);
    encoder.encodeStruct(codec.Uint32, val.displayId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GamepadEffectParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadEffectParameters.prototype.initDefaults_ = function() {
    this.duration = 0;
    this.startDelay = 0;
    this.strongMagnitude = 0;
    this.weakMagnitude = 0;
  };
  GamepadEffectParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadEffectParameters.generate = function(generator_) {
    var generated = new GamepadEffectParameters;
    generated.duration = generator_.generateDouble();
    generated.startDelay = generator_.generateDouble();
    generated.strongMagnitude = generator_.generateDouble();
    generated.weakMagnitude = generator_.generateDouble();
    return generated;
  };

  GamepadEffectParameters.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.duration = mutator_.mutateDouble(this.duration);
    }
    if (mutator_.chooseMutateField()) {
      this.startDelay = mutator_.mutateDouble(this.startDelay);
    }
    if (mutator_.chooseMutateField()) {
      this.strongMagnitude = mutator_.mutateDouble(this.strongMagnitude);
    }
    if (mutator_.chooseMutateField()) {
      this.weakMagnitude = mutator_.mutateDouble(this.weakMagnitude);
    }
    return this;
  };
  GamepadEffectParameters.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadEffectParameters.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadEffectParameters.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadEffectParameters.validate = function(messageValidator, offset) {
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

  GamepadEffectParameters.encodedSize = codec.kStructHeaderSize + 32;

  GamepadEffectParameters.decode = function(decoder) {
    var packed;
    var val = new GamepadEffectParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.duration = decoder.decodeStruct(codec.Double);
    val.startDelay = decoder.decodeStruct(codec.Double);
    val.strongMagnitude = decoder.decodeStruct(codec.Double);
    val.weakMagnitude = decoder.decodeStruct(codec.Double);
    return val;
  };

  GamepadEffectParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadEffectParameters.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.duration);
    encoder.encodeStruct(codec.Double, val.startDelay);
    encoder.encodeStruct(codec.Double, val.strongMagnitude);
    encoder.encodeStruct(codec.Double, val.weakMagnitude);
  };
  function GamepadObserver_GamepadConnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadObserver_GamepadConnected_Params.prototype.initDefaults_ = function() {
    this.index = 0;
    this.gamepad = null;
  };
  GamepadObserver_GamepadConnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadObserver_GamepadConnected_Params.generate = function(generator_) {
    var generated = new GamepadObserver_GamepadConnected_Params;
    generated.index = generator_.generateInt32();
    generated.gamepad = generator_.generateStruct(device.mojom.Gamepad, false);
    return generated;
  };

  GamepadObserver_GamepadConnected_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.index = mutator_.mutateInt32(this.index);
    }
    if (mutator_.chooseMutateField()) {
      this.gamepad = mutator_.mutateStruct(device.mojom.Gamepad, false);
    }
    return this;
  };
  GamepadObserver_GamepadConnected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadObserver_GamepadConnected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadObserver_GamepadConnected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadObserver_GamepadConnected_Params.validate = function(messageValidator, offset) {
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



    // validate GamepadObserver_GamepadConnected_Params.gamepad
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Gamepad, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadObserver_GamepadConnected_Params.encodedSize = codec.kStructHeaderSize + 16;

  GamepadObserver_GamepadConnected_Params.decode = function(decoder) {
    var packed;
    var val = new GamepadObserver_GamepadConnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.gamepad = decoder.decodeStructPointer(Gamepad);
    return val;
  };

  GamepadObserver_GamepadConnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadObserver_GamepadConnected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Gamepad, val.gamepad);
  };
  function GamepadObserver_GamepadDisconnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadObserver_GamepadDisconnected_Params.prototype.initDefaults_ = function() {
    this.index = 0;
    this.gamepad = null;
  };
  GamepadObserver_GamepadDisconnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadObserver_GamepadDisconnected_Params.generate = function(generator_) {
    var generated = new GamepadObserver_GamepadDisconnected_Params;
    generated.index = generator_.generateInt32();
    generated.gamepad = generator_.generateStruct(device.mojom.Gamepad, false);
    return generated;
  };

  GamepadObserver_GamepadDisconnected_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.index = mutator_.mutateInt32(this.index);
    }
    if (mutator_.chooseMutateField()) {
      this.gamepad = mutator_.mutateStruct(device.mojom.Gamepad, false);
    }
    return this;
  };
  GamepadObserver_GamepadDisconnected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadObserver_GamepadDisconnected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadObserver_GamepadDisconnected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadObserver_GamepadDisconnected_Params.validate = function(messageValidator, offset) {
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



    // validate GamepadObserver_GamepadDisconnected_Params.gamepad
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Gamepad, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadObserver_GamepadDisconnected_Params.encodedSize = codec.kStructHeaderSize + 16;

  GamepadObserver_GamepadDisconnected_Params.decode = function(decoder) {
    var packed;
    var val = new GamepadObserver_GamepadDisconnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.gamepad = decoder.decodeStructPointer(Gamepad);
    return val;
  };

  GamepadObserver_GamepadDisconnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadObserver_GamepadDisconnected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Gamepad, val.gamepad);
  };
  function GamepadMonitor_GamepadStartPolling_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadMonitor_GamepadStartPolling_Params.prototype.initDefaults_ = function() {
  };
  GamepadMonitor_GamepadStartPolling_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadMonitor_GamepadStartPolling_Params.generate = function(generator_) {
    var generated = new GamepadMonitor_GamepadStartPolling_Params;
    return generated;
  };

  GamepadMonitor_GamepadStartPolling_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GamepadMonitor_GamepadStartPolling_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadMonitor_GamepadStartPolling_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadMonitor_GamepadStartPolling_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadMonitor_GamepadStartPolling_Params.validate = function(messageValidator, offset) {
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

  GamepadMonitor_GamepadStartPolling_Params.encodedSize = codec.kStructHeaderSize + 0;

  GamepadMonitor_GamepadStartPolling_Params.decode = function(decoder) {
    var packed;
    var val = new GamepadMonitor_GamepadStartPolling_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GamepadMonitor_GamepadStartPolling_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadMonitor_GamepadStartPolling_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GamepadMonitor_GamepadStartPolling_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadMonitor_GamepadStartPolling_ResponseParams.prototype.initDefaults_ = function() {
    this.memoryHandle = null;
  };
  GamepadMonitor_GamepadStartPolling_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadMonitor_GamepadStartPolling_ResponseParams.generate = function(generator_) {
    var generated = new GamepadMonitor_GamepadStartPolling_ResponseParams;
    generated.memoryHandle = generator_.generateSharedBuffer(false);
    return generated;
  };

  GamepadMonitor_GamepadStartPolling_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.memoryHandle = mutator_.mutateSharedBuffer(this.memoryHandle, false);
    }
    return this;
  };
  GamepadMonitor_GamepadStartPolling_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.memoryHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  GamepadMonitor_GamepadStartPolling_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadMonitor_GamepadStartPolling_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.memoryHandle = handles[idx++];;
    return idx;
  };

  GamepadMonitor_GamepadStartPolling_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GamepadMonitor_GamepadStartPolling_ResponseParams.memoryHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadMonitor_GamepadStartPolling_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GamepadMonitor_GamepadStartPolling_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GamepadMonitor_GamepadStartPolling_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.memoryHandle = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GamepadMonitor_GamepadStartPolling_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadMonitor_GamepadStartPolling_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.memoryHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GamepadMonitor_GamepadStopPolling_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadMonitor_GamepadStopPolling_Params.prototype.initDefaults_ = function() {
  };
  GamepadMonitor_GamepadStopPolling_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadMonitor_GamepadStopPolling_Params.generate = function(generator_) {
    var generated = new GamepadMonitor_GamepadStopPolling_Params;
    return generated;
  };

  GamepadMonitor_GamepadStopPolling_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GamepadMonitor_GamepadStopPolling_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadMonitor_GamepadStopPolling_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadMonitor_GamepadStopPolling_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadMonitor_GamepadStopPolling_Params.validate = function(messageValidator, offset) {
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

  GamepadMonitor_GamepadStopPolling_Params.encodedSize = codec.kStructHeaderSize + 0;

  GamepadMonitor_GamepadStopPolling_Params.decode = function(decoder) {
    var packed;
    var val = new GamepadMonitor_GamepadStopPolling_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GamepadMonitor_GamepadStopPolling_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadMonitor_GamepadStopPolling_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GamepadMonitor_GamepadStopPolling_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadMonitor_GamepadStopPolling_ResponseParams.prototype.initDefaults_ = function() {
  };
  GamepadMonitor_GamepadStopPolling_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadMonitor_GamepadStopPolling_ResponseParams.generate = function(generator_) {
    var generated = new GamepadMonitor_GamepadStopPolling_ResponseParams;
    return generated;
  };

  GamepadMonitor_GamepadStopPolling_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  GamepadMonitor_GamepadStopPolling_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadMonitor_GamepadStopPolling_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadMonitor_GamepadStopPolling_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadMonitor_GamepadStopPolling_ResponseParams.validate = function(messageValidator, offset) {
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

  GamepadMonitor_GamepadStopPolling_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  GamepadMonitor_GamepadStopPolling_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GamepadMonitor_GamepadStopPolling_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GamepadMonitor_GamepadStopPolling_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadMonitor_GamepadStopPolling_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function GamepadMonitor_SetObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadMonitor_SetObserver_Params.prototype.initDefaults_ = function() {
    this.gamepadObserver = new GamepadObserverPtr();
  };
  GamepadMonitor_SetObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadMonitor_SetObserver_Params.generate = function(generator_) {
    var generated = new GamepadMonitor_SetObserver_Params;
    generated.gamepadObserver = generator_.generateInterface("device.mojom.GamepadObserver", false);
    return generated;
  };

  GamepadMonitor_SetObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.gamepadObserver = mutator_.mutateInterface(this.gamepadObserver, "device.mojom.GamepadObserver", false);
    }
    return this;
  };
  GamepadMonitor_SetObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.gamepadObserver !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.GamepadObserverPtr"]);
    }
    return handles;
  };

  GamepadMonitor_SetObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadMonitor_SetObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.gamepadObserver = handles[idx++];;
    return idx;
  };

  GamepadMonitor_SetObserver_Params.validate = function(messageValidator, offset) {
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


    // validate GamepadMonitor_SetObserver_Params.gamepadObserver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadMonitor_SetObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  GamepadMonitor_SetObserver_Params.decode = function(decoder) {
    var packed;
    var val = new GamepadMonitor_SetObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gamepadObserver = decoder.decodeStruct(new codec.Interface(GamepadObserverPtr));
    return val;
  };

  GamepadMonitor_SetObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadMonitor_SetObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(GamepadObserverPtr), val.gamepadObserver);
  };
  function GamepadHapticsManager_PlayVibrationEffectOnce_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadHapticsManager_PlayVibrationEffectOnce_Params.prototype.initDefaults_ = function() {
    this.padIndex = 0;
    this.type = 0;
    this.params = null;
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_Params.generate = function(generator_) {
    var generated = new GamepadHapticsManager_PlayVibrationEffectOnce_Params;
    generated.padIndex = generator_.generateInt32();
    generated.type = generator_.generateEnum(0, 0);
    generated.params = generator_.generateStruct(device.mojom.GamepadEffectParameters, false);
    return generated;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.padIndex = mutator_.mutateInt32(this.padIndex);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(device.mojom.GamepadEffectParameters, false);
    }
    return this;
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_Params.validate = function(messageValidator, offset) {
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



    // validate GamepadHapticsManager_PlayVibrationEffectOnce_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, GamepadHapticEffectType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GamepadHapticsManager_PlayVibrationEffectOnce_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GamepadEffectParameters, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_Params.encodedSize = codec.kStructHeaderSize + 16;

  GamepadHapticsManager_PlayVibrationEffectOnce_Params.decode = function(decoder) {
    var packed;
    var val = new GamepadHapticsManager_PlayVibrationEffectOnce_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.padIndex = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.Int32);
    val.params = decoder.decodeStructPointer(GamepadEffectParameters);
    return val;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadHapticsManager_PlayVibrationEffectOnce_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.padIndex);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStructPointer(GamepadEffectParameters, val.params);
  };
  function GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.generate = function(generator_) {
    var generated = new GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams;
    generated.result = generator_.generateEnum(0, 4);
    return generated;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 4);
    }
    return this;
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GamepadHapticsResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GamepadHapticsManager_ResetVibrationActuator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadHapticsManager_ResetVibrationActuator_Params.prototype.initDefaults_ = function() {
    this.padIndex = 0;
  };
  GamepadHapticsManager_ResetVibrationActuator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadHapticsManager_ResetVibrationActuator_Params.generate = function(generator_) {
    var generated = new GamepadHapticsManager_ResetVibrationActuator_Params;
    generated.padIndex = generator_.generateInt32();
    return generated;
  };

  GamepadHapticsManager_ResetVibrationActuator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.padIndex = mutator_.mutateInt32(this.padIndex);
    }
    return this;
  };
  GamepadHapticsManager_ResetVibrationActuator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadHapticsManager_ResetVibrationActuator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadHapticsManager_ResetVibrationActuator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadHapticsManager_ResetVibrationActuator_Params.validate = function(messageValidator, offset) {
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

  GamepadHapticsManager_ResetVibrationActuator_Params.encodedSize = codec.kStructHeaderSize + 8;

  GamepadHapticsManager_ResetVibrationActuator_Params.decode = function(decoder) {
    var packed;
    var val = new GamepadHapticsManager_ResetVibrationActuator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.padIndex = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GamepadHapticsManager_ResetVibrationActuator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadHapticsManager_ResetVibrationActuator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.padIndex);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GamepadHapticsManager_ResetVibrationActuator_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.generate = function(generator_) {
    var generated = new GamepadHapticsManager_ResetVibrationActuator_ResponseParams;
    generated.result = generator_.generateEnum(0, 4);
    return generated;
  };

  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 4);
    }
    return this;
  };
  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GamepadHapticsManager_ResetVibrationActuator_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GamepadHapticsResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GamepadHapticsManager_ResetVibrationActuator_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GamepadHapticsManager_ResetVibrationActuator_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GamepadHapticsManager_ResetVibrationActuator_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kGamepadObserver_GamepadConnected_Name = 421463624;
  var kGamepadObserver_GamepadDisconnected_Name = 815437150;

  function GamepadObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GamepadObserver,
                                                   handleOrPtrInfo);
  }

  function GamepadObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GamepadObserver, associatedInterfacePtrInfo);
  }

  GamepadObserverAssociatedPtr.prototype =
      Object.create(GamepadObserverPtr.prototype);
  GamepadObserverAssociatedPtr.prototype.constructor =
      GamepadObserverAssociatedPtr;

  function GamepadObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  GamepadObserverPtr.prototype.gamepadConnected = function() {
    return GamepadObserverProxy.prototype.gamepadConnected
        .apply(this.ptr.getProxy(), arguments);
  };

  GamepadObserverProxy.prototype.gamepadConnected = function(index, gamepad) {
    var params_ = new GamepadObserver_GamepadConnected_Params();
    params_.index = index;
    params_.gamepad = gamepad;
    var builder = new codec.MessageV0Builder(
        kGamepadObserver_GamepadConnected_Name,
        codec.align(GamepadObserver_GamepadConnected_Params.encodedSize));
    builder.encodeStruct(GamepadObserver_GamepadConnected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GamepadObserverPtr.prototype.gamepadDisconnected = function() {
    return GamepadObserverProxy.prototype.gamepadDisconnected
        .apply(this.ptr.getProxy(), arguments);
  };

  GamepadObserverProxy.prototype.gamepadDisconnected = function(index, gamepad) {
    var params_ = new GamepadObserver_GamepadDisconnected_Params();
    params_.index = index;
    params_.gamepad = gamepad;
    var builder = new codec.MessageV0Builder(
        kGamepadObserver_GamepadDisconnected_Name,
        codec.align(GamepadObserver_GamepadDisconnected_Params.encodedSize));
    builder.encodeStruct(GamepadObserver_GamepadDisconnected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GamepadObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  GamepadObserverStub.prototype.gamepadConnected = function(index, gamepad) {
    return this.delegate_ && this.delegate_.gamepadConnected && this.delegate_.gamepadConnected(index, gamepad);
  }
  GamepadObserverStub.prototype.gamepadDisconnected = function(index, gamepad) {
    return this.delegate_ && this.delegate_.gamepadDisconnected && this.delegate_.gamepadDisconnected(index, gamepad);
  }

  GamepadObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGamepadObserver_GamepadConnected_Name:
      var params = reader.decodeStruct(GamepadObserver_GamepadConnected_Params);
      this.gamepadConnected(params.index, params.gamepad);
      return true;
    case kGamepadObserver_GamepadDisconnected_Name:
      var params = reader.decodeStruct(GamepadObserver_GamepadDisconnected_Params);
      this.gamepadDisconnected(params.index, params.gamepad);
      return true;
    default:
      return false;
    }
  };

  GamepadObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateGamepadObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGamepadObserver_GamepadConnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GamepadObserver_GamepadConnected_Params;
      break;
      case kGamepadObserver_GamepadDisconnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GamepadObserver_GamepadDisconnected_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGamepadObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GamepadObserver = {
    name: 'device.mojom.GamepadObserver',
    kVersion: 0,
    ptrClass: GamepadObserverPtr,
    proxyClass: GamepadObserverProxy,
    stubClass: GamepadObserverStub,
    validateRequest: validateGamepadObserverRequest,
    validateResponse: null,
    mojomId: 'device/gamepad/public/mojom/gamepad.mojom',
    fuzzMethods: {
      gamepadConnected: {
        params: GamepadObserver_GamepadConnected_Params,
      },
      gamepadDisconnected: {
        params: GamepadObserver_GamepadDisconnected_Params,
      },
    },
  };
  GamepadObserverStub.prototype.validator = validateGamepadObserverRequest;
  GamepadObserverProxy.prototype.validator = null;
  var kGamepadMonitor_GamepadStartPolling_Name = 179841203;
  var kGamepadMonitor_GamepadStopPolling_Name = 1377380772;
  var kGamepadMonitor_SetObserver_Name = 1714800156;

  function GamepadMonitorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GamepadMonitor,
                                                   handleOrPtrInfo);
  }

  function GamepadMonitorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GamepadMonitor, associatedInterfacePtrInfo);
  }

  GamepadMonitorAssociatedPtr.prototype =
      Object.create(GamepadMonitorPtr.prototype);
  GamepadMonitorAssociatedPtr.prototype.constructor =
      GamepadMonitorAssociatedPtr;

  function GamepadMonitorProxy(receiver) {
    this.receiver_ = receiver;
  }
  GamepadMonitorPtr.prototype.gamepadStartPolling = function() {
    return GamepadMonitorProxy.prototype.gamepadStartPolling
        .apply(this.ptr.getProxy(), arguments);
  };

  GamepadMonitorProxy.prototype.gamepadStartPolling = function() {
    var params_ = new GamepadMonitor_GamepadStartPolling_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGamepadMonitor_GamepadStartPolling_Name,
          codec.align(GamepadMonitor_GamepadStartPolling_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GamepadMonitor_GamepadStartPolling_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GamepadMonitor_GamepadStartPolling_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GamepadMonitorPtr.prototype.gamepadStopPolling = function() {
    return GamepadMonitorProxy.prototype.gamepadStopPolling
        .apply(this.ptr.getProxy(), arguments);
  };

  GamepadMonitorProxy.prototype.gamepadStopPolling = function() {
    var params_ = new GamepadMonitor_GamepadStopPolling_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGamepadMonitor_GamepadStopPolling_Name,
          codec.align(GamepadMonitor_GamepadStopPolling_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GamepadMonitor_GamepadStopPolling_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GamepadMonitor_GamepadStopPolling_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GamepadMonitorPtr.prototype.setObserver = function() {
    return GamepadMonitorProxy.prototype.setObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  GamepadMonitorProxy.prototype.setObserver = function(gamepadObserver) {
    var params_ = new GamepadMonitor_SetObserver_Params();
    params_.gamepadObserver = gamepadObserver;
    var builder = new codec.MessageV0Builder(
        kGamepadMonitor_SetObserver_Name,
        codec.align(GamepadMonitor_SetObserver_Params.encodedSize));
    builder.encodeStruct(GamepadMonitor_SetObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GamepadMonitorStub(delegate) {
    this.delegate_ = delegate;
  }
  GamepadMonitorStub.prototype.gamepadStartPolling = function() {
    return this.delegate_ && this.delegate_.gamepadStartPolling && this.delegate_.gamepadStartPolling();
  }
  GamepadMonitorStub.prototype.gamepadStopPolling = function() {
    return this.delegate_ && this.delegate_.gamepadStopPolling && this.delegate_.gamepadStopPolling();
  }
  GamepadMonitorStub.prototype.setObserver = function(gamepadObserver) {
    return this.delegate_ && this.delegate_.setObserver && this.delegate_.setObserver(gamepadObserver);
  }

  GamepadMonitorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGamepadMonitor_SetObserver_Name:
      var params = reader.decodeStruct(GamepadMonitor_SetObserver_Params);
      this.setObserver(params.gamepadObserver);
      return true;
    default:
      return false;
    }
  };

  GamepadMonitorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGamepadMonitor_GamepadStartPolling_Name:
      var params = reader.decodeStruct(GamepadMonitor_GamepadStartPolling_Params);
      this.gamepadStartPolling().then(function(response) {
        var responseParams =
            new GamepadMonitor_GamepadStartPolling_ResponseParams();
        responseParams.memoryHandle = response.memoryHandle;
        var builder = new codec.MessageV1Builder(
            kGamepadMonitor_GamepadStartPolling_Name,
            codec.align(GamepadMonitor_GamepadStartPolling_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GamepadMonitor_GamepadStartPolling_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGamepadMonitor_GamepadStopPolling_Name:
      var params = reader.decodeStruct(GamepadMonitor_GamepadStopPolling_Params);
      this.gamepadStopPolling().then(function(response) {
        var responseParams =
            new GamepadMonitor_GamepadStopPolling_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kGamepadMonitor_GamepadStopPolling_Name,
            codec.align(GamepadMonitor_GamepadStopPolling_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GamepadMonitor_GamepadStopPolling_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateGamepadMonitorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGamepadMonitor_GamepadStartPolling_Name:
        if (message.expectsResponse())
          paramsClass = GamepadMonitor_GamepadStartPolling_Params;
      break;
      case kGamepadMonitor_GamepadStopPolling_Name:
        if (message.expectsResponse())
          paramsClass = GamepadMonitor_GamepadStopPolling_Params;
      break;
      case kGamepadMonitor_SetObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GamepadMonitor_SetObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGamepadMonitorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGamepadMonitor_GamepadStartPolling_Name:
        if (message.isResponse())
          paramsClass = GamepadMonitor_GamepadStartPolling_ResponseParams;
        break;
      case kGamepadMonitor_GamepadStopPolling_Name:
        if (message.isResponse())
          paramsClass = GamepadMonitor_GamepadStopPolling_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var GamepadMonitor = {
    name: 'device.mojom.GamepadMonitor',
    kVersion: 0,
    ptrClass: GamepadMonitorPtr,
    proxyClass: GamepadMonitorProxy,
    stubClass: GamepadMonitorStub,
    validateRequest: validateGamepadMonitorRequest,
    validateResponse: validateGamepadMonitorResponse,
    mojomId: 'device/gamepad/public/mojom/gamepad.mojom',
    fuzzMethods: {
      gamepadStartPolling: {
        params: GamepadMonitor_GamepadStartPolling_Params,
      },
      gamepadStopPolling: {
        params: GamepadMonitor_GamepadStopPolling_Params,
      },
      setObserver: {
        params: GamepadMonitor_SetObserver_Params,
      },
    },
  };
  GamepadMonitorStub.prototype.validator = validateGamepadMonitorRequest;
  GamepadMonitorProxy.prototype.validator = validateGamepadMonitorResponse;
  var kGamepadHapticsManager_PlayVibrationEffectOnce_Name = 1159565199;
  var kGamepadHapticsManager_ResetVibrationActuator_Name = 884413605;

  function GamepadHapticsManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GamepadHapticsManager,
                                                   handleOrPtrInfo);
  }

  function GamepadHapticsManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GamepadHapticsManager, associatedInterfacePtrInfo);
  }

  GamepadHapticsManagerAssociatedPtr.prototype =
      Object.create(GamepadHapticsManagerPtr.prototype);
  GamepadHapticsManagerAssociatedPtr.prototype.constructor =
      GamepadHapticsManagerAssociatedPtr;

  function GamepadHapticsManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  GamepadHapticsManagerPtr.prototype.playVibrationEffectOnce = function() {
    return GamepadHapticsManagerProxy.prototype.playVibrationEffectOnce
        .apply(this.ptr.getProxy(), arguments);
  };

  GamepadHapticsManagerProxy.prototype.playVibrationEffectOnce = function(padIndex, type, params) {
    var params_ = new GamepadHapticsManager_PlayVibrationEffectOnce_Params();
    params_.padIndex = padIndex;
    params_.type = type;
    params_.params = params;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGamepadHapticsManager_PlayVibrationEffectOnce_Name,
          codec.align(GamepadHapticsManager_PlayVibrationEffectOnce_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GamepadHapticsManager_PlayVibrationEffectOnce_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GamepadHapticsManagerPtr.prototype.resetVibrationActuator = function() {
    return GamepadHapticsManagerProxy.prototype.resetVibrationActuator
        .apply(this.ptr.getProxy(), arguments);
  };

  GamepadHapticsManagerProxy.prototype.resetVibrationActuator = function(padIndex) {
    var params_ = new GamepadHapticsManager_ResetVibrationActuator_Params();
    params_.padIndex = padIndex;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGamepadHapticsManager_ResetVibrationActuator_Name,
          codec.align(GamepadHapticsManager_ResetVibrationActuator_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GamepadHapticsManager_ResetVibrationActuator_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GamepadHapticsManager_ResetVibrationActuator_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function GamepadHapticsManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  GamepadHapticsManagerStub.prototype.playVibrationEffectOnce = function(padIndex, type, params) {
    return this.delegate_ && this.delegate_.playVibrationEffectOnce && this.delegate_.playVibrationEffectOnce(padIndex, type, params);
  }
  GamepadHapticsManagerStub.prototype.resetVibrationActuator = function(padIndex) {
    return this.delegate_ && this.delegate_.resetVibrationActuator && this.delegate_.resetVibrationActuator(padIndex);
  }

  GamepadHapticsManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  GamepadHapticsManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGamepadHapticsManager_PlayVibrationEffectOnce_Name:
      var params = reader.decodeStruct(GamepadHapticsManager_PlayVibrationEffectOnce_Params);
      this.playVibrationEffectOnce(params.padIndex, params.type, params.params).then(function(response) {
        var responseParams =
            new GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kGamepadHapticsManager_PlayVibrationEffectOnce_Name,
            codec.align(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGamepadHapticsManager_ResetVibrationActuator_Name:
      var params = reader.decodeStruct(GamepadHapticsManager_ResetVibrationActuator_Params);
      this.resetVibrationActuator(params.padIndex).then(function(response) {
        var responseParams =
            new GamepadHapticsManager_ResetVibrationActuator_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kGamepadHapticsManager_ResetVibrationActuator_Name,
            codec.align(GamepadHapticsManager_ResetVibrationActuator_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GamepadHapticsManager_ResetVibrationActuator_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateGamepadHapticsManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGamepadHapticsManager_PlayVibrationEffectOnce_Name:
        if (message.expectsResponse())
          paramsClass = GamepadHapticsManager_PlayVibrationEffectOnce_Params;
      break;
      case kGamepadHapticsManager_ResetVibrationActuator_Name:
        if (message.expectsResponse())
          paramsClass = GamepadHapticsManager_ResetVibrationActuator_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGamepadHapticsManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGamepadHapticsManager_PlayVibrationEffectOnce_Name:
        if (message.isResponse())
          paramsClass = GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams;
        break;
      case kGamepadHapticsManager_ResetVibrationActuator_Name:
        if (message.isResponse())
          paramsClass = GamepadHapticsManager_ResetVibrationActuator_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var GamepadHapticsManager = {
    name: 'device.mojom.GamepadHapticsManager',
    kVersion: 0,
    ptrClass: GamepadHapticsManagerPtr,
    proxyClass: GamepadHapticsManagerProxy,
    stubClass: GamepadHapticsManagerStub,
    validateRequest: validateGamepadHapticsManagerRequest,
    validateResponse: validateGamepadHapticsManagerResponse,
    mojomId: 'device/gamepad/public/mojom/gamepad.mojom',
    fuzzMethods: {
      playVibrationEffectOnce: {
        params: GamepadHapticsManager_PlayVibrationEffectOnce_Params,
      },
      resetVibrationActuator: {
        params: GamepadHapticsManager_ResetVibrationActuator_Params,
      },
    },
  };
  GamepadHapticsManagerStub.prototype.validator = validateGamepadHapticsManagerRequest;
  GamepadHapticsManagerProxy.prototype.validator = validateGamepadHapticsManagerResponse;
  exports.GamepadHand = GamepadHand;
  exports.GamepadHapticActuatorType = GamepadHapticActuatorType;
  exports.GamepadHapticEffectType = GamepadHapticEffectType;
  exports.GamepadHapticsResult = GamepadHapticsResult;
  exports.GamepadQuaternion = GamepadQuaternion;
  exports.GamepadVector = GamepadVector;
  exports.GamepadButton = GamepadButton;
  exports.GamepadPose = GamepadPose;
  exports.GamepadHapticActuator = GamepadHapticActuator;
  exports.Gamepad = Gamepad;
  exports.GamepadEffectParameters = GamepadEffectParameters;
  exports.GamepadObserver = GamepadObserver;
  exports.GamepadObserverPtr = GamepadObserverPtr;
  exports.GamepadObserverAssociatedPtr = GamepadObserverAssociatedPtr;
  exports.GamepadMonitor = GamepadMonitor;
  exports.GamepadMonitorPtr = GamepadMonitorPtr;
  exports.GamepadMonitorAssociatedPtr = GamepadMonitorAssociatedPtr;
  exports.GamepadHapticsManager = GamepadHapticsManager;
  exports.GamepadHapticsManagerPtr = GamepadHapticsManagerPtr;
  exports.GamepadHapticsManagerAssociatedPtr = GamepadHapticsManagerAssociatedPtr;
})();