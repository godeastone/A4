// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'device/usb/public/mojom/device.mojom';
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
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../mojo/public/mojom/base/string16.mojom.js');
  }


  var UsbOpenDeviceError = {};
  UsbOpenDeviceError.OK = 0;
  UsbOpenDeviceError.ACCESS_DENIED = UsbOpenDeviceError.OK + 1;
  UsbOpenDeviceError.ALREADY_OPEN = UsbOpenDeviceError.ACCESS_DENIED + 1;

  UsbOpenDeviceError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  UsbOpenDeviceError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var UsbTransferDirection = {};
  UsbTransferDirection.INBOUND = 0;
  UsbTransferDirection.OUTBOUND = UsbTransferDirection.INBOUND + 1;

  UsbTransferDirection.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  UsbTransferDirection.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var UsbControlTransferType = {};
  UsbControlTransferType.STANDARD = 0;
  UsbControlTransferType.CLASS = UsbControlTransferType.STANDARD + 1;
  UsbControlTransferType.VENDOR = UsbControlTransferType.CLASS + 1;
  UsbControlTransferType.RESERVED = UsbControlTransferType.VENDOR + 1;

  UsbControlTransferType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  UsbControlTransferType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var UsbControlTransferRecipient = {};
  UsbControlTransferRecipient.DEVICE = 0;
  UsbControlTransferRecipient.INTERFACE = UsbControlTransferRecipient.DEVICE + 1;
  UsbControlTransferRecipient.ENDPOINT = UsbControlTransferRecipient.INTERFACE + 1;
  UsbControlTransferRecipient.OTHER = UsbControlTransferRecipient.ENDPOINT + 1;

  UsbControlTransferRecipient.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  UsbControlTransferRecipient.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var UsbTransferType = {};
  UsbTransferType.CONTROL = 0;
  UsbTransferType.ISOCHRONOUS = UsbTransferType.CONTROL + 1;
  UsbTransferType.BULK = UsbTransferType.ISOCHRONOUS + 1;
  UsbTransferType.INTERRUPT = UsbTransferType.BULK + 1;

  UsbTransferType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  UsbTransferType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var UsbTransferStatus = {};
  UsbTransferStatus.COMPLETED = 0;
  UsbTransferStatus.TRANSFER_ERROR = UsbTransferStatus.COMPLETED + 1;
  UsbTransferStatus.TIMEOUT = UsbTransferStatus.TRANSFER_ERROR + 1;
  UsbTransferStatus.CANCELLED = UsbTransferStatus.TIMEOUT + 1;
  UsbTransferStatus.STALLED = UsbTransferStatus.CANCELLED + 1;
  UsbTransferStatus.DISCONNECT = UsbTransferStatus.STALLED + 1;
  UsbTransferStatus.BABBLE = UsbTransferStatus.DISCONNECT + 1;
  UsbTransferStatus.SHORT_PACKET = UsbTransferStatus.BABBLE + 1;
  UsbTransferStatus.PERMISSION_DENIED = UsbTransferStatus.SHORT_PACKET + 1;

  UsbTransferStatus.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  UsbTransferStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function UsbEndpointInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbEndpointInfo.prototype.initDefaults_ = function() {
    this.endpointNumber = 0;
    this.direction = 0;
    this.type = 0;
    this.packetSize = 0;
  };
  UsbEndpointInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbEndpointInfo.generate = function(generator_) {
    var generated = new UsbEndpointInfo;
    generated.endpointNumber = generator_.generateUint8();
    generated.direction = generator_.generateEnum(0, 1);
    generated.type = generator_.generateEnum(0, 3);
    generated.packetSize = generator_.generateUint32();
    return generated;
  };

  UsbEndpointInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.endpointNumber = mutator_.mutateUint8(this.endpointNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.direction = mutator_.mutateEnum(this.direction, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.packetSize = mutator_.mutateUint32(this.packetSize);
    }
    return this;
  };
  UsbEndpointInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbEndpointInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbEndpointInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbEndpointInfo.validate = function(messageValidator, offset) {
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



    // validate UsbEndpointInfo.direction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, UsbTransferDirection);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbEndpointInfo.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, UsbTransferType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UsbEndpointInfo.encodedSize = codec.kStructHeaderSize + 16;

  UsbEndpointInfo.decode = function(decoder) {
    var packed;
    var val = new UsbEndpointInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.endpointNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.direction = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.Int32);
    val.packetSize = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  UsbEndpointInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbEndpointInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.endpointNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.direction);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Uint32, val.packetSize);
  };
  function UsbAlternateInterfaceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbAlternateInterfaceInfo.prototype.initDefaults_ = function() {
    this.alternateSetting = 0;
    this.classCode = 0;
    this.subclassCode = 0;
    this.protocolCode = 0;
    this.interfaceName = null;
    this.endpoints = null;
  };
  UsbAlternateInterfaceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbAlternateInterfaceInfo.generate = function(generator_) {
    var generated = new UsbAlternateInterfaceInfo;
    generated.alternateSetting = generator_.generateUint8();
    generated.classCode = generator_.generateUint8();
    generated.subclassCode = generator_.generateUint8();
    generated.protocolCode = generator_.generateUint8();
    generated.interfaceName = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.endpoints = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.UsbEndpointInfo, false);
    });
    return generated;
  };

  UsbAlternateInterfaceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.alternateSetting = mutator_.mutateUint8(this.alternateSetting);
    }
    if (mutator_.chooseMutateField()) {
      this.classCode = mutator_.mutateUint8(this.classCode);
    }
    if (mutator_.chooseMutateField()) {
      this.subclassCode = mutator_.mutateUint8(this.subclassCode);
    }
    if (mutator_.chooseMutateField()) {
      this.protocolCode = mutator_.mutateUint8(this.protocolCode);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaceName = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.endpoints = mutator_.mutateArray(this.endpoints, function(val) {
        return mutator_.mutateStruct(device.mojom.UsbEndpointInfo, false);
      });
    }
    return this;
  };
  UsbAlternateInterfaceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbAlternateInterfaceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbAlternateInterfaceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbAlternateInterfaceInfo.validate = function(messageValidator, offset) {
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






    // validate UsbAlternateInterfaceInfo.interfaceName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbAlternateInterfaceInfo.endpoints
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(UsbEndpointInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbAlternateInterfaceInfo.encodedSize = codec.kStructHeaderSize + 24;

  UsbAlternateInterfaceInfo.decode = function(decoder) {
    var packed;
    var val = new UsbAlternateInterfaceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.alternateSetting = decoder.decodeStruct(codec.Uint8);
    val.classCode = decoder.decodeStruct(codec.Uint8);
    val.subclassCode = decoder.decodeStruct(codec.Uint8);
    val.protocolCode = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.interfaceName = decoder.decodeStructPointer(string16$.String16);
    val.endpoints = decoder.decodeArrayPointer(new codec.PointerTo(UsbEndpointInfo));
    return val;
  };

  UsbAlternateInterfaceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbAlternateInterfaceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.alternateSetting);
    encoder.encodeStruct(codec.Uint8, val.classCode);
    encoder.encodeStruct(codec.Uint8, val.subclassCode);
    encoder.encodeStruct(codec.Uint8, val.protocolCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.interfaceName);
    encoder.encodeArrayPointer(new codec.PointerTo(UsbEndpointInfo), val.endpoints);
  };
  function UsbInterfaceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInterfaceInfo.prototype.initDefaults_ = function() {
    this.interfaceNumber = 0;
    this.alternates = null;
  };
  UsbInterfaceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbInterfaceInfo.generate = function(generator_) {
    var generated = new UsbInterfaceInfo;
    generated.interfaceNumber = generator_.generateUint8();
    generated.alternates = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.UsbAlternateInterfaceInfo, false);
    });
    return generated;
  };

  UsbInterfaceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interfaceNumber = mutator_.mutateUint8(this.interfaceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.alternates = mutator_.mutateArray(this.alternates, function(val) {
        return mutator_.mutateStruct(device.mojom.UsbAlternateInterfaceInfo, false);
      });
    }
    return this;
  };
  UsbInterfaceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbInterfaceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbInterfaceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbInterfaceInfo.validate = function(messageValidator, offset) {
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



    // validate UsbInterfaceInfo.alternates
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(UsbAlternateInterfaceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInterfaceInfo.encodedSize = codec.kStructHeaderSize + 16;

  UsbInterfaceInfo.decode = function(decoder) {
    var packed;
    var val = new UsbInterfaceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaceNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.alternates = decoder.decodeArrayPointer(new codec.PointerTo(UsbAlternateInterfaceInfo));
    return val;
  };

  UsbInterfaceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInterfaceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.interfaceNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(UsbAlternateInterfaceInfo), val.alternates);
  };
  function UsbConfigurationInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbConfigurationInfo.prototype.initDefaults_ = function() {
    this.configurationValue = 0;
    this.configurationName = null;
    this.interfaces = null;
  };
  UsbConfigurationInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbConfigurationInfo.generate = function(generator_) {
    var generated = new UsbConfigurationInfo;
    generated.configurationValue = generator_.generateUint8();
    generated.configurationName = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.interfaces = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.UsbInterfaceInfo, false);
    });
    return generated;
  };

  UsbConfigurationInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.configurationValue = mutator_.mutateUint8(this.configurationValue);
    }
    if (mutator_.chooseMutateField()) {
      this.configurationName = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaces = mutator_.mutateArray(this.interfaces, function(val) {
        return mutator_.mutateStruct(device.mojom.UsbInterfaceInfo, false);
      });
    }
    return this;
  };
  UsbConfigurationInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbConfigurationInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbConfigurationInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbConfigurationInfo.validate = function(messageValidator, offset) {
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



    // validate UsbConfigurationInfo.configurationName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbConfigurationInfo.interfaces
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(UsbInterfaceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbConfigurationInfo.encodedSize = codec.kStructHeaderSize + 24;

  UsbConfigurationInfo.decode = function(decoder) {
    var packed;
    var val = new UsbConfigurationInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.configurationValue = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.configurationName = decoder.decodeStructPointer(string16$.String16);
    val.interfaces = decoder.decodeArrayPointer(new codec.PointerTo(UsbInterfaceInfo));
    return val;
  };

  UsbConfigurationInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbConfigurationInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.configurationValue);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.configurationName);
    encoder.encodeArrayPointer(new codec.PointerTo(UsbInterfaceInfo), val.interfaces);
  };
  function UsbDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDeviceInfo.prototype.initDefaults_ = function() {
    this.guid = null;
    this.usbVersionMajor = 0;
    this.usbVersionMinor = 0;
    this.usbVersionSubminor = 0;
    this.classCode = 0;
    this.subclassCode = 0;
    this.protocolCode = 0;
    this.vendorId = 0;
    this.productId = 0;
    this.deviceVersionMajor = 0;
    this.deviceVersionMinor = 0;
    this.deviceVersionSubminor = 0;
    this.activeConfiguration = 0;
    this.manufacturerName = null;
    this.productName = null;
    this.serialNumber = null;
    this.configurations = null;
  };
  UsbDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDeviceInfo.generate = function(generator_) {
    var generated = new UsbDeviceInfo;
    generated.guid = generator_.generateString(false);
    generated.usbVersionMajor = generator_.generateUint8();
    generated.usbVersionMinor = generator_.generateUint8();
    generated.usbVersionSubminor = generator_.generateUint8();
    generated.classCode = generator_.generateUint8();
    generated.subclassCode = generator_.generateUint8();
    generated.protocolCode = generator_.generateUint8();
    generated.vendorId = generator_.generateUint16();
    generated.productId = generator_.generateUint16();
    generated.deviceVersionMajor = generator_.generateUint8();
    generated.deviceVersionMinor = generator_.generateUint8();
    generated.deviceVersionSubminor = generator_.generateUint8();
    generated.manufacturerName = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.productName = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.serialNumber = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.activeConfiguration = generator_.generateUint8();
    generated.configurations = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.UsbConfigurationInfo, false);
    });
    return generated;
  };

  UsbDeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.guid = mutator_.mutateString(this.guid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.usbVersionMajor = mutator_.mutateUint8(this.usbVersionMajor);
    }
    if (mutator_.chooseMutateField()) {
      this.usbVersionMinor = mutator_.mutateUint8(this.usbVersionMinor);
    }
    if (mutator_.chooseMutateField()) {
      this.usbVersionSubminor = mutator_.mutateUint8(this.usbVersionSubminor);
    }
    if (mutator_.chooseMutateField()) {
      this.classCode = mutator_.mutateUint8(this.classCode);
    }
    if (mutator_.chooseMutateField()) {
      this.subclassCode = mutator_.mutateUint8(this.subclassCode);
    }
    if (mutator_.chooseMutateField()) {
      this.protocolCode = mutator_.mutateUint8(this.protocolCode);
    }
    if (mutator_.chooseMutateField()) {
      this.vendorId = mutator_.mutateUint16(this.vendorId);
    }
    if (mutator_.chooseMutateField()) {
      this.productId = mutator_.mutateUint16(this.productId);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceVersionMajor = mutator_.mutateUint8(this.deviceVersionMajor);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceVersionMinor = mutator_.mutateUint8(this.deviceVersionMinor);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceVersionSubminor = mutator_.mutateUint8(this.deviceVersionSubminor);
    }
    if (mutator_.chooseMutateField()) {
      this.manufacturerName = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.productName = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.serialNumber = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.activeConfiguration = mutator_.mutateUint8(this.activeConfiguration);
    }
    if (mutator_.chooseMutateField()) {
      this.configurations = mutator_.mutateArray(this.configurations, function(val) {
        return mutator_.mutateStruct(device.mojom.UsbConfigurationInfo, false);
      });
    }
    return this;
  };
  UsbDeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDeviceInfo.validate = function(messageValidator, offset) {
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


    // validate UsbDeviceInfo.guid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;













    // validate UsbDeviceInfo.manufacturerName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbDeviceInfo.productName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbDeviceInfo.serialNumber
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;



    // validate UsbDeviceInfo.configurations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(UsbConfigurationInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDeviceInfo.encodedSize = codec.kStructHeaderSize + 56;

  UsbDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new UsbDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.guid = decoder.decodeStruct(codec.String);
    val.usbVersionMajor = decoder.decodeStruct(codec.Uint8);
    val.usbVersionMinor = decoder.decodeStruct(codec.Uint8);
    val.usbVersionSubminor = decoder.decodeStruct(codec.Uint8);
    val.classCode = decoder.decodeStruct(codec.Uint8);
    val.subclassCode = decoder.decodeStruct(codec.Uint8);
    val.protocolCode = decoder.decodeStruct(codec.Uint8);
    val.vendorId = decoder.decodeStruct(codec.Uint16);
    val.productId = decoder.decodeStruct(codec.Uint16);
    val.deviceVersionMajor = decoder.decodeStruct(codec.Uint8);
    val.deviceVersionMinor = decoder.decodeStruct(codec.Uint8);
    val.deviceVersionSubminor = decoder.decodeStruct(codec.Uint8);
    val.activeConfiguration = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    val.manufacturerName = decoder.decodeStructPointer(string16$.String16);
    val.productName = decoder.decodeStructPointer(string16$.String16);
    val.serialNumber = decoder.decodeStructPointer(string16$.String16);
    val.configurations = decoder.decodeArrayPointer(new codec.PointerTo(UsbConfigurationInfo));
    return val;
  };

  UsbDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.guid);
    encoder.encodeStruct(codec.Uint8, val.usbVersionMajor);
    encoder.encodeStruct(codec.Uint8, val.usbVersionMinor);
    encoder.encodeStruct(codec.Uint8, val.usbVersionSubminor);
    encoder.encodeStruct(codec.Uint8, val.classCode);
    encoder.encodeStruct(codec.Uint8, val.subclassCode);
    encoder.encodeStruct(codec.Uint8, val.protocolCode);
    encoder.encodeStruct(codec.Uint16, val.vendorId);
    encoder.encodeStruct(codec.Uint16, val.productId);
    encoder.encodeStruct(codec.Uint8, val.deviceVersionMajor);
    encoder.encodeStruct(codec.Uint8, val.deviceVersionMinor);
    encoder.encodeStruct(codec.Uint8, val.deviceVersionSubminor);
    encoder.encodeStruct(codec.Uint8, val.activeConfiguration);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.manufacturerName);
    encoder.encodeStructPointer(string16$.String16, val.productName);
    encoder.encodeStructPointer(string16$.String16, val.serialNumber);
    encoder.encodeArrayPointer(new codec.PointerTo(UsbConfigurationInfo), val.configurations);
  };
  function UsbControlTransferParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbControlTransferParams.prototype.initDefaults_ = function() {
    this.type = 0;
    this.recipient = 0;
    this.request = 0;
    this.value = 0;
    this.index = 0;
  };
  UsbControlTransferParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbControlTransferParams.generate = function(generator_) {
    var generated = new UsbControlTransferParams;
    generated.type = generator_.generateEnum(0, 3);
    generated.recipient = generator_.generateEnum(0, 3);
    generated.request = generator_.generateUint8();
    generated.value = generator_.generateUint16();
    generated.index = generator_.generateUint16();
    return generated;
  };

  UsbControlTransferParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.recipient = mutator_.mutateEnum(this.recipient, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateUint8(this.request);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateUint16(this.value);
    }
    if (mutator_.chooseMutateField()) {
      this.index = mutator_.mutateUint16(this.index);
    }
    return this;
  };
  UsbControlTransferParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbControlTransferParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbControlTransferParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbControlTransferParams.validate = function(messageValidator, offset) {
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


    // validate UsbControlTransferParams.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, UsbControlTransferType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbControlTransferParams.recipient
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, UsbControlTransferRecipient);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  UsbControlTransferParams.encodedSize = codec.kStructHeaderSize + 16;

  UsbControlTransferParams.decode = function(decoder) {
    var packed;
    var val = new UsbControlTransferParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.recipient = decoder.decodeStruct(codec.Int32);
    val.request = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    val.value = decoder.decodeStruct(codec.Uint16);
    val.index = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbControlTransferParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbControlTransferParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Int32, val.recipient);
    encoder.encodeStruct(codec.Uint8, val.request);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.value);
    encoder.encodeStruct(codec.Uint16, val.index);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbIsochronousPacket(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbIsochronousPacket.prototype.initDefaults_ = function() {
    this.length = 0;
    this.transferredLength = 0;
    this.status = 0;
  };
  UsbIsochronousPacket.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbIsochronousPacket.generate = function(generator_) {
    var generated = new UsbIsochronousPacket;
    generated.length = generator_.generateUint32();
    generated.transferredLength = generator_.generateUint32();
    generated.status = generator_.generateEnum(0, 8);
    return generated;
  };

  UsbIsochronousPacket.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint32(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.transferredLength = mutator_.mutateUint32(this.transferredLength);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 8);
    }
    return this;
  };
  UsbIsochronousPacket.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbIsochronousPacket.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbIsochronousPacket.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbIsochronousPacket.validate = function(messageValidator, offset) {
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




    // validate UsbIsochronousPacket.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, UsbTransferStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbIsochronousPacket.encodedSize = codec.kStructHeaderSize + 16;

  UsbIsochronousPacket.decode = function(decoder) {
    var packed;
    var val = new UsbIsochronousPacket();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.length = decoder.decodeStruct(codec.Uint32);
    val.transferredLength = decoder.decodeStruct(codec.Uint32);
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbIsochronousPacket.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbIsochronousPacket.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.length);
    encoder.encodeStruct(codec.Uint32, val.transferredLength);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_Open_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_Open_Params.prototype.initDefaults_ = function() {
  };
  UsbDevice_Open_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_Open_Params.generate = function(generator_) {
    var generated = new UsbDevice_Open_Params;
    return generated;
  };

  UsbDevice_Open_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  UsbDevice_Open_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_Open_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_Open_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_Open_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_Open_Params.encodedSize = codec.kStructHeaderSize + 0;

  UsbDevice_Open_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_Open_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbDevice_Open_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_Open_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbDevice_Open_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_Open_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  UsbDevice_Open_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_Open_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_Open_ResponseParams;
    generated.error = generator_.generateEnum(0, 2);
    return generated;
  };

  UsbDevice_Open_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 2);
    }
    return this;
  };
  UsbDevice_Open_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_Open_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_Open_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_Open_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_Open_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, UsbOpenDeviceError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDevice_Open_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_Open_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_Open_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_Open_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_Open_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_Close_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_Close_Params.prototype.initDefaults_ = function() {
  };
  UsbDevice_Close_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_Close_Params.generate = function(generator_) {
    var generated = new UsbDevice_Close_Params;
    return generated;
  };

  UsbDevice_Close_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  UsbDevice_Close_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_Close_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_Close_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_Close_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_Close_Params.encodedSize = codec.kStructHeaderSize + 0;

  UsbDevice_Close_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_Close_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbDevice_Close_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_Close_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbDevice_Close_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_Close_ResponseParams.prototype.initDefaults_ = function() {
  };
  UsbDevice_Close_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_Close_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_Close_ResponseParams;
    return generated;
  };

  UsbDevice_Close_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  UsbDevice_Close_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_Close_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_Close_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_Close_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbDevice_Close_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  UsbDevice_Close_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_Close_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbDevice_Close_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_Close_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbDevice_SetConfiguration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_SetConfiguration_Params.prototype.initDefaults_ = function() {
    this.value = 0;
  };
  UsbDevice_SetConfiguration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_SetConfiguration_Params.generate = function(generator_) {
    var generated = new UsbDevice_SetConfiguration_Params;
    generated.value = generator_.generateUint8();
    return generated;
  };

  UsbDevice_SetConfiguration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateUint8(this.value);
    }
    return this;
  };
  UsbDevice_SetConfiguration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_SetConfiguration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_SetConfiguration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_SetConfiguration_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_SetConfiguration_Params.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_SetConfiguration_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_SetConfiguration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_SetConfiguration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_SetConfiguration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_SetConfiguration_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_SetConfiguration_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  UsbDevice_SetConfiguration_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_SetConfiguration_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_SetConfiguration_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  UsbDevice_SetConfiguration_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  UsbDevice_SetConfiguration_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_SetConfiguration_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_SetConfiguration_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_SetConfiguration_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbDevice_SetConfiguration_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_SetConfiguration_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_SetConfiguration_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_SetConfiguration_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_SetConfiguration_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ClaimInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ClaimInterface_Params.prototype.initDefaults_ = function() {
    this.interfaceNumber = 0;
  };
  UsbDevice_ClaimInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ClaimInterface_Params.generate = function(generator_) {
    var generated = new UsbDevice_ClaimInterface_Params;
    generated.interfaceNumber = generator_.generateUint8();
    return generated;
  };

  UsbDevice_ClaimInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interfaceNumber = mutator_.mutateUint8(this.interfaceNumber);
    }
    return this;
  };
  UsbDevice_ClaimInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ClaimInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ClaimInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ClaimInterface_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_ClaimInterface_Params.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_ClaimInterface_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ClaimInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaceNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ClaimInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ClaimInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.interfaceNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ClaimInterface_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ClaimInterface_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  UsbDevice_ClaimInterface_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ClaimInterface_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_ClaimInterface_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  UsbDevice_ClaimInterface_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  UsbDevice_ClaimInterface_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ClaimInterface_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ClaimInterface_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ClaimInterface_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbDevice_ClaimInterface_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_ClaimInterface_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ClaimInterface_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ClaimInterface_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ClaimInterface_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ReleaseInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ReleaseInterface_Params.prototype.initDefaults_ = function() {
    this.interfaceNumber = 0;
  };
  UsbDevice_ReleaseInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ReleaseInterface_Params.generate = function(generator_) {
    var generated = new UsbDevice_ReleaseInterface_Params;
    generated.interfaceNumber = generator_.generateUint8();
    return generated;
  };

  UsbDevice_ReleaseInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interfaceNumber = mutator_.mutateUint8(this.interfaceNumber);
    }
    return this;
  };
  UsbDevice_ReleaseInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ReleaseInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ReleaseInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ReleaseInterface_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_ReleaseInterface_Params.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_ReleaseInterface_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ReleaseInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaceNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ReleaseInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ReleaseInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.interfaceNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ReleaseInterface_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ReleaseInterface_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  UsbDevice_ReleaseInterface_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ReleaseInterface_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_ReleaseInterface_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  UsbDevice_ReleaseInterface_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  UsbDevice_ReleaseInterface_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ReleaseInterface_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ReleaseInterface_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ReleaseInterface_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbDevice_ReleaseInterface_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_ReleaseInterface_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ReleaseInterface_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ReleaseInterface_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ReleaseInterface_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_SetInterfaceAlternateSetting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_SetInterfaceAlternateSetting_Params.prototype.initDefaults_ = function() {
    this.interfaceNumber = 0;
    this.alternateSetting = 0;
  };
  UsbDevice_SetInterfaceAlternateSetting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_SetInterfaceAlternateSetting_Params.generate = function(generator_) {
    var generated = new UsbDevice_SetInterfaceAlternateSetting_Params;
    generated.interfaceNumber = generator_.generateUint8();
    generated.alternateSetting = generator_.generateUint8();
    return generated;
  };

  UsbDevice_SetInterfaceAlternateSetting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interfaceNumber = mutator_.mutateUint8(this.interfaceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.alternateSetting = mutator_.mutateUint8(this.alternateSetting);
    }
    return this;
  };
  UsbDevice_SetInterfaceAlternateSetting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_SetInterfaceAlternateSetting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_SetInterfaceAlternateSetting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_SetInterfaceAlternateSetting_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_SetInterfaceAlternateSetting_Params.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_SetInterfaceAlternateSetting_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_SetInterfaceAlternateSetting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaceNumber = decoder.decodeStruct(codec.Uint8);
    val.alternateSetting = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_SetInterfaceAlternateSetting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_SetInterfaceAlternateSetting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.interfaceNumber);
    encoder.encodeStruct(codec.Uint8, val.alternateSetting);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_SetInterfaceAlternateSetting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_SetInterfaceAlternateSetting_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_SetInterfaceAlternateSetting_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_SetInterfaceAlternateSetting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_SetInterfaceAlternateSetting_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_Reset_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_Reset_Params.prototype.initDefaults_ = function() {
  };
  UsbDevice_Reset_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_Reset_Params.generate = function(generator_) {
    var generated = new UsbDevice_Reset_Params;
    return generated;
  };

  UsbDevice_Reset_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  UsbDevice_Reset_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_Reset_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_Reset_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_Reset_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_Reset_Params.encodedSize = codec.kStructHeaderSize + 0;

  UsbDevice_Reset_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_Reset_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbDevice_Reset_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_Reset_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbDevice_Reset_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_Reset_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  UsbDevice_Reset_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_Reset_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_Reset_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  UsbDevice_Reset_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  UsbDevice_Reset_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_Reset_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_Reset_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_Reset_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbDevice_Reset_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_Reset_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_Reset_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_Reset_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_Reset_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ClearHalt_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ClearHalt_Params.prototype.initDefaults_ = function() {
    this.endpoint = 0;
  };
  UsbDevice_ClearHalt_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ClearHalt_Params.generate = function(generator_) {
    var generated = new UsbDevice_ClearHalt_Params;
    generated.endpoint = generator_.generateUint8();
    return generated;
  };

  UsbDevice_ClearHalt_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.endpoint = mutator_.mutateUint8(this.endpoint);
    }
    return this;
  };
  UsbDevice_ClearHalt_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ClearHalt_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ClearHalt_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ClearHalt_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_ClearHalt_Params.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_ClearHalt_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ClearHalt_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.endpoint = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ClearHalt_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ClearHalt_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.endpoint);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ClearHalt_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ClearHalt_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  UsbDevice_ClearHalt_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ClearHalt_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_ClearHalt_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  UsbDevice_ClearHalt_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  UsbDevice_ClearHalt_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ClearHalt_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ClearHalt_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ClearHalt_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbDevice_ClearHalt_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_ClearHalt_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ClearHalt_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ClearHalt_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ClearHalt_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ControlTransferIn_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ControlTransferIn_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.length = 0;
    this.timeout = 0;
  };
  UsbDevice_ControlTransferIn_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ControlTransferIn_Params.generate = function(generator_) {
    var generated = new UsbDevice_ControlTransferIn_Params;
    generated.params = generator_.generateStruct(device.mojom.UsbControlTransferParams, false);
    generated.length = generator_.generateUint32();
    generated.timeout = generator_.generateUint32();
    return generated;
  };

  UsbDevice_ControlTransferIn_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(device.mojom.UsbControlTransferParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint32(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateUint32(this.timeout);
    }
    return this;
  };
  UsbDevice_ControlTransferIn_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ControlTransferIn_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ControlTransferIn_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ControlTransferIn_Params.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_ControlTransferIn_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, UsbControlTransferParams, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  UsbDevice_ControlTransferIn_Params.encodedSize = codec.kStructHeaderSize + 16;

  UsbDevice_ControlTransferIn_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ControlTransferIn_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(UsbControlTransferParams);
    val.length = decoder.decodeStruct(codec.Uint32);
    val.timeout = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  UsbDevice_ControlTransferIn_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ControlTransferIn_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(UsbControlTransferParams, val.params);
    encoder.encodeStruct(codec.Uint32, val.length);
    encoder.encodeStruct(codec.Uint32, val.timeout);
  };
  function UsbDevice_ControlTransferIn_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ControlTransferIn_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.data = null;
  };
  UsbDevice_ControlTransferIn_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ControlTransferIn_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_ControlTransferIn_ResponseParams;
    generated.status = generator_.generateEnum(0, 8);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  UsbDevice_ControlTransferIn_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 8);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  UsbDevice_ControlTransferIn_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ControlTransferIn_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ControlTransferIn_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ControlTransferIn_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_ControlTransferIn_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, UsbTransferStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbDevice_ControlTransferIn_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDevice_ControlTransferIn_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  UsbDevice_ControlTransferIn_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ControlTransferIn_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  UsbDevice_ControlTransferIn_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ControlTransferIn_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function UsbDevice_ControlTransferOut_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ControlTransferOut_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.data = null;
    this.timeout = 0;
  };
  UsbDevice_ControlTransferOut_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ControlTransferOut_Params.generate = function(generator_) {
    var generated = new UsbDevice_ControlTransferOut_Params;
    generated.params = generator_.generateStruct(device.mojom.UsbControlTransferParams, false);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.timeout = generator_.generateUint32();
    return generated;
  };

  UsbDevice_ControlTransferOut_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(device.mojom.UsbControlTransferParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateUint32(this.timeout);
    }
    return this;
  };
  UsbDevice_ControlTransferOut_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ControlTransferOut_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ControlTransferOut_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ControlTransferOut_Params.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_ControlTransferOut_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, UsbControlTransferParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbDevice_ControlTransferOut_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UsbDevice_ControlTransferOut_Params.encodedSize = codec.kStructHeaderSize + 24;

  UsbDevice_ControlTransferOut_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ControlTransferOut_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(UsbControlTransferParams);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.timeout = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ControlTransferOut_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ControlTransferOut_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(UsbControlTransferParams, val.params);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeStruct(codec.Uint32, val.timeout);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_ControlTransferOut_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_ControlTransferOut_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  UsbDevice_ControlTransferOut_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_ControlTransferOut_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_ControlTransferOut_ResponseParams;
    generated.status = generator_.generateEnum(0, 8);
    return generated;
  };

  UsbDevice_ControlTransferOut_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 8);
    }
    return this;
  };
  UsbDevice_ControlTransferOut_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_ControlTransferOut_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_ControlTransferOut_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_ControlTransferOut_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_ControlTransferOut_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, UsbTransferStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDevice_ControlTransferOut_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_ControlTransferOut_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_ControlTransferOut_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_ControlTransferOut_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_ControlTransferOut_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_GenericTransferIn_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_GenericTransferIn_Params.prototype.initDefaults_ = function() {
    this.endpointNumber = 0;
    this.length = 0;
    this.timeout = 0;
  };
  UsbDevice_GenericTransferIn_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_GenericTransferIn_Params.generate = function(generator_) {
    var generated = new UsbDevice_GenericTransferIn_Params;
    generated.endpointNumber = generator_.generateUint8();
    generated.length = generator_.generateUint32();
    generated.timeout = generator_.generateUint32();
    return generated;
  };

  UsbDevice_GenericTransferIn_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.endpointNumber = mutator_.mutateUint8(this.endpointNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint32(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateUint32(this.timeout);
    }
    return this;
  };
  UsbDevice_GenericTransferIn_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_GenericTransferIn_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_GenericTransferIn_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_GenericTransferIn_Params.validate = function(messageValidator, offset) {
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

  UsbDevice_GenericTransferIn_Params.encodedSize = codec.kStructHeaderSize + 16;

  UsbDevice_GenericTransferIn_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_GenericTransferIn_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.endpointNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.length = decoder.decodeStruct(codec.Uint32);
    val.timeout = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_GenericTransferIn_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_GenericTransferIn_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.endpointNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.length);
    encoder.encodeStruct(codec.Uint32, val.timeout);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_GenericTransferIn_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_GenericTransferIn_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.data = null;
  };
  UsbDevice_GenericTransferIn_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_GenericTransferIn_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_GenericTransferIn_ResponseParams;
    generated.status = generator_.generateEnum(0, 8);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  UsbDevice_GenericTransferIn_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 8);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  UsbDevice_GenericTransferIn_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_GenericTransferIn_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_GenericTransferIn_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_GenericTransferIn_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_GenericTransferIn_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, UsbTransferStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbDevice_GenericTransferIn_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDevice_GenericTransferIn_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  UsbDevice_GenericTransferIn_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_GenericTransferIn_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  UsbDevice_GenericTransferIn_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_GenericTransferIn_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function UsbDevice_GenericTransferOut_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_GenericTransferOut_Params.prototype.initDefaults_ = function() {
    this.endpointNumber = 0;
    this.timeout = 0;
    this.data = null;
  };
  UsbDevice_GenericTransferOut_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_GenericTransferOut_Params.generate = function(generator_) {
    var generated = new UsbDevice_GenericTransferOut_Params;
    generated.endpointNumber = generator_.generateUint8();
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.timeout = generator_.generateUint32();
    return generated;
  };

  UsbDevice_GenericTransferOut_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.endpointNumber = mutator_.mutateUint8(this.endpointNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateUint32(this.timeout);
    }
    return this;
  };
  UsbDevice_GenericTransferOut_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_GenericTransferOut_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_GenericTransferOut_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_GenericTransferOut_Params.validate = function(messageValidator, offset) {
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



    // validate UsbDevice_GenericTransferOut_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UsbDevice_GenericTransferOut_Params.encodedSize = codec.kStructHeaderSize + 16;

  UsbDevice_GenericTransferOut_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_GenericTransferOut_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.endpointNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeout = decoder.decodeStruct(codec.Uint32);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  UsbDevice_GenericTransferOut_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_GenericTransferOut_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.endpointNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.timeout);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function UsbDevice_GenericTransferOut_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_GenericTransferOut_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  UsbDevice_GenericTransferOut_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_GenericTransferOut_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_GenericTransferOut_ResponseParams;
    generated.status = generator_.generateEnum(0, 8);
    return generated;
  };

  UsbDevice_GenericTransferOut_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 8);
    }
    return this;
  };
  UsbDevice_GenericTransferOut_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_GenericTransferOut_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_GenericTransferOut_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_GenericTransferOut_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_GenericTransferOut_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, UsbTransferStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDevice_GenericTransferOut_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_GenericTransferOut_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_GenericTransferOut_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UsbDevice_GenericTransferOut_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_GenericTransferOut_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UsbDevice_IsochronousTransferIn_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_IsochronousTransferIn_Params.prototype.initDefaults_ = function() {
    this.endpointNumber = 0;
    this.timeout = 0;
    this.packetLengths = null;
  };
  UsbDevice_IsochronousTransferIn_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_IsochronousTransferIn_Params.generate = function(generator_) {
    var generated = new UsbDevice_IsochronousTransferIn_Params;
    generated.endpointNumber = generator_.generateUint8();
    generated.packetLengths = generator_.generateArray(function() {
      return generator_.generateUint32();
    });
    generated.timeout = generator_.generateUint32();
    return generated;
  };

  UsbDevice_IsochronousTransferIn_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.endpointNumber = mutator_.mutateUint8(this.endpointNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.packetLengths = mutator_.mutateArray(this.packetLengths, function(val) {
        return mutator_.mutateUint32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateUint32(this.timeout);
    }
    return this;
  };
  UsbDevice_IsochronousTransferIn_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_IsochronousTransferIn_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_IsochronousTransferIn_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_IsochronousTransferIn_Params.validate = function(messageValidator, offset) {
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



    // validate UsbDevice_IsochronousTransferIn_Params.packetLengths
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Uint32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UsbDevice_IsochronousTransferIn_Params.encodedSize = codec.kStructHeaderSize + 16;

  UsbDevice_IsochronousTransferIn_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_IsochronousTransferIn_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.endpointNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeout = decoder.decodeStruct(codec.Uint32);
    val.packetLengths = decoder.decodeArrayPointer(codec.Uint32);
    return val;
  };

  UsbDevice_IsochronousTransferIn_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_IsochronousTransferIn_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.endpointNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.timeout);
    encoder.encodeArrayPointer(codec.Uint32, val.packetLengths);
  };
  function UsbDevice_IsochronousTransferIn_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_IsochronousTransferIn_ResponseParams.prototype.initDefaults_ = function() {
    this.data = null;
    this.packets = null;
  };
  UsbDevice_IsochronousTransferIn_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_IsochronousTransferIn_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_IsochronousTransferIn_ResponseParams;
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.packets = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.UsbIsochronousPacket, false);
    });
    return generated;
  };

  UsbDevice_IsochronousTransferIn_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.packets = mutator_.mutateArray(this.packets, function(val) {
        return mutator_.mutateStruct(device.mojom.UsbIsochronousPacket, false);
      });
    }
    return this;
  };
  UsbDevice_IsochronousTransferIn_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_IsochronousTransferIn_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_IsochronousTransferIn_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_IsochronousTransferIn_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_IsochronousTransferIn_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbDevice_IsochronousTransferIn_ResponseParams.packets
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(UsbIsochronousPacket), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDevice_IsochronousTransferIn_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  UsbDevice_IsochronousTransferIn_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_IsochronousTransferIn_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.packets = decoder.decodeArrayPointer(new codec.PointerTo(UsbIsochronousPacket));
    return val;
  };

  UsbDevice_IsochronousTransferIn_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_IsochronousTransferIn_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeArrayPointer(new codec.PointerTo(UsbIsochronousPacket), val.packets);
  };
  function UsbDevice_IsochronousTransferOut_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_IsochronousTransferOut_Params.prototype.initDefaults_ = function() {
    this.endpointNumber = 0;
    this.timeout = 0;
    this.data = null;
    this.packetLengths = null;
  };
  UsbDevice_IsochronousTransferOut_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_IsochronousTransferOut_Params.generate = function(generator_) {
    var generated = new UsbDevice_IsochronousTransferOut_Params;
    generated.endpointNumber = generator_.generateUint8();
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.packetLengths = generator_.generateArray(function() {
      return generator_.generateUint32();
    });
    generated.timeout = generator_.generateUint32();
    return generated;
  };

  UsbDevice_IsochronousTransferOut_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.endpointNumber = mutator_.mutateUint8(this.endpointNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.packetLengths = mutator_.mutateArray(this.packetLengths, function(val) {
        return mutator_.mutateUint32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateUint32(this.timeout);
    }
    return this;
  };
  UsbDevice_IsochronousTransferOut_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_IsochronousTransferOut_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_IsochronousTransferOut_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_IsochronousTransferOut_Params.validate = function(messageValidator, offset) {
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



    // validate UsbDevice_IsochronousTransferOut_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbDevice_IsochronousTransferOut_Params.packetLengths
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, codec.Uint32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UsbDevice_IsochronousTransferOut_Params.encodedSize = codec.kStructHeaderSize + 24;

  UsbDevice_IsochronousTransferOut_Params.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_IsochronousTransferOut_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.endpointNumber = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeout = decoder.decodeStruct(codec.Uint32);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.packetLengths = decoder.decodeArrayPointer(codec.Uint32);
    return val;
  };

  UsbDevice_IsochronousTransferOut_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_IsochronousTransferOut_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.endpointNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.timeout);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeArrayPointer(codec.Uint32, val.packetLengths);
  };
  function UsbDevice_IsochronousTransferOut_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbDevice_IsochronousTransferOut_ResponseParams.prototype.initDefaults_ = function() {
    this.packets = null;
  };
  UsbDevice_IsochronousTransferOut_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbDevice_IsochronousTransferOut_ResponseParams.generate = function(generator_) {
    var generated = new UsbDevice_IsochronousTransferOut_ResponseParams;
    generated.packets = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.UsbIsochronousPacket, false);
    });
    return generated;
  };

  UsbDevice_IsochronousTransferOut_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.packets = mutator_.mutateArray(this.packets, function(val) {
        return mutator_.mutateStruct(device.mojom.UsbIsochronousPacket, false);
      });
    }
    return this;
  };
  UsbDevice_IsochronousTransferOut_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbDevice_IsochronousTransferOut_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbDevice_IsochronousTransferOut_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbDevice_IsochronousTransferOut_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbDevice_IsochronousTransferOut_ResponseParams.packets
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(UsbIsochronousPacket), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbDevice_IsochronousTransferOut_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbDevice_IsochronousTransferOut_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbDevice_IsochronousTransferOut_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.packets = decoder.decodeArrayPointer(new codec.PointerTo(UsbIsochronousPacket));
    return val;
  };

  UsbDevice_IsochronousTransferOut_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbDevice_IsochronousTransferOut_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(UsbIsochronousPacket), val.packets);
  };
  var kUsbDevice_Open_Name = 0;
  var kUsbDevice_Close_Name = 1;
  var kUsbDevice_SetConfiguration_Name = 2;
  var kUsbDevice_ClaimInterface_Name = 3;
  var kUsbDevice_ReleaseInterface_Name = 4;
  var kUsbDevice_SetInterfaceAlternateSetting_Name = 5;
  var kUsbDevice_Reset_Name = 6;
  var kUsbDevice_ClearHalt_Name = 7;
  var kUsbDevice_ControlTransferIn_Name = 8;
  var kUsbDevice_ControlTransferOut_Name = 9;
  var kUsbDevice_GenericTransferIn_Name = 10;
  var kUsbDevice_GenericTransferOut_Name = 11;
  var kUsbDevice_IsochronousTransferIn_Name = 12;
  var kUsbDevice_IsochronousTransferOut_Name = 13;

  function UsbDevicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UsbDevice,
                                                   handleOrPtrInfo);
  }

  function UsbDeviceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UsbDevice, associatedInterfacePtrInfo);
  }

  UsbDeviceAssociatedPtr.prototype =
      Object.create(UsbDevicePtr.prototype);
  UsbDeviceAssociatedPtr.prototype.constructor =
      UsbDeviceAssociatedPtr;

  function UsbDeviceProxy(receiver) {
    this.receiver_ = receiver;
  }
  UsbDevicePtr.prototype.open = function() {
    return UsbDeviceProxy.prototype.open
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.open = function() {
    var params_ = new UsbDevice_Open_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_Open_Name,
          codec.align(UsbDevice_Open_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_Open_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_Open_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.close = function() {
    return UsbDeviceProxy.prototype.close
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.close = function() {
    var params_ = new UsbDevice_Close_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_Close_Name,
          codec.align(UsbDevice_Close_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_Close_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_Close_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.setConfiguration = function() {
    return UsbDeviceProxy.prototype.setConfiguration
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.setConfiguration = function(value) {
    var params_ = new UsbDevice_SetConfiguration_Params();
    params_.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_SetConfiguration_Name,
          codec.align(UsbDevice_SetConfiguration_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_SetConfiguration_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_SetConfiguration_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.claimInterface = function() {
    return UsbDeviceProxy.prototype.claimInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.claimInterface = function(interfaceNumber) {
    var params_ = new UsbDevice_ClaimInterface_Params();
    params_.interfaceNumber = interfaceNumber;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_ClaimInterface_Name,
          codec.align(UsbDevice_ClaimInterface_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_ClaimInterface_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_ClaimInterface_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.releaseInterface = function() {
    return UsbDeviceProxy.prototype.releaseInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.releaseInterface = function(interfaceNumber) {
    var params_ = new UsbDevice_ReleaseInterface_Params();
    params_.interfaceNumber = interfaceNumber;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_ReleaseInterface_Name,
          codec.align(UsbDevice_ReleaseInterface_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_ReleaseInterface_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_ReleaseInterface_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.setInterfaceAlternateSetting = function() {
    return UsbDeviceProxy.prototype.setInterfaceAlternateSetting
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.setInterfaceAlternateSetting = function(interfaceNumber, alternateSetting) {
    var params_ = new UsbDevice_SetInterfaceAlternateSetting_Params();
    params_.interfaceNumber = interfaceNumber;
    params_.alternateSetting = alternateSetting;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_SetInterfaceAlternateSetting_Name,
          codec.align(UsbDevice_SetInterfaceAlternateSetting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_SetInterfaceAlternateSetting_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_SetInterfaceAlternateSetting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.reset = function() {
    return UsbDeviceProxy.prototype.reset
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.reset = function() {
    var params_ = new UsbDevice_Reset_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_Reset_Name,
          codec.align(UsbDevice_Reset_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_Reset_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_Reset_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.clearHalt = function() {
    return UsbDeviceProxy.prototype.clearHalt
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.clearHalt = function(endpoint) {
    var params_ = new UsbDevice_ClearHalt_Params();
    params_.endpoint = endpoint;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_ClearHalt_Name,
          codec.align(UsbDevice_ClearHalt_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_ClearHalt_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_ClearHalt_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.controlTransferIn = function() {
    return UsbDeviceProxy.prototype.controlTransferIn
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.controlTransferIn = function(params, length, timeout) {
    var params_ = new UsbDevice_ControlTransferIn_Params();
    params_.params = params;
    params_.length = length;
    params_.timeout = timeout;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_ControlTransferIn_Name,
          codec.align(UsbDevice_ControlTransferIn_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_ControlTransferIn_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_ControlTransferIn_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.controlTransferOut = function() {
    return UsbDeviceProxy.prototype.controlTransferOut
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.controlTransferOut = function(params, data, timeout) {
    var params_ = new UsbDevice_ControlTransferOut_Params();
    params_.params = params;
    params_.data = data;
    params_.timeout = timeout;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_ControlTransferOut_Name,
          codec.align(UsbDevice_ControlTransferOut_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_ControlTransferOut_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_ControlTransferOut_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.genericTransferIn = function() {
    return UsbDeviceProxy.prototype.genericTransferIn
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.genericTransferIn = function(endpointNumber, length, timeout) {
    var params_ = new UsbDevice_GenericTransferIn_Params();
    params_.endpointNumber = endpointNumber;
    params_.length = length;
    params_.timeout = timeout;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_GenericTransferIn_Name,
          codec.align(UsbDevice_GenericTransferIn_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_GenericTransferIn_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_GenericTransferIn_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.genericTransferOut = function() {
    return UsbDeviceProxy.prototype.genericTransferOut
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.genericTransferOut = function(endpointNumber, data, timeout) {
    var params_ = new UsbDevice_GenericTransferOut_Params();
    params_.endpointNumber = endpointNumber;
    params_.data = data;
    params_.timeout = timeout;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_GenericTransferOut_Name,
          codec.align(UsbDevice_GenericTransferOut_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_GenericTransferOut_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_GenericTransferOut_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.isochronousTransferIn = function() {
    return UsbDeviceProxy.prototype.isochronousTransferIn
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.isochronousTransferIn = function(endpointNumber, packetLengths, timeout) {
    var params_ = new UsbDevice_IsochronousTransferIn_Params();
    params_.endpointNumber = endpointNumber;
    params_.packetLengths = packetLengths;
    params_.timeout = timeout;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_IsochronousTransferIn_Name,
          codec.align(UsbDevice_IsochronousTransferIn_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_IsochronousTransferIn_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_IsochronousTransferIn_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbDevicePtr.prototype.isochronousTransferOut = function() {
    return UsbDeviceProxy.prototype.isochronousTransferOut
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbDeviceProxy.prototype.isochronousTransferOut = function(endpointNumber, data, packetLengths, timeout) {
    var params_ = new UsbDevice_IsochronousTransferOut_Params();
    params_.endpointNumber = endpointNumber;
    params_.data = data;
    params_.packetLengths = packetLengths;
    params_.timeout = timeout;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbDevice_IsochronousTransferOut_Name,
          codec.align(UsbDevice_IsochronousTransferOut_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbDevice_IsochronousTransferOut_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbDevice_IsochronousTransferOut_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function UsbDeviceStub(delegate) {
    this.delegate_ = delegate;
  }
  UsbDeviceStub.prototype.open = function() {
    return this.delegate_ && this.delegate_.open && this.delegate_.open();
  }
  UsbDeviceStub.prototype.close = function() {
    return this.delegate_ && this.delegate_.close && this.delegate_.close();
  }
  UsbDeviceStub.prototype.setConfiguration = function(value) {
    return this.delegate_ && this.delegate_.setConfiguration && this.delegate_.setConfiguration(value);
  }
  UsbDeviceStub.prototype.claimInterface = function(interfaceNumber) {
    return this.delegate_ && this.delegate_.claimInterface && this.delegate_.claimInterface(interfaceNumber);
  }
  UsbDeviceStub.prototype.releaseInterface = function(interfaceNumber) {
    return this.delegate_ && this.delegate_.releaseInterface && this.delegate_.releaseInterface(interfaceNumber);
  }
  UsbDeviceStub.prototype.setInterfaceAlternateSetting = function(interfaceNumber, alternateSetting) {
    return this.delegate_ && this.delegate_.setInterfaceAlternateSetting && this.delegate_.setInterfaceAlternateSetting(interfaceNumber, alternateSetting);
  }
  UsbDeviceStub.prototype.reset = function() {
    return this.delegate_ && this.delegate_.reset && this.delegate_.reset();
  }
  UsbDeviceStub.prototype.clearHalt = function(endpoint) {
    return this.delegate_ && this.delegate_.clearHalt && this.delegate_.clearHalt(endpoint);
  }
  UsbDeviceStub.prototype.controlTransferIn = function(params, length, timeout) {
    return this.delegate_ && this.delegate_.controlTransferIn && this.delegate_.controlTransferIn(params, length, timeout);
  }
  UsbDeviceStub.prototype.controlTransferOut = function(params, data, timeout) {
    return this.delegate_ && this.delegate_.controlTransferOut && this.delegate_.controlTransferOut(params, data, timeout);
  }
  UsbDeviceStub.prototype.genericTransferIn = function(endpointNumber, length, timeout) {
    return this.delegate_ && this.delegate_.genericTransferIn && this.delegate_.genericTransferIn(endpointNumber, length, timeout);
  }
  UsbDeviceStub.prototype.genericTransferOut = function(endpointNumber, data, timeout) {
    return this.delegate_ && this.delegate_.genericTransferOut && this.delegate_.genericTransferOut(endpointNumber, data, timeout);
  }
  UsbDeviceStub.prototype.isochronousTransferIn = function(endpointNumber, packetLengths, timeout) {
    return this.delegate_ && this.delegate_.isochronousTransferIn && this.delegate_.isochronousTransferIn(endpointNumber, packetLengths, timeout);
  }
  UsbDeviceStub.prototype.isochronousTransferOut = function(endpointNumber, data, packetLengths, timeout) {
    return this.delegate_ && this.delegate_.isochronousTransferOut && this.delegate_.isochronousTransferOut(endpointNumber, data, packetLengths, timeout);
  }

  UsbDeviceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  UsbDeviceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUsbDevice_Open_Name:
      var params = reader.decodeStruct(UsbDevice_Open_Params);
      this.open().then(function(response) {
        var responseParams =
            new UsbDevice_Open_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_Open_Name,
            codec.align(UsbDevice_Open_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_Open_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_Close_Name:
      var params = reader.decodeStruct(UsbDevice_Close_Params);
      this.close().then(function(response) {
        var responseParams =
            new UsbDevice_Close_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kUsbDevice_Close_Name,
            codec.align(UsbDevice_Close_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_Close_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_SetConfiguration_Name:
      var params = reader.decodeStruct(UsbDevice_SetConfiguration_Params);
      this.setConfiguration(params.value).then(function(response) {
        var responseParams =
            new UsbDevice_SetConfiguration_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_SetConfiguration_Name,
            codec.align(UsbDevice_SetConfiguration_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_SetConfiguration_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_ClaimInterface_Name:
      var params = reader.decodeStruct(UsbDevice_ClaimInterface_Params);
      this.claimInterface(params.interfaceNumber).then(function(response) {
        var responseParams =
            new UsbDevice_ClaimInterface_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_ClaimInterface_Name,
            codec.align(UsbDevice_ClaimInterface_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_ClaimInterface_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_ReleaseInterface_Name:
      var params = reader.decodeStruct(UsbDevice_ReleaseInterface_Params);
      this.releaseInterface(params.interfaceNumber).then(function(response) {
        var responseParams =
            new UsbDevice_ReleaseInterface_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_ReleaseInterface_Name,
            codec.align(UsbDevice_ReleaseInterface_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_ReleaseInterface_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_SetInterfaceAlternateSetting_Name:
      var params = reader.decodeStruct(UsbDevice_SetInterfaceAlternateSetting_Params);
      this.setInterfaceAlternateSetting(params.interfaceNumber, params.alternateSetting).then(function(response) {
        var responseParams =
            new UsbDevice_SetInterfaceAlternateSetting_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_SetInterfaceAlternateSetting_Name,
            codec.align(UsbDevice_SetInterfaceAlternateSetting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_SetInterfaceAlternateSetting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_Reset_Name:
      var params = reader.decodeStruct(UsbDevice_Reset_Params);
      this.reset().then(function(response) {
        var responseParams =
            new UsbDevice_Reset_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_Reset_Name,
            codec.align(UsbDevice_Reset_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_Reset_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_ClearHalt_Name:
      var params = reader.decodeStruct(UsbDevice_ClearHalt_Params);
      this.clearHalt(params.endpoint).then(function(response) {
        var responseParams =
            new UsbDevice_ClearHalt_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_ClearHalt_Name,
            codec.align(UsbDevice_ClearHalt_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_ClearHalt_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_ControlTransferIn_Name:
      var params = reader.decodeStruct(UsbDevice_ControlTransferIn_Params);
      this.controlTransferIn(params.params, params.length, params.timeout).then(function(response) {
        var responseParams =
            new UsbDevice_ControlTransferIn_ResponseParams();
        responseParams.status = response.status;
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_ControlTransferIn_Name,
            codec.align(UsbDevice_ControlTransferIn_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_ControlTransferIn_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_ControlTransferOut_Name:
      var params = reader.decodeStruct(UsbDevice_ControlTransferOut_Params);
      this.controlTransferOut(params.params, params.data, params.timeout).then(function(response) {
        var responseParams =
            new UsbDevice_ControlTransferOut_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_ControlTransferOut_Name,
            codec.align(UsbDevice_ControlTransferOut_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_ControlTransferOut_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_GenericTransferIn_Name:
      var params = reader.decodeStruct(UsbDevice_GenericTransferIn_Params);
      this.genericTransferIn(params.endpointNumber, params.length, params.timeout).then(function(response) {
        var responseParams =
            new UsbDevice_GenericTransferIn_ResponseParams();
        responseParams.status = response.status;
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_GenericTransferIn_Name,
            codec.align(UsbDevice_GenericTransferIn_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_GenericTransferIn_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_GenericTransferOut_Name:
      var params = reader.decodeStruct(UsbDevice_GenericTransferOut_Params);
      this.genericTransferOut(params.endpointNumber, params.data, params.timeout).then(function(response) {
        var responseParams =
            new UsbDevice_GenericTransferOut_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_GenericTransferOut_Name,
            codec.align(UsbDevice_GenericTransferOut_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_GenericTransferOut_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_IsochronousTransferIn_Name:
      var params = reader.decodeStruct(UsbDevice_IsochronousTransferIn_Params);
      this.isochronousTransferIn(params.endpointNumber, params.packetLengths, params.timeout).then(function(response) {
        var responseParams =
            new UsbDevice_IsochronousTransferIn_ResponseParams();
        responseParams.data = response.data;
        responseParams.packets = response.packets;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_IsochronousTransferIn_Name,
            codec.align(UsbDevice_IsochronousTransferIn_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_IsochronousTransferIn_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbDevice_IsochronousTransferOut_Name:
      var params = reader.decodeStruct(UsbDevice_IsochronousTransferOut_Params);
      this.isochronousTransferOut(params.endpointNumber, params.data, params.packetLengths, params.timeout).then(function(response) {
        var responseParams =
            new UsbDevice_IsochronousTransferOut_ResponseParams();
        responseParams.packets = response.packets;
        var builder = new codec.MessageV1Builder(
            kUsbDevice_IsochronousTransferOut_Name,
            codec.align(UsbDevice_IsochronousTransferOut_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbDevice_IsochronousTransferOut_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateUsbDeviceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUsbDevice_Open_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_Open_Params;
      break;
      case kUsbDevice_Close_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_Close_Params;
      break;
      case kUsbDevice_SetConfiguration_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_SetConfiguration_Params;
      break;
      case kUsbDevice_ClaimInterface_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_ClaimInterface_Params;
      break;
      case kUsbDevice_ReleaseInterface_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_ReleaseInterface_Params;
      break;
      case kUsbDevice_SetInterfaceAlternateSetting_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_SetInterfaceAlternateSetting_Params;
      break;
      case kUsbDevice_Reset_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_Reset_Params;
      break;
      case kUsbDevice_ClearHalt_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_ClearHalt_Params;
      break;
      case kUsbDevice_ControlTransferIn_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_ControlTransferIn_Params;
      break;
      case kUsbDevice_ControlTransferOut_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_ControlTransferOut_Params;
      break;
      case kUsbDevice_GenericTransferIn_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_GenericTransferIn_Params;
      break;
      case kUsbDevice_GenericTransferOut_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_GenericTransferOut_Params;
      break;
      case kUsbDevice_IsochronousTransferIn_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_IsochronousTransferIn_Params;
      break;
      case kUsbDevice_IsochronousTransferOut_Name:
        if (message.expectsResponse())
          paramsClass = UsbDevice_IsochronousTransferOut_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUsbDeviceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUsbDevice_Open_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_Open_ResponseParams;
        break;
      case kUsbDevice_Close_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_Close_ResponseParams;
        break;
      case kUsbDevice_SetConfiguration_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_SetConfiguration_ResponseParams;
        break;
      case kUsbDevice_ClaimInterface_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_ClaimInterface_ResponseParams;
        break;
      case kUsbDevice_ReleaseInterface_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_ReleaseInterface_ResponseParams;
        break;
      case kUsbDevice_SetInterfaceAlternateSetting_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_SetInterfaceAlternateSetting_ResponseParams;
        break;
      case kUsbDevice_Reset_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_Reset_ResponseParams;
        break;
      case kUsbDevice_ClearHalt_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_ClearHalt_ResponseParams;
        break;
      case kUsbDevice_ControlTransferIn_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_ControlTransferIn_ResponseParams;
        break;
      case kUsbDevice_ControlTransferOut_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_ControlTransferOut_ResponseParams;
        break;
      case kUsbDevice_GenericTransferIn_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_GenericTransferIn_ResponseParams;
        break;
      case kUsbDevice_GenericTransferOut_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_GenericTransferOut_ResponseParams;
        break;
      case kUsbDevice_IsochronousTransferIn_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_IsochronousTransferIn_ResponseParams;
        break;
      case kUsbDevice_IsochronousTransferOut_Name:
        if (message.isResponse())
          paramsClass = UsbDevice_IsochronousTransferOut_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var UsbDevice = {
    name: 'device.mojom.UsbDevice',
    kVersion: 0,
    ptrClass: UsbDevicePtr,
    proxyClass: UsbDeviceProxy,
    stubClass: UsbDeviceStub,
    validateRequest: validateUsbDeviceRequest,
    validateResponse: validateUsbDeviceResponse,
    mojomId: 'device/usb/public/mojom/device.mojom',
    fuzzMethods: {
      open: {
        params: UsbDevice_Open_Params,
      },
      close: {
        params: UsbDevice_Close_Params,
      },
      setConfiguration: {
        params: UsbDevice_SetConfiguration_Params,
      },
      claimInterface: {
        params: UsbDevice_ClaimInterface_Params,
      },
      releaseInterface: {
        params: UsbDevice_ReleaseInterface_Params,
      },
      setInterfaceAlternateSetting: {
        params: UsbDevice_SetInterfaceAlternateSetting_Params,
      },
      reset: {
        params: UsbDevice_Reset_Params,
      },
      clearHalt: {
        params: UsbDevice_ClearHalt_Params,
      },
      controlTransferIn: {
        params: UsbDevice_ControlTransferIn_Params,
      },
      controlTransferOut: {
        params: UsbDevice_ControlTransferOut_Params,
      },
      genericTransferIn: {
        params: UsbDevice_GenericTransferIn_Params,
      },
      genericTransferOut: {
        params: UsbDevice_GenericTransferOut_Params,
      },
      isochronousTransferIn: {
        params: UsbDevice_IsochronousTransferIn_Params,
      },
      isochronousTransferOut: {
        params: UsbDevice_IsochronousTransferOut_Params,
      },
    },
  };
  UsbDeviceStub.prototype.validator = validateUsbDeviceRequest;
  UsbDeviceProxy.prototype.validator = validateUsbDeviceResponse;
  exports.UsbOpenDeviceError = UsbOpenDeviceError;
  exports.UsbTransferDirection = UsbTransferDirection;
  exports.UsbControlTransferType = UsbControlTransferType;
  exports.UsbControlTransferRecipient = UsbControlTransferRecipient;
  exports.UsbTransferType = UsbTransferType;
  exports.UsbTransferStatus = UsbTransferStatus;
  exports.UsbEndpointInfo = UsbEndpointInfo;
  exports.UsbAlternateInterfaceInfo = UsbAlternateInterfaceInfo;
  exports.UsbInterfaceInfo = UsbInterfaceInfo;
  exports.UsbConfigurationInfo = UsbConfigurationInfo;
  exports.UsbDeviceInfo = UsbDeviceInfo;
  exports.UsbControlTransferParams = UsbControlTransferParams;
  exports.UsbIsochronousPacket = UsbIsochronousPacket;
  exports.UsbDevice = UsbDevice;
  exports.UsbDevicePtr = UsbDevicePtr;
  exports.UsbDeviceAssociatedPtr = UsbDeviceAssociatedPtr;
})();