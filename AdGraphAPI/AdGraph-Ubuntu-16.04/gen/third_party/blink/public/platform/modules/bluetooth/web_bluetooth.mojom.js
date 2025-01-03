// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var uuid$ =
      mojo.internal.exposeNamespace('bluetooth.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'device/bluetooth/public/mojom/uuid.mojom', '../../../../../../device/bluetooth/public/mojom/uuid.mojom.js');
  }


  var WebBluetoothResult = {};
  WebBluetoothResult.SUCCESS = 0;
  WebBluetoothResult.GATT_INVALID_ATTRIBUTE_LENGTH = WebBluetoothResult.SUCCESS + 1;
  WebBluetoothResult.SERVICE_NO_LONGER_EXISTS = WebBluetoothResult.GATT_INVALID_ATTRIBUTE_LENGTH + 1;
  WebBluetoothResult.CHARACTERISTIC_NO_LONGER_EXISTS = WebBluetoothResult.SERVICE_NO_LONGER_EXISTS + 1;
  WebBluetoothResult.CONNECT_ALREADY_IN_PROGRESS = WebBluetoothResult.CHARACTERISTIC_NO_LONGER_EXISTS + 1;
  WebBluetoothResult.CONNECT_AUTH_CANCELED = WebBluetoothResult.CONNECT_ALREADY_IN_PROGRESS + 1;
  WebBluetoothResult.CONNECT_AUTH_FAILED = WebBluetoothResult.CONNECT_AUTH_CANCELED + 1;
  WebBluetoothResult.CONNECT_AUTH_REJECTED = WebBluetoothResult.CONNECT_AUTH_FAILED + 1;
  WebBluetoothResult.CONNECT_AUTH_TIMEOUT = WebBluetoothResult.CONNECT_AUTH_REJECTED + 1;
  WebBluetoothResult.CONNECT_UNKNOWN_ERROR = WebBluetoothResult.CONNECT_AUTH_TIMEOUT + 1;
  WebBluetoothResult.CONNECT_UNKNOWN_FAILURE = WebBluetoothResult.CONNECT_UNKNOWN_ERROR + 1;
  WebBluetoothResult.CONNECT_UNSUPPORTED_DEVICE = WebBluetoothResult.CONNECT_UNKNOWN_FAILURE + 1;
  WebBluetoothResult.DEVICE_NO_LONGER_IN_RANGE = WebBluetoothResult.CONNECT_UNSUPPORTED_DEVICE + 1;
  WebBluetoothResult.GATT_NOT_PAIRED = WebBluetoothResult.DEVICE_NO_LONGER_IN_RANGE + 1;
  WebBluetoothResult.GATT_OPERATION_IN_PROGRESS = WebBluetoothResult.GATT_NOT_PAIRED + 1;
  WebBluetoothResult.NO_BLUETOOTH_ADAPTER = WebBluetoothResult.GATT_OPERATION_IN_PROGRESS + 1;
  WebBluetoothResult.CHOSEN_DEVICE_VANISHED = WebBluetoothResult.NO_BLUETOOTH_ADAPTER + 1;
  WebBluetoothResult.CHOOSER_CANCELLED = WebBluetoothResult.CHOSEN_DEVICE_VANISHED + 1;
  WebBluetoothResult.CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED = WebBluetoothResult.CHOOSER_CANCELLED + 1;
  WebBluetoothResult.CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED = WebBluetoothResult.CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED + 1;
  WebBluetoothResult.CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN = WebBluetoothResult.CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED + 1;
  WebBluetoothResult.SERVICE_NOT_FOUND = WebBluetoothResult.CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN + 1;
  WebBluetoothResult.NO_SERVICES_FOUND = WebBluetoothResult.SERVICE_NOT_FOUND + 1;
  WebBluetoothResult.CHARACTERISTIC_NOT_FOUND = WebBluetoothResult.NO_SERVICES_FOUND + 1;
  WebBluetoothResult.NO_CHARACTERISTICS_FOUND = WebBluetoothResult.CHARACTERISTIC_NOT_FOUND + 1;
  WebBluetoothResult.DESCRIPTOR_NOT_FOUND = WebBluetoothResult.NO_CHARACTERISTICS_FOUND + 1;
  WebBluetoothResult.NO_DESCRIPTORS_FOUND = WebBluetoothResult.DESCRIPTOR_NOT_FOUND + 1;
  WebBluetoothResult.WEB_BLUETOOTH_NOT_SUPPORTED = WebBluetoothResult.NO_DESCRIPTORS_FOUND + 1;
  WebBluetoothResult.BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE = WebBluetoothResult.WEB_BLUETOOTH_NOT_SUPPORTED + 1;
  WebBluetoothResult.GATT_UNKNOWN_ERROR = WebBluetoothResult.BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE + 1;
  WebBluetoothResult.GATT_UNKNOWN_FAILURE = WebBluetoothResult.GATT_UNKNOWN_ERROR + 1;
  WebBluetoothResult.GATT_NOT_PERMITTED = WebBluetoothResult.GATT_UNKNOWN_FAILURE + 1;
  WebBluetoothResult.GATT_NOT_SUPPORTED = WebBluetoothResult.GATT_NOT_PERMITTED + 1;
  WebBluetoothResult.GATT_UNTRANSLATED_ERROR_CODE = WebBluetoothResult.GATT_NOT_SUPPORTED + 1;
  WebBluetoothResult.GATT_NOT_AUTHORIZED = WebBluetoothResult.GATT_UNTRANSLATED_ERROR_CODE + 1;
  WebBluetoothResult.BLOCKLISTED_DESCRIPTOR_UUID = WebBluetoothResult.GATT_NOT_AUTHORIZED + 1;
  WebBluetoothResult.BLOCKLISTED_CHARACTERISTIC_UUID = WebBluetoothResult.BLOCKLISTED_DESCRIPTOR_UUID + 1;
  WebBluetoothResult.BLOCKLISTED_READ = WebBluetoothResult.BLOCKLISTED_CHARACTERISTIC_UUID + 1;
  WebBluetoothResult.BLOCKLISTED_WRITE = WebBluetoothResult.BLOCKLISTED_READ + 1;
  WebBluetoothResult.NOT_ALLOWED_TO_ACCESS_ANY_SERVICE = WebBluetoothResult.BLOCKLISTED_WRITE + 1;
  WebBluetoothResult.NOT_ALLOWED_TO_ACCESS_SERVICE = WebBluetoothResult.NOT_ALLOWED_TO_ACCESS_ANY_SERVICE + 1;
  WebBluetoothResult.REQUEST_DEVICE_WITH_BLOCKLISTED_UUID = WebBluetoothResult.NOT_ALLOWED_TO_ACCESS_SERVICE + 1;
  WebBluetoothResult.REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME = WebBluetoothResult.REQUEST_DEVICE_WITH_BLOCKLISTED_UUID + 1;
  WebBluetoothResult.DESCRIPTOR_NO_LONGER_EXISTS = WebBluetoothResult.REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME + 1;

  WebBluetoothResult.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  WebBluetoothResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var WebBluetoothGATTQueryQuantity = {};
  WebBluetoothGATTQueryQuantity.SINGLE = 0;
  WebBluetoothGATTQueryQuantity.MULTIPLE = WebBluetoothGATTQueryQuantity.SINGLE + 1;

  WebBluetoothGATTQueryQuantity.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  WebBluetoothGATTQueryQuantity.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function WebBluetoothLeScanFilter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothLeScanFilter.prototype.initDefaults_ = function() {
    this.services = null;
    this.name = null;
    this.namePrefix = null;
  };
  WebBluetoothLeScanFilter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothLeScanFilter.generate = function(generator_) {
    var generated = new WebBluetoothLeScanFilter;
    generated.services = generator_.generateArray(function() {
      return generator_.generateStruct(bluetooth.mojom.UUID, false);
    });
    generated.name = generator_.generateString(true);
    generated.namePrefix = generator_.generateString(true);
    return generated;
  };

  WebBluetoothLeScanFilter.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.services = mutator_.mutateArray(this.services, function(val) {
        return mutator_.mutateStruct(bluetooth.mojom.UUID, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, true);
    }
    if (mutator_.chooseMutateField()) {
      this.namePrefix = mutator_.mutateString(this.namePrefix, true);
    }
    return this;
  };
  WebBluetoothLeScanFilter.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothLeScanFilter.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothLeScanFilter.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothLeScanFilter.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothLeScanFilter.services
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(uuid$.UUID), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothLeScanFilter.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothLeScanFilter.namePrefix
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothLeScanFilter.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothLeScanFilter.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothLeScanFilter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.services = decoder.decodeArrayPointer(new codec.PointerTo(uuid$.UUID));
    val.name = decoder.decodeStruct(codec.NullableString);
    val.namePrefix = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  WebBluetoothLeScanFilter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothLeScanFilter.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(uuid$.UUID), val.services);
    encoder.encodeStruct(codec.NullableString, val.name);
    encoder.encodeStruct(codec.NullableString, val.namePrefix);
  };
  function WebBluetoothRequestDeviceOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothRequestDeviceOptions.prototype.initDefaults_ = function() {
    this.filters = null;
    this.optionalServices = null;
    this.acceptAllDevices = false;
  };
  WebBluetoothRequestDeviceOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothRequestDeviceOptions.generate = function(generator_) {
    var generated = new WebBluetoothRequestDeviceOptions;
    generated.filters = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.WebBluetoothLeScanFilter, false);
    });
    generated.optionalServices = generator_.generateArray(function() {
      return generator_.generateStruct(bluetooth.mojom.UUID, false);
    });
    generated.acceptAllDevices = generator_.generateBool();
    return generated;
  };

  WebBluetoothRequestDeviceOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filters = mutator_.mutateArray(this.filters, function(val) {
        return mutator_.mutateStruct(blink.mojom.WebBluetoothLeScanFilter, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.optionalServices = mutator_.mutateArray(this.optionalServices, function(val) {
        return mutator_.mutateStruct(bluetooth.mojom.UUID, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.acceptAllDevices = mutator_.mutateBool(this.acceptAllDevices);
    }
    return this;
  };
  WebBluetoothRequestDeviceOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothRequestDeviceOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothRequestDeviceOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothRequestDeviceOptions.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothRequestDeviceOptions.filters
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(WebBluetoothLeScanFilter), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothRequestDeviceOptions.optionalServices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(uuid$.UUID), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebBluetoothRequestDeviceOptions.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothRequestDeviceOptions.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothRequestDeviceOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filters = decoder.decodeArrayPointer(new codec.PointerTo(WebBluetoothLeScanFilter));
    val.optionalServices = decoder.decodeArrayPointer(new codec.PointerTo(uuid$.UUID));
    packed = decoder.readUint8();
    val.acceptAllDevices = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothRequestDeviceOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothRequestDeviceOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(WebBluetoothLeScanFilter), val.filters);
    encoder.encodeArrayPointer(new codec.PointerTo(uuid$.UUID), val.optionalServices);
    packed = 0;
    packed |= (val.acceptAllDevices & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothDeviceId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothDeviceId.prototype.initDefaults_ = function() {
    this.deviceId = null;
  };
  WebBluetoothDeviceId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothDeviceId.generate = function(generator_) {
    var generated = new WebBluetoothDeviceId;
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  WebBluetoothDeviceId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  WebBluetoothDeviceId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothDeviceId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothDeviceId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothDeviceId.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothDeviceId.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothDeviceId.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothDeviceId.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothDeviceId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothDeviceId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothDeviceId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function WebBluetoothDevice(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothDevice.prototype.initDefaults_ = function() {
    this.id = null;
    this.name = null;
  };
  WebBluetoothDevice.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothDevice.generate = function(generator_) {
    var generated = new WebBluetoothDevice;
    generated.id = generator_.generateStruct(blink.mojom.WebBluetoothDeviceId, false);
    generated.name = generator_.generateString(true);
    return generated;
  };

  WebBluetoothDevice.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(blink.mojom.WebBluetoothDeviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, true);
    }
    return this;
  };
  WebBluetoothDevice.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothDevice.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothDevice.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothDevice.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothDevice.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothDevice.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothDevice.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothDevice.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothDevice();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(WebBluetoothDeviceId);
    val.name = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  WebBluetoothDevice.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothDevice.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.id);
    encoder.encodeStruct(codec.NullableString, val.name);
  };
  function WebBluetoothRemoteGATTService(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothRemoteGATTService.prototype.initDefaults_ = function() {
    this.instanceId = null;
    this.uuid = null;
  };
  WebBluetoothRemoteGATTService.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothRemoteGATTService.generate = function(generator_) {
    var generated = new WebBluetoothRemoteGATTService;
    generated.instanceId = generator_.generateString(false);
    generated.uuid = generator_.generateStruct(bluetooth.mojom.UUID, false);
    return generated;
  };

  WebBluetoothRemoteGATTService.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instanceId = mutator_.mutateString(this.instanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateStruct(bluetooth.mojom.UUID, false);
    }
    return this;
  };
  WebBluetoothRemoteGATTService.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothRemoteGATTService.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothRemoteGATTService.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothRemoteGATTService.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothRemoteGATTService.instanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothRemoteGATTService.uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, uuid$.UUID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothRemoteGATTService.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothRemoteGATTService.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothRemoteGATTService();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instanceId = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStructPointer(uuid$.UUID);
    return val;
  };

  WebBluetoothRemoteGATTService.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothRemoteGATTService.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instanceId);
    encoder.encodeStructPointer(uuid$.UUID, val.uuid);
  };
  function WebBluetoothRemoteGATTCharacteristic(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothRemoteGATTCharacteristic.prototype.initDefaults_ = function() {
    this.instanceId = null;
    this.uuid = null;
    this.properties = 0;
  };
  WebBluetoothRemoteGATTCharacteristic.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothRemoteGATTCharacteristic.generate = function(generator_) {
    var generated = new WebBluetoothRemoteGATTCharacteristic;
    generated.instanceId = generator_.generateString(false);
    generated.uuid = generator_.generateStruct(bluetooth.mojom.UUID, false);
    generated.properties = generator_.generateUint32();
    return generated;
  };

  WebBluetoothRemoteGATTCharacteristic.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instanceId = mutator_.mutateString(this.instanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateStruct(bluetooth.mojom.UUID, false);
    }
    if (mutator_.chooseMutateField()) {
      this.properties = mutator_.mutateUint32(this.properties);
    }
    return this;
  };
  WebBluetoothRemoteGATTCharacteristic.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothRemoteGATTCharacteristic.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothRemoteGATTCharacteristic.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothRemoteGATTCharacteristic.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothRemoteGATTCharacteristic.instanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothRemoteGATTCharacteristic.uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, uuid$.UUID, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebBluetoothRemoteGATTCharacteristic.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothRemoteGATTCharacteristic.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothRemoteGATTCharacteristic();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instanceId = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStructPointer(uuid$.UUID);
    val.properties = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothRemoteGATTCharacteristic.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothRemoteGATTCharacteristic.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instanceId);
    encoder.encodeStructPointer(uuid$.UUID, val.uuid);
    encoder.encodeStruct(codec.Uint32, val.properties);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothRemoteGATTDescriptor(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothRemoteGATTDescriptor.prototype.initDefaults_ = function() {
    this.instanceId = null;
    this.uuid = null;
  };
  WebBluetoothRemoteGATTDescriptor.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothRemoteGATTDescriptor.generate = function(generator_) {
    var generated = new WebBluetoothRemoteGATTDescriptor;
    generated.instanceId = generator_.generateString(false);
    generated.uuid = generator_.generateStruct(bluetooth.mojom.UUID, false);
    return generated;
  };

  WebBluetoothRemoteGATTDescriptor.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instanceId = mutator_.mutateString(this.instanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateStruct(bluetooth.mojom.UUID, false);
    }
    return this;
  };
  WebBluetoothRemoteGATTDescriptor.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothRemoteGATTDescriptor.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothRemoteGATTDescriptor.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothRemoteGATTDescriptor.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothRemoteGATTDescriptor.instanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothRemoteGATTDescriptor.uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, uuid$.UUID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothRemoteGATTDescriptor.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothRemoteGATTDescriptor.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothRemoteGATTDescriptor();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instanceId = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStructPointer(uuid$.UUID);
    return val;
  };

  WebBluetoothRemoteGATTDescriptor.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothRemoteGATTDescriptor.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instanceId);
    encoder.encodeStructPointer(uuid$.UUID, val.uuid);
  };
  function WebBluetoothService_RequestDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RequestDevice_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  WebBluetoothService_RequestDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RequestDevice_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RequestDevice_Params;
    generated.options = generator_.generateStruct(blink.mojom.WebBluetoothRequestDeviceOptions, false);
    return generated;
  };

  WebBluetoothService_RequestDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(blink.mojom.WebBluetoothRequestDeviceOptions, false);
    }
    return this;
  };
  WebBluetoothService_RequestDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RequestDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RequestDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RequestDevice_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RequestDevice_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothRequestDeviceOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RequestDevice_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RequestDevice_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RequestDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(WebBluetoothRequestDeviceOptions);
    return val;
  };

  WebBluetoothService_RequestDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RequestDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothRequestDeviceOptions, val.options);
  };
  function WebBluetoothService_RequestDevice_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RequestDevice_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.device = null;
  };
  WebBluetoothService_RequestDevice_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RequestDevice_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RequestDevice_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    generated.device = generator_.generateStruct(blink.mojom.WebBluetoothDevice, true);
    return generated;
  };

  WebBluetoothService_RequestDevice_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    if (mutator_.chooseMutateField()) {
      this.device = mutator_.mutateStruct(blink.mojom.WebBluetoothDevice, true);
    }
    return this;
  };
  WebBluetoothService_RequestDevice_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RequestDevice_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RequestDevice_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RequestDevice_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RequestDevice_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RequestDevice_ResponseParams.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, WebBluetoothDevice, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RequestDevice_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RequestDevice_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RequestDevice_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.device = decoder.decodeStructPointer(WebBluetoothDevice);
    return val;
  };

  WebBluetoothService_RequestDevice_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RequestDevice_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(WebBluetoothDevice, val.device);
  };
  function WebBluetoothService_RemoteServerConnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerConnect_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
    this.client = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  WebBluetoothService_RemoteServerConnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteServerConnect_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteServerConnect_Params;
    generated.deviceId = generator_.generateStruct(blink.mojom.WebBluetoothDeviceId, false);
    generated.client = generator_.generateAssociatedInterface("blink.mojom.WebBluetoothServerClient", false);
    return generated;
  };

  WebBluetoothService_RemoteServerConnect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateStruct(blink.mojom.WebBluetoothDeviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateAssociatedInterface(this.client, "blink.mojom.WebBluetoothServerClient", false);
    }
    return this;
  };
  WebBluetoothService_RemoteServerConnect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.WebBluetoothServerClientAssociatedPtr"]);
    }
    return handles;
  };

  WebBluetoothService_RemoteServerConnect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteServerConnect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  WebBluetoothService_RemoteServerConnect_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteServerConnect_Params.deviceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteServerConnect_Params.client
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerConnect_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteServerConnect_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerConnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStructPointer(WebBluetoothDeviceId);
    val.client = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  WebBluetoothService_RemoteServerConnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerConnect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.deviceId);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.client);
  };
  function WebBluetoothService_RemoteServerConnect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteServerConnect_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteServerConnect_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    return generated;
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    return this;
  };
  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteServerConnect_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteServerConnect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerConnect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerConnect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothService_RemoteServerDisconnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerDisconnect_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
  };
  WebBluetoothService_RemoteServerDisconnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteServerDisconnect_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteServerDisconnect_Params;
    generated.deviceId = generator_.generateStruct(blink.mojom.WebBluetoothDeviceId, false);
    return generated;
  };

  WebBluetoothService_RemoteServerDisconnect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateStruct(blink.mojom.WebBluetoothDeviceId, false);
    }
    return this;
  };
  WebBluetoothService_RemoteServerDisconnect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteServerDisconnect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteServerDisconnect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteServerDisconnect_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteServerDisconnect_Params.deviceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerDisconnect_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteServerDisconnect_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerDisconnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStructPointer(WebBluetoothDeviceId);
    return val;
  };

  WebBluetoothService_RemoteServerDisconnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerDisconnect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.deviceId);
  };
  function WebBluetoothService_RemoteServerGetPrimaryServices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
    this.quantity = 0;
    this.servicesUuid = null;
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteServerGetPrimaryServices_Params;
    generated.deviceId = generator_.generateStruct(blink.mojom.WebBluetoothDeviceId, false);
    generated.quantity = generator_.generateEnum(0, 1);
    generated.servicesUuid = generator_.generateStruct(bluetooth.mojom.UUID, true);
    return generated;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateStruct(blink.mojom.WebBluetoothDeviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.quantity = mutator_.mutateEnum(this.quantity, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.servicesUuid = mutator_.mutateStruct(bluetooth.mojom.UUID, true);
    }
    return this;
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteServerGetPrimaryServices_Params.deviceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteServerGetPrimaryServices_Params.quantity
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, WebBluetoothGATTQueryQuantity);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteServerGetPrimaryServices_Params.servicesUuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, uuid$.UUID, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerGetPrimaryServices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStructPointer(WebBluetoothDeviceId);
    val.quantity = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.servicesUuid = decoder.decodeStructPointer(uuid$.UUID);
    return val;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerGetPrimaryServices_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.deviceId);
    encoder.encodeStruct(codec.Int32, val.quantity);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(uuid$.UUID, val.servicesUuid);
  };
  function WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.services = null;
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    generated.services = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.WebBluetoothRemoteGATTService, false);
    });
    return generated;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    if (mutator_.chooseMutateField()) {
      this.services = mutator_.mutateArray(this.services, function(val) {
        return mutator_.mutateStruct(blink.mojom.WebBluetoothRemoteGATTService, false);
      });
    }
    return this;
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.services
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(WebBluetoothRemoteGATTService), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.services = decoder.decodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTService));
    return val;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTService), val.services);
  };
  function WebBluetoothService_RemoteServiceGetCharacteristics_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.initDefaults_ = function() {
    this.serviceInstanceId = null;
    this.quantity = 0;
    this.characteristicsUuid = null;
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteServiceGetCharacteristics_Params;
    generated.serviceInstanceId = generator_.generateString(false);
    generated.quantity = generator_.generateEnum(0, 1);
    generated.characteristicsUuid = generator_.generateStruct(bluetooth.mojom.UUID, true);
    return generated;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceInstanceId = mutator_.mutateString(this.serviceInstanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.quantity = mutator_.mutateEnum(this.quantity, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.characteristicsUuid = mutator_.mutateStruct(bluetooth.mojom.UUID, true);
    }
    return this;
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteServiceGetCharacteristics_Params.serviceInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteServiceGetCharacteristics_Params.quantity
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, WebBluetoothGATTQueryQuantity);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteServiceGetCharacteristics_Params.characteristicsUuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, uuid$.UUID, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServiceGetCharacteristics_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceInstanceId = decoder.decodeStruct(codec.String);
    val.quantity = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.characteristicsUuid = decoder.decodeStructPointer(uuid$.UUID);
    return val;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServiceGetCharacteristics_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceInstanceId);
    encoder.encodeStruct(codec.Int32, val.quantity);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(uuid$.UUID, val.characteristicsUuid);
  };
  function WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.characteristics = null;
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    generated.characteristics = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.WebBluetoothRemoteGATTCharacteristic, false);
    });
    return generated;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    if (mutator_.chooseMutateField()) {
      this.characteristics = mutator_.mutateArray(this.characteristics, function(val) {
        return mutator_.mutateStruct(blink.mojom.WebBluetoothRemoteGATTCharacteristic, false);
      });
    }
    return this;
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.characteristics
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(WebBluetoothRemoteGATTCharacteristic), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.characteristics = decoder.decodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTCharacteristic));
    return val;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTCharacteristic), val.characteristics);
  };
  function WebBluetoothService_RemoteCharacteristicReadValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.initDefaults_ = function() {
    this.characteristicInstanceId = null;
  };
  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicReadValue_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicReadValue_Params;
    generated.characteristicInstanceId = generator_.generateString(false);
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.characteristicInstanceId = mutator_.mutateString(this.characteristicInstanceId, false);
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicReadValue_Params.characteristicInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicReadValue_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicReadValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristicInstanceId = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicReadValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristicInstanceId);
  };
  function WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.value = null;
  };
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams();
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

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WebBluetoothService_RemoteCharacteristicWriteValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.initDefaults_ = function() {
    this.characteristicInstanceId = null;
    this.value = null;
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicWriteValue_Params;
    generated.characteristicInstanceId = generator_.generateString(false);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.characteristicInstanceId = mutator_.mutateString(this.characteristicInstanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicWriteValue_Params.characteristicInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteCharacteristicWriteValue_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicWriteValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristicInstanceId = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicWriteValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristicInstanceId);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothService_RemoteCharacteristicStartNotifications_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.initDefaults_ = function() {
    this.characteristicInstanceId = null;
    this.client = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicStartNotifications_Params;
    generated.characteristicInstanceId = generator_.generateString(false);
    generated.client = generator_.generateAssociatedInterface("blink.mojom.WebBluetoothCharacteristicClient", false);
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.characteristicInstanceId = mutator_.mutateString(this.characteristicInstanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateAssociatedInterface(this.client, "blink.mojom.WebBluetoothCharacteristicClient", false);
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.WebBluetoothCharacteristicClientAssociatedPtr"]);
    }
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicStartNotifications_Params.characteristicInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteCharacteristicStartNotifications_Params.client
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStartNotifications_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristicInstanceId = decoder.decodeStruct(codec.String);
    val.client = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristicInstanceId);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.client);
  };
  function WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothService_RemoteCharacteristicStopNotifications_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.initDefaults_ = function() {
    this.characteristicInstanceId = null;
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicStopNotifications_Params;
    generated.characteristicInstanceId = generator_.generateString(false);
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.characteristicInstanceId = mutator_.mutateString(this.characteristicInstanceId, false);
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicStopNotifications_Params.characteristicInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStopNotifications_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristicInstanceId = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristicInstanceId);
  };
  function WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.initDefaults_ = function() {
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams;
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.validate = function(messageValidator, offset) {
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

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function WebBluetoothService_RemoteCharacteristicGetDescriptors_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.prototype.initDefaults_ = function() {
    this.characteristicsInstanceId = null;
    this.quantity = 0;
    this.descriptorUuid = null;
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicGetDescriptors_Params;
    generated.characteristicsInstanceId = generator_.generateString(false);
    generated.quantity = generator_.generateEnum(0, 1);
    generated.descriptorUuid = generator_.generateStruct(bluetooth.mojom.UUID, true);
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.characteristicsInstanceId = mutator_.mutateString(this.characteristicsInstanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.quantity = mutator_.mutateEnum(this.quantity, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.descriptorUuid = mutator_.mutateStruct(bluetooth.mojom.UUID, true);
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.characteristicsInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.quantity
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, WebBluetoothGATTQueryQuantity);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.descriptorUuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, uuid$.UUID, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicGetDescriptors_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristicsInstanceId = decoder.decodeStruct(codec.String);
    val.quantity = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.descriptorUuid = decoder.decodeStructPointer(uuid$.UUID);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristicsInstanceId);
    encoder.encodeStruct(codec.Int32, val.quantity);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(uuid$.UUID, val.descriptorUuid);
  };
  function WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.descriptors = null;
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    generated.descriptors = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.WebBluetoothRemoteGATTDescriptor, false);
    });
    return generated;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    if (mutator_.chooseMutateField()) {
      this.descriptors = mutator_.mutateArray(this.descriptors, function(val) {
        return mutator_.mutateStruct(blink.mojom.WebBluetoothRemoteGATTDescriptor, false);
      });
    }
    return this;
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.descriptors
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(WebBluetoothRemoteGATTDescriptor), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.descriptors = decoder.decodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTDescriptor));
    return val;
  };

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTDescriptor), val.descriptors);
  };
  function WebBluetoothService_RemoteDescriptorReadValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteDescriptorReadValue_Params.prototype.initDefaults_ = function() {
    this.descriptorInstanceId = null;
  };
  WebBluetoothService_RemoteDescriptorReadValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteDescriptorReadValue_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteDescriptorReadValue_Params;
    generated.descriptorInstanceId = generator_.generateString(false);
    return generated;
  };

  WebBluetoothService_RemoteDescriptorReadValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.descriptorInstanceId = mutator_.mutateString(this.descriptorInstanceId, false);
    }
    return this;
  };
  WebBluetoothService_RemoteDescriptorReadValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteDescriptorReadValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteDescriptorReadValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteDescriptorReadValue_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteDescriptorReadValue_Params.descriptorInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteDescriptorReadValue_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteDescriptorReadValue_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteDescriptorReadValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.descriptorInstanceId = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothService_RemoteDescriptorReadValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteDescriptorReadValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.descriptorInstanceId);
  };
  function WebBluetoothService_RemoteDescriptorReadValue_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.value = null;
  };
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteDescriptorReadValue_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteDescriptorReadValue_ResponseParams();
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

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WebBluetoothService_RemoteDescriptorWriteValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteDescriptorWriteValue_Params.prototype.initDefaults_ = function() {
    this.descriptorInstanceId = null;
    this.value = null;
  };
  WebBluetoothService_RemoteDescriptorWriteValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteDescriptorWriteValue_Params.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteDescriptorWriteValue_Params;
    generated.descriptorInstanceId = generator_.generateString(false);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.descriptorInstanceId = mutator_.mutateString(this.descriptorInstanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  WebBluetoothService_RemoteDescriptorWriteValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteDescriptorWriteValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteDescriptorWriteValue_Params.descriptorInstanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebBluetoothService_RemoteDescriptorWriteValue_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteDescriptorWriteValue_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteDescriptorWriteValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.descriptorInstanceId = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteDescriptorWriteValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.descriptorInstanceId);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.generate = function(generator_) {
    var generated = new WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams;
    generated.result = generator_.generateEnum(0, 43);
    return generated;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 43);
    }
    return this;
  };
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebBluetoothResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothServerClient_GATTServerDisconnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothServerClient_GATTServerDisconnected_Params.prototype.initDefaults_ = function() {
  };
  WebBluetoothServerClient_GATTServerDisconnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothServerClient_GATTServerDisconnected_Params.generate = function(generator_) {
    var generated = new WebBluetoothServerClient_GATTServerDisconnected_Params;
    return generated;
  };

  WebBluetoothServerClient_GATTServerDisconnected_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WebBluetoothServerClient_GATTServerDisconnected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothServerClient_GATTServerDisconnected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothServerClient_GATTServerDisconnected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothServerClient_GATTServerDisconnected_Params.validate = function(messageValidator, offset) {
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

  WebBluetoothServerClient_GATTServerDisconnected_Params.encodedSize = codec.kStructHeaderSize + 0;

  WebBluetoothServerClient_GATTServerDisconnected_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothServerClient_GATTServerDisconnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebBluetoothServerClient_GATTServerDisconnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothServerClient_GATTServerDisconnected_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.generate = function(generator_) {
    var generated = new WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params;
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.validate = function(messageValidator, offset) {
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


    // validate WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  var kWebBluetoothService_RequestDevice_Name = 1178877215;
  var kWebBluetoothService_RemoteServerConnect_Name = 1721467368;
  var kWebBluetoothService_RemoteServerDisconnect_Name = 1988099096;
  var kWebBluetoothService_RemoteServerGetPrimaryServices_Name = 2145299045;
  var kWebBluetoothService_RemoteServiceGetCharacteristics_Name = 56523252;
  var kWebBluetoothService_RemoteCharacteristicReadValue_Name = 979302071;
  var kWebBluetoothService_RemoteCharacteristicWriteValue_Name = 1387620711;
  var kWebBluetoothService_RemoteCharacteristicStartNotifications_Name = 1662203966;
  var kWebBluetoothService_RemoteCharacteristicStopNotifications_Name = 998963622;
  var kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name = 1962721040;
  var kWebBluetoothService_RemoteDescriptorReadValue_Name = 421813605;
  var kWebBluetoothService_RemoteDescriptorWriteValue_Name = 1431690076;

  function WebBluetoothServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WebBluetoothService,
                                                   handleOrPtrInfo);
  }

  function WebBluetoothServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WebBluetoothService, associatedInterfacePtrInfo);
  }

  WebBluetoothServiceAssociatedPtr.prototype =
      Object.create(WebBluetoothServicePtr.prototype);
  WebBluetoothServiceAssociatedPtr.prototype.constructor =
      WebBluetoothServiceAssociatedPtr;

  function WebBluetoothServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  WebBluetoothServicePtr.prototype.requestDevice = function() {
    return WebBluetoothServiceProxy.prototype.requestDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.requestDevice = function(options) {
    var params_ = new WebBluetoothService_RequestDevice_Params();
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RequestDevice_Name,
          codec.align(WebBluetoothService_RequestDevice_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RequestDevice_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RequestDevice_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteServerConnect = function() {
    return WebBluetoothServiceProxy.prototype.remoteServerConnect
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteServerConnect = function(deviceId, client) {
    var params_ = new WebBluetoothService_RemoteServerConnect_Params();
    params_.deviceId = deviceId;
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kWebBluetoothService_RemoteServerConnect_Name,
          codec.align(WebBluetoothService_RemoteServerConnect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(WebBluetoothService_RemoteServerConnect_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteServerConnect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteServerDisconnect = function() {
    return WebBluetoothServiceProxy.prototype.remoteServerDisconnect
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteServerDisconnect = function(deviceId) {
    var params_ = new WebBluetoothService_RemoteServerDisconnect_Params();
    params_.deviceId = deviceId;
    var builder = new codec.MessageV0Builder(
        kWebBluetoothService_RemoteServerDisconnect_Name,
        codec.align(WebBluetoothService_RemoteServerDisconnect_Params.encodedSize));
    builder.encodeStruct(WebBluetoothService_RemoteServerDisconnect_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebBluetoothServicePtr.prototype.remoteServerGetPrimaryServices = function() {
    return WebBluetoothServiceProxy.prototype.remoteServerGetPrimaryServices
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteServerGetPrimaryServices = function(deviceId, quantity, servicesUuid) {
    var params_ = new WebBluetoothService_RemoteServerGetPrimaryServices_Params();
    params_.deviceId = deviceId;
    params_.quantity = quantity;
    params_.servicesUuid = servicesUuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteServerGetPrimaryServices_Name,
          codec.align(WebBluetoothService_RemoteServerGetPrimaryServices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteServiceGetCharacteristics = function() {
    return WebBluetoothServiceProxy.prototype.remoteServiceGetCharacteristics
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteServiceGetCharacteristics = function(serviceInstanceId, quantity, characteristicsUuid) {
    var params_ = new WebBluetoothService_RemoteServiceGetCharacteristics_Params();
    params_.serviceInstanceId = serviceInstanceId;
    params_.quantity = quantity;
    params_.characteristicsUuid = characteristicsUuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteServiceGetCharacteristics_Name,
          codec.align(WebBluetoothService_RemoteServiceGetCharacteristics_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteCharacteristicReadValue = function() {
    return WebBluetoothServiceProxy.prototype.remoteCharacteristicReadValue
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteCharacteristicReadValue = function(characteristicInstanceId) {
    var params_ = new WebBluetoothService_RemoteCharacteristicReadValue_Params();
    params_.characteristicInstanceId = characteristicInstanceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteCharacteristicReadValue_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicReadValue_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteCharacteristicWriteValue = function() {
    return WebBluetoothServiceProxy.prototype.remoteCharacteristicWriteValue
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteCharacteristicWriteValue = function(characteristicInstanceId, value) {
    var params_ = new WebBluetoothService_RemoteCharacteristicWriteValue_Params();
    params_.characteristicInstanceId = characteristicInstanceId;
    params_.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteCharacteristicWriteValue_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicWriteValue_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteCharacteristicStartNotifications = function() {
    return WebBluetoothServiceProxy.prototype.remoteCharacteristicStartNotifications
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteCharacteristicStartNotifications = function(characteristicInstanceId, client) {
    var params_ = new WebBluetoothService_RemoteCharacteristicStartNotifications_Params();
    params_.characteristicInstanceId = characteristicInstanceId;
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kWebBluetoothService_RemoteCharacteristicStartNotifications_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(WebBluetoothService_RemoteCharacteristicStartNotifications_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteCharacteristicStopNotifications = function() {
    return WebBluetoothServiceProxy.prototype.remoteCharacteristicStopNotifications
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteCharacteristicStopNotifications = function(characteristicInstanceId) {
    var params_ = new WebBluetoothService_RemoteCharacteristicStopNotifications_Params();
    params_.characteristicInstanceId = characteristicInstanceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteCharacteristicStopNotifications_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteCharacteristicGetDescriptors = function() {
    return WebBluetoothServiceProxy.prototype.remoteCharacteristicGetDescriptors
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteCharacteristicGetDescriptors = function(characteristicsInstanceId, quantity, descriptorUuid) {
    var params_ = new WebBluetoothService_RemoteCharacteristicGetDescriptors_Params();
    params_.characteristicsInstanceId = characteristicsInstanceId;
    params_.quantity = quantity;
    params_.descriptorUuid = descriptorUuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteDescriptorReadValue = function() {
    return WebBluetoothServiceProxy.prototype.remoteDescriptorReadValue
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteDescriptorReadValue = function(descriptorInstanceId) {
    var params_ = new WebBluetoothService_RemoteDescriptorReadValue_Params();
    params_.descriptorInstanceId = descriptorInstanceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteDescriptorReadValue_Name,
          codec.align(WebBluetoothService_RemoteDescriptorReadValue_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteDescriptorReadValue_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServicePtr.prototype.remoteDescriptorWriteValue = function() {
    return WebBluetoothServiceProxy.prototype.remoteDescriptorWriteValue
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServiceProxy.prototype.remoteDescriptorWriteValue = function(descriptorInstanceId, value) {
    var params_ = new WebBluetoothService_RemoteDescriptorWriteValue_Params();
    params_.descriptorInstanceId = descriptorInstanceId;
    params_.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebBluetoothService_RemoteDescriptorWriteValue_Name,
          codec.align(WebBluetoothService_RemoteDescriptorWriteValue_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteDescriptorWriteValue_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function WebBluetoothServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  WebBluetoothServiceStub.prototype.requestDevice = function(options) {
    return this.delegate_ && this.delegate_.requestDevice && this.delegate_.requestDevice(options);
  }
  WebBluetoothServiceStub.prototype.remoteServerConnect = function(deviceId, client) {
    return this.delegate_ && this.delegate_.remoteServerConnect && this.delegate_.remoteServerConnect(deviceId, client);
  }
  WebBluetoothServiceStub.prototype.remoteServerDisconnect = function(deviceId) {
    return this.delegate_ && this.delegate_.remoteServerDisconnect && this.delegate_.remoteServerDisconnect(deviceId);
  }
  WebBluetoothServiceStub.prototype.remoteServerGetPrimaryServices = function(deviceId, quantity, servicesUuid) {
    return this.delegate_ && this.delegate_.remoteServerGetPrimaryServices && this.delegate_.remoteServerGetPrimaryServices(deviceId, quantity, servicesUuid);
  }
  WebBluetoothServiceStub.prototype.remoteServiceGetCharacteristics = function(serviceInstanceId, quantity, characteristicsUuid) {
    return this.delegate_ && this.delegate_.remoteServiceGetCharacteristics && this.delegate_.remoteServiceGetCharacteristics(serviceInstanceId, quantity, characteristicsUuid);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicReadValue = function(characteristicInstanceId) {
    return this.delegate_ && this.delegate_.remoteCharacteristicReadValue && this.delegate_.remoteCharacteristicReadValue(characteristicInstanceId);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicWriteValue = function(characteristicInstanceId, value) {
    return this.delegate_ && this.delegate_.remoteCharacteristicWriteValue && this.delegate_.remoteCharacteristicWriteValue(characteristicInstanceId, value);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicStartNotifications = function(characteristicInstanceId, client) {
    return this.delegate_ && this.delegate_.remoteCharacteristicStartNotifications && this.delegate_.remoteCharacteristicStartNotifications(characteristicInstanceId, client);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicStopNotifications = function(characteristicInstanceId) {
    return this.delegate_ && this.delegate_.remoteCharacteristicStopNotifications && this.delegate_.remoteCharacteristicStopNotifications(characteristicInstanceId);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicGetDescriptors = function(characteristicsInstanceId, quantity, descriptorUuid) {
    return this.delegate_ && this.delegate_.remoteCharacteristicGetDescriptors && this.delegate_.remoteCharacteristicGetDescriptors(characteristicsInstanceId, quantity, descriptorUuid);
  }
  WebBluetoothServiceStub.prototype.remoteDescriptorReadValue = function(descriptorInstanceId) {
    return this.delegate_ && this.delegate_.remoteDescriptorReadValue && this.delegate_.remoteDescriptorReadValue(descriptorInstanceId);
  }
  WebBluetoothServiceStub.prototype.remoteDescriptorWriteValue = function(descriptorInstanceId, value) {
    return this.delegate_ && this.delegate_.remoteDescriptorWriteValue && this.delegate_.remoteDescriptorWriteValue(descriptorInstanceId, value);
  }

  WebBluetoothServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebBluetoothService_RemoteServerDisconnect_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServerDisconnect_Params);
      this.remoteServerDisconnect(params.deviceId);
      return true;
    default:
      return false;
    }
  };

  WebBluetoothServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebBluetoothService_RequestDevice_Name:
      var params = reader.decodeStruct(WebBluetoothService_RequestDevice_Params);
      this.requestDevice(params.options).then(function(response) {
        var responseParams =
            new WebBluetoothService_RequestDevice_ResponseParams();
        responseParams.result = response.result;
        responseParams.device = response.device;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RequestDevice_Name,
            codec.align(WebBluetoothService_RequestDevice_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RequestDevice_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteServerConnect_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServerConnect_Params);
      this.remoteServerConnect(params.deviceId, params.client).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteServerConnect_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV2Builder(
            kWebBluetoothService_RemoteServerConnect_Name,
            codec.align(WebBluetoothService_RemoteServerConnect_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(WebBluetoothService_RemoteServerConnect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteServerGetPrimaryServices_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_Params);
      this.remoteServerGetPrimaryServices(params.deviceId, params.quantity, params.servicesUuid).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams();
        responseParams.result = response.result;
        responseParams.services = response.services;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteServerGetPrimaryServices_Name,
            codec.align(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteServiceGetCharacteristics_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_Params);
      this.remoteServiceGetCharacteristics(params.serviceInstanceId, params.quantity, params.characteristicsUuid).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams();
        responseParams.result = response.result;
        responseParams.characteristics = response.characteristics;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteServiceGetCharacteristics_Name,
            codec.align(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteCharacteristicReadValue_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_Params);
      this.remoteCharacteristicReadValue(params.characteristicInstanceId).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams();
        responseParams.result = response.result;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteCharacteristicReadValue_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteCharacteristicWriteValue_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_Params);
      this.remoteCharacteristicWriteValue(params.characteristicInstanceId, params.value).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteCharacteristicWriteValue_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteCharacteristicStartNotifications_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStartNotifications_Params);
      this.remoteCharacteristicStartNotifications(params.characteristicInstanceId, params.client).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV2Builder(
            kWebBluetoothService_RemoteCharacteristicStartNotifications_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteCharacteristicStopNotifications_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_Params);
      this.remoteCharacteristicStopNotifications(params.characteristicInstanceId).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteCharacteristicStopNotifications_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params);
      this.remoteCharacteristicGetDescriptors(params.characteristicsInstanceId, params.quantity, params.descriptorUuid).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams();
        responseParams.result = response.result;
        responseParams.descriptors = response.descriptors;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteDescriptorReadValue_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteDescriptorReadValue_Params);
      this.remoteDescriptorReadValue(params.descriptorInstanceId).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteDescriptorReadValue_ResponseParams();
        responseParams.result = response.result;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteDescriptorReadValue_Name,
            codec.align(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebBluetoothService_RemoteDescriptorWriteValue_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteDescriptorWriteValue_Params);
      this.remoteDescriptorWriteValue(params.descriptorInstanceId, params.value).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kWebBluetoothService_RemoteDescriptorWriteValue_Name,
            codec.align(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWebBluetoothServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebBluetoothService_RequestDevice_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RequestDevice_Params;
      break;
      case kWebBluetoothService_RemoteServerConnect_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteServerConnect_Params;
      break;
      case kWebBluetoothService_RemoteServerDisconnect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebBluetoothService_RemoteServerDisconnect_Params;
      break;
      case kWebBluetoothService_RemoteServerGetPrimaryServices_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteServerGetPrimaryServices_Params;
      break;
      case kWebBluetoothService_RemoteServiceGetCharacteristics_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteServiceGetCharacteristics_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicReadValue_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicReadValue_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicWriteValue_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicWriteValue_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicStartNotifications_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStartNotifications_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicStopNotifications_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStopNotifications_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicGetDescriptors_Params;
      break;
      case kWebBluetoothService_RemoteDescriptorReadValue_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteDescriptorReadValue_Params;
      break;
      case kWebBluetoothService_RemoteDescriptorWriteValue_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteDescriptorWriteValue_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebBluetoothServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWebBluetoothService_RequestDevice_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RequestDevice_ResponseParams;
        break;
      case kWebBluetoothService_RemoteServerConnect_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteServerConnect_ResponseParams;
        break;
      case kWebBluetoothService_RemoteServerGetPrimaryServices_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams;
        break;
      case kWebBluetoothService_RemoteServiceGetCharacteristics_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicReadValue_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicWriteValue_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicStartNotifications_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicStopNotifications_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams;
        break;
      case kWebBluetoothService_RemoteDescriptorReadValue_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteDescriptorReadValue_ResponseParams;
        break;
      case kWebBluetoothService_RemoteDescriptorWriteValue_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WebBluetoothService = {
    name: 'blink.mojom.WebBluetoothService',
    kVersion: 0,
    ptrClass: WebBluetoothServicePtr,
    proxyClass: WebBluetoothServiceProxy,
    stubClass: WebBluetoothServiceStub,
    validateRequest: validateWebBluetoothServiceRequest,
    validateResponse: validateWebBluetoothServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom',
    fuzzMethods: {
      requestDevice: {
        params: WebBluetoothService_RequestDevice_Params,
      },
      remoteServerConnect: {
        params: WebBluetoothService_RemoteServerConnect_Params,
      },
      remoteServerDisconnect: {
        params: WebBluetoothService_RemoteServerDisconnect_Params,
      },
      remoteServerGetPrimaryServices: {
        params: WebBluetoothService_RemoteServerGetPrimaryServices_Params,
      },
      remoteServiceGetCharacteristics: {
        params: WebBluetoothService_RemoteServiceGetCharacteristics_Params,
      },
      remoteCharacteristicReadValue: {
        params: WebBluetoothService_RemoteCharacteristicReadValue_Params,
      },
      remoteCharacteristicWriteValue: {
        params: WebBluetoothService_RemoteCharacteristicWriteValue_Params,
      },
      remoteCharacteristicStartNotifications: {
        params: WebBluetoothService_RemoteCharacteristicStartNotifications_Params,
      },
      remoteCharacteristicStopNotifications: {
        params: WebBluetoothService_RemoteCharacteristicStopNotifications_Params,
      },
      remoteCharacteristicGetDescriptors: {
        params: WebBluetoothService_RemoteCharacteristicGetDescriptors_Params,
      },
      remoteDescriptorReadValue: {
        params: WebBluetoothService_RemoteDescriptorReadValue_Params,
      },
      remoteDescriptorWriteValue: {
        params: WebBluetoothService_RemoteDescriptorWriteValue_Params,
      },
    },
  };
  WebBluetoothServiceStub.prototype.validator = validateWebBluetoothServiceRequest;
  WebBluetoothServiceProxy.prototype.validator = validateWebBluetoothServiceResponse;
  var kWebBluetoothServerClient_GATTServerDisconnected_Name = 972914556;

  function WebBluetoothServerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WebBluetoothServerClient,
                                                   handleOrPtrInfo);
  }

  function WebBluetoothServerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WebBluetoothServerClient, associatedInterfacePtrInfo);
  }

  WebBluetoothServerClientAssociatedPtr.prototype =
      Object.create(WebBluetoothServerClientPtr.prototype);
  WebBluetoothServerClientAssociatedPtr.prototype.constructor =
      WebBluetoothServerClientAssociatedPtr;

  function WebBluetoothServerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  WebBluetoothServerClientPtr.prototype.gATTServerDisconnected = function() {
    return WebBluetoothServerClientProxy.prototype.gATTServerDisconnected
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothServerClientProxy.prototype.gATTServerDisconnected = function() {
    var params_ = new WebBluetoothServerClient_GATTServerDisconnected_Params();
    var builder = new codec.MessageV0Builder(
        kWebBluetoothServerClient_GATTServerDisconnected_Name,
        codec.align(WebBluetoothServerClient_GATTServerDisconnected_Params.encodedSize));
    builder.encodeStruct(WebBluetoothServerClient_GATTServerDisconnected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebBluetoothServerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  WebBluetoothServerClientStub.prototype.gATTServerDisconnected = function() {
    return this.delegate_ && this.delegate_.gATTServerDisconnected && this.delegate_.gATTServerDisconnected();
  }

  WebBluetoothServerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebBluetoothServerClient_GATTServerDisconnected_Name:
      var params = reader.decodeStruct(WebBluetoothServerClient_GATTServerDisconnected_Params);
      this.gATTServerDisconnected();
      return true;
    default:
      return false;
    }
  };

  WebBluetoothServerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWebBluetoothServerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebBluetoothServerClient_GATTServerDisconnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebBluetoothServerClient_GATTServerDisconnected_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebBluetoothServerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebBluetoothServerClient = {
    name: 'blink.mojom.WebBluetoothServerClient',
    kVersion: 0,
    ptrClass: WebBluetoothServerClientPtr,
    proxyClass: WebBluetoothServerClientProxy,
    stubClass: WebBluetoothServerClientStub,
    validateRequest: validateWebBluetoothServerClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom',
    fuzzMethods: {
      gATTServerDisconnected: {
        params: WebBluetoothServerClient_GATTServerDisconnected_Params,
      },
    },
  };
  WebBluetoothServerClientStub.prototype.validator = validateWebBluetoothServerClientRequest;
  WebBluetoothServerClientProxy.prototype.validator = null;
  var kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name = 1649934569;

  function WebBluetoothCharacteristicClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WebBluetoothCharacteristicClient,
                                                   handleOrPtrInfo);
  }

  function WebBluetoothCharacteristicClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WebBluetoothCharacteristicClient, associatedInterfacePtrInfo);
  }

  WebBluetoothCharacteristicClientAssociatedPtr.prototype =
      Object.create(WebBluetoothCharacteristicClientPtr.prototype);
  WebBluetoothCharacteristicClientAssociatedPtr.prototype.constructor =
      WebBluetoothCharacteristicClientAssociatedPtr;

  function WebBluetoothCharacteristicClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  WebBluetoothCharacteristicClientPtr.prototype.remoteCharacteristicValueChanged = function() {
    return WebBluetoothCharacteristicClientProxy.prototype.remoteCharacteristicValueChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WebBluetoothCharacteristicClientProxy.prototype.remoteCharacteristicValueChanged = function(value) {
    var params_ = new WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name,
        codec.align(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params.encodedSize));
    builder.encodeStruct(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebBluetoothCharacteristicClientStub(delegate) {
    this.delegate_ = delegate;
  }
  WebBluetoothCharacteristicClientStub.prototype.remoteCharacteristicValueChanged = function(value) {
    return this.delegate_ && this.delegate_.remoteCharacteristicValueChanged && this.delegate_.remoteCharacteristicValueChanged(value);
  }

  WebBluetoothCharacteristicClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name:
      var params = reader.decodeStruct(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params);
      this.remoteCharacteristicValueChanged(params.value);
      return true;
    default:
      return false;
    }
  };

  WebBluetoothCharacteristicClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWebBluetoothCharacteristicClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebBluetoothCharacteristicClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebBluetoothCharacteristicClient = {
    name: 'blink.mojom.WebBluetoothCharacteristicClient',
    kVersion: 0,
    ptrClass: WebBluetoothCharacteristicClientPtr,
    proxyClass: WebBluetoothCharacteristicClientProxy,
    stubClass: WebBluetoothCharacteristicClientStub,
    validateRequest: validateWebBluetoothCharacteristicClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom',
    fuzzMethods: {
      remoteCharacteristicValueChanged: {
        params: WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params,
      },
    },
  };
  WebBluetoothCharacteristicClientStub.prototype.validator = validateWebBluetoothCharacteristicClientRequest;
  WebBluetoothCharacteristicClientProxy.prototype.validator = null;
  exports.WebBluetoothResult = WebBluetoothResult;
  exports.WebBluetoothGATTQueryQuantity = WebBluetoothGATTQueryQuantity;
  exports.WebBluetoothLeScanFilter = WebBluetoothLeScanFilter;
  exports.WebBluetoothRequestDeviceOptions = WebBluetoothRequestDeviceOptions;
  exports.WebBluetoothDeviceId = WebBluetoothDeviceId;
  exports.WebBluetoothDevice = WebBluetoothDevice;
  exports.WebBluetoothRemoteGATTService = WebBluetoothRemoteGATTService;
  exports.WebBluetoothRemoteGATTCharacteristic = WebBluetoothRemoteGATTCharacteristic;
  exports.WebBluetoothRemoteGATTDescriptor = WebBluetoothRemoteGATTDescriptor;
  exports.WebBluetoothService = WebBluetoothService;
  exports.WebBluetoothServicePtr = WebBluetoothServicePtr;
  exports.WebBluetoothServiceAssociatedPtr = WebBluetoothServiceAssociatedPtr;
  exports.WebBluetoothServerClient = WebBluetoothServerClient;
  exports.WebBluetoothServerClientPtr = WebBluetoothServerClientPtr;
  exports.WebBluetoothServerClientAssociatedPtr = WebBluetoothServerClientAssociatedPtr;
  exports.WebBluetoothCharacteristicClient = WebBluetoothCharacteristicClient;
  exports.WebBluetoothCharacteristicClientPtr = WebBluetoothCharacteristicClientPtr;
  exports.WebBluetoothCharacteristicClientAssociatedPtr = WebBluetoothCharacteristicClientAssociatedPtr;
})();