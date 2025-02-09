// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/input_service.mojom';
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


  var InputDeviceSubsystem = {};
  InputDeviceSubsystem.SUBSYSTEM_HID = 0;
  InputDeviceSubsystem.SUBSYSTEM_INPUT = 1;
  InputDeviceSubsystem.SUBSYSTEM_UNKNOWN = 2;

  InputDeviceSubsystem.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  InputDeviceSubsystem.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var InputDeviceType = {};
  InputDeviceType.TYPE_BLUETOOTH = 0;
  InputDeviceType.TYPE_USB = 1;
  InputDeviceType.TYPE_SERIO = 2;
  InputDeviceType.TYPE_UNKNOWN = 3;

  InputDeviceType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
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

  function InputDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceInfo.prototype.initDefaults_ = function() {
    this.id = null;
    this.name = null;
    this.subsystem = 0;
    this.type = 0;
    this.isAccelerometer = false;
    this.isJoystick = false;
    this.isKey = false;
    this.isKeyboard = false;
    this.isMouse = false;
    this.isTablet = false;
    this.isTouchpad = false;
    this.isTouchscreen = false;
  };
  InputDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceInfo.generate = function(generator_) {
    var generated = new InputDeviceInfo;
    generated.id = generator_.generateString(false);
    generated.name = generator_.generateString(false);
    generated.subsystem = generator_.generateEnum(0, 2);
    generated.type = generator_.generateEnum(0, 3);
    generated.isAccelerometer = generator_.generateBool();
    generated.isJoystick = generator_.generateBool();
    generated.isKey = generator_.generateBool();
    generated.isKeyboard = generator_.generateBool();
    generated.isMouse = generator_.generateBool();
    generated.isTablet = generator_.generateBool();
    generated.isTouchpad = generator_.generateBool();
    generated.isTouchscreen = generator_.generateBool();
    return generated;
  };

  InputDeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.subsystem = mutator_.mutateEnum(this.subsystem, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.isAccelerometer = mutator_.mutateBool(this.isAccelerometer);
    }
    if (mutator_.chooseMutateField()) {
      this.isJoystick = mutator_.mutateBool(this.isJoystick);
    }
    if (mutator_.chooseMutateField()) {
      this.isKey = mutator_.mutateBool(this.isKey);
    }
    if (mutator_.chooseMutateField()) {
      this.isKeyboard = mutator_.mutateBool(this.isKeyboard);
    }
    if (mutator_.chooseMutateField()) {
      this.isMouse = mutator_.mutateBool(this.isMouse);
    }
    if (mutator_.chooseMutateField()) {
      this.isTablet = mutator_.mutateBool(this.isTablet);
    }
    if (mutator_.chooseMutateField()) {
      this.isTouchpad = mutator_.mutateBool(this.isTouchpad);
    }
    if (mutator_.chooseMutateField()) {
      this.isTouchscreen = mutator_.mutateBool(this.isTouchscreen);
    }
    return this;
  };
  InputDeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceInfo.validate = function(messageValidator, offset) {
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


    // validate InputDeviceInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDeviceInfo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDeviceInfo.subsystem
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, InputDeviceSubsystem);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDeviceInfo.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, InputDeviceType);
    if (err !== validator.validationError.NONE)
        return err;









    return validator.validationError.NONE;
  };

  InputDeviceInfo.encodedSize = codec.kStructHeaderSize + 32;

  InputDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new InputDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.subsystem = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isAccelerometer = (packed >> 0) & 1 ? true : false;
    val.isJoystick = (packed >> 1) & 1 ? true : false;
    val.isKey = (packed >> 2) & 1 ? true : false;
    val.isKeyboard = (packed >> 3) & 1 ? true : false;
    val.isMouse = (packed >> 4) & 1 ? true : false;
    val.isTablet = (packed >> 5) & 1 ? true : false;
    val.isTouchpad = (packed >> 6) & 1 ? true : false;
    val.isTouchscreen = (packed >> 7) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.Int32, val.subsystem);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.isAccelerometer & 1) << 0
    packed |= (val.isJoystick & 1) << 1
    packed |= (val.isKey & 1) << 2
    packed |= (val.isKeyboard & 1) << 3
    packed |= (val.isMouse & 1) << 4
    packed |= (val.isTablet & 1) << 5
    packed |= (val.isTouchpad & 1) << 6
    packed |= (val.isTouchscreen & 1) << 7
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputDeviceManagerClient_InputDeviceAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceManagerClient_InputDeviceAdded_Params.prototype.initDefaults_ = function() {
    this.deviceInfo = null;
  };
  InputDeviceManagerClient_InputDeviceAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceManagerClient_InputDeviceAdded_Params.generate = function(generator_) {
    var generated = new InputDeviceManagerClient_InputDeviceAdded_Params;
    generated.deviceInfo = generator_.generateStruct(device.mojom.InputDeviceInfo, false);
    return generated;
  };

  InputDeviceManagerClient_InputDeviceAdded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceInfo = mutator_.mutateStruct(device.mojom.InputDeviceInfo, false);
    }
    return this;
  };
  InputDeviceManagerClient_InputDeviceAdded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceManagerClient_InputDeviceAdded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceManagerClient_InputDeviceAdded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceManagerClient_InputDeviceAdded_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceManagerClient_InputDeviceAdded_Params.deviceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, InputDeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceManagerClient_InputDeviceAdded_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceManagerClient_InputDeviceAdded_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceManagerClient_InputDeviceAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceInfo = decoder.decodeStructPointer(InputDeviceInfo);
    return val;
  };

  InputDeviceManagerClient_InputDeviceAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceManagerClient_InputDeviceAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(InputDeviceInfo, val.deviceInfo);
  };
  function InputDeviceManagerClient_InputDeviceRemoved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceManagerClient_InputDeviceRemoved_Params.prototype.initDefaults_ = function() {
    this.id = null;
  };
  InputDeviceManagerClient_InputDeviceRemoved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceManagerClient_InputDeviceRemoved_Params.generate = function(generator_) {
    var generated = new InputDeviceManagerClient_InputDeviceRemoved_Params;
    generated.id = generator_.generateString(false);
    return generated;
  };

  InputDeviceManagerClient_InputDeviceRemoved_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    return this;
  };
  InputDeviceManagerClient_InputDeviceRemoved_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceManagerClient_InputDeviceRemoved_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceManagerClient_InputDeviceRemoved_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceManagerClient_InputDeviceRemoved_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceManagerClient_InputDeviceRemoved_Params.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceManagerClient_InputDeviceRemoved_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceManagerClient_InputDeviceRemoved_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceManagerClient_InputDeviceRemoved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    return val;
  };

  InputDeviceManagerClient_InputDeviceRemoved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceManagerClient_InputDeviceRemoved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
  };
  function InputDeviceManager_GetDevicesAndSetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceManager_GetDevicesAndSetClient_Params.prototype.initDefaults_ = function() {
    this.client = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  InputDeviceManager_GetDevicesAndSetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceManager_GetDevicesAndSetClient_Params.generate = function(generator_) {
    var generated = new InputDeviceManager_GetDevicesAndSetClient_Params;
    generated.client = generator_.generateAssociatedInterface("device.mojom.InputDeviceManagerClient", false);
    return generated;
  };

  InputDeviceManager_GetDevicesAndSetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateAssociatedInterface(this.client, "device.mojom.InputDeviceManagerClient", false);
    }
    return this;
  };
  InputDeviceManager_GetDevicesAndSetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.InputDeviceManagerClientAssociatedPtr"]);
    }
    return handles;
  };

  InputDeviceManager_GetDevicesAndSetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceManager_GetDevicesAndSetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  InputDeviceManager_GetDevicesAndSetClient_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceManager_GetDevicesAndSetClient_Params.client
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceManager_GetDevicesAndSetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceManager_GetDevicesAndSetClient_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceManager_GetDevicesAndSetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  InputDeviceManager_GetDevicesAndSetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceManager_GetDevicesAndSetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.client);
  };
  function InputDeviceManager_GetDevicesAndSetClient_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.generate = function(generator_) {
    var generated = new InputDeviceManager_GetDevicesAndSetClient_ResponseParams;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.InputDeviceInfo, false);
    });
    return generated;
  };

  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(device.mojom.InputDeviceInfo, false);
      });
    }
    return this;
  };
  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate InputDeviceManager_GetDevicesAndSetClient_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(InputDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputDeviceManager_GetDevicesAndSetClient_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(InputDeviceInfo));
    return val;
  };

  InputDeviceManager_GetDevicesAndSetClient_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceManager_GetDevicesAndSetClient_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(InputDeviceInfo), val.devices);
  };
  function InputDeviceManager_GetDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceManager_GetDevices_Params.prototype.initDefaults_ = function() {
  };
  InputDeviceManager_GetDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceManager_GetDevices_Params.generate = function(generator_) {
    var generated = new InputDeviceManager_GetDevices_Params;
    return generated;
  };

  InputDeviceManager_GetDevices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InputDeviceManager_GetDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceManager_GetDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceManager_GetDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceManager_GetDevices_Params.validate = function(messageValidator, offset) {
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

  InputDeviceManager_GetDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  InputDeviceManager_GetDevices_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceManager_GetDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputDeviceManager_GetDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceManager_GetDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InputDeviceManager_GetDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceManager_GetDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  InputDeviceManager_GetDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceManager_GetDevices_ResponseParams.generate = function(generator_) {
    var generated = new InputDeviceManager_GetDevices_ResponseParams;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.InputDeviceInfo, false);
    });
    return generated;
  };

  InputDeviceManager_GetDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(device.mojom.InputDeviceInfo, false);
      });
    }
    return this;
  };
  InputDeviceManager_GetDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceManager_GetDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceManager_GetDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceManager_GetDevices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate InputDeviceManager_GetDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(InputDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceManager_GetDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceManager_GetDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputDeviceManager_GetDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(InputDeviceInfo));
    return val;
  };

  InputDeviceManager_GetDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceManager_GetDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(InputDeviceInfo), val.devices);
  };
  var kInputDeviceManagerClient_InputDeviceAdded_Name = 12423431;
  var kInputDeviceManagerClient_InputDeviceRemoved_Name = 946130986;

  function InputDeviceManagerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InputDeviceManagerClient,
                                                   handleOrPtrInfo);
  }

  function InputDeviceManagerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InputDeviceManagerClient, associatedInterfacePtrInfo);
  }

  InputDeviceManagerClientAssociatedPtr.prototype =
      Object.create(InputDeviceManagerClientPtr.prototype);
  InputDeviceManagerClientAssociatedPtr.prototype.constructor =
      InputDeviceManagerClientAssociatedPtr;

  function InputDeviceManagerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  InputDeviceManagerClientPtr.prototype.inputDeviceAdded = function() {
    return InputDeviceManagerClientProxy.prototype.inputDeviceAdded
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceManagerClientProxy.prototype.inputDeviceAdded = function(deviceInfo) {
    var params_ = new InputDeviceManagerClient_InputDeviceAdded_Params();
    params_.deviceInfo = deviceInfo;
    var builder = new codec.MessageV0Builder(
        kInputDeviceManagerClient_InputDeviceAdded_Name,
        codec.align(InputDeviceManagerClient_InputDeviceAdded_Params.encodedSize));
    builder.encodeStruct(InputDeviceManagerClient_InputDeviceAdded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputDeviceManagerClientPtr.prototype.inputDeviceRemoved = function() {
    return InputDeviceManagerClientProxy.prototype.inputDeviceRemoved
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceManagerClientProxy.prototype.inputDeviceRemoved = function(id) {
    var params_ = new InputDeviceManagerClient_InputDeviceRemoved_Params();
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kInputDeviceManagerClient_InputDeviceRemoved_Name,
        codec.align(InputDeviceManagerClient_InputDeviceRemoved_Params.encodedSize));
    builder.encodeStruct(InputDeviceManagerClient_InputDeviceRemoved_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InputDeviceManagerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  InputDeviceManagerClientStub.prototype.inputDeviceAdded = function(deviceInfo) {
    return this.delegate_ && this.delegate_.inputDeviceAdded && this.delegate_.inputDeviceAdded(deviceInfo);
  }
  InputDeviceManagerClientStub.prototype.inputDeviceRemoved = function(id) {
    return this.delegate_ && this.delegate_.inputDeviceRemoved && this.delegate_.inputDeviceRemoved(id);
  }

  InputDeviceManagerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputDeviceManagerClient_InputDeviceAdded_Name:
      var params = reader.decodeStruct(InputDeviceManagerClient_InputDeviceAdded_Params);
      this.inputDeviceAdded(params.deviceInfo);
      return true;
    case kInputDeviceManagerClient_InputDeviceRemoved_Name:
      var params = reader.decodeStruct(InputDeviceManagerClient_InputDeviceRemoved_Params);
      this.inputDeviceRemoved(params.id);
      return true;
    default:
      return false;
    }
  };

  InputDeviceManagerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInputDeviceManagerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputDeviceManagerClient_InputDeviceAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceManagerClient_InputDeviceAdded_Params;
      break;
      case kInputDeviceManagerClient_InputDeviceRemoved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceManagerClient_InputDeviceRemoved_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputDeviceManagerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InputDeviceManagerClient = {
    name: 'device.mojom.InputDeviceManagerClient',
    kVersion: 0,
    ptrClass: InputDeviceManagerClientPtr,
    proxyClass: InputDeviceManagerClientProxy,
    stubClass: InputDeviceManagerClientStub,
    validateRequest: validateInputDeviceManagerClientRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/input_service.mojom',
    fuzzMethods: {
      inputDeviceAdded: {
        params: InputDeviceManagerClient_InputDeviceAdded_Params,
      },
      inputDeviceRemoved: {
        params: InputDeviceManagerClient_InputDeviceRemoved_Params,
      },
    },
  };
  InputDeviceManagerClientStub.prototype.validator = validateInputDeviceManagerClientRequest;
  InputDeviceManagerClientProxy.prototype.validator = null;
  var kInputDeviceManager_GetDevicesAndSetClient_Name = 1572871451;
  var kInputDeviceManager_GetDevices_Name = 847999774;

  function InputDeviceManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InputDeviceManager,
                                                   handleOrPtrInfo);
  }

  function InputDeviceManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InputDeviceManager, associatedInterfacePtrInfo);
  }

  InputDeviceManagerAssociatedPtr.prototype =
      Object.create(InputDeviceManagerPtr.prototype);
  InputDeviceManagerAssociatedPtr.prototype.constructor =
      InputDeviceManagerAssociatedPtr;

  function InputDeviceManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  InputDeviceManagerPtr.prototype.getDevicesAndSetClient = function() {
    return InputDeviceManagerProxy.prototype.getDevicesAndSetClient
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceManagerProxy.prototype.getDevicesAndSetClient = function(client) {
    var params_ = new InputDeviceManager_GetDevicesAndSetClient_Params();
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kInputDeviceManager_GetDevicesAndSetClient_Name,
          codec.align(InputDeviceManager_GetDevicesAndSetClient_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(InputDeviceManager_GetDevicesAndSetClient_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputDeviceManager_GetDevicesAndSetClient_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InputDeviceManagerPtr.prototype.getDevices = function() {
    return InputDeviceManagerProxy.prototype.getDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceManagerProxy.prototype.getDevices = function() {
    var params_ = new InputDeviceManager_GetDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputDeviceManager_GetDevices_Name,
          codec.align(InputDeviceManager_GetDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputDeviceManager_GetDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputDeviceManager_GetDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function InputDeviceManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  InputDeviceManagerStub.prototype.getDevicesAndSetClient = function(client) {
    return this.delegate_ && this.delegate_.getDevicesAndSetClient && this.delegate_.getDevicesAndSetClient(client);
  }
  InputDeviceManagerStub.prototype.getDevices = function() {
    return this.delegate_ && this.delegate_.getDevices && this.delegate_.getDevices();
  }

  InputDeviceManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  InputDeviceManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputDeviceManager_GetDevicesAndSetClient_Name:
      var params = reader.decodeStruct(InputDeviceManager_GetDevicesAndSetClient_Params);
      this.getDevicesAndSetClient(params.client).then(function(response) {
        var responseParams =
            new InputDeviceManager_GetDevicesAndSetClient_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageV2Builder(
            kInputDeviceManager_GetDevicesAndSetClient_Name,
            codec.align(InputDeviceManager_GetDevicesAndSetClient_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(InputDeviceManager_GetDevicesAndSetClient_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kInputDeviceManager_GetDevices_Name:
      var params = reader.decodeStruct(InputDeviceManager_GetDevices_Params);
      this.getDevices().then(function(response) {
        var responseParams =
            new InputDeviceManager_GetDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageV1Builder(
            kInputDeviceManager_GetDevices_Name,
            codec.align(InputDeviceManager_GetDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputDeviceManager_GetDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateInputDeviceManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputDeviceManager_GetDevicesAndSetClient_Name:
        if (message.expectsResponse())
          paramsClass = InputDeviceManager_GetDevicesAndSetClient_Params;
      break;
      case kInputDeviceManager_GetDevices_Name:
        if (message.expectsResponse())
          paramsClass = InputDeviceManager_GetDevices_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputDeviceManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kInputDeviceManager_GetDevicesAndSetClient_Name:
        if (message.isResponse())
          paramsClass = InputDeviceManager_GetDevicesAndSetClient_ResponseParams;
        break;
      case kInputDeviceManager_GetDevices_Name:
        if (message.isResponse())
          paramsClass = InputDeviceManager_GetDevices_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var InputDeviceManager = {
    name: 'device.mojom.InputDeviceManager',
    kVersion: 0,
    ptrClass: InputDeviceManagerPtr,
    proxyClass: InputDeviceManagerProxy,
    stubClass: InputDeviceManagerStub,
    validateRequest: validateInputDeviceManagerRequest,
    validateResponse: validateInputDeviceManagerResponse,
    mojomId: 'services/device/public/mojom/input_service.mojom',
    fuzzMethods: {
      getDevicesAndSetClient: {
        params: InputDeviceManager_GetDevicesAndSetClient_Params,
      },
      getDevices: {
        params: InputDeviceManager_GetDevices_Params,
      },
    },
  };
  InputDeviceManagerStub.prototype.validator = validateInputDeviceManagerRequest;
  InputDeviceManagerProxy.prototype.validator = validateInputDeviceManagerResponse;
  exports.InputDeviceSubsystem = InputDeviceSubsystem;
  exports.InputDeviceType = InputDeviceType;
  exports.InputDeviceInfo = InputDeviceInfo;
  exports.InputDeviceManagerClient = InputDeviceManagerClient;
  exports.InputDeviceManagerClientPtr = InputDeviceManagerClientPtr;
  exports.InputDeviceManagerClientAssociatedPtr = InputDeviceManagerClientAssociatedPtr;
  exports.InputDeviceManager = InputDeviceManager;
  exports.InputDeviceManagerPtr = InputDeviceManagerPtr;
  exports.InputDeviceManagerAssociatedPtr = InputDeviceManagerAssociatedPtr;
})();