// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/events/devices/mojo/input_devices.mojom';
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
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../gfx/geometry/mojo/geometry.mojom.js');
  }


  var InputDeviceType = {};
  InputDeviceType.INPUT_DEVICE_INTERNAL = 0;
  InputDeviceType.INPUT_DEVICE_EXTERNAL = InputDeviceType.INPUT_DEVICE_INTERNAL + 1;
  InputDeviceType.INPUT_DEVICE_UNKNOWN = InputDeviceType.INPUT_DEVICE_EXTERNAL + 1;

  InputDeviceType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  InputDeviceType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var StylusState = {};
  StylusState.REMOVED = 0;
  StylusState.INSERTED = StylusState.REMOVED + 1;

  StylusState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  StylusState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function InputDevice(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDevice.prototype.initDefaults_ = function() {
    this.id = 0;
    this.type = 0;
    this.name = null;
    this.enabled = false;
    this.vendorId = 0;
    this.productId = 0;
    this.sysPath = null;
  };
  InputDevice.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDevice.generate = function(generator_) {
    var generated = new InputDevice;
    generated.id = generator_.generateInt32();
    generated.type = generator_.generateEnum(0, 2);
    generated.name = generator_.generateString(false);
    generated.enabled = generator_.generateBool();
    generated.sysPath = generator_.generateString(false);
    generated.vendorId = generator_.generateUint16();
    generated.productId = generator_.generateUint16();
    return generated;
  };

  InputDevice.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    if (mutator_.chooseMutateField()) {
      this.sysPath = mutator_.mutateString(this.sysPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.vendorId = mutator_.mutateUint16(this.vendorId);
    }
    if (mutator_.chooseMutateField()) {
      this.productId = mutator_.mutateUint16(this.productId);
    }
    return this;
  };
  InputDevice.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDevice.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDevice.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDevice.validate = function(messageValidator, offset) {
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



    // validate InputDevice.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, InputDeviceType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDevice.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate InputDevice.sysPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  InputDevice.encodedSize = codec.kStructHeaderSize + 32;

  InputDevice.decode = function(decoder) {
    var packed;
    var val = new InputDevice();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.Int32);
    val.name = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    val.vendorId = decoder.decodeStruct(codec.Uint16);
    val.productId = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    val.sysPath = decoder.decodeStruct(codec.String);
    return val;
  };

  InputDevice.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDevice.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.String, val.name);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.vendorId);
    encoder.encodeStruct(codec.Uint16, val.productId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.sysPath);
  };
  function TouchscreenDevice(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TouchscreenDevice.prototype.initDefaults_ = function() {
    this.inputDevice = null;
    this.size = null;
    this.touchPoints = 0;
    this.hasStylus = false;
  };
  TouchscreenDevice.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TouchscreenDevice.generate = function(generator_) {
    var generated = new TouchscreenDevice;
    generated.inputDevice = generator_.generateStruct(ui.mojom.InputDevice, false);
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    generated.touchPoints = generator_.generateInt32();
    generated.hasStylus = generator_.generateBool();
    return generated;
  };

  TouchscreenDevice.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputDevice = mutator_.mutateStruct(ui.mojom.InputDevice, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.touchPoints = mutator_.mutateInt32(this.touchPoints);
    }
    if (mutator_.chooseMutateField()) {
      this.hasStylus = mutator_.mutateBool(this.hasStylus);
    }
    return this;
  };
  TouchscreenDevice.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TouchscreenDevice.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TouchscreenDevice.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TouchscreenDevice.validate = function(messageValidator, offset) {
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


    // validate TouchscreenDevice.inputDevice
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, InputDevice, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TouchscreenDevice.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  TouchscreenDevice.encodedSize = codec.kStructHeaderSize + 24;

  TouchscreenDevice.decode = function(decoder) {
    var packed;
    var val = new TouchscreenDevice();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputDevice = decoder.decodeStructPointer(InputDevice);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.touchPoints = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.hasStylus = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TouchscreenDevice.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TouchscreenDevice.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(InputDevice, val.inputDevice);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStruct(codec.Int32, val.touchPoints);
    packed = 0;
    packed |= (val.hasStylus & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.InputDeviceType = InputDeviceType;
  exports.StylusState = StylusState;
  exports.InputDevice = InputDevice;
  exports.TouchscreenDevice = TouchscreenDevice;
})();