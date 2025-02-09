// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'device/bluetooth/public/mojom/adapter.mojom';
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
  var device$ =
      mojo.internal.exposeNamespace('bluetooth.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'device/bluetooth/public/mojom/device.mojom', 'device.mojom.js');
  }


  var ConnectResult = {};
  ConnectResult.SUCCESS = 0;
  ConnectResult.AUTH_CANCELED = ConnectResult.SUCCESS + 1;
  ConnectResult.AUTH_FAILED = ConnectResult.AUTH_CANCELED + 1;
  ConnectResult.AUTH_REJECTED = ConnectResult.AUTH_FAILED + 1;
  ConnectResult.AUTH_TIMEOUT = ConnectResult.AUTH_REJECTED + 1;
  ConnectResult.FAILED = ConnectResult.AUTH_TIMEOUT + 1;
  ConnectResult.INPROGRESS = ConnectResult.FAILED + 1;
  ConnectResult.UNKNOWN = ConnectResult.INPROGRESS + 1;
  ConnectResult.UNSUPPORTED_DEVICE = ConnectResult.UNKNOWN + 1;
  ConnectResult.DEVICE_NO_LONGER_IN_RANGE = ConnectResult.UNSUPPORTED_DEVICE + 1;

  ConnectResult.isKnownEnumValue = function(value) {
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

  ConnectResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function AdapterInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterInfo.prototype.initDefaults_ = function() {
    this.address = null;
    this.name = null;
    this.initialized = false;
    this.present = false;
    this.powered = false;
    this.discoverable = false;
    this.discovering = false;
  };
  AdapterInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterInfo.generate = function(generator_) {
    var generated = new AdapterInfo;
    generated.address = generator_.generateString(false);
    generated.name = generator_.generateString(false);
    generated.initialized = generator_.generateBool();
    generated.present = generator_.generateBool();
    generated.powered = generator_.generateBool();
    generated.discoverable = generator_.generateBool();
    generated.discovering = generator_.generateBool();
    return generated;
  };

  AdapterInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.address = mutator_.mutateString(this.address, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.initialized = mutator_.mutateBool(this.initialized);
    }
    if (mutator_.chooseMutateField()) {
      this.present = mutator_.mutateBool(this.present);
    }
    if (mutator_.chooseMutateField()) {
      this.powered = mutator_.mutateBool(this.powered);
    }
    if (mutator_.chooseMutateField()) {
      this.discoverable = mutator_.mutateBool(this.discoverable);
    }
    if (mutator_.chooseMutateField()) {
      this.discovering = mutator_.mutateBool(this.discovering);
    }
    return this;
  };
  AdapterInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterInfo.validate = function(messageValidator, offset) {
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


    // validate AdapterInfo.address
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdapterInfo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;






    return validator.validationError.NONE;
  };

  AdapterInfo.encodedSize = codec.kStructHeaderSize + 24;

  AdapterInfo.decode = function(decoder) {
    var packed;
    var val = new AdapterInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.address = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.initialized = (packed >> 0) & 1 ? true : false;
    val.present = (packed >> 1) & 1 ? true : false;
    val.powered = (packed >> 2) & 1 ? true : false;
    val.discoverable = (packed >> 3) & 1 ? true : false;
    val.discovering = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AdapterInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.address);
    encoder.encodeStruct(codec.String, val.name);
    packed = 0;
    packed |= (val.initialized & 1) << 0
    packed |= (val.present & 1) << 1
    packed |= (val.powered & 1) << 2
    packed |= (val.discoverable & 1) << 3
    packed |= (val.discovering & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DiscoverySession_IsActive_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscoverySession_IsActive_Params.prototype.initDefaults_ = function() {
  };
  DiscoverySession_IsActive_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscoverySession_IsActive_Params.generate = function(generator_) {
    var generated = new DiscoverySession_IsActive_Params;
    return generated;
  };

  DiscoverySession_IsActive_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DiscoverySession_IsActive_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscoverySession_IsActive_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscoverySession_IsActive_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscoverySession_IsActive_Params.validate = function(messageValidator, offset) {
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

  DiscoverySession_IsActive_Params.encodedSize = codec.kStructHeaderSize + 0;

  DiscoverySession_IsActive_Params.decode = function(decoder) {
    var packed;
    var val = new DiscoverySession_IsActive_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DiscoverySession_IsActive_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscoverySession_IsActive_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DiscoverySession_IsActive_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscoverySession_IsActive_ResponseParams.prototype.initDefaults_ = function() {
    this.active = false;
  };
  DiscoverySession_IsActive_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscoverySession_IsActive_ResponseParams.generate = function(generator_) {
    var generated = new DiscoverySession_IsActive_ResponseParams;
    generated.active = generator_.generateBool();
    return generated;
  };

  DiscoverySession_IsActive_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.active = mutator_.mutateBool(this.active);
    }
    return this;
  };
  DiscoverySession_IsActive_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscoverySession_IsActive_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscoverySession_IsActive_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscoverySession_IsActive_ResponseParams.validate = function(messageValidator, offset) {
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

  DiscoverySession_IsActive_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DiscoverySession_IsActive_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DiscoverySession_IsActive_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.active = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DiscoverySession_IsActive_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscoverySession_IsActive_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.active & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DiscoverySession_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscoverySession_Stop_Params.prototype.initDefaults_ = function() {
  };
  DiscoverySession_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscoverySession_Stop_Params.generate = function(generator_) {
    var generated = new DiscoverySession_Stop_Params;
    return generated;
  };

  DiscoverySession_Stop_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DiscoverySession_Stop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscoverySession_Stop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscoverySession_Stop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscoverySession_Stop_Params.validate = function(messageValidator, offset) {
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

  DiscoverySession_Stop_Params.encodedSize = codec.kStructHeaderSize + 0;

  DiscoverySession_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new DiscoverySession_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DiscoverySession_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscoverySession_Stop_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DiscoverySession_Stop_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscoverySession_Stop_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  DiscoverySession_Stop_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscoverySession_Stop_ResponseParams.generate = function(generator_) {
    var generated = new DiscoverySession_Stop_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  DiscoverySession_Stop_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  DiscoverySession_Stop_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscoverySession_Stop_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscoverySession_Stop_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscoverySession_Stop_ResponseParams.validate = function(messageValidator, offset) {
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

  DiscoverySession_Stop_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DiscoverySession_Stop_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DiscoverySession_Stop_ResponseParams();
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

  DiscoverySession_Stop_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscoverySession_Stop_ResponseParams.encodedSize);
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
  function Adapter_ConnectToDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_ConnectToDevice_Params.prototype.initDefaults_ = function() {
    this.address = null;
  };
  Adapter_ConnectToDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_ConnectToDevice_Params.generate = function(generator_) {
    var generated = new Adapter_ConnectToDevice_Params;
    generated.address = generator_.generateString(false);
    return generated;
  };

  Adapter_ConnectToDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.address = mutator_.mutateString(this.address, false);
    }
    return this;
  };
  Adapter_ConnectToDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Adapter_ConnectToDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_ConnectToDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Adapter_ConnectToDevice_Params.validate = function(messageValidator, offset) {
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


    // validate Adapter_ConnectToDevice_Params.address
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Adapter_ConnectToDevice_Params.encodedSize = codec.kStructHeaderSize + 8;

  Adapter_ConnectToDevice_Params.decode = function(decoder) {
    var packed;
    var val = new Adapter_ConnectToDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.address = decoder.decodeStruct(codec.String);
    return val;
  };

  Adapter_ConnectToDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_ConnectToDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.address);
  };
  function Adapter_ConnectToDevice_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_ConnectToDevice_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.device = new device$.DevicePtr();
  };
  Adapter_ConnectToDevice_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_ConnectToDevice_ResponseParams.generate = function(generator_) {
    var generated = new Adapter_ConnectToDevice_ResponseParams;
    generated.result = generator_.generateEnum(0, 9);
    generated.device = generator_.generateInterface("bluetooth.mojom.Device", true);
    return generated;
  };

  Adapter_ConnectToDevice_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 9);
    }
    if (mutator_.chooseMutateField()) {
      this.device = mutator_.mutateInterface(this.device, "bluetooth.mojom.Device", true);
    }
    return this;
  };
  Adapter_ConnectToDevice_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.device !== null) {
      Array.prototype.push.apply(handles, ["bluetooth.mojom.DevicePtr"]);
    }
    return handles;
  };

  Adapter_ConnectToDevice_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_ConnectToDevice_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.device = handles[idx++];;
    return idx;
  };

  Adapter_ConnectToDevice_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Adapter_ConnectToDevice_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ConnectResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Adapter_ConnectToDevice_ResponseParams.device
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Adapter_ConnectToDevice_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Adapter_ConnectToDevice_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Adapter_ConnectToDevice_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    val.device = decoder.decodeStruct(new codec.NullableInterface(device$.DevicePtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Adapter_ConnectToDevice_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_ConnectToDevice_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.encodeStruct(new codec.NullableInterface(device$.DevicePtr), val.device);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Adapter_GetDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_GetDevices_Params.prototype.initDefaults_ = function() {
  };
  Adapter_GetDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_GetDevices_Params.generate = function(generator_) {
    var generated = new Adapter_GetDevices_Params;
    return generated;
  };

  Adapter_GetDevices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Adapter_GetDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Adapter_GetDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_GetDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Adapter_GetDevices_Params.validate = function(messageValidator, offset) {
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

  Adapter_GetDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  Adapter_GetDevices_Params.decode = function(decoder) {
    var packed;
    var val = new Adapter_GetDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Adapter_GetDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_GetDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Adapter_GetDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_GetDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  Adapter_GetDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_GetDevices_ResponseParams.generate = function(generator_) {
    var generated = new Adapter_GetDevices_ResponseParams;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(bluetooth.mojom.DeviceInfo, false);
    });
    return generated;
  };

  Adapter_GetDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(bluetooth.mojom.DeviceInfo, false);
      });
    }
    return this;
  };
  Adapter_GetDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Adapter_GetDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_GetDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Adapter_GetDevices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Adapter_GetDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(device$.DeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Adapter_GetDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Adapter_GetDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Adapter_GetDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(device$.DeviceInfo));
    return val;
  };

  Adapter_GetDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_GetDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(device$.DeviceInfo), val.devices);
  };
  function Adapter_GetInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_GetInfo_Params.prototype.initDefaults_ = function() {
  };
  Adapter_GetInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_GetInfo_Params.generate = function(generator_) {
    var generated = new Adapter_GetInfo_Params;
    return generated;
  };

  Adapter_GetInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Adapter_GetInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Adapter_GetInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_GetInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Adapter_GetInfo_Params.validate = function(messageValidator, offset) {
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

  Adapter_GetInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  Adapter_GetInfo_Params.decode = function(decoder) {
    var packed;
    var val = new Adapter_GetInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Adapter_GetInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_GetInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Adapter_GetInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_GetInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.info = null;
  };
  Adapter_GetInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_GetInfo_ResponseParams.generate = function(generator_) {
    var generated = new Adapter_GetInfo_ResponseParams;
    generated.info = generator_.generateStruct(bluetooth.mojom.AdapterInfo, false);
    return generated;
  };

  Adapter_GetInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(bluetooth.mojom.AdapterInfo, false);
    }
    return this;
  };
  Adapter_GetInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Adapter_GetInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_GetInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Adapter_GetInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Adapter_GetInfo_ResponseParams.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, AdapterInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Adapter_GetInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Adapter_GetInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Adapter_GetInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(AdapterInfo);
    return val;
  };

  Adapter_GetInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_GetInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(AdapterInfo, val.info);
  };
  function Adapter_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = new AdapterClientPtr();
  };
  Adapter_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_SetClient_Params.generate = function(generator_) {
    var generated = new Adapter_SetClient_Params;
    generated.client = generator_.generateInterface("bluetooth.mojom.AdapterClient", false);
    return generated;
  };

  Adapter_SetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "bluetooth.mojom.AdapterClient", false);
    }
    return this;
  };
  Adapter_SetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["bluetooth.mojom.AdapterClientPtr"]);
    }
    return handles;
  };

  Adapter_SetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_SetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  Adapter_SetClient_Params.validate = function(messageValidator, offset) {
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


    // validate Adapter_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Adapter_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  Adapter_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new Adapter_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(AdapterClientPtr));
    return val;
  };

  Adapter_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(AdapterClientPtr), val.client);
  };
  function Adapter_StartDiscoverySession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_StartDiscoverySession_Params.prototype.initDefaults_ = function() {
  };
  Adapter_StartDiscoverySession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_StartDiscoverySession_Params.generate = function(generator_) {
    var generated = new Adapter_StartDiscoverySession_Params;
    return generated;
  };

  Adapter_StartDiscoverySession_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Adapter_StartDiscoverySession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Adapter_StartDiscoverySession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_StartDiscoverySession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Adapter_StartDiscoverySession_Params.validate = function(messageValidator, offset) {
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

  Adapter_StartDiscoverySession_Params.encodedSize = codec.kStructHeaderSize + 0;

  Adapter_StartDiscoverySession_Params.decode = function(decoder) {
    var packed;
    var val = new Adapter_StartDiscoverySession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Adapter_StartDiscoverySession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_StartDiscoverySession_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Adapter_StartDiscoverySession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Adapter_StartDiscoverySession_ResponseParams.prototype.initDefaults_ = function() {
    this.session = new DiscoverySessionPtr();
  };
  Adapter_StartDiscoverySession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Adapter_StartDiscoverySession_ResponseParams.generate = function(generator_) {
    var generated = new Adapter_StartDiscoverySession_ResponseParams;
    generated.session = generator_.generateInterface("bluetooth.mojom.DiscoverySession", true);
    return generated;
  };

  Adapter_StartDiscoverySession_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.session = mutator_.mutateInterface(this.session, "bluetooth.mojom.DiscoverySession", true);
    }
    return this;
  };
  Adapter_StartDiscoverySession_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.session !== null) {
      Array.prototype.push.apply(handles, ["bluetooth.mojom.DiscoverySessionPtr"]);
    }
    return handles;
  };

  Adapter_StartDiscoverySession_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Adapter_StartDiscoverySession_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.session = handles[idx++];;
    return idx;
  };

  Adapter_StartDiscoverySession_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Adapter_StartDiscoverySession_ResponseParams.session
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Adapter_StartDiscoverySession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Adapter_StartDiscoverySession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Adapter_StartDiscoverySession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session = decoder.decodeStruct(new codec.NullableInterface(DiscoverySessionPtr));
    return val;
  };

  Adapter_StartDiscoverySession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Adapter_StartDiscoverySession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.NullableInterface(DiscoverySessionPtr), val.session);
  };
  function AdapterClient_PresentChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterClient_PresentChanged_Params.prototype.initDefaults_ = function() {
    this.present = false;
  };
  AdapterClient_PresentChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterClient_PresentChanged_Params.generate = function(generator_) {
    var generated = new AdapterClient_PresentChanged_Params;
    generated.present = generator_.generateBool();
    return generated;
  };

  AdapterClient_PresentChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.present = mutator_.mutateBool(this.present);
    }
    return this;
  };
  AdapterClient_PresentChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterClient_PresentChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterClient_PresentChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterClient_PresentChanged_Params.validate = function(messageValidator, offset) {
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

  AdapterClient_PresentChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  AdapterClient_PresentChanged_Params.decode = function(decoder) {
    var packed;
    var val = new AdapterClient_PresentChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.present = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AdapterClient_PresentChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterClient_PresentChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.present & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AdapterClient_PoweredChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterClient_PoweredChanged_Params.prototype.initDefaults_ = function() {
    this.powered = false;
  };
  AdapterClient_PoweredChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterClient_PoweredChanged_Params.generate = function(generator_) {
    var generated = new AdapterClient_PoweredChanged_Params;
    generated.powered = generator_.generateBool();
    return generated;
  };

  AdapterClient_PoweredChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.powered = mutator_.mutateBool(this.powered);
    }
    return this;
  };
  AdapterClient_PoweredChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterClient_PoweredChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterClient_PoweredChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterClient_PoweredChanged_Params.validate = function(messageValidator, offset) {
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

  AdapterClient_PoweredChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  AdapterClient_PoweredChanged_Params.decode = function(decoder) {
    var packed;
    var val = new AdapterClient_PoweredChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.powered = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AdapterClient_PoweredChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterClient_PoweredChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.powered & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AdapterClient_DiscoverableChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterClient_DiscoverableChanged_Params.prototype.initDefaults_ = function() {
    this.discoverable = false;
  };
  AdapterClient_DiscoverableChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterClient_DiscoverableChanged_Params.generate = function(generator_) {
    var generated = new AdapterClient_DiscoverableChanged_Params;
    generated.discoverable = generator_.generateBool();
    return generated;
  };

  AdapterClient_DiscoverableChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.discoverable = mutator_.mutateBool(this.discoverable);
    }
    return this;
  };
  AdapterClient_DiscoverableChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterClient_DiscoverableChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterClient_DiscoverableChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterClient_DiscoverableChanged_Params.validate = function(messageValidator, offset) {
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

  AdapterClient_DiscoverableChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  AdapterClient_DiscoverableChanged_Params.decode = function(decoder) {
    var packed;
    var val = new AdapterClient_DiscoverableChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.discoverable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AdapterClient_DiscoverableChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterClient_DiscoverableChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.discoverable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AdapterClient_DiscoveringChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterClient_DiscoveringChanged_Params.prototype.initDefaults_ = function() {
    this.discovering = false;
  };
  AdapterClient_DiscoveringChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterClient_DiscoveringChanged_Params.generate = function(generator_) {
    var generated = new AdapterClient_DiscoveringChanged_Params;
    generated.discovering = generator_.generateBool();
    return generated;
  };

  AdapterClient_DiscoveringChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.discovering = mutator_.mutateBool(this.discovering);
    }
    return this;
  };
  AdapterClient_DiscoveringChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterClient_DiscoveringChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterClient_DiscoveringChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterClient_DiscoveringChanged_Params.validate = function(messageValidator, offset) {
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

  AdapterClient_DiscoveringChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  AdapterClient_DiscoveringChanged_Params.decode = function(decoder) {
    var packed;
    var val = new AdapterClient_DiscoveringChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.discovering = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AdapterClient_DiscoveringChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterClient_DiscoveringChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.discovering & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AdapterClient_DeviceAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterClient_DeviceAdded_Params.prototype.initDefaults_ = function() {
    this.device = null;
  };
  AdapterClient_DeviceAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterClient_DeviceAdded_Params.generate = function(generator_) {
    var generated = new AdapterClient_DeviceAdded_Params;
    generated.device = generator_.generateStruct(bluetooth.mojom.DeviceInfo, false);
    return generated;
  };

  AdapterClient_DeviceAdded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.device = mutator_.mutateStruct(bluetooth.mojom.DeviceInfo, false);
    }
    return this;
  };
  AdapterClient_DeviceAdded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterClient_DeviceAdded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterClient_DeviceAdded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterClient_DeviceAdded_Params.validate = function(messageValidator, offset) {
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


    // validate AdapterClient_DeviceAdded_Params.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, device$.DeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AdapterClient_DeviceAdded_Params.encodedSize = codec.kStructHeaderSize + 8;

  AdapterClient_DeviceAdded_Params.decode = function(decoder) {
    var packed;
    var val = new AdapterClient_DeviceAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  AdapterClient_DeviceAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterClient_DeviceAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(device$.DeviceInfo, val.device);
  };
  function AdapterClient_DeviceChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterClient_DeviceChanged_Params.prototype.initDefaults_ = function() {
    this.device = null;
  };
  AdapterClient_DeviceChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterClient_DeviceChanged_Params.generate = function(generator_) {
    var generated = new AdapterClient_DeviceChanged_Params;
    generated.device = generator_.generateStruct(bluetooth.mojom.DeviceInfo, false);
    return generated;
  };

  AdapterClient_DeviceChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.device = mutator_.mutateStruct(bluetooth.mojom.DeviceInfo, false);
    }
    return this;
  };
  AdapterClient_DeviceChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterClient_DeviceChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterClient_DeviceChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterClient_DeviceChanged_Params.validate = function(messageValidator, offset) {
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


    // validate AdapterClient_DeviceChanged_Params.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, device$.DeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AdapterClient_DeviceChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  AdapterClient_DeviceChanged_Params.decode = function(decoder) {
    var packed;
    var val = new AdapterClient_DeviceChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  AdapterClient_DeviceChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterClient_DeviceChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(device$.DeviceInfo, val.device);
  };
  function AdapterClient_DeviceRemoved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdapterClient_DeviceRemoved_Params.prototype.initDefaults_ = function() {
    this.device = null;
  };
  AdapterClient_DeviceRemoved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AdapterClient_DeviceRemoved_Params.generate = function(generator_) {
    var generated = new AdapterClient_DeviceRemoved_Params;
    generated.device = generator_.generateStruct(bluetooth.mojom.DeviceInfo, false);
    return generated;
  };

  AdapterClient_DeviceRemoved_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.device = mutator_.mutateStruct(bluetooth.mojom.DeviceInfo, false);
    }
    return this;
  };
  AdapterClient_DeviceRemoved_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AdapterClient_DeviceRemoved_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AdapterClient_DeviceRemoved_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AdapterClient_DeviceRemoved_Params.validate = function(messageValidator, offset) {
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


    // validate AdapterClient_DeviceRemoved_Params.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, device$.DeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AdapterClient_DeviceRemoved_Params.encodedSize = codec.kStructHeaderSize + 8;

  AdapterClient_DeviceRemoved_Params.decode = function(decoder) {
    var packed;
    var val = new AdapterClient_DeviceRemoved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  AdapterClient_DeviceRemoved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdapterClient_DeviceRemoved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(device$.DeviceInfo, val.device);
  };
  var kDiscoverySession_IsActive_Name = 340483405;
  var kDiscoverySession_Stop_Name = 177557085;

  function DiscoverySessionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DiscoverySession,
                                                   handleOrPtrInfo);
  }

  function DiscoverySessionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DiscoverySession, associatedInterfacePtrInfo);
  }

  DiscoverySessionAssociatedPtr.prototype =
      Object.create(DiscoverySessionPtr.prototype);
  DiscoverySessionAssociatedPtr.prototype.constructor =
      DiscoverySessionAssociatedPtr;

  function DiscoverySessionProxy(receiver) {
    this.receiver_ = receiver;
  }
  DiscoverySessionPtr.prototype.isActive = function() {
    return DiscoverySessionProxy.prototype.isActive
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscoverySessionProxy.prototype.isActive = function() {
    var params_ = new DiscoverySession_IsActive_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDiscoverySession_IsActive_Name,
          codec.align(DiscoverySession_IsActive_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DiscoverySession_IsActive_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DiscoverySession_IsActive_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DiscoverySessionPtr.prototype.stop = function() {
    return DiscoverySessionProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscoverySessionProxy.prototype.stop = function() {
    var params_ = new DiscoverySession_Stop_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDiscoverySession_Stop_Name,
          codec.align(DiscoverySession_Stop_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DiscoverySession_Stop_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DiscoverySession_Stop_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DiscoverySessionStub(delegate) {
    this.delegate_ = delegate;
  }
  DiscoverySessionStub.prototype.isActive = function() {
    return this.delegate_ && this.delegate_.isActive && this.delegate_.isActive();
  }
  DiscoverySessionStub.prototype.stop = function() {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop();
  }

  DiscoverySessionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  DiscoverySessionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDiscoverySession_IsActive_Name:
      var params = reader.decodeStruct(DiscoverySession_IsActive_Params);
      this.isActive().then(function(response) {
        var responseParams =
            new DiscoverySession_IsActive_ResponseParams();
        responseParams.active = response.active;
        var builder = new codec.MessageV1Builder(
            kDiscoverySession_IsActive_Name,
            codec.align(DiscoverySession_IsActive_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DiscoverySession_IsActive_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDiscoverySession_Stop_Name:
      var params = reader.decodeStruct(DiscoverySession_Stop_Params);
      this.stop().then(function(response) {
        var responseParams =
            new DiscoverySession_Stop_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kDiscoverySession_Stop_Name,
            codec.align(DiscoverySession_Stop_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DiscoverySession_Stop_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDiscoverySessionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDiscoverySession_IsActive_Name:
        if (message.expectsResponse())
          paramsClass = DiscoverySession_IsActive_Params;
      break;
      case kDiscoverySession_Stop_Name:
        if (message.expectsResponse())
          paramsClass = DiscoverySession_Stop_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDiscoverySessionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDiscoverySession_IsActive_Name:
        if (message.isResponse())
          paramsClass = DiscoverySession_IsActive_ResponseParams;
        break;
      case kDiscoverySession_Stop_Name:
        if (message.isResponse())
          paramsClass = DiscoverySession_Stop_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DiscoverySession = {
    name: 'bluetooth.mojom.DiscoverySession',
    kVersion: 0,
    ptrClass: DiscoverySessionPtr,
    proxyClass: DiscoverySessionProxy,
    stubClass: DiscoverySessionStub,
    validateRequest: validateDiscoverySessionRequest,
    validateResponse: validateDiscoverySessionResponse,
    mojomId: 'device/bluetooth/public/mojom/adapter.mojom',
    fuzzMethods: {
      isActive: {
        params: DiscoverySession_IsActive_Params,
      },
      stop: {
        params: DiscoverySession_Stop_Params,
      },
    },
  };
  DiscoverySessionStub.prototype.validator = validateDiscoverySessionRequest;
  DiscoverySessionProxy.prototype.validator = validateDiscoverySessionResponse;
  var kAdapter_ConnectToDevice_Name = 1306584794;
  var kAdapter_GetDevices_Name = 1142962145;
  var kAdapter_GetInfo_Name = 537288616;
  var kAdapter_SetClient_Name = 593176261;
  var kAdapter_StartDiscoverySession_Name = 1474676452;

  function AdapterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Adapter,
                                                   handleOrPtrInfo);
  }

  function AdapterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Adapter, associatedInterfacePtrInfo);
  }

  AdapterAssociatedPtr.prototype =
      Object.create(AdapterPtr.prototype);
  AdapterAssociatedPtr.prototype.constructor =
      AdapterAssociatedPtr;

  function AdapterProxy(receiver) {
    this.receiver_ = receiver;
  }
  AdapterPtr.prototype.connectToDevice = function() {
    return AdapterProxy.prototype.connectToDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterProxy.prototype.connectToDevice = function(address) {
    var params_ = new Adapter_ConnectToDevice_Params();
    params_.address = address;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAdapter_ConnectToDevice_Name,
          codec.align(Adapter_ConnectToDevice_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Adapter_ConnectToDevice_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Adapter_ConnectToDevice_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AdapterPtr.prototype.getDevices = function() {
    return AdapterProxy.prototype.getDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterProxy.prototype.getDevices = function() {
    var params_ = new Adapter_GetDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAdapter_GetDevices_Name,
          codec.align(Adapter_GetDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Adapter_GetDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Adapter_GetDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AdapterPtr.prototype.getInfo = function() {
    return AdapterProxy.prototype.getInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterProxy.prototype.getInfo = function() {
    var params_ = new Adapter_GetInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAdapter_GetInfo_Name,
          codec.align(Adapter_GetInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Adapter_GetInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Adapter_GetInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AdapterPtr.prototype.setClient = function() {
    return AdapterProxy.prototype.setClient
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterProxy.prototype.setClient = function(client) {
    var params_ = new Adapter_SetClient_Params();
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kAdapter_SetClient_Name,
        codec.align(Adapter_SetClient_Params.encodedSize));
    builder.encodeStruct(Adapter_SetClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AdapterPtr.prototype.startDiscoverySession = function() {
    return AdapterProxy.prototype.startDiscoverySession
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterProxy.prototype.startDiscoverySession = function() {
    var params_ = new Adapter_StartDiscoverySession_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAdapter_StartDiscoverySession_Name,
          codec.align(Adapter_StartDiscoverySession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Adapter_StartDiscoverySession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Adapter_StartDiscoverySession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function AdapterStub(delegate) {
    this.delegate_ = delegate;
  }
  AdapterStub.prototype.connectToDevice = function(address) {
    return this.delegate_ && this.delegate_.connectToDevice && this.delegate_.connectToDevice(address);
  }
  AdapterStub.prototype.getDevices = function() {
    return this.delegate_ && this.delegate_.getDevices && this.delegate_.getDevices();
  }
  AdapterStub.prototype.getInfo = function() {
    return this.delegate_ && this.delegate_.getInfo && this.delegate_.getInfo();
  }
  AdapterStub.prototype.setClient = function(client) {
    return this.delegate_ && this.delegate_.setClient && this.delegate_.setClient(client);
  }
  AdapterStub.prototype.startDiscoverySession = function() {
    return this.delegate_ && this.delegate_.startDiscoverySession && this.delegate_.startDiscoverySession();
  }

  AdapterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAdapter_SetClient_Name:
      var params = reader.decodeStruct(Adapter_SetClient_Params);
      this.setClient(params.client);
      return true;
    default:
      return false;
    }
  };

  AdapterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAdapter_ConnectToDevice_Name:
      var params = reader.decodeStruct(Adapter_ConnectToDevice_Params);
      this.connectToDevice(params.address).then(function(response) {
        var responseParams =
            new Adapter_ConnectToDevice_ResponseParams();
        responseParams.result = response.result;
        responseParams.device = response.device;
        var builder = new codec.MessageV1Builder(
            kAdapter_ConnectToDevice_Name,
            codec.align(Adapter_ConnectToDevice_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Adapter_ConnectToDevice_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAdapter_GetDevices_Name:
      var params = reader.decodeStruct(Adapter_GetDevices_Params);
      this.getDevices().then(function(response) {
        var responseParams =
            new Adapter_GetDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageV1Builder(
            kAdapter_GetDevices_Name,
            codec.align(Adapter_GetDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Adapter_GetDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAdapter_GetInfo_Name:
      var params = reader.decodeStruct(Adapter_GetInfo_Params);
      this.getInfo().then(function(response) {
        var responseParams =
            new Adapter_GetInfo_ResponseParams();
        responseParams.info = response.info;
        var builder = new codec.MessageV1Builder(
            kAdapter_GetInfo_Name,
            codec.align(Adapter_GetInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Adapter_GetInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAdapter_StartDiscoverySession_Name:
      var params = reader.decodeStruct(Adapter_StartDiscoverySession_Params);
      this.startDiscoverySession().then(function(response) {
        var responseParams =
            new Adapter_StartDiscoverySession_ResponseParams();
        responseParams.session = response.session;
        var builder = new codec.MessageV1Builder(
            kAdapter_StartDiscoverySession_Name,
            codec.align(Adapter_StartDiscoverySession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Adapter_StartDiscoverySession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateAdapterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAdapter_ConnectToDevice_Name:
        if (message.expectsResponse())
          paramsClass = Adapter_ConnectToDevice_Params;
      break;
      case kAdapter_GetDevices_Name:
        if (message.expectsResponse())
          paramsClass = Adapter_GetDevices_Params;
      break;
      case kAdapter_GetInfo_Name:
        if (message.expectsResponse())
          paramsClass = Adapter_GetInfo_Params;
      break;
      case kAdapter_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Adapter_SetClient_Params;
      break;
      case kAdapter_StartDiscoverySession_Name:
        if (message.expectsResponse())
          paramsClass = Adapter_StartDiscoverySession_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAdapterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kAdapter_ConnectToDevice_Name:
        if (message.isResponse())
          paramsClass = Adapter_ConnectToDevice_ResponseParams;
        break;
      case kAdapter_GetDevices_Name:
        if (message.isResponse())
          paramsClass = Adapter_GetDevices_ResponseParams;
        break;
      case kAdapter_GetInfo_Name:
        if (message.isResponse())
          paramsClass = Adapter_GetInfo_ResponseParams;
        break;
      case kAdapter_StartDiscoverySession_Name:
        if (message.isResponse())
          paramsClass = Adapter_StartDiscoverySession_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Adapter = {
    name: 'bluetooth.mojom.Adapter',
    kVersion: 0,
    ptrClass: AdapterPtr,
    proxyClass: AdapterProxy,
    stubClass: AdapterStub,
    validateRequest: validateAdapterRequest,
    validateResponse: validateAdapterResponse,
    mojomId: 'device/bluetooth/public/mojom/adapter.mojom',
    fuzzMethods: {
      connectToDevice: {
        params: Adapter_ConnectToDevice_Params,
      },
      getDevices: {
        params: Adapter_GetDevices_Params,
      },
      getInfo: {
        params: Adapter_GetInfo_Params,
      },
      setClient: {
        params: Adapter_SetClient_Params,
      },
      startDiscoverySession: {
        params: Adapter_StartDiscoverySession_Params,
      },
    },
  };
  AdapterStub.prototype.validator = validateAdapterRequest;
  AdapterProxy.prototype.validator = validateAdapterResponse;
  var kAdapterClient_PresentChanged_Name = 833965209;
  var kAdapterClient_PoweredChanged_Name = 458079496;
  var kAdapterClient_DiscoverableChanged_Name = 322321863;
  var kAdapterClient_DiscoveringChanged_Name = 34513367;
  var kAdapterClient_DeviceAdded_Name = 1513877682;
  var kAdapterClient_DeviceChanged_Name = 89424536;
  var kAdapterClient_DeviceRemoved_Name = 383630257;

  function AdapterClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AdapterClient,
                                                   handleOrPtrInfo);
  }

  function AdapterClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AdapterClient, associatedInterfacePtrInfo);
  }

  AdapterClientAssociatedPtr.prototype =
      Object.create(AdapterClientPtr.prototype);
  AdapterClientAssociatedPtr.prototype.constructor =
      AdapterClientAssociatedPtr;

  function AdapterClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  AdapterClientPtr.prototype.presentChanged = function() {
    return AdapterClientProxy.prototype.presentChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterClientProxy.prototype.presentChanged = function(present) {
    var params_ = new AdapterClient_PresentChanged_Params();
    params_.present = present;
    var builder = new codec.MessageV0Builder(
        kAdapterClient_PresentChanged_Name,
        codec.align(AdapterClient_PresentChanged_Params.encodedSize));
    builder.encodeStruct(AdapterClient_PresentChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AdapterClientPtr.prototype.poweredChanged = function() {
    return AdapterClientProxy.prototype.poweredChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterClientProxy.prototype.poweredChanged = function(powered) {
    var params_ = new AdapterClient_PoweredChanged_Params();
    params_.powered = powered;
    var builder = new codec.MessageV0Builder(
        kAdapterClient_PoweredChanged_Name,
        codec.align(AdapterClient_PoweredChanged_Params.encodedSize));
    builder.encodeStruct(AdapterClient_PoweredChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AdapterClientPtr.prototype.discoverableChanged = function() {
    return AdapterClientProxy.prototype.discoverableChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterClientProxy.prototype.discoverableChanged = function(discoverable) {
    var params_ = new AdapterClient_DiscoverableChanged_Params();
    params_.discoverable = discoverable;
    var builder = new codec.MessageV0Builder(
        kAdapterClient_DiscoverableChanged_Name,
        codec.align(AdapterClient_DiscoverableChanged_Params.encodedSize));
    builder.encodeStruct(AdapterClient_DiscoverableChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AdapterClientPtr.prototype.discoveringChanged = function() {
    return AdapterClientProxy.prototype.discoveringChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterClientProxy.prototype.discoveringChanged = function(discovering) {
    var params_ = new AdapterClient_DiscoveringChanged_Params();
    params_.discovering = discovering;
    var builder = new codec.MessageV0Builder(
        kAdapterClient_DiscoveringChanged_Name,
        codec.align(AdapterClient_DiscoveringChanged_Params.encodedSize));
    builder.encodeStruct(AdapterClient_DiscoveringChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AdapterClientPtr.prototype.deviceAdded = function() {
    return AdapterClientProxy.prototype.deviceAdded
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterClientProxy.prototype.deviceAdded = function(device) {
    var params_ = new AdapterClient_DeviceAdded_Params();
    params_.device = device;
    var builder = new codec.MessageV0Builder(
        kAdapterClient_DeviceAdded_Name,
        codec.align(AdapterClient_DeviceAdded_Params.encodedSize));
    builder.encodeStruct(AdapterClient_DeviceAdded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AdapterClientPtr.prototype.deviceChanged = function() {
    return AdapterClientProxy.prototype.deviceChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterClientProxy.prototype.deviceChanged = function(device) {
    var params_ = new AdapterClient_DeviceChanged_Params();
    params_.device = device;
    var builder = new codec.MessageV0Builder(
        kAdapterClient_DeviceChanged_Name,
        codec.align(AdapterClient_DeviceChanged_Params.encodedSize));
    builder.encodeStruct(AdapterClient_DeviceChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AdapterClientPtr.prototype.deviceRemoved = function() {
    return AdapterClientProxy.prototype.deviceRemoved
        .apply(this.ptr.getProxy(), arguments);
  };

  AdapterClientProxy.prototype.deviceRemoved = function(device) {
    var params_ = new AdapterClient_DeviceRemoved_Params();
    params_.device = device;
    var builder = new codec.MessageV0Builder(
        kAdapterClient_DeviceRemoved_Name,
        codec.align(AdapterClient_DeviceRemoved_Params.encodedSize));
    builder.encodeStruct(AdapterClient_DeviceRemoved_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AdapterClientStub(delegate) {
    this.delegate_ = delegate;
  }
  AdapterClientStub.prototype.presentChanged = function(present) {
    return this.delegate_ && this.delegate_.presentChanged && this.delegate_.presentChanged(present);
  }
  AdapterClientStub.prototype.poweredChanged = function(powered) {
    return this.delegate_ && this.delegate_.poweredChanged && this.delegate_.poweredChanged(powered);
  }
  AdapterClientStub.prototype.discoverableChanged = function(discoverable) {
    return this.delegate_ && this.delegate_.discoverableChanged && this.delegate_.discoverableChanged(discoverable);
  }
  AdapterClientStub.prototype.discoveringChanged = function(discovering) {
    return this.delegate_ && this.delegate_.discoveringChanged && this.delegate_.discoveringChanged(discovering);
  }
  AdapterClientStub.prototype.deviceAdded = function(device) {
    return this.delegate_ && this.delegate_.deviceAdded && this.delegate_.deviceAdded(device);
  }
  AdapterClientStub.prototype.deviceChanged = function(device) {
    return this.delegate_ && this.delegate_.deviceChanged && this.delegate_.deviceChanged(device);
  }
  AdapterClientStub.prototype.deviceRemoved = function(device) {
    return this.delegate_ && this.delegate_.deviceRemoved && this.delegate_.deviceRemoved(device);
  }

  AdapterClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAdapterClient_PresentChanged_Name:
      var params = reader.decodeStruct(AdapterClient_PresentChanged_Params);
      this.presentChanged(params.present);
      return true;
    case kAdapterClient_PoweredChanged_Name:
      var params = reader.decodeStruct(AdapterClient_PoweredChanged_Params);
      this.poweredChanged(params.powered);
      return true;
    case kAdapterClient_DiscoverableChanged_Name:
      var params = reader.decodeStruct(AdapterClient_DiscoverableChanged_Params);
      this.discoverableChanged(params.discoverable);
      return true;
    case kAdapterClient_DiscoveringChanged_Name:
      var params = reader.decodeStruct(AdapterClient_DiscoveringChanged_Params);
      this.discoveringChanged(params.discovering);
      return true;
    case kAdapterClient_DeviceAdded_Name:
      var params = reader.decodeStruct(AdapterClient_DeviceAdded_Params);
      this.deviceAdded(params.device);
      return true;
    case kAdapterClient_DeviceChanged_Name:
      var params = reader.decodeStruct(AdapterClient_DeviceChanged_Params);
      this.deviceChanged(params.device);
      return true;
    case kAdapterClient_DeviceRemoved_Name:
      var params = reader.decodeStruct(AdapterClient_DeviceRemoved_Params);
      this.deviceRemoved(params.device);
      return true;
    default:
      return false;
    }
  };

  AdapterClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAdapterClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAdapterClient_PresentChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AdapterClient_PresentChanged_Params;
      break;
      case kAdapterClient_PoweredChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AdapterClient_PoweredChanged_Params;
      break;
      case kAdapterClient_DiscoverableChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AdapterClient_DiscoverableChanged_Params;
      break;
      case kAdapterClient_DiscoveringChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AdapterClient_DiscoveringChanged_Params;
      break;
      case kAdapterClient_DeviceAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AdapterClient_DeviceAdded_Params;
      break;
      case kAdapterClient_DeviceChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AdapterClient_DeviceChanged_Params;
      break;
      case kAdapterClient_DeviceRemoved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AdapterClient_DeviceRemoved_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAdapterClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AdapterClient = {
    name: 'bluetooth.mojom.AdapterClient',
    kVersion: 0,
    ptrClass: AdapterClientPtr,
    proxyClass: AdapterClientProxy,
    stubClass: AdapterClientStub,
    validateRequest: validateAdapterClientRequest,
    validateResponse: null,
    mojomId: 'device/bluetooth/public/mojom/adapter.mojom',
    fuzzMethods: {
      presentChanged: {
        params: AdapterClient_PresentChanged_Params,
      },
      poweredChanged: {
        params: AdapterClient_PoweredChanged_Params,
      },
      discoverableChanged: {
        params: AdapterClient_DiscoverableChanged_Params,
      },
      discoveringChanged: {
        params: AdapterClient_DiscoveringChanged_Params,
      },
      deviceAdded: {
        params: AdapterClient_DeviceAdded_Params,
      },
      deviceChanged: {
        params: AdapterClient_DeviceChanged_Params,
      },
      deviceRemoved: {
        params: AdapterClient_DeviceRemoved_Params,
      },
    },
  };
  AdapterClientStub.prototype.validator = validateAdapterClientRequest;
  AdapterClientProxy.prototype.validator = null;
  exports.ConnectResult = ConnectResult;
  exports.AdapterInfo = AdapterInfo;
  exports.DiscoverySession = DiscoverySession;
  exports.DiscoverySessionPtr = DiscoverySessionPtr;
  exports.DiscoverySessionAssociatedPtr = DiscoverySessionAssociatedPtr;
  exports.Adapter = Adapter;
  exports.AdapterPtr = AdapterPtr;
  exports.AdapterAssociatedPtr = AdapterAssociatedPtr;
  exports.AdapterClient = AdapterClient;
  exports.AdapterClientPtr = AdapterClientPtr;
  exports.AdapterClientAssociatedPtr = AdapterClientAssociatedPtr;
})();