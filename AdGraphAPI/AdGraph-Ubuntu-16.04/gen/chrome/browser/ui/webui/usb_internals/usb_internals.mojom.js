// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/browser/ui/webui/usb_internals/usb_internals.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojom');
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function TestDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestDeviceInfo.prototype.initDefaults_ = function() {
    this.guid = null;
    this.name = null;
    this.serialNumber = null;
    this.landingPage = null;
  };
  TestDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TestDeviceInfo.generate = function(generator_) {
    var generated = new TestDeviceInfo;
    generated.guid = generator_.generateString(false);
    generated.name = generator_.generateString(false);
    generated.serialNumber = generator_.generateString(false);
    generated.landingPage = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  TestDeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.guid = mutator_.mutateString(this.guid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.serialNumber = mutator_.mutateString(this.serialNumber, false);
    }
    if (mutator_.chooseMutateField()) {
      this.landingPage = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  TestDeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TestDeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TestDeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TestDeviceInfo.validate = function(messageValidator, offset) {
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


    // validate TestDeviceInfo.guid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TestDeviceInfo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TestDeviceInfo.serialNumber
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TestDeviceInfo.landingPage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestDeviceInfo.encodedSize = codec.kStructHeaderSize + 32;

  TestDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new TestDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.guid = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.serialNumber = decoder.decodeStruct(codec.String);
    val.landingPage = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  TestDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.guid);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.serialNumber);
    encoder.encodeStructPointer(url$.Url, val.landingPage);
  };
  function UsbInternalsPageHandler_AddDeviceForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.initDefaults_ = function() {
    this.name = null;
    this.serialNumber = null;
    this.landingPage = null;
  };
  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbInternalsPageHandler_AddDeviceForTesting_Params.generate = function(generator_) {
    var generated = new UsbInternalsPageHandler_AddDeviceForTesting_Params;
    generated.name = generator_.generateString(false);
    generated.serialNumber = generator_.generateString(false);
    generated.landingPage = generator_.generateString(false);
    return generated;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.serialNumber = mutator_.mutateString(this.serialNumber, false);
    }
    if (mutator_.chooseMutateField()) {
      this.landingPage = mutator_.mutateString(this.landingPage, false);
    }
    return this;
  };
  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.validate = function(messageValidator, offset) {
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


    // validate UsbInternalsPageHandler_AddDeviceForTesting_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbInternalsPageHandler_AddDeviceForTesting_Params.serialNumber
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UsbInternalsPageHandler_AddDeviceForTesting_Params.landingPage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.encodedSize = codec.kStructHeaderSize + 24;

  UsbInternalsPageHandler_AddDeviceForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_AddDeviceForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.serialNumber = decoder.decodeStruct(codec.String);
    val.landingPage = decoder.decodeStruct(codec.String);
    return val;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_AddDeviceForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.serialNumber);
    encoder.encodeStruct(codec.String, val.landingPage);
  };
  function UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.message = null;
  };
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.generate = function(generator_) {
    var generated = new UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams;
    generated.success = generator_.generateBool();
    generated.message = generator_.generateString(false);
    return generated;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams();
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
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encodedSize);
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
    encoder.encodeStruct(codec.String, val.message);
  };
  function UsbInternalsPageHandler_RemoveDeviceForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.initDefaults_ = function() {
    this.guid = null;
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.generate = function(generator_) {
    var generated = new UsbInternalsPageHandler_RemoveDeviceForTesting_Params;
    generated.guid = generator_.generateString(false);
    return generated;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.guid = mutator_.mutateString(this.guid, false);
    }
    return this;
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.validate = function(messageValidator, offset) {
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


    // validate UsbInternalsPageHandler_RemoveDeviceForTesting_Params.guid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encodedSize = codec.kStructHeaderSize + 8;

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_RemoveDeviceForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.guid = decoder.decodeStruct(codec.String);
    return val;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.guid);
  };
  function UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.initDefaults_ = function() {
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.generate = function(generator_) {
    var generated = new UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams;
    return generated;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.validate = function(messageValidator, offset) {
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

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbInternalsPageHandler_GetTestDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_GetTestDevices_Params.prototype.initDefaults_ = function() {
  };
  UsbInternalsPageHandler_GetTestDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbInternalsPageHandler_GetTestDevices_Params.generate = function(generator_) {
    var generated = new UsbInternalsPageHandler_GetTestDevices_Params;
    return generated;
  };

  UsbInternalsPageHandler_GetTestDevices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  UsbInternalsPageHandler_GetTestDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbInternalsPageHandler_GetTestDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbInternalsPageHandler_GetTestDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbInternalsPageHandler_GetTestDevices_Params.validate = function(messageValidator, offset) {
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

  UsbInternalsPageHandler_GetTestDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  UsbInternalsPageHandler_GetTestDevices_Params.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_GetTestDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbInternalsPageHandler_GetTestDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_GetTestDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbInternalsPageHandler_GetTestDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UsbInternalsPageHandler_GetTestDevices_ResponseParams.generate = function(generator_) {
    var generated = new UsbInternalsPageHandler_GetTestDevices_ResponseParams;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.TestDeviceInfo, false);
    });
    return generated;
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(mojom.TestDeviceInfo, false);
      });
    }
    return this;
  };
  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate UsbInternalsPageHandler_GetTestDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(TestDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_GetTestDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(TestDeviceInfo));
    return val;
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_GetTestDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(TestDeviceInfo), val.devices);
  };
  var kUsbInternalsPageHandler_AddDeviceForTesting_Name = 2073738460;
  var kUsbInternalsPageHandler_RemoveDeviceForTesting_Name = 1510216647;
  var kUsbInternalsPageHandler_GetTestDevices_Name = 845878185;

  function UsbInternalsPageHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UsbInternalsPageHandler,
                                                   handleOrPtrInfo);
  }

  function UsbInternalsPageHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UsbInternalsPageHandler, associatedInterfacePtrInfo);
  }

  UsbInternalsPageHandlerAssociatedPtr.prototype =
      Object.create(UsbInternalsPageHandlerPtr.prototype);
  UsbInternalsPageHandlerAssociatedPtr.prototype.constructor =
      UsbInternalsPageHandlerAssociatedPtr;

  function UsbInternalsPageHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  UsbInternalsPageHandlerPtr.prototype.addDeviceForTesting = function() {
    return UsbInternalsPageHandlerProxy.prototype.addDeviceForTesting
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbInternalsPageHandlerProxy.prototype.addDeviceForTesting = function(name, serialNumber, landingPage) {
    var params_ = new UsbInternalsPageHandler_AddDeviceForTesting_Params();
    params_.name = name;
    params_.serialNumber = serialNumber;
    params_.landingPage = landingPage;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbInternalsPageHandler_AddDeviceForTesting_Name,
          codec.align(UsbInternalsPageHandler_AddDeviceForTesting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbInternalsPageHandlerPtr.prototype.removeDeviceForTesting = function() {
    return UsbInternalsPageHandlerProxy.prototype.removeDeviceForTesting
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbInternalsPageHandlerProxy.prototype.removeDeviceForTesting = function(guid) {
    var params_ = new UsbInternalsPageHandler_RemoveDeviceForTesting_Params();
    params_.guid = guid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbInternalsPageHandler_RemoveDeviceForTesting_Name,
          codec.align(UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbInternalsPageHandlerPtr.prototype.getTestDevices = function() {
    return UsbInternalsPageHandlerProxy.prototype.getTestDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  UsbInternalsPageHandlerProxy.prototype.getTestDevices = function() {
    var params_ = new UsbInternalsPageHandler_GetTestDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUsbInternalsPageHandler_GetTestDevices_Name,
          codec.align(UsbInternalsPageHandler_GetTestDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbInternalsPageHandler_GetTestDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbInternalsPageHandler_GetTestDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function UsbInternalsPageHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  UsbInternalsPageHandlerStub.prototype.addDeviceForTesting = function(name, serialNumber, landingPage) {
    return this.delegate_ && this.delegate_.addDeviceForTesting && this.delegate_.addDeviceForTesting(name, serialNumber, landingPage);
  }
  UsbInternalsPageHandlerStub.prototype.removeDeviceForTesting = function(guid) {
    return this.delegate_ && this.delegate_.removeDeviceForTesting && this.delegate_.removeDeviceForTesting(guid);
  }
  UsbInternalsPageHandlerStub.prototype.getTestDevices = function() {
    return this.delegate_ && this.delegate_.getTestDevices && this.delegate_.getTestDevices();
  }

  UsbInternalsPageHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  UsbInternalsPageHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUsbInternalsPageHandler_AddDeviceForTesting_Name:
      var params = reader.decodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_Params);
      this.addDeviceForTesting(params.name, params.serialNumber, params.landingPage).then(function(response) {
        var responseParams =
            new UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams();
        responseParams.success = response.success;
        responseParams.message = response.message;
        var builder = new codec.MessageV1Builder(
            kUsbInternalsPageHandler_AddDeviceForTesting_Name,
            codec.align(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbInternalsPageHandler_RemoveDeviceForTesting_Name:
      var params = reader.decodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_Params);
      this.removeDeviceForTesting(params.guid).then(function(response) {
        var responseParams =
            new UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kUsbInternalsPageHandler_RemoveDeviceForTesting_Name,
            codec.align(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUsbInternalsPageHandler_GetTestDevices_Name:
      var params = reader.decodeStruct(UsbInternalsPageHandler_GetTestDevices_Params);
      this.getTestDevices().then(function(response) {
        var responseParams =
            new UsbInternalsPageHandler_GetTestDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageV1Builder(
            kUsbInternalsPageHandler_GetTestDevices_Name,
            codec.align(UsbInternalsPageHandler_GetTestDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbInternalsPageHandler_GetTestDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateUsbInternalsPageHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUsbInternalsPageHandler_AddDeviceForTesting_Name:
        if (message.expectsResponse())
          paramsClass = UsbInternalsPageHandler_AddDeviceForTesting_Params;
      break;
      case kUsbInternalsPageHandler_RemoveDeviceForTesting_Name:
        if (message.expectsResponse())
          paramsClass = UsbInternalsPageHandler_RemoveDeviceForTesting_Params;
      break;
      case kUsbInternalsPageHandler_GetTestDevices_Name:
        if (message.expectsResponse())
          paramsClass = UsbInternalsPageHandler_GetTestDevices_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUsbInternalsPageHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUsbInternalsPageHandler_AddDeviceForTesting_Name:
        if (message.isResponse())
          paramsClass = UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams;
        break;
      case kUsbInternalsPageHandler_RemoveDeviceForTesting_Name:
        if (message.isResponse())
          paramsClass = UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams;
        break;
      case kUsbInternalsPageHandler_GetTestDevices_Name:
        if (message.isResponse())
          paramsClass = UsbInternalsPageHandler_GetTestDevices_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var UsbInternalsPageHandler = {
    name: 'mojom.UsbInternalsPageHandler',
    kVersion: 0,
    ptrClass: UsbInternalsPageHandlerPtr,
    proxyClass: UsbInternalsPageHandlerProxy,
    stubClass: UsbInternalsPageHandlerStub,
    validateRequest: validateUsbInternalsPageHandlerRequest,
    validateResponse: validateUsbInternalsPageHandlerResponse,
    mojomId: 'chrome/browser/ui/webui/usb_internals/usb_internals.mojom',
    fuzzMethods: {
      addDeviceForTesting: {
        params: UsbInternalsPageHandler_AddDeviceForTesting_Params,
      },
      removeDeviceForTesting: {
        params: UsbInternalsPageHandler_RemoveDeviceForTesting_Params,
      },
      getTestDevices: {
        params: UsbInternalsPageHandler_GetTestDevices_Params,
      },
    },
  };
  UsbInternalsPageHandlerStub.prototype.validator = validateUsbInternalsPageHandlerRequest;
  UsbInternalsPageHandlerProxy.prototype.validator = validateUsbInternalsPageHandlerResponse;
  exports.TestDeviceInfo = TestDeviceInfo;
  exports.UsbInternalsPageHandler = UsbInternalsPageHandler;
  exports.UsbInternalsPageHandlerPtr = UsbInternalsPageHandlerPtr;
  exports.UsbInternalsPageHandlerAssociatedPtr = UsbInternalsPageHandlerAssociatedPtr;
})();