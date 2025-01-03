// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/serial.mojom';
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


  var SerialSendError = {};
  SerialSendError.NONE = 0;
  SerialSendError.DISCONNECTED = SerialSendError.NONE + 1;
  SerialSendError.PENDING = SerialSendError.DISCONNECTED + 1;
  SerialSendError.TIMEOUT = SerialSendError.PENDING + 1;
  SerialSendError.SYSTEM_ERROR = SerialSendError.TIMEOUT + 1;

  SerialSendError.isKnownEnumValue = function(value) {
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

  SerialSendError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SerialReceiveError = {};
  SerialReceiveError.NONE = 0;
  SerialReceiveError.DISCONNECTED = SerialReceiveError.NONE + 1;
  SerialReceiveError.TIMEOUT = SerialReceiveError.DISCONNECTED + 1;
  SerialReceiveError.DEVICE_LOST = SerialReceiveError.TIMEOUT + 1;
  SerialReceiveError.BREAK = SerialReceiveError.DEVICE_LOST + 1;
  SerialReceiveError.FRAME_ERROR = SerialReceiveError.BREAK + 1;
  SerialReceiveError.OVERRUN = SerialReceiveError.FRAME_ERROR + 1;
  SerialReceiveError.BUFFER_OVERFLOW = SerialReceiveError.OVERRUN + 1;
  SerialReceiveError.PARITY_ERROR = SerialReceiveError.BUFFER_OVERFLOW + 1;
  SerialReceiveError.SYSTEM_ERROR = SerialReceiveError.PARITY_ERROR + 1;

  SerialReceiveError.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  SerialReceiveError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SerialDataBits = {};
  SerialDataBits.NONE = 0;
  SerialDataBits.SEVEN = SerialDataBits.NONE + 1;
  SerialDataBits.EIGHT = SerialDataBits.SEVEN + 1;

  SerialDataBits.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  SerialDataBits.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SerialParityBit = {};
  SerialParityBit.NONE = 0;
  SerialParityBit.NO_PARITY = SerialParityBit.NONE + 1;
  SerialParityBit.ODD = SerialParityBit.NO_PARITY + 1;
  SerialParityBit.EVEN = SerialParityBit.ODD + 1;

  SerialParityBit.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  SerialParityBit.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SerialStopBits = {};
  SerialStopBits.NONE = 0;
  SerialStopBits.ONE = SerialStopBits.NONE + 1;
  SerialStopBits.TWO = SerialStopBits.ONE + 1;

  SerialStopBits.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  SerialStopBits.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SerialDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialDeviceInfo.prototype.initDefaults_ = function() {
    this.path = null;
    this.vendorId = 0;
    this.hasVendorId = false;
    this.hasProductId = false;
    this.productId = 0;
    this.displayName = null;
  };
  SerialDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialDeviceInfo.generate = function(generator_) {
    var generated = new SerialDeviceInfo;
    generated.path = generator_.generateString(false);
    generated.vendorId = generator_.generateUint16();
    generated.hasVendorId = generator_.generateBool();
    generated.productId = generator_.generateUint16();
    generated.hasProductId = generator_.generateBool();
    generated.displayName = generator_.generateString(true);
    return generated;
  };

  SerialDeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.vendorId = mutator_.mutateUint16(this.vendorId);
    }
    if (mutator_.chooseMutateField()) {
      this.hasVendorId = mutator_.mutateBool(this.hasVendorId);
    }
    if (mutator_.chooseMutateField()) {
      this.productId = mutator_.mutateUint16(this.productId);
    }
    if (mutator_.chooseMutateField()) {
      this.hasProductId = mutator_.mutateBool(this.hasProductId);
    }
    if (mutator_.chooseMutateField()) {
      this.displayName = mutator_.mutateString(this.displayName, true);
    }
    return this;
  };
  SerialDeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialDeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialDeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialDeviceInfo.validate = function(messageValidator, offset) {
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


    // validate SerialDeviceInfo.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;






    // validate SerialDeviceInfo.displayName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialDeviceInfo.encodedSize = codec.kStructHeaderSize + 24;

  SerialDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new SerialDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.vendorId = decoder.decodeStruct(codec.Uint16);
    packed = decoder.readUint8();
    val.hasVendorId = (packed >> 0) & 1 ? true : false;
    val.hasProductId = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    val.productId = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    val.displayName = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  SerialDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint16, val.vendorId);
    packed = 0;
    packed |= (val.hasVendorId & 1) << 0
    packed |= (val.hasProductId & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.productId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.displayName);
  };
  function SerialConnectionOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialConnectionOptions.prototype.initDefaults_ = function() {
    this.bitrate = 0;
    this.dataBits = SerialDataBits.NONE;
    this.parityBit = SerialParityBit.NONE;
    this.stopBits = SerialStopBits.NONE;
    this.ctsFlowControl = false;
    this.hasCtsFlowControl = false;
  };
  SerialConnectionOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialConnectionOptions.generate = function(generator_) {
    var generated = new SerialConnectionOptions;
    generated.bitrate = generator_.generateUint32();
    generated.dataBits = generator_.generateEnum(0, 2);
    generated.parityBit = generator_.generateEnum(0, 3);
    generated.stopBits = generator_.generateEnum(0, 2);
    generated.ctsFlowControl = generator_.generateBool();
    generated.hasCtsFlowControl = generator_.generateBool();
    return generated;
  };

  SerialConnectionOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitrate = mutator_.mutateUint32(this.bitrate);
    }
    if (mutator_.chooseMutateField()) {
      this.dataBits = mutator_.mutateEnum(this.dataBits, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.parityBit = mutator_.mutateEnum(this.parityBit, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.stopBits = mutator_.mutateEnum(this.stopBits, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.ctsFlowControl = mutator_.mutateBool(this.ctsFlowControl);
    }
    if (mutator_.chooseMutateField()) {
      this.hasCtsFlowControl = mutator_.mutateBool(this.hasCtsFlowControl);
    }
    return this;
  };
  SerialConnectionOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialConnectionOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialConnectionOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialConnectionOptions.validate = function(messageValidator, offset) {
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



    // validate SerialConnectionOptions.dataBits
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, SerialDataBits);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SerialConnectionOptions.parityBit
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, SerialParityBit);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SerialConnectionOptions.stopBits
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, SerialStopBits);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SerialConnectionOptions.encodedSize = codec.kStructHeaderSize + 24;

  SerialConnectionOptions.decode = function(decoder) {
    var packed;
    var val = new SerialConnectionOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitrate = decoder.decodeStruct(codec.Uint32);
    val.dataBits = decoder.decodeStruct(codec.Int32);
    val.parityBit = decoder.decodeStruct(codec.Int32);
    val.stopBits = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.ctsFlowControl = (packed >> 0) & 1 ? true : false;
    val.hasCtsFlowControl = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialConnectionOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialConnectionOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bitrate);
    encoder.encodeStruct(codec.Int32, val.dataBits);
    encoder.encodeStruct(codec.Int32, val.parityBit);
    encoder.encodeStruct(codec.Int32, val.stopBits);
    packed = 0;
    packed |= (val.ctsFlowControl & 1) << 0
    packed |= (val.hasCtsFlowControl & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialConnectionInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialConnectionInfo.prototype.initDefaults_ = function() {
    this.bitrate = 0;
    this.dataBits = SerialDataBits.NONE;
    this.parityBit = SerialParityBit.NONE;
    this.stopBits = SerialStopBits.NONE;
    this.ctsFlowControl = false;
  };
  SerialConnectionInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialConnectionInfo.generate = function(generator_) {
    var generated = new SerialConnectionInfo;
    generated.bitrate = generator_.generateUint32();
    generated.dataBits = generator_.generateEnum(0, 2);
    generated.parityBit = generator_.generateEnum(0, 3);
    generated.stopBits = generator_.generateEnum(0, 2);
    generated.ctsFlowControl = generator_.generateBool();
    return generated;
  };

  SerialConnectionInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitrate = mutator_.mutateUint32(this.bitrate);
    }
    if (mutator_.chooseMutateField()) {
      this.dataBits = mutator_.mutateEnum(this.dataBits, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.parityBit = mutator_.mutateEnum(this.parityBit, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.stopBits = mutator_.mutateEnum(this.stopBits, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.ctsFlowControl = mutator_.mutateBool(this.ctsFlowControl);
    }
    return this;
  };
  SerialConnectionInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialConnectionInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialConnectionInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialConnectionInfo.validate = function(messageValidator, offset) {
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



    // validate SerialConnectionInfo.dataBits
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, SerialDataBits);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SerialConnectionInfo.parityBit
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, SerialParityBit);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SerialConnectionInfo.stopBits
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, SerialStopBits);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SerialConnectionInfo.encodedSize = codec.kStructHeaderSize + 24;

  SerialConnectionInfo.decode = function(decoder) {
    var packed;
    var val = new SerialConnectionInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitrate = decoder.decodeStruct(codec.Uint32);
    val.dataBits = decoder.decodeStruct(codec.Int32);
    val.parityBit = decoder.decodeStruct(codec.Int32);
    val.stopBits = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.ctsFlowControl = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialConnectionInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialConnectionInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bitrate);
    encoder.encodeStruct(codec.Int32, val.dataBits);
    encoder.encodeStruct(codec.Int32, val.parityBit);
    encoder.encodeStruct(codec.Int32, val.stopBits);
    packed = 0;
    packed |= (val.ctsFlowControl & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialHostControlSignals(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialHostControlSignals.prototype.initDefaults_ = function() {
    this.dtr = false;
    this.hasDtr = false;
    this.rts = false;
    this.hasRts = false;
  };
  SerialHostControlSignals.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialHostControlSignals.generate = function(generator_) {
    var generated = new SerialHostControlSignals;
    generated.dtr = generator_.generateBool();
    generated.hasDtr = generator_.generateBool();
    generated.rts = generator_.generateBool();
    generated.hasRts = generator_.generateBool();
    return generated;
  };

  SerialHostControlSignals.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dtr = mutator_.mutateBool(this.dtr);
    }
    if (mutator_.chooseMutateField()) {
      this.hasDtr = mutator_.mutateBool(this.hasDtr);
    }
    if (mutator_.chooseMutateField()) {
      this.rts = mutator_.mutateBool(this.rts);
    }
    if (mutator_.chooseMutateField()) {
      this.hasRts = mutator_.mutateBool(this.hasRts);
    }
    return this;
  };
  SerialHostControlSignals.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialHostControlSignals.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialHostControlSignals.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialHostControlSignals.validate = function(messageValidator, offset) {
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

  SerialHostControlSignals.encodedSize = codec.kStructHeaderSize + 8;

  SerialHostControlSignals.decode = function(decoder) {
    var packed;
    var val = new SerialHostControlSignals();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.dtr = (packed >> 0) & 1 ? true : false;
    val.hasDtr = (packed >> 1) & 1 ? true : false;
    val.rts = (packed >> 2) & 1 ? true : false;
    val.hasRts = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialHostControlSignals.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialHostControlSignals.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.dtr & 1) << 0
    packed |= (val.hasDtr & 1) << 1
    packed |= (val.rts & 1) << 2
    packed |= (val.hasRts & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialDeviceControlSignals(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialDeviceControlSignals.prototype.initDefaults_ = function() {
    this.dcd = false;
    this.cts = false;
    this.ri = false;
    this.dsr = false;
  };
  SerialDeviceControlSignals.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialDeviceControlSignals.generate = function(generator_) {
    var generated = new SerialDeviceControlSignals;
    generated.dcd = generator_.generateBool();
    generated.cts = generator_.generateBool();
    generated.ri = generator_.generateBool();
    generated.dsr = generator_.generateBool();
    return generated;
  };

  SerialDeviceControlSignals.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dcd = mutator_.mutateBool(this.dcd);
    }
    if (mutator_.chooseMutateField()) {
      this.cts = mutator_.mutateBool(this.cts);
    }
    if (mutator_.chooseMutateField()) {
      this.ri = mutator_.mutateBool(this.ri);
    }
    if (mutator_.chooseMutateField()) {
      this.dsr = mutator_.mutateBool(this.dsr);
    }
    return this;
  };
  SerialDeviceControlSignals.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialDeviceControlSignals.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialDeviceControlSignals.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialDeviceControlSignals.validate = function(messageValidator, offset) {
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

  SerialDeviceControlSignals.encodedSize = codec.kStructHeaderSize + 8;

  SerialDeviceControlSignals.decode = function(decoder) {
    var packed;
    var val = new SerialDeviceControlSignals();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.dcd = (packed >> 0) & 1 ? true : false;
    val.cts = (packed >> 1) & 1 ? true : false;
    val.ri = (packed >> 2) & 1 ? true : false;
    val.dsr = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialDeviceControlSignals.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialDeviceControlSignals.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.dcd & 1) << 0
    packed |= (val.cts & 1) << 1
    packed |= (val.ri & 1) << 2
    packed |= (val.dsr & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialDeviceEnumerator_GetDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialDeviceEnumerator_GetDevices_Params.prototype.initDefaults_ = function() {
  };
  SerialDeviceEnumerator_GetDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialDeviceEnumerator_GetDevices_Params.generate = function(generator_) {
    var generated = new SerialDeviceEnumerator_GetDevices_Params;
    return generated;
  };

  SerialDeviceEnumerator_GetDevices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SerialDeviceEnumerator_GetDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialDeviceEnumerator_GetDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialDeviceEnumerator_GetDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialDeviceEnumerator_GetDevices_Params.validate = function(messageValidator, offset) {
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

  SerialDeviceEnumerator_GetDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  SerialDeviceEnumerator_GetDevices_Params.decode = function(decoder) {
    var packed;
    var val = new SerialDeviceEnumerator_GetDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SerialDeviceEnumerator_GetDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialDeviceEnumerator_GetDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SerialDeviceEnumerator_GetDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialDeviceEnumerator_GetDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  SerialDeviceEnumerator_GetDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialDeviceEnumerator_GetDevices_ResponseParams.generate = function(generator_) {
    var generated = new SerialDeviceEnumerator_GetDevices_ResponseParams;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.SerialDeviceInfo, false);
    });
    return generated;
  };

  SerialDeviceEnumerator_GetDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(device.mojom.SerialDeviceInfo, false);
      });
    }
    return this;
  };
  SerialDeviceEnumerator_GetDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialDeviceEnumerator_GetDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialDeviceEnumerator_GetDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialDeviceEnumerator_GetDevices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SerialDeviceEnumerator_GetDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(SerialDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialDeviceEnumerator_GetDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialDeviceEnumerator_GetDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialDeviceEnumerator_GetDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(SerialDeviceInfo));
    return val;
  };

  SerialDeviceEnumerator_GetDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialDeviceEnumerator_GetDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(SerialDeviceInfo), val.devices);
  };
  function SerialIoHandler_Open_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Open_Params.prototype.initDefaults_ = function() {
    this.port = null;
    this.options = null;
  };
  SerialIoHandler_Open_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Open_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_Open_Params;
    generated.port = generator_.generateString(false);
    generated.options = generator_.generateStruct(device.mojom.SerialConnectionOptions, false);
    return generated;
  };

  SerialIoHandler_Open_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.port = mutator_.mutateString(this.port, false);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(device.mojom.SerialConnectionOptions, false);
    }
    return this;
  };
  SerialIoHandler_Open_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Open_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Open_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Open_Params.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_Open_Params.port
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SerialIoHandler_Open_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, SerialConnectionOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_Open_Params.encodedSize = codec.kStructHeaderSize + 16;

  SerialIoHandler_Open_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Open_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.port = decoder.decodeStruct(codec.String);
    val.options = decoder.decodeStructPointer(SerialConnectionOptions);
    return val;
  };

  SerialIoHandler_Open_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Open_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.port);
    encoder.encodeStructPointer(SerialConnectionOptions, val.options);
  };
  function SerialIoHandler_Open_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Open_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  SerialIoHandler_Open_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Open_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_Open_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  SerialIoHandler_Open_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  SerialIoHandler_Open_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Open_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Open_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Open_ResponseParams.validate = function(messageValidator, offset) {
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

  SerialIoHandler_Open_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_Open_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Open_ResponseParams();
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

  SerialIoHandler_Open_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Open_ResponseParams.encodedSize);
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
  function SerialIoHandler_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Read_Params.prototype.initDefaults_ = function() {
    this.bytes = 0;
  };
  SerialIoHandler_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Read_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_Read_Params;
    generated.bytes = generator_.generateUint32();
    return generated;
  };

  SerialIoHandler_Read_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bytes = mutator_.mutateUint32(this.bytes);
    }
    return this;
  };
  SerialIoHandler_Read_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Read_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Read_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Read_Params.validate = function(messageValidator, offset) {
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

  SerialIoHandler_Read_Params.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_Read_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bytes = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialIoHandler_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Read_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bytes);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialIoHandler_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.data = null;
    this.error = 0;
  };
  SerialIoHandler_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Read_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_Read_ResponseParams;
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.error = generator_.generateEnum(0, 9);
    return generated;
  };

  SerialIoHandler_Read_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 9);
    }
    return this;
  };
  SerialIoHandler_Read_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Read_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Read_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Read_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_Read_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SerialIoHandler_Read_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, SerialReceiveError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  SerialIoHandler_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialIoHandler_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialIoHandler_Write_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Write_Params.prototype.initDefaults_ = function() {
    this.data = null;
  };
  SerialIoHandler_Write_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Write_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_Write_Params;
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  SerialIoHandler_Write_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  SerialIoHandler_Write_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Write_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Write_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Write_Params.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_Write_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_Write_Params.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_Write_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Write_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  SerialIoHandler_Write_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Write_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function SerialIoHandler_Write_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Write_ResponseParams.prototype.initDefaults_ = function() {
    this.bytesWritten = 0;
    this.error = 0;
  };
  SerialIoHandler_Write_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Write_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_Write_ResponseParams;
    generated.bytesWritten = generator_.generateUint32();
    generated.error = generator_.generateEnum(0, 4);
    return generated;
  };

  SerialIoHandler_Write_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bytesWritten = mutator_.mutateUint32(this.bytesWritten);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 4);
    }
    return this;
  };
  SerialIoHandler_Write_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Write_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Write_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Write_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate SerialIoHandler_Write_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, SerialSendError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_Write_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_Write_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Write_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bytesWritten = decoder.decodeStruct(codec.Uint32);
    val.error = decoder.decodeStruct(codec.Int32);
    return val;
  };

  SerialIoHandler_Write_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Write_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bytesWritten);
    encoder.encodeStruct(codec.Int32, val.error);
  };
  function SerialIoHandler_CancelRead_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_CancelRead_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  SerialIoHandler_CancelRead_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_CancelRead_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_CancelRead_Params;
    generated.reason = generator_.generateEnum(0, 9);
    return generated;
  };

  SerialIoHandler_CancelRead_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 9);
    }
    return this;
  };
  SerialIoHandler_CancelRead_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_CancelRead_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_CancelRead_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_CancelRead_Params.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_CancelRead_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, SerialReceiveError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_CancelRead_Params.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_CancelRead_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_CancelRead_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialIoHandler_CancelRead_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_CancelRead_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialIoHandler_CancelWrite_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_CancelWrite_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  SerialIoHandler_CancelWrite_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_CancelWrite_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_CancelWrite_Params;
    generated.reason = generator_.generateEnum(0, 4);
    return generated;
  };

  SerialIoHandler_CancelWrite_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 4);
    }
    return this;
  };
  SerialIoHandler_CancelWrite_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_CancelWrite_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_CancelWrite_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_CancelWrite_Params.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_CancelWrite_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, SerialSendError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_CancelWrite_Params.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_CancelWrite_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_CancelWrite_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialIoHandler_CancelWrite_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_CancelWrite_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialIoHandler_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Flush_Params.prototype.initDefaults_ = function() {
  };
  SerialIoHandler_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Flush_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_Flush_Params;
    return generated;
  };

  SerialIoHandler_Flush_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SerialIoHandler_Flush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Flush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Flush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Flush_Params.validate = function(messageValidator, offset) {
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

  SerialIoHandler_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  SerialIoHandler_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SerialIoHandler_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SerialIoHandler_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_Flush_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  SerialIoHandler_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_Flush_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_Flush_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  SerialIoHandler_Flush_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  SerialIoHandler_Flush_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_Flush_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_Flush_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_Flush_ResponseParams.validate = function(messageValidator, offset) {
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

  SerialIoHandler_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_Flush_ResponseParams();
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

  SerialIoHandler_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_Flush_ResponseParams.encodedSize);
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
  function SerialIoHandler_GetControlSignals_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_GetControlSignals_Params.prototype.initDefaults_ = function() {
  };
  SerialIoHandler_GetControlSignals_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_GetControlSignals_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_GetControlSignals_Params;
    return generated;
  };

  SerialIoHandler_GetControlSignals_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SerialIoHandler_GetControlSignals_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_GetControlSignals_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_GetControlSignals_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_GetControlSignals_Params.validate = function(messageValidator, offset) {
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

  SerialIoHandler_GetControlSignals_Params.encodedSize = codec.kStructHeaderSize + 0;

  SerialIoHandler_GetControlSignals_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_GetControlSignals_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SerialIoHandler_GetControlSignals_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_GetControlSignals_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SerialIoHandler_GetControlSignals_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_GetControlSignals_ResponseParams.prototype.initDefaults_ = function() {
    this.signals = null;
  };
  SerialIoHandler_GetControlSignals_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_GetControlSignals_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_GetControlSignals_ResponseParams;
    generated.signals = generator_.generateStruct(device.mojom.SerialDeviceControlSignals, false);
    return generated;
  };

  SerialIoHandler_GetControlSignals_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.signals = mutator_.mutateStruct(device.mojom.SerialDeviceControlSignals, false);
    }
    return this;
  };
  SerialIoHandler_GetControlSignals_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_GetControlSignals_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_GetControlSignals_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_GetControlSignals_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_GetControlSignals_ResponseParams.signals
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SerialDeviceControlSignals, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_GetControlSignals_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_GetControlSignals_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_GetControlSignals_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.signals = decoder.decodeStructPointer(SerialDeviceControlSignals);
    return val;
  };

  SerialIoHandler_GetControlSignals_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_GetControlSignals_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SerialDeviceControlSignals, val.signals);
  };
  function SerialIoHandler_SetControlSignals_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_SetControlSignals_Params.prototype.initDefaults_ = function() {
    this.signals = null;
  };
  SerialIoHandler_SetControlSignals_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_SetControlSignals_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_SetControlSignals_Params;
    generated.signals = generator_.generateStruct(device.mojom.SerialHostControlSignals, false);
    return generated;
  };

  SerialIoHandler_SetControlSignals_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.signals = mutator_.mutateStruct(device.mojom.SerialHostControlSignals, false);
    }
    return this;
  };
  SerialIoHandler_SetControlSignals_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_SetControlSignals_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_SetControlSignals_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_SetControlSignals_Params.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_SetControlSignals_Params.signals
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SerialHostControlSignals, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_SetControlSignals_Params.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_SetControlSignals_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_SetControlSignals_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.signals = decoder.decodeStructPointer(SerialHostControlSignals);
    return val;
  };

  SerialIoHandler_SetControlSignals_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_SetControlSignals_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SerialHostControlSignals, val.signals);
  };
  function SerialIoHandler_SetControlSignals_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_SetControlSignals_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  SerialIoHandler_SetControlSignals_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_SetControlSignals_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_SetControlSignals_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  SerialIoHandler_SetControlSignals_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  SerialIoHandler_SetControlSignals_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_SetControlSignals_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_SetControlSignals_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_SetControlSignals_ResponseParams.validate = function(messageValidator, offset) {
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

  SerialIoHandler_SetControlSignals_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_SetControlSignals_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_SetControlSignals_ResponseParams();
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

  SerialIoHandler_SetControlSignals_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_SetControlSignals_ResponseParams.encodedSize);
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
  function SerialIoHandler_ConfigurePort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_ConfigurePort_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  SerialIoHandler_ConfigurePort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_ConfigurePort_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_ConfigurePort_Params;
    generated.options = generator_.generateStruct(device.mojom.SerialConnectionOptions, false);
    return generated;
  };

  SerialIoHandler_ConfigurePort_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(device.mojom.SerialConnectionOptions, false);
    }
    return this;
  };
  SerialIoHandler_ConfigurePort_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_ConfigurePort_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_ConfigurePort_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_ConfigurePort_Params.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_ConfigurePort_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SerialConnectionOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_ConfigurePort_Params.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_ConfigurePort_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_ConfigurePort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(SerialConnectionOptions);
    return val;
  };

  SerialIoHandler_ConfigurePort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_ConfigurePort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SerialConnectionOptions, val.options);
  };
  function SerialIoHandler_ConfigurePort_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_ConfigurePort_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  SerialIoHandler_ConfigurePort_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_ConfigurePort_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_ConfigurePort_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  SerialIoHandler_ConfigurePort_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  SerialIoHandler_ConfigurePort_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_ConfigurePort_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_ConfigurePort_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_ConfigurePort_ResponseParams.validate = function(messageValidator, offset) {
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

  SerialIoHandler_ConfigurePort_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_ConfigurePort_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_ConfigurePort_ResponseParams();
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

  SerialIoHandler_ConfigurePort_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_ConfigurePort_ResponseParams.encodedSize);
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
  function SerialIoHandler_GetPortInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_GetPortInfo_Params.prototype.initDefaults_ = function() {
  };
  SerialIoHandler_GetPortInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_GetPortInfo_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_GetPortInfo_Params;
    return generated;
  };

  SerialIoHandler_GetPortInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SerialIoHandler_GetPortInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_GetPortInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_GetPortInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_GetPortInfo_Params.validate = function(messageValidator, offset) {
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

  SerialIoHandler_GetPortInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  SerialIoHandler_GetPortInfo_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_GetPortInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SerialIoHandler_GetPortInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_GetPortInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SerialIoHandler_GetPortInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_GetPortInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.info = null;
  };
  SerialIoHandler_GetPortInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_GetPortInfo_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_GetPortInfo_ResponseParams;
    generated.info = generator_.generateStruct(device.mojom.SerialConnectionInfo, false);
    return generated;
  };

  SerialIoHandler_GetPortInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(device.mojom.SerialConnectionInfo, false);
    }
    return this;
  };
  SerialIoHandler_GetPortInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_GetPortInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_GetPortInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_GetPortInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SerialIoHandler_GetPortInfo_ResponseParams.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SerialConnectionInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialIoHandler_GetPortInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_GetPortInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_GetPortInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(SerialConnectionInfo);
    return val;
  };

  SerialIoHandler_GetPortInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_GetPortInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SerialConnectionInfo, val.info);
  };
  function SerialIoHandler_SetBreak_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_SetBreak_Params.prototype.initDefaults_ = function() {
  };
  SerialIoHandler_SetBreak_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_SetBreak_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_SetBreak_Params;
    return generated;
  };

  SerialIoHandler_SetBreak_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SerialIoHandler_SetBreak_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_SetBreak_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_SetBreak_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_SetBreak_Params.validate = function(messageValidator, offset) {
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

  SerialIoHandler_SetBreak_Params.encodedSize = codec.kStructHeaderSize + 0;

  SerialIoHandler_SetBreak_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_SetBreak_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SerialIoHandler_SetBreak_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_SetBreak_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SerialIoHandler_SetBreak_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_SetBreak_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  SerialIoHandler_SetBreak_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_SetBreak_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_SetBreak_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  SerialIoHandler_SetBreak_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  SerialIoHandler_SetBreak_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_SetBreak_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_SetBreak_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_SetBreak_ResponseParams.validate = function(messageValidator, offset) {
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

  SerialIoHandler_SetBreak_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_SetBreak_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_SetBreak_ResponseParams();
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

  SerialIoHandler_SetBreak_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_SetBreak_ResponseParams.encodedSize);
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
  function SerialIoHandler_ClearBreak_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_ClearBreak_Params.prototype.initDefaults_ = function() {
  };
  SerialIoHandler_ClearBreak_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_ClearBreak_Params.generate = function(generator_) {
    var generated = new SerialIoHandler_ClearBreak_Params;
    return generated;
  };

  SerialIoHandler_ClearBreak_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SerialIoHandler_ClearBreak_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_ClearBreak_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_ClearBreak_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_ClearBreak_Params.validate = function(messageValidator, offset) {
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

  SerialIoHandler_ClearBreak_Params.encodedSize = codec.kStructHeaderSize + 0;

  SerialIoHandler_ClearBreak_Params.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_ClearBreak_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SerialIoHandler_ClearBreak_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_ClearBreak_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SerialIoHandler_ClearBreak_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialIoHandler_ClearBreak_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  SerialIoHandler_ClearBreak_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerialIoHandler_ClearBreak_ResponseParams.generate = function(generator_) {
    var generated = new SerialIoHandler_ClearBreak_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  SerialIoHandler_ClearBreak_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  SerialIoHandler_ClearBreak_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SerialIoHandler_ClearBreak_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerialIoHandler_ClearBreak_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SerialIoHandler_ClearBreak_ResponseParams.validate = function(messageValidator, offset) {
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

  SerialIoHandler_ClearBreak_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialIoHandler_ClearBreak_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialIoHandler_ClearBreak_ResponseParams();
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

  SerialIoHandler_ClearBreak_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialIoHandler_ClearBreak_ResponseParams.encodedSize);
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
  var kSerialDeviceEnumerator_GetDevices_Name = 1315988929;

  function SerialDeviceEnumeratorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SerialDeviceEnumerator,
                                                   handleOrPtrInfo);
  }

  function SerialDeviceEnumeratorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SerialDeviceEnumerator, associatedInterfacePtrInfo);
  }

  SerialDeviceEnumeratorAssociatedPtr.prototype =
      Object.create(SerialDeviceEnumeratorPtr.prototype);
  SerialDeviceEnumeratorAssociatedPtr.prototype.constructor =
      SerialDeviceEnumeratorAssociatedPtr;

  function SerialDeviceEnumeratorProxy(receiver) {
    this.receiver_ = receiver;
  }
  SerialDeviceEnumeratorPtr.prototype.getDevices = function() {
    return SerialDeviceEnumeratorProxy.prototype.getDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialDeviceEnumeratorProxy.prototype.getDevices = function() {
    var params_ = new SerialDeviceEnumerator_GetDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialDeviceEnumerator_GetDevices_Name,
          codec.align(SerialDeviceEnumerator_GetDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialDeviceEnumerator_GetDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialDeviceEnumerator_GetDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SerialDeviceEnumeratorStub(delegate) {
    this.delegate_ = delegate;
  }
  SerialDeviceEnumeratorStub.prototype.getDevices = function() {
    return this.delegate_ && this.delegate_.getDevices && this.delegate_.getDevices();
  }

  SerialDeviceEnumeratorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  SerialDeviceEnumeratorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSerialDeviceEnumerator_GetDevices_Name:
      var params = reader.decodeStruct(SerialDeviceEnumerator_GetDevices_Params);
      this.getDevices().then(function(response) {
        var responseParams =
            new SerialDeviceEnumerator_GetDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageV1Builder(
            kSerialDeviceEnumerator_GetDevices_Name,
            codec.align(SerialDeviceEnumerator_GetDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialDeviceEnumerator_GetDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSerialDeviceEnumeratorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSerialDeviceEnumerator_GetDevices_Name:
        if (message.expectsResponse())
          paramsClass = SerialDeviceEnumerator_GetDevices_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSerialDeviceEnumeratorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSerialDeviceEnumerator_GetDevices_Name:
        if (message.isResponse())
          paramsClass = SerialDeviceEnumerator_GetDevices_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SerialDeviceEnumerator = {
    name: 'device.mojom.SerialDeviceEnumerator',
    kVersion: 0,
    ptrClass: SerialDeviceEnumeratorPtr,
    proxyClass: SerialDeviceEnumeratorProxy,
    stubClass: SerialDeviceEnumeratorStub,
    validateRequest: validateSerialDeviceEnumeratorRequest,
    validateResponse: validateSerialDeviceEnumeratorResponse,
    mojomId: 'services/device/public/mojom/serial.mojom',
    fuzzMethods: {
      getDevices: {
        params: SerialDeviceEnumerator_GetDevices_Params,
      },
    },
  };
  SerialDeviceEnumeratorStub.prototype.validator = validateSerialDeviceEnumeratorRequest;
  SerialDeviceEnumeratorProxy.prototype.validator = validateSerialDeviceEnumeratorResponse;
  var kSerialIoHandler_Open_Name = 373433852;
  var kSerialIoHandler_Read_Name = 988671442;
  var kSerialIoHandler_Write_Name = 306454044;
  var kSerialIoHandler_CancelRead_Name = 647511362;
  var kSerialIoHandler_CancelWrite_Name = 330625775;
  var kSerialIoHandler_Flush_Name = 94164995;
  var kSerialIoHandler_GetControlSignals_Name = 1354787244;
  var kSerialIoHandler_SetControlSignals_Name = 402064914;
  var kSerialIoHandler_ConfigurePort_Name = 681653089;
  var kSerialIoHandler_GetPortInfo_Name = 1394595160;
  var kSerialIoHandler_SetBreak_Name = 1094274528;
  var kSerialIoHandler_ClearBreak_Name = 216313107;

  function SerialIoHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SerialIoHandler,
                                                   handleOrPtrInfo);
  }

  function SerialIoHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SerialIoHandler, associatedInterfacePtrInfo);
  }

  SerialIoHandlerAssociatedPtr.prototype =
      Object.create(SerialIoHandlerPtr.prototype);
  SerialIoHandlerAssociatedPtr.prototype.constructor =
      SerialIoHandlerAssociatedPtr;

  function SerialIoHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  SerialIoHandlerPtr.prototype.open = function() {
    return SerialIoHandlerProxy.prototype.open
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.open = function(port, options) {
    var params_ = new SerialIoHandler_Open_Params();
    params_.port = port;
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_Open_Name,
          codec.align(SerialIoHandler_Open_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_Open_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_Open_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.read = function() {
    return SerialIoHandlerProxy.prototype.read
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.read = function(bytes) {
    var params_ = new SerialIoHandler_Read_Params();
    params_.bytes = bytes;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_Read_Name,
          codec.align(SerialIoHandler_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_Read_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.write = function() {
    return SerialIoHandlerProxy.prototype.write
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.write = function(data) {
    var params_ = new SerialIoHandler_Write_Params();
    params_.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_Write_Name,
          codec.align(SerialIoHandler_Write_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_Write_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_Write_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.cancelRead = function() {
    return SerialIoHandlerProxy.prototype.cancelRead
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.cancelRead = function(reason) {
    var params_ = new SerialIoHandler_CancelRead_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kSerialIoHandler_CancelRead_Name,
        codec.align(SerialIoHandler_CancelRead_Params.encodedSize));
    builder.encodeStruct(SerialIoHandler_CancelRead_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SerialIoHandlerPtr.prototype.cancelWrite = function() {
    return SerialIoHandlerProxy.prototype.cancelWrite
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.cancelWrite = function(reason) {
    var params_ = new SerialIoHandler_CancelWrite_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kSerialIoHandler_CancelWrite_Name,
        codec.align(SerialIoHandler_CancelWrite_Params.encodedSize));
    builder.encodeStruct(SerialIoHandler_CancelWrite_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SerialIoHandlerPtr.prototype.flush = function() {
    return SerialIoHandlerProxy.prototype.flush
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.flush = function() {
    var params_ = new SerialIoHandler_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_Flush_Name,
          codec.align(SerialIoHandler_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_Flush_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.getControlSignals = function() {
    return SerialIoHandlerProxy.prototype.getControlSignals
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.getControlSignals = function() {
    var params_ = new SerialIoHandler_GetControlSignals_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_GetControlSignals_Name,
          codec.align(SerialIoHandler_GetControlSignals_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_GetControlSignals_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_GetControlSignals_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.setControlSignals = function() {
    return SerialIoHandlerProxy.prototype.setControlSignals
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.setControlSignals = function(signals) {
    var params_ = new SerialIoHandler_SetControlSignals_Params();
    params_.signals = signals;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_SetControlSignals_Name,
          codec.align(SerialIoHandler_SetControlSignals_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_SetControlSignals_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_SetControlSignals_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.configurePort = function() {
    return SerialIoHandlerProxy.prototype.configurePort
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.configurePort = function(options) {
    var params_ = new SerialIoHandler_ConfigurePort_Params();
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_ConfigurePort_Name,
          codec.align(SerialIoHandler_ConfigurePort_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_ConfigurePort_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_ConfigurePort_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.getPortInfo = function() {
    return SerialIoHandlerProxy.prototype.getPortInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.getPortInfo = function() {
    var params_ = new SerialIoHandler_GetPortInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_GetPortInfo_Name,
          codec.align(SerialIoHandler_GetPortInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_GetPortInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_GetPortInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.setBreak = function() {
    return SerialIoHandlerProxy.prototype.setBreak
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.setBreak = function() {
    var params_ = new SerialIoHandler_SetBreak_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_SetBreak_Name,
          codec.align(SerialIoHandler_SetBreak_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_SetBreak_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_SetBreak_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialIoHandlerPtr.prototype.clearBreak = function() {
    return SerialIoHandlerProxy.prototype.clearBreak
        .apply(this.ptr.getProxy(), arguments);
  };

  SerialIoHandlerProxy.prototype.clearBreak = function() {
    var params_ = new SerialIoHandler_ClearBreak_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSerialIoHandler_ClearBreak_Name,
          codec.align(SerialIoHandler_ClearBreak_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialIoHandler_ClearBreak_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialIoHandler_ClearBreak_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SerialIoHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  SerialIoHandlerStub.prototype.open = function(port, options) {
    return this.delegate_ && this.delegate_.open && this.delegate_.open(port, options);
  }
  SerialIoHandlerStub.prototype.read = function(bytes) {
    return this.delegate_ && this.delegate_.read && this.delegate_.read(bytes);
  }
  SerialIoHandlerStub.prototype.write = function(data) {
    return this.delegate_ && this.delegate_.write && this.delegate_.write(data);
  }
  SerialIoHandlerStub.prototype.cancelRead = function(reason) {
    return this.delegate_ && this.delegate_.cancelRead && this.delegate_.cancelRead(reason);
  }
  SerialIoHandlerStub.prototype.cancelWrite = function(reason) {
    return this.delegate_ && this.delegate_.cancelWrite && this.delegate_.cancelWrite(reason);
  }
  SerialIoHandlerStub.prototype.flush = function() {
    return this.delegate_ && this.delegate_.flush && this.delegate_.flush();
  }
  SerialIoHandlerStub.prototype.getControlSignals = function() {
    return this.delegate_ && this.delegate_.getControlSignals && this.delegate_.getControlSignals();
  }
  SerialIoHandlerStub.prototype.setControlSignals = function(signals) {
    return this.delegate_ && this.delegate_.setControlSignals && this.delegate_.setControlSignals(signals);
  }
  SerialIoHandlerStub.prototype.configurePort = function(options) {
    return this.delegate_ && this.delegate_.configurePort && this.delegate_.configurePort(options);
  }
  SerialIoHandlerStub.prototype.getPortInfo = function() {
    return this.delegate_ && this.delegate_.getPortInfo && this.delegate_.getPortInfo();
  }
  SerialIoHandlerStub.prototype.setBreak = function() {
    return this.delegate_ && this.delegate_.setBreak && this.delegate_.setBreak();
  }
  SerialIoHandlerStub.prototype.clearBreak = function() {
    return this.delegate_ && this.delegate_.clearBreak && this.delegate_.clearBreak();
  }

  SerialIoHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSerialIoHandler_CancelRead_Name:
      var params = reader.decodeStruct(SerialIoHandler_CancelRead_Params);
      this.cancelRead(params.reason);
      return true;
    case kSerialIoHandler_CancelWrite_Name:
      var params = reader.decodeStruct(SerialIoHandler_CancelWrite_Params);
      this.cancelWrite(params.reason);
      return true;
    default:
      return false;
    }
  };

  SerialIoHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSerialIoHandler_Open_Name:
      var params = reader.decodeStruct(SerialIoHandler_Open_Params);
      this.open(params.port, params.options).then(function(response) {
        var responseParams =
            new SerialIoHandler_Open_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_Open_Name,
            codec.align(SerialIoHandler_Open_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_Open_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_Read_Name:
      var params = reader.decodeStruct(SerialIoHandler_Read_Params);
      this.read(params.bytes).then(function(response) {
        var responseParams =
            new SerialIoHandler_Read_ResponseParams();
        responseParams.data = response.data;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_Read_Name,
            codec.align(SerialIoHandler_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_Write_Name:
      var params = reader.decodeStruct(SerialIoHandler_Write_Params);
      this.write(params.data).then(function(response) {
        var responseParams =
            new SerialIoHandler_Write_ResponseParams();
        responseParams.bytesWritten = response.bytesWritten;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_Write_Name,
            codec.align(SerialIoHandler_Write_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_Write_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_Flush_Name:
      var params = reader.decodeStruct(SerialIoHandler_Flush_Params);
      this.flush().then(function(response) {
        var responseParams =
            new SerialIoHandler_Flush_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_Flush_Name,
            codec.align(SerialIoHandler_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_GetControlSignals_Name:
      var params = reader.decodeStruct(SerialIoHandler_GetControlSignals_Params);
      this.getControlSignals().then(function(response) {
        var responseParams =
            new SerialIoHandler_GetControlSignals_ResponseParams();
        responseParams.signals = response.signals;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_GetControlSignals_Name,
            codec.align(SerialIoHandler_GetControlSignals_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_GetControlSignals_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_SetControlSignals_Name:
      var params = reader.decodeStruct(SerialIoHandler_SetControlSignals_Params);
      this.setControlSignals(params.signals).then(function(response) {
        var responseParams =
            new SerialIoHandler_SetControlSignals_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_SetControlSignals_Name,
            codec.align(SerialIoHandler_SetControlSignals_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_SetControlSignals_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_ConfigurePort_Name:
      var params = reader.decodeStruct(SerialIoHandler_ConfigurePort_Params);
      this.configurePort(params.options).then(function(response) {
        var responseParams =
            new SerialIoHandler_ConfigurePort_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_ConfigurePort_Name,
            codec.align(SerialIoHandler_ConfigurePort_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_ConfigurePort_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_GetPortInfo_Name:
      var params = reader.decodeStruct(SerialIoHandler_GetPortInfo_Params);
      this.getPortInfo().then(function(response) {
        var responseParams =
            new SerialIoHandler_GetPortInfo_ResponseParams();
        responseParams.info = response.info;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_GetPortInfo_Name,
            codec.align(SerialIoHandler_GetPortInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_GetPortInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_SetBreak_Name:
      var params = reader.decodeStruct(SerialIoHandler_SetBreak_Params);
      this.setBreak().then(function(response) {
        var responseParams =
            new SerialIoHandler_SetBreak_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_SetBreak_Name,
            codec.align(SerialIoHandler_SetBreak_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_SetBreak_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSerialIoHandler_ClearBreak_Name:
      var params = reader.decodeStruct(SerialIoHandler_ClearBreak_Params);
      this.clearBreak().then(function(response) {
        var responseParams =
            new SerialIoHandler_ClearBreak_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kSerialIoHandler_ClearBreak_Name,
            codec.align(SerialIoHandler_ClearBreak_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialIoHandler_ClearBreak_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSerialIoHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSerialIoHandler_Open_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_Open_Params;
      break;
      case kSerialIoHandler_Read_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_Read_Params;
      break;
      case kSerialIoHandler_Write_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_Write_Params;
      break;
      case kSerialIoHandler_CancelRead_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SerialIoHandler_CancelRead_Params;
      break;
      case kSerialIoHandler_CancelWrite_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SerialIoHandler_CancelWrite_Params;
      break;
      case kSerialIoHandler_Flush_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_Flush_Params;
      break;
      case kSerialIoHandler_GetControlSignals_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_GetControlSignals_Params;
      break;
      case kSerialIoHandler_SetControlSignals_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_SetControlSignals_Params;
      break;
      case kSerialIoHandler_ConfigurePort_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_ConfigurePort_Params;
      break;
      case kSerialIoHandler_GetPortInfo_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_GetPortInfo_Params;
      break;
      case kSerialIoHandler_SetBreak_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_SetBreak_Params;
      break;
      case kSerialIoHandler_ClearBreak_Name:
        if (message.expectsResponse())
          paramsClass = SerialIoHandler_ClearBreak_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSerialIoHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSerialIoHandler_Open_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_Open_ResponseParams;
        break;
      case kSerialIoHandler_Read_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_Read_ResponseParams;
        break;
      case kSerialIoHandler_Write_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_Write_ResponseParams;
        break;
      case kSerialIoHandler_Flush_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_Flush_ResponseParams;
        break;
      case kSerialIoHandler_GetControlSignals_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_GetControlSignals_ResponseParams;
        break;
      case kSerialIoHandler_SetControlSignals_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_SetControlSignals_ResponseParams;
        break;
      case kSerialIoHandler_ConfigurePort_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_ConfigurePort_ResponseParams;
        break;
      case kSerialIoHandler_GetPortInfo_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_GetPortInfo_ResponseParams;
        break;
      case kSerialIoHandler_SetBreak_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_SetBreak_ResponseParams;
        break;
      case kSerialIoHandler_ClearBreak_Name:
        if (message.isResponse())
          paramsClass = SerialIoHandler_ClearBreak_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SerialIoHandler = {
    name: 'device.mojom.SerialIoHandler',
    kVersion: 0,
    ptrClass: SerialIoHandlerPtr,
    proxyClass: SerialIoHandlerProxy,
    stubClass: SerialIoHandlerStub,
    validateRequest: validateSerialIoHandlerRequest,
    validateResponse: validateSerialIoHandlerResponse,
    mojomId: 'services/device/public/mojom/serial.mojom',
    fuzzMethods: {
      open: {
        params: SerialIoHandler_Open_Params,
      },
      read: {
        params: SerialIoHandler_Read_Params,
      },
      write: {
        params: SerialIoHandler_Write_Params,
      },
      cancelRead: {
        params: SerialIoHandler_CancelRead_Params,
      },
      cancelWrite: {
        params: SerialIoHandler_CancelWrite_Params,
      },
      flush: {
        params: SerialIoHandler_Flush_Params,
      },
      getControlSignals: {
        params: SerialIoHandler_GetControlSignals_Params,
      },
      setControlSignals: {
        params: SerialIoHandler_SetControlSignals_Params,
      },
      configurePort: {
        params: SerialIoHandler_ConfigurePort_Params,
      },
      getPortInfo: {
        params: SerialIoHandler_GetPortInfo_Params,
      },
      setBreak: {
        params: SerialIoHandler_SetBreak_Params,
      },
      clearBreak: {
        params: SerialIoHandler_ClearBreak_Params,
      },
    },
  };
  SerialIoHandlerStub.prototype.validator = validateSerialIoHandlerRequest;
  SerialIoHandlerProxy.prototype.validator = validateSerialIoHandlerResponse;
  exports.SerialSendError = SerialSendError;
  exports.SerialReceiveError = SerialReceiveError;
  exports.SerialDataBits = SerialDataBits;
  exports.SerialParityBit = SerialParityBit;
  exports.SerialStopBits = SerialStopBits;
  exports.SerialDeviceInfo = SerialDeviceInfo;
  exports.SerialConnectionOptions = SerialConnectionOptions;
  exports.SerialConnectionInfo = SerialConnectionInfo;
  exports.SerialHostControlSignals = SerialHostControlSignals;
  exports.SerialDeviceControlSignals = SerialDeviceControlSignals;
  exports.SerialDeviceEnumerator = SerialDeviceEnumerator;
  exports.SerialDeviceEnumeratorPtr = SerialDeviceEnumeratorPtr;
  exports.SerialDeviceEnumeratorAssociatedPtr = SerialDeviceEnumeratorAssociatedPtr;
  exports.SerialIoHandler = SerialIoHandler;
  exports.SerialIoHandlerPtr = SerialIoHandlerPtr;
  exports.SerialIoHandlerAssociatedPtr = SerialIoHandlerAssociatedPtr;
})();