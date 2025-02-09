// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'device/bluetooth/public/mojom/device.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('bluetooth.mojom');
  var uuid$ =
      mojo.internal.exposeNamespace('bluetooth.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'device/bluetooth/public/mojom/uuid.mojom', 'uuid.mojom.js');
  }


  var Property = {};
  Property.NONE = 0;
  Property.BROADCAST = 1;
  Property.READ = 2;
  Property.WRITE_WITHOUT_RESPONSE = 4;
  Property.WRITE = 8;
  Property.NOTIFY = 16;
  Property.INDICATE = 32;
  Property.AUTHENTICATED_SIGNED_WRITES = 64;
  Property.EXTENDED_PROPERTIES = 128;
  Property.RELIABLE_WRITE = 256;
  Property.WRITABLE_AUXILIARIES = 512;
  Property.READ_ENCRYPTED = 1024;
  Property.WRITE_ENCRYPTED = 2048;
  Property.READ_ENCRYPTED_AUTHENTICATED = 4096;
  Property.WRITE_ENCRYPTED_AUTHENTICATED = 8192;

  Property.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
    case 128:
    case 256:
    case 512:
    case 1024:
    case 2048:
    case 4096:
    case 8192:
      return true;
    }
    return false;
  };

  Property.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GattResult = {};
  GattResult.SUCCESS = 0;
  GattResult.UNKNOWN = GattResult.SUCCESS + 1;
  GattResult.FAILED = GattResult.UNKNOWN + 1;
  GattResult.IN_PROGRESS = GattResult.FAILED + 1;
  GattResult.INVALID_LENGTH = GattResult.IN_PROGRESS + 1;
  GattResult.NOT_PERMITTED = GattResult.INVALID_LENGTH + 1;
  GattResult.NOT_AUTHORIZED = GattResult.NOT_PERMITTED + 1;
  GattResult.NOT_PAIRED = GattResult.NOT_AUTHORIZED + 1;
  GattResult.NOT_SUPPORTED = GattResult.NOT_PAIRED + 1;
  GattResult.SERVICE_NOT_FOUND = GattResult.NOT_SUPPORTED + 1;
  GattResult.CHARACTERISTIC_NOT_FOUND = GattResult.SERVICE_NOT_FOUND + 1;
  GattResult.DESCRIPTOR_NOT_FOUND = GattResult.CHARACTERISTIC_NOT_FOUND + 1;

  GattResult.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  GattResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function RSSIWrapper(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RSSIWrapper.prototype.initDefaults_ = function() {
    this.value = 0;
  };
  RSSIWrapper.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RSSIWrapper.generate = function(generator_) {
    var generated = new RSSIWrapper;
    generated.value = generator_.generateInt8();
    return generated;
  };

  RSSIWrapper.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateInt8(this.value);
    }
    return this;
  };
  RSSIWrapper.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RSSIWrapper.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RSSIWrapper.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RSSIWrapper.validate = function(messageValidator, offset) {
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

  RSSIWrapper.encodedSize = codec.kStructHeaderSize + 8;

  RSSIWrapper.decode = function(decoder) {
    var packed;
    var val = new RSSIWrapper();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.Int8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RSSIWrapper.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RSSIWrapper.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int8, val.value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceInfo.prototype.initDefaults_ = function() {
    this.name = null;
    this.nameForDisplay = null;
    this.address = null;
    this.isGattConnected = false;
    this.rssi = null;
  };
  DeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceInfo.generate = function(generator_) {
    var generated = new DeviceInfo;
    generated.name = generator_.generateString(true);
    generated.nameForDisplay = generator_.generateString(false);
    generated.address = generator_.generateString(false);
    generated.isGattConnected = generator_.generateBool();
    generated.rssi = generator_.generateStruct(bluetooth.mojom.RSSIWrapper, true);
    return generated;
  };

  DeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, true);
    }
    if (mutator_.chooseMutateField()) {
      this.nameForDisplay = mutator_.mutateString(this.nameForDisplay, false);
    }
    if (mutator_.chooseMutateField()) {
      this.address = mutator_.mutateString(this.address, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isGattConnected = mutator_.mutateBool(this.isGattConnected);
    }
    if (mutator_.chooseMutateField()) {
      this.rssi = mutator_.mutateStruct(bluetooth.mojom.RSSIWrapper, true);
    }
    return this;
  };
  DeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DeviceInfo.validate = function(messageValidator, offset) {
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


    // validate DeviceInfo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DeviceInfo.nameForDisplay
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DeviceInfo.address
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate DeviceInfo.rssi
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, RSSIWrapper, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceInfo.encodedSize = codec.kStructHeaderSize + 40;

  DeviceInfo.decode = function(decoder) {
    var packed;
    var val = new DeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.NullableString);
    val.nameForDisplay = decoder.decodeStruct(codec.String);
    val.address = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.isGattConnected = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.rssi = decoder.decodeStructPointer(RSSIWrapper);
    return val;
  };

  DeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.name);
    encoder.encodeStruct(codec.String, val.nameForDisplay);
    encoder.encodeStruct(codec.String, val.address);
    packed = 0;
    packed |= (val.isGattConnected & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(RSSIWrapper, val.rssi);
  };
  function ServiceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceInfo.prototype.initDefaults_ = function() {
    this.id = null;
    this.uuid = null;
    this.isPrimary = false;
  };
  ServiceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceInfo.generate = function(generator_) {
    var generated = new ServiceInfo;
    generated.id = generator_.generateString(false);
    generated.uuid = generator_.generateStruct(bluetooth.mojom.UUID, false);
    generated.isPrimary = generator_.generateBool();
    return generated;
  };

  ServiceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateStruct(bluetooth.mojom.UUID, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isPrimary = mutator_.mutateBool(this.isPrimary);
    }
    return this;
  };
  ServiceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceInfo.validate = function(messageValidator, offset) {
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


    // validate ServiceInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceInfo.uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, uuid$.UUID, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ServiceInfo.encodedSize = codec.kStructHeaderSize + 24;

  ServiceInfo.decode = function(decoder) {
    var packed;
    var val = new ServiceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStructPointer(uuid$.UUID);
    packed = decoder.readUint8();
    val.isPrimary = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStructPointer(uuid$.UUID, val.uuid);
    packed = 0;
    packed |= (val.isPrimary & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CharacteristicInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CharacteristicInfo.prototype.initDefaults_ = function() {
    this.id = null;
    this.uuid = null;
    this.properties = 0;
    this.lastKnownValue = null;
  };
  CharacteristicInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CharacteristicInfo.generate = function(generator_) {
    var generated = new CharacteristicInfo;
    generated.id = generator_.generateString(false);
    generated.uuid = generator_.generateStruct(bluetooth.mojom.UUID, false);
    generated.properties = generator_.generateUint32();
    generated.lastKnownValue = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  CharacteristicInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateStruct(bluetooth.mojom.UUID, false);
    }
    if (mutator_.chooseMutateField()) {
      this.properties = mutator_.mutateUint32(this.properties);
    }
    if (mutator_.chooseMutateField()) {
      this.lastKnownValue = mutator_.mutateArray(this.lastKnownValue, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  CharacteristicInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CharacteristicInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CharacteristicInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CharacteristicInfo.validate = function(messageValidator, offset) {
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


    // validate CharacteristicInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CharacteristicInfo.uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, uuid$.UUID, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CharacteristicInfo.lastKnownValue
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CharacteristicInfo.encodedSize = codec.kStructHeaderSize + 32;

  CharacteristicInfo.decode = function(decoder) {
    var packed;
    var val = new CharacteristicInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStructPointer(uuid$.UUID);
    val.properties = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.lastKnownValue = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  CharacteristicInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CharacteristicInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStructPointer(uuid$.UUID, val.uuid);
    encoder.encodeStruct(codec.Uint32, val.properties);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.lastKnownValue);
  };
  function DescriptorInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DescriptorInfo.prototype.initDefaults_ = function() {
    this.id = null;
    this.uuid = null;
    this.lastKnownValue = null;
  };
  DescriptorInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DescriptorInfo.generate = function(generator_) {
    var generated = new DescriptorInfo;
    generated.id = generator_.generateString(false);
    generated.uuid = generator_.generateStruct(bluetooth.mojom.UUID, false);
    generated.lastKnownValue = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  DescriptorInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateStruct(bluetooth.mojom.UUID, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lastKnownValue = mutator_.mutateArray(this.lastKnownValue, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  DescriptorInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DescriptorInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DescriptorInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DescriptorInfo.validate = function(messageValidator, offset) {
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


    // validate DescriptorInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DescriptorInfo.uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, uuid$.UUID, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DescriptorInfo.lastKnownValue
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DescriptorInfo.encodedSize = codec.kStructHeaderSize + 24;

  DescriptorInfo.decode = function(decoder) {
    var packed;
    var val = new DescriptorInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStructPointer(uuid$.UUID);
    val.lastKnownValue = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  DescriptorInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DescriptorInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStructPointer(uuid$.UUID, val.uuid);
    encoder.encodeArrayPointer(codec.Uint8, val.lastKnownValue);
  };
  function Device_Disconnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_Disconnect_Params.prototype.initDefaults_ = function() {
  };
  Device_Disconnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_Disconnect_Params.generate = function(generator_) {
    var generated = new Device_Disconnect_Params;
    return generated;
  };

  Device_Disconnect_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_Disconnect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_Disconnect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_Disconnect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_Disconnect_Params.validate = function(messageValidator, offset) {
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

  Device_Disconnect_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_Disconnect_Params.decode = function(decoder) {
    var packed;
    var val = new Device_Disconnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_Disconnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_Disconnect_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_GetInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetInfo_Params.prototype.initDefaults_ = function() {
  };
  Device_GetInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetInfo_Params.generate = function(generator_) {
    var generated = new Device_GetInfo_Params;
    return generated;
  };

  Device_GetInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_GetInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetInfo_Params.validate = function(messageValidator, offset) {
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

  Device_GetInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_GetInfo_Params.decode = function(decoder) {
    var packed;
    var val = new Device_GetInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_GetInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_GetInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.info = null;
  };
  Device_GetInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetInfo_ResponseParams.generate = function(generator_) {
    var generated = new Device_GetInfo_ResponseParams;
    generated.info = generator_.generateStruct(bluetooth.mojom.DeviceInfo, true);
    return generated;
  };

  Device_GetInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(bluetooth.mojom.DeviceInfo, true);
    }
    return this;
  };
  Device_GetInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_GetInfo_ResponseParams.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, DeviceInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_GetInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_GetInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_GetInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(DeviceInfo);
    return val;
  };

  Device_GetInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(DeviceInfo, val.info);
  };
  function Device_GetServices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetServices_Params.prototype.initDefaults_ = function() {
  };
  Device_GetServices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetServices_Params.generate = function(generator_) {
    var generated = new Device_GetServices_Params;
    return generated;
  };

  Device_GetServices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_GetServices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetServices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetServices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetServices_Params.validate = function(messageValidator, offset) {
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

  Device_GetServices_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_GetServices_Params.decode = function(decoder) {
    var packed;
    var val = new Device_GetServices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_GetServices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetServices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_GetServices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetServices_ResponseParams.prototype.initDefaults_ = function() {
    this.services = null;
  };
  Device_GetServices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetServices_ResponseParams.generate = function(generator_) {
    var generated = new Device_GetServices_ResponseParams;
    generated.services = generator_.generateArray(function() {
      return generator_.generateStruct(bluetooth.mojom.ServiceInfo, false);
    });
    return generated;
  };

  Device_GetServices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.services = mutator_.mutateArray(this.services, function(val) {
        return mutator_.mutateStruct(bluetooth.mojom.ServiceInfo, false);
      });
    }
    return this;
  };
  Device_GetServices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetServices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetServices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetServices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_GetServices_ResponseParams.services
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ServiceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_GetServices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_GetServices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_GetServices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.services = decoder.decodeArrayPointer(new codec.PointerTo(ServiceInfo));
    return val;
  };

  Device_GetServices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetServices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ServiceInfo), val.services);
  };
  function Device_GetCharacteristics_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetCharacteristics_Params.prototype.initDefaults_ = function() {
    this.serviceId = null;
  };
  Device_GetCharacteristics_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetCharacteristics_Params.generate = function(generator_) {
    var generated = new Device_GetCharacteristics_Params;
    generated.serviceId = generator_.generateString(false);
    return generated;
  };

  Device_GetCharacteristics_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceId = mutator_.mutateString(this.serviceId, false);
    }
    return this;
  };
  Device_GetCharacteristics_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetCharacteristics_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetCharacteristics_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetCharacteristics_Params.validate = function(messageValidator, offset) {
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


    // validate Device_GetCharacteristics_Params.serviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_GetCharacteristics_Params.encodedSize = codec.kStructHeaderSize + 8;

  Device_GetCharacteristics_Params.decode = function(decoder) {
    var packed;
    var val = new Device_GetCharacteristics_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  Device_GetCharacteristics_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetCharacteristics_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceId);
  };
  function Device_GetCharacteristics_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetCharacteristics_ResponseParams.prototype.initDefaults_ = function() {
    this.characteristics = null;
  };
  Device_GetCharacteristics_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetCharacteristics_ResponseParams.generate = function(generator_) {
    var generated = new Device_GetCharacteristics_ResponseParams;
    generated.characteristics = generator_.generateArray(function() {
      return generator_.generateStruct(bluetooth.mojom.CharacteristicInfo, false);
    });
    return generated;
  };

  Device_GetCharacteristics_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.characteristics = mutator_.mutateArray(this.characteristics, function(val) {
        return mutator_.mutateStruct(bluetooth.mojom.CharacteristicInfo, false);
      });
    }
    return this;
  };
  Device_GetCharacteristics_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetCharacteristics_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetCharacteristics_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetCharacteristics_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_GetCharacteristics_ResponseParams.characteristics
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(CharacteristicInfo), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_GetCharacteristics_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_GetCharacteristics_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_GetCharacteristics_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristics = decoder.decodeArrayPointer(new codec.PointerTo(CharacteristicInfo));
    return val;
  };

  Device_GetCharacteristics_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetCharacteristics_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(CharacteristicInfo), val.characteristics);
  };
  function Device_ReadValueForCharacteristic_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_ReadValueForCharacteristic_Params.prototype.initDefaults_ = function() {
    this.serviceId = null;
    this.characteristicId = null;
  };
  Device_ReadValueForCharacteristic_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_ReadValueForCharacteristic_Params.generate = function(generator_) {
    var generated = new Device_ReadValueForCharacteristic_Params;
    generated.serviceId = generator_.generateString(false);
    generated.characteristicId = generator_.generateString(false);
    return generated;
  };

  Device_ReadValueForCharacteristic_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceId = mutator_.mutateString(this.serviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.characteristicId = mutator_.mutateString(this.characteristicId, false);
    }
    return this;
  };
  Device_ReadValueForCharacteristic_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_ReadValueForCharacteristic_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_ReadValueForCharacteristic_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_ReadValueForCharacteristic_Params.validate = function(messageValidator, offset) {
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


    // validate Device_ReadValueForCharacteristic_Params.serviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_ReadValueForCharacteristic_Params.characteristicId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_ReadValueForCharacteristic_Params.encodedSize = codec.kStructHeaderSize + 16;

  Device_ReadValueForCharacteristic_Params.decode = function(decoder) {
    var packed;
    var val = new Device_ReadValueForCharacteristic_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceId = decoder.decodeStruct(codec.String);
    val.characteristicId = decoder.decodeStruct(codec.String);
    return val;
  };

  Device_ReadValueForCharacteristic_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_ReadValueForCharacteristic_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceId);
    encoder.encodeStruct(codec.String, val.characteristicId);
  };
  function Device_ReadValueForCharacteristic_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_ReadValueForCharacteristic_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.value = null;
  };
  Device_ReadValueForCharacteristic_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_ReadValueForCharacteristic_ResponseParams.generate = function(generator_) {
    var generated = new Device_ReadValueForCharacteristic_ResponseParams;
    generated.result = generator_.generateEnum(0, 11);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Device_ReadValueForCharacteristic_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 11);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Device_ReadValueForCharacteristic_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_ReadValueForCharacteristic_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_ReadValueForCharacteristic_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_ReadValueForCharacteristic_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_ReadValueForCharacteristic_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GattResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_ReadValueForCharacteristic_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_ReadValueForCharacteristic_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Device_ReadValueForCharacteristic_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_ReadValueForCharacteristic_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Device_ReadValueForCharacteristic_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_ReadValueForCharacteristic_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function Device_WriteValueForCharacteristic_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_WriteValueForCharacteristic_Params.prototype.initDefaults_ = function() {
    this.serviceId = null;
    this.characteristicId = null;
    this.value = null;
  };
  Device_WriteValueForCharacteristic_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_WriteValueForCharacteristic_Params.generate = function(generator_) {
    var generated = new Device_WriteValueForCharacteristic_Params;
    generated.serviceId = generator_.generateString(false);
    generated.characteristicId = generator_.generateString(false);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Device_WriteValueForCharacteristic_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceId = mutator_.mutateString(this.serviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.characteristicId = mutator_.mutateString(this.characteristicId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Device_WriteValueForCharacteristic_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_WriteValueForCharacteristic_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_WriteValueForCharacteristic_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_WriteValueForCharacteristic_Params.validate = function(messageValidator, offset) {
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


    // validate Device_WriteValueForCharacteristic_Params.serviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_WriteValueForCharacteristic_Params.characteristicId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_WriteValueForCharacteristic_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_WriteValueForCharacteristic_Params.encodedSize = codec.kStructHeaderSize + 24;

  Device_WriteValueForCharacteristic_Params.decode = function(decoder) {
    var packed;
    var val = new Device_WriteValueForCharacteristic_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceId = decoder.decodeStruct(codec.String);
    val.characteristicId = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Device_WriteValueForCharacteristic_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_WriteValueForCharacteristic_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceId);
    encoder.encodeStruct(codec.String, val.characteristicId);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function Device_WriteValueForCharacteristic_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_WriteValueForCharacteristic_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  Device_WriteValueForCharacteristic_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_WriteValueForCharacteristic_ResponseParams.generate = function(generator_) {
    var generated = new Device_WriteValueForCharacteristic_ResponseParams;
    generated.result = generator_.generateEnum(0, 11);
    return generated;
  };

  Device_WriteValueForCharacteristic_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 11);
    }
    return this;
  };
  Device_WriteValueForCharacteristic_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_WriteValueForCharacteristic_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_WriteValueForCharacteristic_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_WriteValueForCharacteristic_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_WriteValueForCharacteristic_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GattResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_WriteValueForCharacteristic_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_WriteValueForCharacteristic_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_WriteValueForCharacteristic_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Device_WriteValueForCharacteristic_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_WriteValueForCharacteristic_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Device_GetDescriptors_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetDescriptors_Params.prototype.initDefaults_ = function() {
    this.serviceId = null;
    this.characteristicId = null;
  };
  Device_GetDescriptors_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetDescriptors_Params.generate = function(generator_) {
    var generated = new Device_GetDescriptors_Params;
    generated.serviceId = generator_.generateString(false);
    generated.characteristicId = generator_.generateString(false);
    return generated;
  };

  Device_GetDescriptors_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceId = mutator_.mutateString(this.serviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.characteristicId = mutator_.mutateString(this.characteristicId, false);
    }
    return this;
  };
  Device_GetDescriptors_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetDescriptors_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetDescriptors_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetDescriptors_Params.validate = function(messageValidator, offset) {
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


    // validate Device_GetDescriptors_Params.serviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_GetDescriptors_Params.characteristicId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_GetDescriptors_Params.encodedSize = codec.kStructHeaderSize + 16;

  Device_GetDescriptors_Params.decode = function(decoder) {
    var packed;
    var val = new Device_GetDescriptors_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceId = decoder.decodeStruct(codec.String);
    val.characteristicId = decoder.decodeStruct(codec.String);
    return val;
  };

  Device_GetDescriptors_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetDescriptors_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceId);
    encoder.encodeStruct(codec.String, val.characteristicId);
  };
  function Device_GetDescriptors_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetDescriptors_ResponseParams.prototype.initDefaults_ = function() {
    this.descriptors = null;
  };
  Device_GetDescriptors_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetDescriptors_ResponseParams.generate = function(generator_) {
    var generated = new Device_GetDescriptors_ResponseParams;
    generated.descriptors = generator_.generateArray(function() {
      return generator_.generateStruct(bluetooth.mojom.DescriptorInfo, false);
    });
    return generated;
  };

  Device_GetDescriptors_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.descriptors = mutator_.mutateArray(this.descriptors, function(val) {
        return mutator_.mutateStruct(bluetooth.mojom.DescriptorInfo, false);
      });
    }
    return this;
  };
  Device_GetDescriptors_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetDescriptors_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetDescriptors_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetDescriptors_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_GetDescriptors_ResponseParams.descriptors
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(DescriptorInfo), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_GetDescriptors_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_GetDescriptors_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_GetDescriptors_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.descriptors = decoder.decodeArrayPointer(new codec.PointerTo(DescriptorInfo));
    return val;
  };

  Device_GetDescriptors_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetDescriptors_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(DescriptorInfo), val.descriptors);
  };
  function Device_ReadValueForDescriptor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_ReadValueForDescriptor_Params.prototype.initDefaults_ = function() {
    this.serviceId = null;
    this.characteristicId = null;
    this.descriptorId = null;
  };
  Device_ReadValueForDescriptor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_ReadValueForDescriptor_Params.generate = function(generator_) {
    var generated = new Device_ReadValueForDescriptor_Params;
    generated.serviceId = generator_.generateString(false);
    generated.characteristicId = generator_.generateString(false);
    generated.descriptorId = generator_.generateString(false);
    return generated;
  };

  Device_ReadValueForDescriptor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceId = mutator_.mutateString(this.serviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.characteristicId = mutator_.mutateString(this.characteristicId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.descriptorId = mutator_.mutateString(this.descriptorId, false);
    }
    return this;
  };
  Device_ReadValueForDescriptor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_ReadValueForDescriptor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_ReadValueForDescriptor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_ReadValueForDescriptor_Params.validate = function(messageValidator, offset) {
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


    // validate Device_ReadValueForDescriptor_Params.serviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_ReadValueForDescriptor_Params.characteristicId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_ReadValueForDescriptor_Params.descriptorId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_ReadValueForDescriptor_Params.encodedSize = codec.kStructHeaderSize + 24;

  Device_ReadValueForDescriptor_Params.decode = function(decoder) {
    var packed;
    var val = new Device_ReadValueForDescriptor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceId = decoder.decodeStruct(codec.String);
    val.characteristicId = decoder.decodeStruct(codec.String);
    val.descriptorId = decoder.decodeStruct(codec.String);
    return val;
  };

  Device_ReadValueForDescriptor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_ReadValueForDescriptor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceId);
    encoder.encodeStruct(codec.String, val.characteristicId);
    encoder.encodeStruct(codec.String, val.descriptorId);
  };
  function Device_ReadValueForDescriptor_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_ReadValueForDescriptor_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.value = null;
  };
  Device_ReadValueForDescriptor_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_ReadValueForDescriptor_ResponseParams.generate = function(generator_) {
    var generated = new Device_ReadValueForDescriptor_ResponseParams;
    generated.result = generator_.generateEnum(0, 11);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Device_ReadValueForDescriptor_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 11);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Device_ReadValueForDescriptor_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_ReadValueForDescriptor_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_ReadValueForDescriptor_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_ReadValueForDescriptor_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_ReadValueForDescriptor_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GattResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_ReadValueForDescriptor_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_ReadValueForDescriptor_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Device_ReadValueForDescriptor_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_ReadValueForDescriptor_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Device_ReadValueForDescriptor_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_ReadValueForDescriptor_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function Device_WriteValueForDescriptor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_WriteValueForDescriptor_Params.prototype.initDefaults_ = function() {
    this.serviceId = null;
    this.characteristicId = null;
    this.descriptorId = null;
    this.value = null;
  };
  Device_WriteValueForDescriptor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_WriteValueForDescriptor_Params.generate = function(generator_) {
    var generated = new Device_WriteValueForDescriptor_Params;
    generated.serviceId = generator_.generateString(false);
    generated.characteristicId = generator_.generateString(false);
    generated.descriptorId = generator_.generateString(false);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Device_WriteValueForDescriptor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceId = mutator_.mutateString(this.serviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.characteristicId = mutator_.mutateString(this.characteristicId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.descriptorId = mutator_.mutateString(this.descriptorId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Device_WriteValueForDescriptor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_WriteValueForDescriptor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_WriteValueForDescriptor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_WriteValueForDescriptor_Params.validate = function(messageValidator, offset) {
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


    // validate Device_WriteValueForDescriptor_Params.serviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_WriteValueForDescriptor_Params.characteristicId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_WriteValueForDescriptor_Params.descriptorId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_WriteValueForDescriptor_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_WriteValueForDescriptor_Params.encodedSize = codec.kStructHeaderSize + 32;

  Device_WriteValueForDescriptor_Params.decode = function(decoder) {
    var packed;
    var val = new Device_WriteValueForDescriptor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceId = decoder.decodeStruct(codec.String);
    val.characteristicId = decoder.decodeStruct(codec.String);
    val.descriptorId = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Device_WriteValueForDescriptor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_WriteValueForDescriptor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceId);
    encoder.encodeStruct(codec.String, val.characteristicId);
    encoder.encodeStruct(codec.String, val.descriptorId);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function Device_WriteValueForDescriptor_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_WriteValueForDescriptor_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  Device_WriteValueForDescriptor_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_WriteValueForDescriptor_ResponseParams.generate = function(generator_) {
    var generated = new Device_WriteValueForDescriptor_ResponseParams;
    generated.result = generator_.generateEnum(0, 11);
    return generated;
  };

  Device_WriteValueForDescriptor_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 11);
    }
    return this;
  };
  Device_WriteValueForDescriptor_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_WriteValueForDescriptor_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_WriteValueForDescriptor_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_WriteValueForDescriptor_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_WriteValueForDescriptor_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GattResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_WriteValueForDescriptor_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_WriteValueForDescriptor_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_WriteValueForDescriptor_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Device_WriteValueForDescriptor_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_WriteValueForDescriptor_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDevice_Disconnect_Name = 451558468;
  var kDevice_GetInfo_Name = 873596870;
  var kDevice_GetServices_Name = 467274438;
  var kDevice_GetCharacteristics_Name = 1141899083;
  var kDevice_ReadValueForCharacteristic_Name = 2115220288;
  var kDevice_WriteValueForCharacteristic_Name = 1312725024;
  var kDevice_GetDescriptors_Name = 343308883;
  var kDevice_ReadValueForDescriptor_Name = 340663221;
  var kDevice_WriteValueForDescriptor_Name = 52225338;

  function DevicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Device,
                                                   handleOrPtrInfo);
  }

  function DeviceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Device, associatedInterfacePtrInfo);
  }

  DeviceAssociatedPtr.prototype =
      Object.create(DevicePtr.prototype);
  DeviceAssociatedPtr.prototype.constructor =
      DeviceAssociatedPtr;

  function DeviceProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevicePtr.prototype.disconnect = function() {
    return DeviceProxy.prototype.disconnect
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.disconnect = function() {
    var params_ = new Device_Disconnect_Params();
    var builder = new codec.MessageV0Builder(
        kDevice_Disconnect_Name,
        codec.align(Device_Disconnect_Params.encodedSize));
    builder.encodeStruct(Device_Disconnect_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevicePtr.prototype.getInfo = function() {
    return DeviceProxy.prototype.getInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.getInfo = function() {
    var params_ = new Device_GetInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_GetInfo_Name,
          codec.align(Device_GetInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_GetInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_GetInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.getServices = function() {
    return DeviceProxy.prototype.getServices
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.getServices = function() {
    var params_ = new Device_GetServices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_GetServices_Name,
          codec.align(Device_GetServices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_GetServices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_GetServices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.getCharacteristics = function() {
    return DeviceProxy.prototype.getCharacteristics
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.getCharacteristics = function(serviceId) {
    var params_ = new Device_GetCharacteristics_Params();
    params_.serviceId = serviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_GetCharacteristics_Name,
          codec.align(Device_GetCharacteristics_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_GetCharacteristics_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_GetCharacteristics_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.readValueForCharacteristic = function() {
    return DeviceProxy.prototype.readValueForCharacteristic
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.readValueForCharacteristic = function(serviceId, characteristicId) {
    var params_ = new Device_ReadValueForCharacteristic_Params();
    params_.serviceId = serviceId;
    params_.characteristicId = characteristicId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_ReadValueForCharacteristic_Name,
          codec.align(Device_ReadValueForCharacteristic_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_ReadValueForCharacteristic_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_ReadValueForCharacteristic_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.writeValueForCharacteristic = function() {
    return DeviceProxy.prototype.writeValueForCharacteristic
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.writeValueForCharacteristic = function(serviceId, characteristicId, value) {
    var params_ = new Device_WriteValueForCharacteristic_Params();
    params_.serviceId = serviceId;
    params_.characteristicId = characteristicId;
    params_.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_WriteValueForCharacteristic_Name,
          codec.align(Device_WriteValueForCharacteristic_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_WriteValueForCharacteristic_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_WriteValueForCharacteristic_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.getDescriptors = function() {
    return DeviceProxy.prototype.getDescriptors
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.getDescriptors = function(serviceId, characteristicId) {
    var params_ = new Device_GetDescriptors_Params();
    params_.serviceId = serviceId;
    params_.characteristicId = characteristicId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_GetDescriptors_Name,
          codec.align(Device_GetDescriptors_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_GetDescriptors_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_GetDescriptors_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.readValueForDescriptor = function() {
    return DeviceProxy.prototype.readValueForDescriptor
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.readValueForDescriptor = function(serviceId, characteristicId, descriptorId) {
    var params_ = new Device_ReadValueForDescriptor_Params();
    params_.serviceId = serviceId;
    params_.characteristicId = characteristicId;
    params_.descriptorId = descriptorId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_ReadValueForDescriptor_Name,
          codec.align(Device_ReadValueForDescriptor_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_ReadValueForDescriptor_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_ReadValueForDescriptor_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.writeValueForDescriptor = function() {
    return DeviceProxy.prototype.writeValueForDescriptor
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.writeValueForDescriptor = function(serviceId, characteristicId, descriptorId, value) {
    var params_ = new Device_WriteValueForDescriptor_Params();
    params_.serviceId = serviceId;
    params_.characteristicId = characteristicId;
    params_.descriptorId = descriptorId;
    params_.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_WriteValueForDescriptor_Name,
          codec.align(Device_WriteValueForDescriptor_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_WriteValueForDescriptor_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_WriteValueForDescriptor_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DeviceStub(delegate) {
    this.delegate_ = delegate;
  }
  DeviceStub.prototype.disconnect = function() {
    return this.delegate_ && this.delegate_.disconnect && this.delegate_.disconnect();
  }
  DeviceStub.prototype.getInfo = function() {
    return this.delegate_ && this.delegate_.getInfo && this.delegate_.getInfo();
  }
  DeviceStub.prototype.getServices = function() {
    return this.delegate_ && this.delegate_.getServices && this.delegate_.getServices();
  }
  DeviceStub.prototype.getCharacteristics = function(serviceId) {
    return this.delegate_ && this.delegate_.getCharacteristics && this.delegate_.getCharacteristics(serviceId);
  }
  DeviceStub.prototype.readValueForCharacteristic = function(serviceId, characteristicId) {
    return this.delegate_ && this.delegate_.readValueForCharacteristic && this.delegate_.readValueForCharacteristic(serviceId, characteristicId);
  }
  DeviceStub.prototype.writeValueForCharacteristic = function(serviceId, characteristicId, value) {
    return this.delegate_ && this.delegate_.writeValueForCharacteristic && this.delegate_.writeValueForCharacteristic(serviceId, characteristicId, value);
  }
  DeviceStub.prototype.getDescriptors = function(serviceId, characteristicId) {
    return this.delegate_ && this.delegate_.getDescriptors && this.delegate_.getDescriptors(serviceId, characteristicId);
  }
  DeviceStub.prototype.readValueForDescriptor = function(serviceId, characteristicId, descriptorId) {
    return this.delegate_ && this.delegate_.readValueForDescriptor && this.delegate_.readValueForDescriptor(serviceId, characteristicId, descriptorId);
  }
  DeviceStub.prototype.writeValueForDescriptor = function(serviceId, characteristicId, descriptorId, value) {
    return this.delegate_ && this.delegate_.writeValueForDescriptor && this.delegate_.writeValueForDescriptor(serviceId, characteristicId, descriptorId, value);
  }

  DeviceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevice_Disconnect_Name:
      var params = reader.decodeStruct(Device_Disconnect_Params);
      this.disconnect();
      return true;
    default:
      return false;
    }
  };

  DeviceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevice_GetInfo_Name:
      var params = reader.decodeStruct(Device_GetInfo_Params);
      this.getInfo().then(function(response) {
        var responseParams =
            new Device_GetInfo_ResponseParams();
        responseParams.info = response.info;
        var builder = new codec.MessageV1Builder(
            kDevice_GetInfo_Name,
            codec.align(Device_GetInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_GetInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_GetServices_Name:
      var params = reader.decodeStruct(Device_GetServices_Params);
      this.getServices().then(function(response) {
        var responseParams =
            new Device_GetServices_ResponseParams();
        responseParams.services = response.services;
        var builder = new codec.MessageV1Builder(
            kDevice_GetServices_Name,
            codec.align(Device_GetServices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_GetServices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_GetCharacteristics_Name:
      var params = reader.decodeStruct(Device_GetCharacteristics_Params);
      this.getCharacteristics(params.serviceId).then(function(response) {
        var responseParams =
            new Device_GetCharacteristics_ResponseParams();
        responseParams.characteristics = response.characteristics;
        var builder = new codec.MessageV1Builder(
            kDevice_GetCharacteristics_Name,
            codec.align(Device_GetCharacteristics_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_GetCharacteristics_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_ReadValueForCharacteristic_Name:
      var params = reader.decodeStruct(Device_ReadValueForCharacteristic_Params);
      this.readValueForCharacteristic(params.serviceId, params.characteristicId).then(function(response) {
        var responseParams =
            new Device_ReadValueForCharacteristic_ResponseParams();
        responseParams.result = response.result;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kDevice_ReadValueForCharacteristic_Name,
            codec.align(Device_ReadValueForCharacteristic_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_ReadValueForCharacteristic_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_WriteValueForCharacteristic_Name:
      var params = reader.decodeStruct(Device_WriteValueForCharacteristic_Params);
      this.writeValueForCharacteristic(params.serviceId, params.characteristicId, params.value).then(function(response) {
        var responseParams =
            new Device_WriteValueForCharacteristic_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kDevice_WriteValueForCharacteristic_Name,
            codec.align(Device_WriteValueForCharacteristic_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_WriteValueForCharacteristic_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_GetDescriptors_Name:
      var params = reader.decodeStruct(Device_GetDescriptors_Params);
      this.getDescriptors(params.serviceId, params.characteristicId).then(function(response) {
        var responseParams =
            new Device_GetDescriptors_ResponseParams();
        responseParams.descriptors = response.descriptors;
        var builder = new codec.MessageV1Builder(
            kDevice_GetDescriptors_Name,
            codec.align(Device_GetDescriptors_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_GetDescriptors_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_ReadValueForDescriptor_Name:
      var params = reader.decodeStruct(Device_ReadValueForDescriptor_Params);
      this.readValueForDescriptor(params.serviceId, params.characteristicId, params.descriptorId).then(function(response) {
        var responseParams =
            new Device_ReadValueForDescriptor_ResponseParams();
        responseParams.result = response.result;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kDevice_ReadValueForDescriptor_Name,
            codec.align(Device_ReadValueForDescriptor_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_ReadValueForDescriptor_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_WriteValueForDescriptor_Name:
      var params = reader.decodeStruct(Device_WriteValueForDescriptor_Params);
      this.writeValueForDescriptor(params.serviceId, params.characteristicId, params.descriptorId, params.value).then(function(response) {
        var responseParams =
            new Device_WriteValueForDescriptor_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kDevice_WriteValueForDescriptor_Name,
            codec.align(Device_WriteValueForDescriptor_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_WriteValueForDescriptor_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDeviceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevice_Disconnect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Device_Disconnect_Params;
      break;
      case kDevice_GetInfo_Name:
        if (message.expectsResponse())
          paramsClass = Device_GetInfo_Params;
      break;
      case kDevice_GetServices_Name:
        if (message.expectsResponse())
          paramsClass = Device_GetServices_Params;
      break;
      case kDevice_GetCharacteristics_Name:
        if (message.expectsResponse())
          paramsClass = Device_GetCharacteristics_Params;
      break;
      case kDevice_ReadValueForCharacteristic_Name:
        if (message.expectsResponse())
          paramsClass = Device_ReadValueForCharacteristic_Params;
      break;
      case kDevice_WriteValueForCharacteristic_Name:
        if (message.expectsResponse())
          paramsClass = Device_WriteValueForCharacteristic_Params;
      break;
      case kDevice_GetDescriptors_Name:
        if (message.expectsResponse())
          paramsClass = Device_GetDescriptors_Params;
      break;
      case kDevice_ReadValueForDescriptor_Name:
        if (message.expectsResponse())
          paramsClass = Device_ReadValueForDescriptor_Params;
      break;
      case kDevice_WriteValueForDescriptor_Name:
        if (message.expectsResponse())
          paramsClass = Device_WriteValueForDescriptor_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDevice_GetInfo_Name:
        if (message.isResponse())
          paramsClass = Device_GetInfo_ResponseParams;
        break;
      case kDevice_GetServices_Name:
        if (message.isResponse())
          paramsClass = Device_GetServices_ResponseParams;
        break;
      case kDevice_GetCharacteristics_Name:
        if (message.isResponse())
          paramsClass = Device_GetCharacteristics_ResponseParams;
        break;
      case kDevice_ReadValueForCharacteristic_Name:
        if (message.isResponse())
          paramsClass = Device_ReadValueForCharacteristic_ResponseParams;
        break;
      case kDevice_WriteValueForCharacteristic_Name:
        if (message.isResponse())
          paramsClass = Device_WriteValueForCharacteristic_ResponseParams;
        break;
      case kDevice_GetDescriptors_Name:
        if (message.isResponse())
          paramsClass = Device_GetDescriptors_ResponseParams;
        break;
      case kDevice_ReadValueForDescriptor_Name:
        if (message.isResponse())
          paramsClass = Device_ReadValueForDescriptor_ResponseParams;
        break;
      case kDevice_WriteValueForDescriptor_Name:
        if (message.isResponse())
          paramsClass = Device_WriteValueForDescriptor_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Device = {
    name: 'bluetooth.mojom.Device',
    kVersion: 0,
    ptrClass: DevicePtr,
    proxyClass: DeviceProxy,
    stubClass: DeviceStub,
    validateRequest: validateDeviceRequest,
    validateResponse: validateDeviceResponse,
    mojomId: 'device/bluetooth/public/mojom/device.mojom',
    fuzzMethods: {
      disconnect: {
        params: Device_Disconnect_Params,
      },
      getInfo: {
        params: Device_GetInfo_Params,
      },
      getServices: {
        params: Device_GetServices_Params,
      },
      getCharacteristics: {
        params: Device_GetCharacteristics_Params,
      },
      readValueForCharacteristic: {
        params: Device_ReadValueForCharacteristic_Params,
      },
      writeValueForCharacteristic: {
        params: Device_WriteValueForCharacteristic_Params,
      },
      getDescriptors: {
        params: Device_GetDescriptors_Params,
      },
      readValueForDescriptor: {
        params: Device_ReadValueForDescriptor_Params,
      },
      writeValueForDescriptor: {
        params: Device_WriteValueForDescriptor_Params,
      },
    },
  };
  DeviceStub.prototype.validator = validateDeviceRequest;
  DeviceProxy.prototype.validator = validateDeviceResponse;
  exports.Property = Property;
  exports.GattResult = GattResult;
  exports.RSSIWrapper = RSSIWrapper;
  exports.DeviceInfo = DeviceInfo;
  exports.ServiceInfo = ServiceInfo;
  exports.CharacteristicInfo = CharacteristicInfo;
  exports.DescriptorInfo = DescriptorInfo;
  exports.Device = Device;
  exports.DevicePtr = DevicePtr;
  exports.DeviceAssociatedPtr = DeviceAssociatedPtr;
})();