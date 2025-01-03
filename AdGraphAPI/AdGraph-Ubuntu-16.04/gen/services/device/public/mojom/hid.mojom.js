// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/hid.mojom';
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


  var kPageUndefined = 0x00;
  var kPageGenericDesktop = 0x01;
  var kPageSimulation = 0x02;
  var kPageVirtualReality = 0x03;
  var kPageSport = 0x04;
  var kPageGame = 0x05;
  var kPageKeyboard = 0x07;
  var kPageLed = 0x08;
  var kPageButton = 0x09;
  var kPageOrdinal = 0x0A;
  var kPageTelephony = 0x0B;
  var kPageConsumer = 0x0C;
  var kPageDigitizer = 0x0D;
  var kPagePidPage = 0x0F;
  var kPageUnicode = 0x10;
  var kPageAlphanumericDisplay = 0x14;
  var kPageMedicalInstruments = 0x40;
  var kPageMonitor0 = 0x80;
  var kPageMonitor1 = 0x81;
  var kPageMonitor2 = 0x82;
  var kPageMonitor3 = 0x83;
  var kPagePower0 = 0x84;
  var kPagePower1 = 0x85;
  var kPagePower2 = 0x86;
  var kPagePower3 = 0x87;
  var kPageBarCodeScanner = 0x8C;
  var kPageScale = 0x8D;
  var kPageMagneticStripeReader = 0x8E;
  var kPageReservedPointOfSale = 0x8F;
  var kPageCameraControl = 0x90;
  var kPageArcade = 0x91;
  var kPageVendor = 0xFF00;
  var kPageMediaCenter = 0xFFBC;
  var kGenericDesktopUndefined = 0x00;
  var kGenericDesktopPointer = 0x01;
  var kGenericDesktopMouse = 0x02;
  var kGenericDesktopJoystick = 0x04;
  var kGenericDesktopGamePad = 0x05;
  var kGenericDesktopKeyboard = 0x06;
  var kGenericDesktopKeypad = 0x07;
  var kGenericDesktopMultiAxisController = 0x08;
  var kGenericDesktopX = 0x30;
  var kGenericDesktopY = 0x31;
  var kGenericDesktopZ = 0x32;
  var kGenericDesktopRx = 0x33;
  var kGenericDesktopRy = 0x34;
  var kGenericDesktopRz = 0x35;
  var kGenericDesktopSlider = 0x36;
  var kGenericDesktopDial = 0x37;
  var kGenericDesktopWheel = 0x38;
  var kGenericDesktopHatSwitch = 0x39;
  var kGenericDesktopCountedBuffer = 0x3a;
  var kGenericDesktopByteCount = 0x3b;
  var kGenericDesktopMotionWakeup = 0x3c;
  var kGenericDesktopStart = 0x3d;
  var kGenericDesktopSelect = 0x3e;
  var kGenericDesktopVx = 0x40;
  var kGenericDesktopVy = 0x41;
  var kGenericDesktopVz = 0x42;
  var kGenericDesktopVbrx = 0x43;
  var kGenericDesktopVbry = 0x44;
  var kGenericDesktopVbrz = 0x45;
  var kGenericDesktopVno = 0x46;
  var kGenericDesktopSystemControl = 0x80;
  var kGenericDesktopSystemPowerDown = 0x81;
  var kGenericDesktopSystemSleep = 0x82;
  var kGenericDesktopSystemWakeUp = 0x83;
  var kGenericDesktopSystemContextMenu = 0x84;
  var kGenericDesktopSystemMainMenu = 0x85;
  var kGenericDesktopSystemAppMenu = 0x86;
  var kGenericDesktopSystemMenuHelp = 0x87;
  var kGenericDesktopSystemMenuExit = 0x88;
  var kGenericDesktopSystemMenuSelect = 0x89;
  var kGenericDesktopSystemMenuRight = 0x8a;
  var kGenericDesktopSystemMenuLeft = 0x8b;
  var kGenericDesktopSystemMenuUp = 0x8c;
  var kGenericDesktopSystemMenuDown = 0x8d;
  var kGenericDesktopSystemColdRestart = 0x8e;
  var kGenericDesktopSystemWarmRestart = 0x8f;
  var kGenericDesktopDPadUp = 0x90;
  var kGenericDesktopDPadDown = 0x91;
  var kGenericDesktopDPadLeft = 0x92;
  var kGenericDesktopDPadRight = 0x93;
  var kGenericDesktopSystemDock = 0xa0;
  var kGenericDesktopSystemUndock = 0xa1;
  var kGenericDesktopSystemSetup = 0xa2;
  var kGenericDesktopSystemBreak = 0xa3;
  var kGenericDesktopSystemDebuggerBreak = 0xa4;
  var kGenericDesktopApplicationBreak = 0xa5;
  var kGenericDesktopApplicationDebuggerBreak = 0xa6;
  var kGenericDesktopSystemSpeakerMute = 0xa7;
  var kGenericDesktopSystemHibernate = 0xa8;
  var kGenericDesktopSystemDisplayInvert = 0xb0;
  var kGenericDesktopSystemDisplayInternal = 0xb1;
  var kGenericDesktopSystemDisplayExternal = 0xb2;
  var kGenericDesktopSystemDisplayBoth = 0xb3;
  var kGenericDesktopSystemDisplayDual = 0xb4;
  var kGenericDesktopSystemDisplayToggle = 0xb5;
  var kGenericDesktopSystemDisplaySwap = 0xb6;
  var HidBusType = {};
  HidBusType.kHIDBusTypeUSB = 0;
  HidBusType.kHIDBusTypeBluetooth = 1;

  HidBusType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  HidBusType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function HidUsageAndPage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidUsageAndPage.prototype.initDefaults_ = function() {
    this.usage = 0;
    this.usagePage = 0;
  };
  HidUsageAndPage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidUsageAndPage.generate = function(generator_) {
    var generated = new HidUsageAndPage;
    generated.usage = generator_.generateUint16();
    generated.usagePage = generator_.generateUint16();
    return generated;
  };

  HidUsageAndPage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.usage = mutator_.mutateUint16(this.usage);
    }
    if (mutator_.chooseMutateField()) {
      this.usagePage = mutator_.mutateUint16(this.usagePage);
    }
    return this;
  };
  HidUsageAndPage.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidUsageAndPage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidUsageAndPage.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidUsageAndPage.validate = function(messageValidator, offset) {
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

  HidUsageAndPage.encodedSize = codec.kStructHeaderSize + 8;

  HidUsageAndPage.decode = function(decoder) {
    var packed;
    var val = new HidUsageAndPage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.usage = decoder.decodeStruct(codec.Uint16);
    val.usagePage = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  HidUsageAndPage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidUsageAndPage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.usage);
    encoder.encodeStruct(codec.Uint16, val.usagePage);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function HidCollectionInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidCollectionInfo.prototype.initDefaults_ = function() {
    this.usage = null;
    this.reportIds = null;
  };
  HidCollectionInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidCollectionInfo.generate = function(generator_) {
    var generated = new HidCollectionInfo;
    generated.usage = generator_.generateStruct(device.mojom.HidUsageAndPage, false);
    generated.reportIds = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    return generated;
  };

  HidCollectionInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.usage = mutator_.mutateStruct(device.mojom.HidUsageAndPage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.reportIds = mutator_.mutateArray(this.reportIds, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    return this;
  };
  HidCollectionInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidCollectionInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidCollectionInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidCollectionInfo.validate = function(messageValidator, offset) {
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


    // validate HidCollectionInfo.usage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, HidUsageAndPage, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HidCollectionInfo.reportIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidCollectionInfo.encodedSize = codec.kStructHeaderSize + 16;

  HidCollectionInfo.decode = function(decoder) {
    var packed;
    var val = new HidCollectionInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.usage = decoder.decodeStructPointer(HidUsageAndPage);
    val.reportIds = decoder.decodeArrayPointer(codec.Int32);
    return val;
  };

  HidCollectionInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidCollectionInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(HidUsageAndPage, val.usage);
    encoder.encodeArrayPointer(codec.Int32, val.reportIds);
  };
  function HidDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidDeviceInfo.prototype.initDefaults_ = function() {
    this.guid = null;
    this.vendorId = 0;
    this.productId = 0;
    this.busType = 0;
    this.productName = null;
    this.serialNumber = null;
    this.reportDescriptor = null;
    this.collections = null;
    this.hasReportId = false;
    this.maxInputReportSize = 0;
    this.maxOutputReportSize = 0;
    this.maxFeatureReportSize = 0;
    this.deviceNode = null;
  };
  HidDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidDeviceInfo.generate = function(generator_) {
    var generated = new HidDeviceInfo;
    generated.guid = generator_.generateString(false);
    generated.vendorId = generator_.generateUint16();
    generated.productId = generator_.generateUint16();
    generated.productName = generator_.generateString(false);
    generated.serialNumber = generator_.generateString(false);
    generated.busType = generator_.generateEnum(0, 1);
    generated.reportDescriptor = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.collections = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.HidCollectionInfo, false);
    });
    generated.hasReportId = generator_.generateBool();
    generated.maxInputReportSize = generator_.generateUint64();
    generated.maxOutputReportSize = generator_.generateUint64();
    generated.maxFeatureReportSize = generator_.generateUint64();
    generated.deviceNode = generator_.generateString(false);
    return generated;
  };

  HidDeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.guid = mutator_.mutateString(this.guid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.vendorId = mutator_.mutateUint16(this.vendorId);
    }
    if (mutator_.chooseMutateField()) {
      this.productId = mutator_.mutateUint16(this.productId);
    }
    if (mutator_.chooseMutateField()) {
      this.productName = mutator_.mutateString(this.productName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.serialNumber = mutator_.mutateString(this.serialNumber, false);
    }
    if (mutator_.chooseMutateField()) {
      this.busType = mutator_.mutateEnum(this.busType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.reportDescriptor = mutator_.mutateArray(this.reportDescriptor, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.collections = mutator_.mutateArray(this.collections, function(val) {
        return mutator_.mutateStruct(device.mojom.HidCollectionInfo, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.hasReportId = mutator_.mutateBool(this.hasReportId);
    }
    if (mutator_.chooseMutateField()) {
      this.maxInputReportSize = mutator_.mutateUint64(this.maxInputReportSize);
    }
    if (mutator_.chooseMutateField()) {
      this.maxOutputReportSize = mutator_.mutateUint64(this.maxOutputReportSize);
    }
    if (mutator_.chooseMutateField()) {
      this.maxFeatureReportSize = mutator_.mutateUint64(this.maxFeatureReportSize);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceNode = mutator_.mutateString(this.deviceNode, false);
    }
    return this;
  };
  HidDeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidDeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidDeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidDeviceInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 96}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HidDeviceInfo.guid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate HidDeviceInfo.productName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate HidDeviceInfo.serialNumber
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate HidDeviceInfo.busType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, HidBusType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HidDeviceInfo.reportDescriptor
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HidDeviceInfo.collections
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(HidCollectionInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;






    // validate HidDeviceInfo.deviceNode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidDeviceInfo.encodedSize = codec.kStructHeaderSize + 88;

  HidDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new HidDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.guid = decoder.decodeStruct(codec.String);
    val.vendorId = decoder.decodeStruct(codec.Uint16);
    val.productId = decoder.decodeStruct(codec.Uint16);
    val.busType = decoder.decodeStruct(codec.Int32);
    val.productName = decoder.decodeStruct(codec.String);
    val.serialNumber = decoder.decodeStruct(codec.String);
    val.reportDescriptor = decoder.decodeArrayPointer(codec.Uint8);
    val.collections = decoder.decodeArrayPointer(new codec.PointerTo(HidCollectionInfo));
    packed = decoder.readUint8();
    val.hasReportId = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxInputReportSize = decoder.decodeStruct(codec.Uint64);
    val.maxOutputReportSize = decoder.decodeStruct(codec.Uint64);
    val.maxFeatureReportSize = decoder.decodeStruct(codec.Uint64);
    val.deviceNode = decoder.decodeStruct(codec.String);
    return val;
  };

  HidDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.guid);
    encoder.encodeStruct(codec.Uint16, val.vendorId);
    encoder.encodeStruct(codec.Uint16, val.productId);
    encoder.encodeStruct(codec.Int32, val.busType);
    encoder.encodeStruct(codec.String, val.productName);
    encoder.encodeStruct(codec.String, val.serialNumber);
    encoder.encodeArrayPointer(codec.Uint8, val.reportDescriptor);
    encoder.encodeArrayPointer(new codec.PointerTo(HidCollectionInfo), val.collections);
    packed = 0;
    packed |= (val.hasReportId & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.maxInputReportSize);
    encoder.encodeStruct(codec.Uint64, val.maxOutputReportSize);
    encoder.encodeStruct(codec.Uint64, val.maxFeatureReportSize);
    encoder.encodeStruct(codec.String, val.deviceNode);
  };
  function HidManagerClient_DeviceAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManagerClient_DeviceAdded_Params.prototype.initDefaults_ = function() {
    this.deviceInfo = null;
  };
  HidManagerClient_DeviceAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManagerClient_DeviceAdded_Params.generate = function(generator_) {
    var generated = new HidManagerClient_DeviceAdded_Params;
    generated.deviceInfo = generator_.generateStruct(device.mojom.HidDeviceInfo, false);
    return generated;
  };

  HidManagerClient_DeviceAdded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceInfo = mutator_.mutateStruct(device.mojom.HidDeviceInfo, false);
    }
    return this;
  };
  HidManagerClient_DeviceAdded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidManagerClient_DeviceAdded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManagerClient_DeviceAdded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidManagerClient_DeviceAdded_Params.validate = function(messageValidator, offset) {
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


    // validate HidManagerClient_DeviceAdded_Params.deviceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, HidDeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidManagerClient_DeviceAdded_Params.encodedSize = codec.kStructHeaderSize + 8;

  HidManagerClient_DeviceAdded_Params.decode = function(decoder) {
    var packed;
    var val = new HidManagerClient_DeviceAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceInfo = decoder.decodeStructPointer(HidDeviceInfo);
    return val;
  };

  HidManagerClient_DeviceAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManagerClient_DeviceAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(HidDeviceInfo, val.deviceInfo);
  };
  function HidManagerClient_DeviceRemoved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManagerClient_DeviceRemoved_Params.prototype.initDefaults_ = function() {
    this.deviceInfo = null;
  };
  HidManagerClient_DeviceRemoved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManagerClient_DeviceRemoved_Params.generate = function(generator_) {
    var generated = new HidManagerClient_DeviceRemoved_Params;
    generated.deviceInfo = generator_.generateStruct(device.mojom.HidDeviceInfo, false);
    return generated;
  };

  HidManagerClient_DeviceRemoved_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceInfo = mutator_.mutateStruct(device.mojom.HidDeviceInfo, false);
    }
    return this;
  };
  HidManagerClient_DeviceRemoved_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidManagerClient_DeviceRemoved_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManagerClient_DeviceRemoved_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidManagerClient_DeviceRemoved_Params.validate = function(messageValidator, offset) {
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


    // validate HidManagerClient_DeviceRemoved_Params.deviceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, HidDeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidManagerClient_DeviceRemoved_Params.encodedSize = codec.kStructHeaderSize + 8;

  HidManagerClient_DeviceRemoved_Params.decode = function(decoder) {
    var packed;
    var val = new HidManagerClient_DeviceRemoved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceInfo = decoder.decodeStructPointer(HidDeviceInfo);
    return val;
  };

  HidManagerClient_DeviceRemoved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManagerClient_DeviceRemoved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(HidDeviceInfo, val.deviceInfo);
  };
  function HidManager_GetDevicesAndSetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManager_GetDevicesAndSetClient_Params.prototype.initDefaults_ = function() {
    this.client = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  HidManager_GetDevicesAndSetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManager_GetDevicesAndSetClient_Params.generate = function(generator_) {
    var generated = new HidManager_GetDevicesAndSetClient_Params;
    generated.client = generator_.generateAssociatedInterface("device.mojom.HidManagerClient", false);
    return generated;
  };

  HidManager_GetDevicesAndSetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateAssociatedInterface(this.client, "device.mojom.HidManagerClient", false);
    }
    return this;
  };
  HidManager_GetDevicesAndSetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.HidManagerClientAssociatedPtr"]);
    }
    return handles;
  };

  HidManager_GetDevicesAndSetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManager_GetDevicesAndSetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  HidManager_GetDevicesAndSetClient_Params.validate = function(messageValidator, offset) {
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


    // validate HidManager_GetDevicesAndSetClient_Params.client
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidManager_GetDevicesAndSetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  HidManager_GetDevicesAndSetClient_Params.decode = function(decoder) {
    var packed;
    var val = new HidManager_GetDevicesAndSetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  HidManager_GetDevicesAndSetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManager_GetDevicesAndSetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.client);
  };
  function HidManager_GetDevicesAndSetClient_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManager_GetDevicesAndSetClient_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  HidManager_GetDevicesAndSetClient_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManager_GetDevicesAndSetClient_ResponseParams.generate = function(generator_) {
    var generated = new HidManager_GetDevicesAndSetClient_ResponseParams;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.HidDeviceInfo, false);
    });
    return generated;
  };

  HidManager_GetDevicesAndSetClient_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(device.mojom.HidDeviceInfo, false);
      });
    }
    return this;
  };
  HidManager_GetDevicesAndSetClient_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidManager_GetDevicesAndSetClient_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManager_GetDevicesAndSetClient_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidManager_GetDevicesAndSetClient_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate HidManager_GetDevicesAndSetClient_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(HidDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidManager_GetDevicesAndSetClient_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HidManager_GetDevicesAndSetClient_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HidManager_GetDevicesAndSetClient_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(HidDeviceInfo));
    return val;
  };

  HidManager_GetDevicesAndSetClient_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManager_GetDevicesAndSetClient_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(HidDeviceInfo), val.devices);
  };
  function HidManager_GetDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManager_GetDevices_Params.prototype.initDefaults_ = function() {
  };
  HidManager_GetDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManager_GetDevices_Params.generate = function(generator_) {
    var generated = new HidManager_GetDevices_Params;
    return generated;
  };

  HidManager_GetDevices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  HidManager_GetDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidManager_GetDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManager_GetDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidManager_GetDevices_Params.validate = function(messageValidator, offset) {
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

  HidManager_GetDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  HidManager_GetDevices_Params.decode = function(decoder) {
    var packed;
    var val = new HidManager_GetDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  HidManager_GetDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManager_GetDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function HidManager_GetDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManager_GetDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  HidManager_GetDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManager_GetDevices_ResponseParams.generate = function(generator_) {
    var generated = new HidManager_GetDevices_ResponseParams;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.HidDeviceInfo, false);
    });
    return generated;
  };

  HidManager_GetDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(device.mojom.HidDeviceInfo, false);
      });
    }
    return this;
  };
  HidManager_GetDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidManager_GetDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManager_GetDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidManager_GetDevices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate HidManager_GetDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(HidDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidManager_GetDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HidManager_GetDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HidManager_GetDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(HidDeviceInfo));
    return val;
  };

  HidManager_GetDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManager_GetDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(HidDeviceInfo), val.devices);
  };
  function HidManager_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManager_Connect_Params.prototype.initDefaults_ = function() {
    this.deviceGuid = null;
  };
  HidManager_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManager_Connect_Params.generate = function(generator_) {
    var generated = new HidManager_Connect_Params;
    generated.deviceGuid = generator_.generateString(false);
    return generated;
  };

  HidManager_Connect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceGuid = mutator_.mutateString(this.deviceGuid, false);
    }
    return this;
  };
  HidManager_Connect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidManager_Connect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManager_Connect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidManager_Connect_Params.validate = function(messageValidator, offset) {
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


    // validate HidManager_Connect_Params.deviceGuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidManager_Connect_Params.encodedSize = codec.kStructHeaderSize + 8;

  HidManager_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new HidManager_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceGuid = decoder.decodeStruct(codec.String);
    return val;
  };

  HidManager_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManager_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceGuid);
  };
  function HidManager_Connect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidManager_Connect_ResponseParams.prototype.initDefaults_ = function() {
    this.connection = new HidConnectionPtr();
  };
  HidManager_Connect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidManager_Connect_ResponseParams.generate = function(generator_) {
    var generated = new HidManager_Connect_ResponseParams;
    generated.connection = generator_.generateInterface("device.mojom.HidConnection", true);
    return generated;
  };

  HidManager_Connect_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.connection = mutator_.mutateInterface(this.connection, "device.mojom.HidConnection", true);
    }
    return this;
  };
  HidManager_Connect_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.connection !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.HidConnectionPtr"]);
    }
    return handles;
  };

  HidManager_Connect_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidManager_Connect_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.connection = handles[idx++];;
    return idx;
  };

  HidManager_Connect_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate HidManager_Connect_ResponseParams.connection
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidManager_Connect_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HidManager_Connect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HidManager_Connect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connection = decoder.decodeStruct(new codec.NullableInterface(HidConnectionPtr));
    return val;
  };

  HidManager_Connect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidManager_Connect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.NullableInterface(HidConnectionPtr), val.connection);
  };
  function HidConnection_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_Read_Params.prototype.initDefaults_ = function() {
  };
  HidConnection_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_Read_Params.generate = function(generator_) {
    var generated = new HidConnection_Read_Params;
    return generated;
  };

  HidConnection_Read_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  HidConnection_Read_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_Read_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_Read_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_Read_Params.validate = function(messageValidator, offset) {
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

  HidConnection_Read_Params.encodedSize = codec.kStructHeaderSize + 0;

  HidConnection_Read_Params.decode = function(decoder) {
    var packed;
    var val = new HidConnection_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  HidConnection_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_Read_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function HidConnection_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.reportId = 0;
    this.buffer = null;
  };
  HidConnection_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_Read_ResponseParams.generate = function(generator_) {
    var generated = new HidConnection_Read_ResponseParams;
    generated.success = generator_.generateBool();
    generated.reportId = generator_.generateUint8();
    generated.buffer = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  HidConnection_Read_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.reportId = mutator_.mutateUint8(this.reportId);
    }
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateArray(this.buffer, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  HidConnection_Read_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_Read_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_Read_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_Read_ResponseParams.validate = function(messageValidator, offset) {
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




    // validate HidConnection_Read_ResponseParams.buffer
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidConnection_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  HidConnection_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HidConnection_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    val.reportId = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.buffer = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  HidConnection_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.encodeStruct(codec.Uint8, val.reportId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.buffer);
  };
  function HidConnection_Write_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_Write_Params.prototype.initDefaults_ = function() {
    this.reportId = 0;
    this.buffer = null;
  };
  HidConnection_Write_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_Write_Params.generate = function(generator_) {
    var generated = new HidConnection_Write_Params;
    generated.reportId = generator_.generateUint8();
    generated.buffer = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  HidConnection_Write_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reportId = mutator_.mutateUint8(this.reportId);
    }
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateArray(this.buffer, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  HidConnection_Write_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_Write_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_Write_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_Write_Params.validate = function(messageValidator, offset) {
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



    // validate HidConnection_Write_Params.buffer
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidConnection_Write_Params.encodedSize = codec.kStructHeaderSize + 16;

  HidConnection_Write_Params.decode = function(decoder) {
    var packed;
    var val = new HidConnection_Write_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reportId = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.buffer = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  HidConnection_Write_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_Write_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.reportId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.buffer);
  };
  function HidConnection_Write_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_Write_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  HidConnection_Write_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_Write_ResponseParams.generate = function(generator_) {
    var generated = new HidConnection_Write_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  HidConnection_Write_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  HidConnection_Write_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_Write_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_Write_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_Write_ResponseParams.validate = function(messageValidator, offset) {
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

  HidConnection_Write_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HidConnection_Write_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HidConnection_Write_ResponseParams();
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

  HidConnection_Write_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_Write_ResponseParams.encodedSize);
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
  function HidConnection_GetFeatureReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_GetFeatureReport_Params.prototype.initDefaults_ = function() {
    this.reportId = 0;
  };
  HidConnection_GetFeatureReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_GetFeatureReport_Params.generate = function(generator_) {
    var generated = new HidConnection_GetFeatureReport_Params;
    generated.reportId = generator_.generateUint8();
    return generated;
  };

  HidConnection_GetFeatureReport_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reportId = mutator_.mutateUint8(this.reportId);
    }
    return this;
  };
  HidConnection_GetFeatureReport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_GetFeatureReport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_GetFeatureReport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_GetFeatureReport_Params.validate = function(messageValidator, offset) {
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

  HidConnection_GetFeatureReport_Params.encodedSize = codec.kStructHeaderSize + 8;

  HidConnection_GetFeatureReport_Params.decode = function(decoder) {
    var packed;
    var val = new HidConnection_GetFeatureReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reportId = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  HidConnection_GetFeatureReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_GetFeatureReport_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.reportId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function HidConnection_GetFeatureReport_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_GetFeatureReport_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.buffer = null;
  };
  HidConnection_GetFeatureReport_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_GetFeatureReport_ResponseParams.generate = function(generator_) {
    var generated = new HidConnection_GetFeatureReport_ResponseParams;
    generated.success = generator_.generateBool();
    generated.buffer = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  HidConnection_GetFeatureReport_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateArray(this.buffer, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  HidConnection_GetFeatureReport_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_GetFeatureReport_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_GetFeatureReport_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_GetFeatureReport_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate HidConnection_GetFeatureReport_ResponseParams.buffer
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidConnection_GetFeatureReport_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  HidConnection_GetFeatureReport_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HidConnection_GetFeatureReport_ResponseParams();
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
    val.buffer = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  HidConnection_GetFeatureReport_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_GetFeatureReport_ResponseParams.encodedSize);
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
    encoder.encodeArrayPointer(codec.Uint8, val.buffer);
  };
  function HidConnection_SendFeatureReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_SendFeatureReport_Params.prototype.initDefaults_ = function() {
    this.reportId = 0;
    this.buffer = null;
  };
  HidConnection_SendFeatureReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_SendFeatureReport_Params.generate = function(generator_) {
    var generated = new HidConnection_SendFeatureReport_Params;
    generated.reportId = generator_.generateUint8();
    generated.buffer = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  HidConnection_SendFeatureReport_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reportId = mutator_.mutateUint8(this.reportId);
    }
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateArray(this.buffer, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  HidConnection_SendFeatureReport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_SendFeatureReport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_SendFeatureReport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_SendFeatureReport_Params.validate = function(messageValidator, offset) {
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



    // validate HidConnection_SendFeatureReport_Params.buffer
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HidConnection_SendFeatureReport_Params.encodedSize = codec.kStructHeaderSize + 16;

  HidConnection_SendFeatureReport_Params.decode = function(decoder) {
    var packed;
    var val = new HidConnection_SendFeatureReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reportId = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.buffer = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  HidConnection_SendFeatureReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_SendFeatureReport_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.reportId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.buffer);
  };
  function HidConnection_SendFeatureReport_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HidConnection_SendFeatureReport_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  HidConnection_SendFeatureReport_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HidConnection_SendFeatureReport_ResponseParams.generate = function(generator_) {
    var generated = new HidConnection_SendFeatureReport_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  HidConnection_SendFeatureReport_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  HidConnection_SendFeatureReport_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HidConnection_SendFeatureReport_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HidConnection_SendFeatureReport_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HidConnection_SendFeatureReport_ResponseParams.validate = function(messageValidator, offset) {
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

  HidConnection_SendFeatureReport_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HidConnection_SendFeatureReport_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HidConnection_SendFeatureReport_ResponseParams();
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

  HidConnection_SendFeatureReport_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HidConnection_SendFeatureReport_ResponseParams.encodedSize);
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
  var kHidManagerClient_DeviceAdded_Name = 1928862291;
  var kHidManagerClient_DeviceRemoved_Name = 746581233;

  function HidManagerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HidManagerClient,
                                                   handleOrPtrInfo);
  }

  function HidManagerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HidManagerClient, associatedInterfacePtrInfo);
  }

  HidManagerClientAssociatedPtr.prototype =
      Object.create(HidManagerClientPtr.prototype);
  HidManagerClientAssociatedPtr.prototype.constructor =
      HidManagerClientAssociatedPtr;

  function HidManagerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  HidManagerClientPtr.prototype.deviceAdded = function() {
    return HidManagerClientProxy.prototype.deviceAdded
        .apply(this.ptr.getProxy(), arguments);
  };

  HidManagerClientProxy.prototype.deviceAdded = function(deviceInfo) {
    var params_ = new HidManagerClient_DeviceAdded_Params();
    params_.deviceInfo = deviceInfo;
    var builder = new codec.MessageV0Builder(
        kHidManagerClient_DeviceAdded_Name,
        codec.align(HidManagerClient_DeviceAdded_Params.encodedSize));
    builder.encodeStruct(HidManagerClient_DeviceAdded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  HidManagerClientPtr.prototype.deviceRemoved = function() {
    return HidManagerClientProxy.prototype.deviceRemoved
        .apply(this.ptr.getProxy(), arguments);
  };

  HidManagerClientProxy.prototype.deviceRemoved = function(deviceInfo) {
    var params_ = new HidManagerClient_DeviceRemoved_Params();
    params_.deviceInfo = deviceInfo;
    var builder = new codec.MessageV0Builder(
        kHidManagerClient_DeviceRemoved_Name,
        codec.align(HidManagerClient_DeviceRemoved_Params.encodedSize));
    builder.encodeStruct(HidManagerClient_DeviceRemoved_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function HidManagerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  HidManagerClientStub.prototype.deviceAdded = function(deviceInfo) {
    return this.delegate_ && this.delegate_.deviceAdded && this.delegate_.deviceAdded(deviceInfo);
  }
  HidManagerClientStub.prototype.deviceRemoved = function(deviceInfo) {
    return this.delegate_ && this.delegate_.deviceRemoved && this.delegate_.deviceRemoved(deviceInfo);
  }

  HidManagerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHidManagerClient_DeviceAdded_Name:
      var params = reader.decodeStruct(HidManagerClient_DeviceAdded_Params);
      this.deviceAdded(params.deviceInfo);
      return true;
    case kHidManagerClient_DeviceRemoved_Name:
      var params = reader.decodeStruct(HidManagerClient_DeviceRemoved_Params);
      this.deviceRemoved(params.deviceInfo);
      return true;
    default:
      return false;
    }
  };

  HidManagerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateHidManagerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHidManagerClient_DeviceAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = HidManagerClient_DeviceAdded_Params;
      break;
      case kHidManagerClient_DeviceRemoved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = HidManagerClient_DeviceRemoved_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHidManagerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var HidManagerClient = {
    name: 'device.mojom.HidManagerClient',
    kVersion: 0,
    ptrClass: HidManagerClientPtr,
    proxyClass: HidManagerClientProxy,
    stubClass: HidManagerClientStub,
    validateRequest: validateHidManagerClientRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/hid.mojom',
    fuzzMethods: {
      deviceAdded: {
        params: HidManagerClient_DeviceAdded_Params,
      },
      deviceRemoved: {
        params: HidManagerClient_DeviceRemoved_Params,
      },
    },
  };
  HidManagerClientStub.prototype.validator = validateHidManagerClientRequest;
  HidManagerClientProxy.prototype.validator = null;
  var kHidManager_GetDevicesAndSetClient_Name = 1277197721;
  var kHidManager_GetDevices_Name = 1801430960;
  var kHidManager_Connect_Name = 222010320;

  function HidManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HidManager,
                                                   handleOrPtrInfo);
  }

  function HidManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HidManager, associatedInterfacePtrInfo);
  }

  HidManagerAssociatedPtr.prototype =
      Object.create(HidManagerPtr.prototype);
  HidManagerAssociatedPtr.prototype.constructor =
      HidManagerAssociatedPtr;

  function HidManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  HidManagerPtr.prototype.getDevicesAndSetClient = function() {
    return HidManagerProxy.prototype.getDevicesAndSetClient
        .apply(this.ptr.getProxy(), arguments);
  };

  HidManagerProxy.prototype.getDevicesAndSetClient = function(client) {
    var params_ = new HidManager_GetDevicesAndSetClient_Params();
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kHidManager_GetDevicesAndSetClient_Name,
          codec.align(HidManager_GetDevicesAndSetClient_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(HidManager_GetDevicesAndSetClient_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HidManager_GetDevicesAndSetClient_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HidManagerPtr.prototype.getDevices = function() {
    return HidManagerProxy.prototype.getDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  HidManagerProxy.prototype.getDevices = function() {
    var params_ = new HidManager_GetDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHidManager_GetDevices_Name,
          codec.align(HidManager_GetDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HidManager_GetDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HidManager_GetDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HidManagerPtr.prototype.connect = function() {
    return HidManagerProxy.prototype.connect
        .apply(this.ptr.getProxy(), arguments);
  };

  HidManagerProxy.prototype.connect = function(deviceGuid) {
    var params_ = new HidManager_Connect_Params();
    params_.deviceGuid = deviceGuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHidManager_Connect_Name,
          codec.align(HidManager_Connect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HidManager_Connect_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HidManager_Connect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HidManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  HidManagerStub.prototype.getDevicesAndSetClient = function(client) {
    return this.delegate_ && this.delegate_.getDevicesAndSetClient && this.delegate_.getDevicesAndSetClient(client);
  }
  HidManagerStub.prototype.getDevices = function() {
    return this.delegate_ && this.delegate_.getDevices && this.delegate_.getDevices();
  }
  HidManagerStub.prototype.connect = function(deviceGuid) {
    return this.delegate_ && this.delegate_.connect && this.delegate_.connect(deviceGuid);
  }

  HidManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HidManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHidManager_GetDevicesAndSetClient_Name:
      var params = reader.decodeStruct(HidManager_GetDevicesAndSetClient_Params);
      this.getDevicesAndSetClient(params.client).then(function(response) {
        var responseParams =
            new HidManager_GetDevicesAndSetClient_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageV2Builder(
            kHidManager_GetDevicesAndSetClient_Name,
            codec.align(HidManager_GetDevicesAndSetClient_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(HidManager_GetDevicesAndSetClient_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kHidManager_GetDevices_Name:
      var params = reader.decodeStruct(HidManager_GetDevices_Params);
      this.getDevices().then(function(response) {
        var responseParams =
            new HidManager_GetDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageV1Builder(
            kHidManager_GetDevices_Name,
            codec.align(HidManager_GetDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HidManager_GetDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kHidManager_Connect_Name:
      var params = reader.decodeStruct(HidManager_Connect_Params);
      this.connect(params.deviceGuid).then(function(response) {
        var responseParams =
            new HidManager_Connect_ResponseParams();
        responseParams.connection = response.connection;
        var builder = new codec.MessageV1Builder(
            kHidManager_Connect_Name,
            codec.align(HidManager_Connect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HidManager_Connect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateHidManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHidManager_GetDevicesAndSetClient_Name:
        if (message.expectsResponse())
          paramsClass = HidManager_GetDevicesAndSetClient_Params;
      break;
      case kHidManager_GetDevices_Name:
        if (message.expectsResponse())
          paramsClass = HidManager_GetDevices_Params;
      break;
      case kHidManager_Connect_Name:
        if (message.expectsResponse())
          paramsClass = HidManager_Connect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHidManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHidManager_GetDevicesAndSetClient_Name:
        if (message.isResponse())
          paramsClass = HidManager_GetDevicesAndSetClient_ResponseParams;
        break;
      case kHidManager_GetDevices_Name:
        if (message.isResponse())
          paramsClass = HidManager_GetDevices_ResponseParams;
        break;
      case kHidManager_Connect_Name:
        if (message.isResponse())
          paramsClass = HidManager_Connect_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var HidManager = {
    name: 'device.mojom.HidManager',
    kVersion: 0,
    ptrClass: HidManagerPtr,
    proxyClass: HidManagerProxy,
    stubClass: HidManagerStub,
    validateRequest: validateHidManagerRequest,
    validateResponse: validateHidManagerResponse,
    mojomId: 'services/device/public/mojom/hid.mojom',
    fuzzMethods: {
      getDevicesAndSetClient: {
        params: HidManager_GetDevicesAndSetClient_Params,
      },
      getDevices: {
        params: HidManager_GetDevices_Params,
      },
      connect: {
        params: HidManager_Connect_Params,
      },
    },
  };
  HidManagerStub.prototype.validator = validateHidManagerRequest;
  HidManagerProxy.prototype.validator = validateHidManagerResponse;
  var kHidConnection_Read_Name = 676942201;
  var kHidConnection_Write_Name = 1798032964;
  var kHidConnection_GetFeatureReport_Name = 1297706690;
  var kHidConnection_SendFeatureReport_Name = 1472959130;

  function HidConnectionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HidConnection,
                                                   handleOrPtrInfo);
  }

  function HidConnectionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HidConnection, associatedInterfacePtrInfo);
  }

  HidConnectionAssociatedPtr.prototype =
      Object.create(HidConnectionPtr.prototype);
  HidConnectionAssociatedPtr.prototype.constructor =
      HidConnectionAssociatedPtr;

  function HidConnectionProxy(receiver) {
    this.receiver_ = receiver;
  }
  HidConnectionPtr.prototype.read = function() {
    return HidConnectionProxy.prototype.read
        .apply(this.ptr.getProxy(), arguments);
  };

  HidConnectionProxy.prototype.read = function() {
    var params_ = new HidConnection_Read_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHidConnection_Read_Name,
          codec.align(HidConnection_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HidConnection_Read_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HidConnection_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HidConnectionPtr.prototype.write = function() {
    return HidConnectionProxy.prototype.write
        .apply(this.ptr.getProxy(), arguments);
  };

  HidConnectionProxy.prototype.write = function(reportId, buffer) {
    var params_ = new HidConnection_Write_Params();
    params_.reportId = reportId;
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHidConnection_Write_Name,
          codec.align(HidConnection_Write_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HidConnection_Write_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HidConnection_Write_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HidConnectionPtr.prototype.getFeatureReport = function() {
    return HidConnectionProxy.prototype.getFeatureReport
        .apply(this.ptr.getProxy(), arguments);
  };

  HidConnectionProxy.prototype.getFeatureReport = function(reportId) {
    var params_ = new HidConnection_GetFeatureReport_Params();
    params_.reportId = reportId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHidConnection_GetFeatureReport_Name,
          codec.align(HidConnection_GetFeatureReport_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HidConnection_GetFeatureReport_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HidConnection_GetFeatureReport_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HidConnectionPtr.prototype.sendFeatureReport = function() {
    return HidConnectionProxy.prototype.sendFeatureReport
        .apply(this.ptr.getProxy(), arguments);
  };

  HidConnectionProxy.prototype.sendFeatureReport = function(reportId, buffer) {
    var params_ = new HidConnection_SendFeatureReport_Params();
    params_.reportId = reportId;
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHidConnection_SendFeatureReport_Name,
          codec.align(HidConnection_SendFeatureReport_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HidConnection_SendFeatureReport_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HidConnection_SendFeatureReport_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HidConnectionStub(delegate) {
    this.delegate_ = delegate;
  }
  HidConnectionStub.prototype.read = function() {
    return this.delegate_ && this.delegate_.read && this.delegate_.read();
  }
  HidConnectionStub.prototype.write = function(reportId, buffer) {
    return this.delegate_ && this.delegate_.write && this.delegate_.write(reportId, buffer);
  }
  HidConnectionStub.prototype.getFeatureReport = function(reportId) {
    return this.delegate_ && this.delegate_.getFeatureReport && this.delegate_.getFeatureReport(reportId);
  }
  HidConnectionStub.prototype.sendFeatureReport = function(reportId, buffer) {
    return this.delegate_ && this.delegate_.sendFeatureReport && this.delegate_.sendFeatureReport(reportId, buffer);
  }

  HidConnectionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HidConnectionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHidConnection_Read_Name:
      var params = reader.decodeStruct(HidConnection_Read_Params);
      this.read().then(function(response) {
        var responseParams =
            new HidConnection_Read_ResponseParams();
        responseParams.success = response.success;
        responseParams.reportId = response.reportId;
        responseParams.buffer = response.buffer;
        var builder = new codec.MessageV1Builder(
            kHidConnection_Read_Name,
            codec.align(HidConnection_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HidConnection_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kHidConnection_Write_Name:
      var params = reader.decodeStruct(HidConnection_Write_Params);
      this.write(params.reportId, params.buffer).then(function(response) {
        var responseParams =
            new HidConnection_Write_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kHidConnection_Write_Name,
            codec.align(HidConnection_Write_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HidConnection_Write_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kHidConnection_GetFeatureReport_Name:
      var params = reader.decodeStruct(HidConnection_GetFeatureReport_Params);
      this.getFeatureReport(params.reportId).then(function(response) {
        var responseParams =
            new HidConnection_GetFeatureReport_ResponseParams();
        responseParams.success = response.success;
        responseParams.buffer = response.buffer;
        var builder = new codec.MessageV1Builder(
            kHidConnection_GetFeatureReport_Name,
            codec.align(HidConnection_GetFeatureReport_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HidConnection_GetFeatureReport_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kHidConnection_SendFeatureReport_Name:
      var params = reader.decodeStruct(HidConnection_SendFeatureReport_Params);
      this.sendFeatureReport(params.reportId, params.buffer).then(function(response) {
        var responseParams =
            new HidConnection_SendFeatureReport_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kHidConnection_SendFeatureReport_Name,
            codec.align(HidConnection_SendFeatureReport_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HidConnection_SendFeatureReport_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateHidConnectionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHidConnection_Read_Name:
        if (message.expectsResponse())
          paramsClass = HidConnection_Read_Params;
      break;
      case kHidConnection_Write_Name:
        if (message.expectsResponse())
          paramsClass = HidConnection_Write_Params;
      break;
      case kHidConnection_GetFeatureReport_Name:
        if (message.expectsResponse())
          paramsClass = HidConnection_GetFeatureReport_Params;
      break;
      case kHidConnection_SendFeatureReport_Name:
        if (message.expectsResponse())
          paramsClass = HidConnection_SendFeatureReport_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHidConnectionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHidConnection_Read_Name:
        if (message.isResponse())
          paramsClass = HidConnection_Read_ResponseParams;
        break;
      case kHidConnection_Write_Name:
        if (message.isResponse())
          paramsClass = HidConnection_Write_ResponseParams;
        break;
      case kHidConnection_GetFeatureReport_Name:
        if (message.isResponse())
          paramsClass = HidConnection_GetFeatureReport_ResponseParams;
        break;
      case kHidConnection_SendFeatureReport_Name:
        if (message.isResponse())
          paramsClass = HidConnection_SendFeatureReport_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var HidConnection = {
    name: 'device.mojom.HidConnection',
    kVersion: 0,
    ptrClass: HidConnectionPtr,
    proxyClass: HidConnectionProxy,
    stubClass: HidConnectionStub,
    validateRequest: validateHidConnectionRequest,
    validateResponse: validateHidConnectionResponse,
    mojomId: 'services/device/public/mojom/hid.mojom',
    fuzzMethods: {
      read: {
        params: HidConnection_Read_Params,
      },
      write: {
        params: HidConnection_Write_Params,
      },
      getFeatureReport: {
        params: HidConnection_GetFeatureReport_Params,
      },
      sendFeatureReport: {
        params: HidConnection_SendFeatureReport_Params,
      },
    },
  };
  HidConnectionStub.prototype.validator = validateHidConnectionRequest;
  HidConnectionProxy.prototype.validator = validateHidConnectionResponse;
  exports.kPageUndefined = kPageUndefined;
  exports.kPageGenericDesktop = kPageGenericDesktop;
  exports.kPageSimulation = kPageSimulation;
  exports.kPageVirtualReality = kPageVirtualReality;
  exports.kPageSport = kPageSport;
  exports.kPageGame = kPageGame;
  exports.kPageKeyboard = kPageKeyboard;
  exports.kPageLed = kPageLed;
  exports.kPageButton = kPageButton;
  exports.kPageOrdinal = kPageOrdinal;
  exports.kPageTelephony = kPageTelephony;
  exports.kPageConsumer = kPageConsumer;
  exports.kPageDigitizer = kPageDigitizer;
  exports.kPagePidPage = kPagePidPage;
  exports.kPageUnicode = kPageUnicode;
  exports.kPageAlphanumericDisplay = kPageAlphanumericDisplay;
  exports.kPageMedicalInstruments = kPageMedicalInstruments;
  exports.kPageMonitor0 = kPageMonitor0;
  exports.kPageMonitor1 = kPageMonitor1;
  exports.kPageMonitor2 = kPageMonitor2;
  exports.kPageMonitor3 = kPageMonitor3;
  exports.kPagePower0 = kPagePower0;
  exports.kPagePower1 = kPagePower1;
  exports.kPagePower2 = kPagePower2;
  exports.kPagePower3 = kPagePower3;
  exports.kPageBarCodeScanner = kPageBarCodeScanner;
  exports.kPageScale = kPageScale;
  exports.kPageMagneticStripeReader = kPageMagneticStripeReader;
  exports.kPageReservedPointOfSale = kPageReservedPointOfSale;
  exports.kPageCameraControl = kPageCameraControl;
  exports.kPageArcade = kPageArcade;
  exports.kPageVendor = kPageVendor;
  exports.kPageMediaCenter = kPageMediaCenter;
  exports.kGenericDesktopUndefined = kGenericDesktopUndefined;
  exports.kGenericDesktopPointer = kGenericDesktopPointer;
  exports.kGenericDesktopMouse = kGenericDesktopMouse;
  exports.kGenericDesktopJoystick = kGenericDesktopJoystick;
  exports.kGenericDesktopGamePad = kGenericDesktopGamePad;
  exports.kGenericDesktopKeyboard = kGenericDesktopKeyboard;
  exports.kGenericDesktopKeypad = kGenericDesktopKeypad;
  exports.kGenericDesktopMultiAxisController = kGenericDesktopMultiAxisController;
  exports.kGenericDesktopX = kGenericDesktopX;
  exports.kGenericDesktopY = kGenericDesktopY;
  exports.kGenericDesktopZ = kGenericDesktopZ;
  exports.kGenericDesktopRx = kGenericDesktopRx;
  exports.kGenericDesktopRy = kGenericDesktopRy;
  exports.kGenericDesktopRz = kGenericDesktopRz;
  exports.kGenericDesktopSlider = kGenericDesktopSlider;
  exports.kGenericDesktopDial = kGenericDesktopDial;
  exports.kGenericDesktopWheel = kGenericDesktopWheel;
  exports.kGenericDesktopHatSwitch = kGenericDesktopHatSwitch;
  exports.kGenericDesktopCountedBuffer = kGenericDesktopCountedBuffer;
  exports.kGenericDesktopByteCount = kGenericDesktopByteCount;
  exports.kGenericDesktopMotionWakeup = kGenericDesktopMotionWakeup;
  exports.kGenericDesktopStart = kGenericDesktopStart;
  exports.kGenericDesktopSelect = kGenericDesktopSelect;
  exports.kGenericDesktopVx = kGenericDesktopVx;
  exports.kGenericDesktopVy = kGenericDesktopVy;
  exports.kGenericDesktopVz = kGenericDesktopVz;
  exports.kGenericDesktopVbrx = kGenericDesktopVbrx;
  exports.kGenericDesktopVbry = kGenericDesktopVbry;
  exports.kGenericDesktopVbrz = kGenericDesktopVbrz;
  exports.kGenericDesktopVno = kGenericDesktopVno;
  exports.kGenericDesktopSystemControl = kGenericDesktopSystemControl;
  exports.kGenericDesktopSystemPowerDown = kGenericDesktopSystemPowerDown;
  exports.kGenericDesktopSystemSleep = kGenericDesktopSystemSleep;
  exports.kGenericDesktopSystemWakeUp = kGenericDesktopSystemWakeUp;
  exports.kGenericDesktopSystemContextMenu = kGenericDesktopSystemContextMenu;
  exports.kGenericDesktopSystemMainMenu = kGenericDesktopSystemMainMenu;
  exports.kGenericDesktopSystemAppMenu = kGenericDesktopSystemAppMenu;
  exports.kGenericDesktopSystemMenuHelp = kGenericDesktopSystemMenuHelp;
  exports.kGenericDesktopSystemMenuExit = kGenericDesktopSystemMenuExit;
  exports.kGenericDesktopSystemMenuSelect = kGenericDesktopSystemMenuSelect;
  exports.kGenericDesktopSystemMenuRight = kGenericDesktopSystemMenuRight;
  exports.kGenericDesktopSystemMenuLeft = kGenericDesktopSystemMenuLeft;
  exports.kGenericDesktopSystemMenuUp = kGenericDesktopSystemMenuUp;
  exports.kGenericDesktopSystemMenuDown = kGenericDesktopSystemMenuDown;
  exports.kGenericDesktopSystemColdRestart = kGenericDesktopSystemColdRestart;
  exports.kGenericDesktopSystemWarmRestart = kGenericDesktopSystemWarmRestart;
  exports.kGenericDesktopDPadUp = kGenericDesktopDPadUp;
  exports.kGenericDesktopDPadDown = kGenericDesktopDPadDown;
  exports.kGenericDesktopDPadLeft = kGenericDesktopDPadLeft;
  exports.kGenericDesktopDPadRight = kGenericDesktopDPadRight;
  exports.kGenericDesktopSystemDock = kGenericDesktopSystemDock;
  exports.kGenericDesktopSystemUndock = kGenericDesktopSystemUndock;
  exports.kGenericDesktopSystemSetup = kGenericDesktopSystemSetup;
  exports.kGenericDesktopSystemBreak = kGenericDesktopSystemBreak;
  exports.kGenericDesktopSystemDebuggerBreak = kGenericDesktopSystemDebuggerBreak;
  exports.kGenericDesktopApplicationBreak = kGenericDesktopApplicationBreak;
  exports.kGenericDesktopApplicationDebuggerBreak = kGenericDesktopApplicationDebuggerBreak;
  exports.kGenericDesktopSystemSpeakerMute = kGenericDesktopSystemSpeakerMute;
  exports.kGenericDesktopSystemHibernate = kGenericDesktopSystemHibernate;
  exports.kGenericDesktopSystemDisplayInvert = kGenericDesktopSystemDisplayInvert;
  exports.kGenericDesktopSystemDisplayInternal = kGenericDesktopSystemDisplayInternal;
  exports.kGenericDesktopSystemDisplayExternal = kGenericDesktopSystemDisplayExternal;
  exports.kGenericDesktopSystemDisplayBoth = kGenericDesktopSystemDisplayBoth;
  exports.kGenericDesktopSystemDisplayDual = kGenericDesktopSystemDisplayDual;
  exports.kGenericDesktopSystemDisplayToggle = kGenericDesktopSystemDisplayToggle;
  exports.kGenericDesktopSystemDisplaySwap = kGenericDesktopSystemDisplaySwap;
  exports.HidBusType = HidBusType;
  exports.HidUsageAndPage = HidUsageAndPage;
  exports.HidCollectionInfo = HidCollectionInfo;
  exports.HidDeviceInfo = HidDeviceInfo;
  exports.HidManagerClient = HidManagerClient;
  exports.HidManagerClientPtr = HidManagerClientPtr;
  exports.HidManagerClientAssociatedPtr = HidManagerClientAssociatedPtr;
  exports.HidManager = HidManager;
  exports.HidManagerPtr = HidManagerPtr;
  exports.HidManagerAssociatedPtr = HidManagerAssociatedPtr;
  exports.HidConnection = HidConnection;
  exports.HidConnectionPtr = HidConnectionPtr;
  exports.HidConnectionAssociatedPtr = HidConnectionAssociatedPtr;
})();