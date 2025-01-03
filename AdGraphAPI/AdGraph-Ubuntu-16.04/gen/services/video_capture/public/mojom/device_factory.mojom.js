// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/device_factory.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('videoCapture.mojom');
  var video_capture_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/capture/mojom/video_capture_types.mojom', '../../../../media/capture/mojom/video_capture_types.mojom.js');
  }
  var device$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/device.mojom', 'device.mojom.js');
  }
  var producer$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/producer.mojom', 'producer.mojom.js');
  }
  var virtual_device$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/virtual_device.mojom', 'virtual_device.mojom.js');
  }


  var DeviceAccessResultCode = {};
  DeviceAccessResultCode.NOT_INITIALIZED = 0;
  DeviceAccessResultCode.SUCCESS = DeviceAccessResultCode.NOT_INITIALIZED + 1;
  DeviceAccessResultCode.ERROR_DEVICE_NOT_FOUND = DeviceAccessResultCode.SUCCESS + 1;

  DeviceAccessResultCode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  DeviceAccessResultCode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function DeviceFactory_GetDeviceInfos_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactory_GetDeviceInfos_Params.prototype.initDefaults_ = function() {
  };
  DeviceFactory_GetDeviceInfos_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactory_GetDeviceInfos_Params.generate = function(generator_) {
    var generated = new DeviceFactory_GetDeviceInfos_Params;
    return generated;
  };

  DeviceFactory_GetDeviceInfos_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DeviceFactory_GetDeviceInfos_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DeviceFactory_GetDeviceInfos_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactory_GetDeviceInfos_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DeviceFactory_GetDeviceInfos_Params.validate = function(messageValidator, offset) {
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

  DeviceFactory_GetDeviceInfos_Params.encodedSize = codec.kStructHeaderSize + 0;

  DeviceFactory_GetDeviceInfos_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceFactory_GetDeviceInfos_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DeviceFactory_GetDeviceInfos_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactory_GetDeviceInfos_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DeviceFactory_GetDeviceInfos_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactory_GetDeviceInfos_ResponseParams.prototype.initDefaults_ = function() {
    this.deviceInfos = null;
  };
  DeviceFactory_GetDeviceInfos_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactory_GetDeviceInfos_ResponseParams.generate = function(generator_) {
    var generated = new DeviceFactory_GetDeviceInfos_ResponseParams;
    generated.deviceInfos = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.VideoCaptureDeviceInfo, false);
    });
    return generated;
  };

  DeviceFactory_GetDeviceInfos_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceInfos = mutator_.mutateArray(this.deviceInfos, function(val) {
        return mutator_.mutateStruct(media.mojom.VideoCaptureDeviceInfo, false);
      });
    }
    return this;
  };
  DeviceFactory_GetDeviceInfos_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DeviceFactory_GetDeviceInfos_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactory_GetDeviceInfos_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DeviceFactory_GetDeviceInfos_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate DeviceFactory_GetDeviceInfos_ResponseParams.deviceInfos
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(video_capture_types$.VideoCaptureDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceFactory_GetDeviceInfos_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DeviceFactory_GetDeviceInfos_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DeviceFactory_GetDeviceInfos_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceInfos = decoder.decodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureDeviceInfo));
    return val;
  };

  DeviceFactory_GetDeviceInfos_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactory_GetDeviceInfos_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureDeviceInfo), val.deviceInfos);
  };
  function DeviceFactory_CreateDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactory_CreateDevice_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
    this.deviceRequest = new bindings.InterfaceRequest();
  };
  DeviceFactory_CreateDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactory_CreateDevice_Params.generate = function(generator_) {
    var generated = new DeviceFactory_CreateDevice_Params;
    generated.deviceId = generator_.generateString(false);
    generated.deviceRequest = generator_.generateInterfaceRequest("videoCapture.mojom.Device", false);
    return generated;
  };

  DeviceFactory_CreateDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceRequest = mutator_.mutateInterfaceRequest(this.deviceRequest, "videoCapture.mojom.Device", false);
    }
    return this;
  };
  DeviceFactory_CreateDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.deviceRequest !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.DeviceRequest"]);
    }
    return handles;
  };

  DeviceFactory_CreateDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactory_CreateDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.deviceRequest = handles[idx++];;
    return idx;
  };

  DeviceFactory_CreateDevice_Params.validate = function(messageValidator, offset) {
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


    // validate DeviceFactory_CreateDevice_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DeviceFactory_CreateDevice_Params.deviceRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceFactory_CreateDevice_Params.encodedSize = codec.kStructHeaderSize + 16;

  DeviceFactory_CreateDevice_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceFactory_CreateDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    val.deviceRequest = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceFactory_CreateDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactory_CreateDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStruct(codec.InterfaceRequest, val.deviceRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DeviceFactory_CreateDevice_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactory_CreateDevice_ResponseParams.prototype.initDefaults_ = function() {
    this.resultCode = 0;
  };
  DeviceFactory_CreateDevice_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactory_CreateDevice_ResponseParams.generate = function(generator_) {
    var generated = new DeviceFactory_CreateDevice_ResponseParams;
    generated.resultCode = generator_.generateEnum(0, 2);
    return generated;
  };

  DeviceFactory_CreateDevice_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.resultCode = mutator_.mutateEnum(this.resultCode, 0, 2);
    }
    return this;
  };
  DeviceFactory_CreateDevice_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DeviceFactory_CreateDevice_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactory_CreateDevice_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DeviceFactory_CreateDevice_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate DeviceFactory_CreateDevice_ResponseParams.resultCode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DeviceAccessResultCode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceFactory_CreateDevice_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DeviceFactory_CreateDevice_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DeviceFactory_CreateDevice_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resultCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceFactory_CreateDevice_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactory_CreateDevice_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.resultCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DeviceFactory_AddSharedMemoryVirtualDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactory_AddSharedMemoryVirtualDevice_Params.prototype.initDefaults_ = function() {
    this.deviceInfo = null;
    this.producer = new producer$.ProducerPtr();
    this.virtualDevice = new bindings.InterfaceRequest();
  };
  DeviceFactory_AddSharedMemoryVirtualDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactory_AddSharedMemoryVirtualDevice_Params.generate = function(generator_) {
    var generated = new DeviceFactory_AddSharedMemoryVirtualDevice_Params;
    generated.deviceInfo = generator_.generateStruct(media.mojom.VideoCaptureDeviceInfo, false);
    generated.producer = generator_.generateInterface("videoCapture.mojom.Producer", false);
    generated.virtualDevice = generator_.generateInterfaceRequest("videoCapture.mojom.SharedMemoryVirtualDevice", false);
    return generated;
  };

  DeviceFactory_AddSharedMemoryVirtualDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceInfo = mutator_.mutateStruct(media.mojom.VideoCaptureDeviceInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.producer = mutator_.mutateInterface(this.producer, "videoCapture.mojom.Producer", false);
    }
    if (mutator_.chooseMutateField()) {
      this.virtualDevice = mutator_.mutateInterfaceRequest(this.virtualDevice, "videoCapture.mojom.SharedMemoryVirtualDevice", false);
    }
    return this;
  };
  DeviceFactory_AddSharedMemoryVirtualDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.producer !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.ProducerPtr"]);
    }
    if (this.virtualDevice !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.SharedMemoryVirtualDeviceRequest"]);
    }
    return handles;
  };

  DeviceFactory_AddSharedMemoryVirtualDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactory_AddSharedMemoryVirtualDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.producer = handles[idx++];;
    this.virtualDevice = handles[idx++];;
    return idx;
  };

  DeviceFactory_AddSharedMemoryVirtualDevice_Params.validate = function(messageValidator, offset) {
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


    // validate DeviceFactory_AddSharedMemoryVirtualDevice_Params.deviceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, video_capture_types$.VideoCaptureDeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DeviceFactory_AddSharedMemoryVirtualDevice_Params.producer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DeviceFactory_AddSharedMemoryVirtualDevice_Params.virtualDevice
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceFactory_AddSharedMemoryVirtualDevice_Params.encodedSize = codec.kStructHeaderSize + 24;

  DeviceFactory_AddSharedMemoryVirtualDevice_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceFactory_AddSharedMemoryVirtualDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceInfo = decoder.decodeStructPointer(video_capture_types$.VideoCaptureDeviceInfo);
    val.producer = decoder.decodeStruct(new codec.Interface(producer$.ProducerPtr));
    val.virtualDevice = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceFactory_AddSharedMemoryVirtualDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactory_AddSharedMemoryVirtualDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(video_capture_types$.VideoCaptureDeviceInfo, val.deviceInfo);
    encoder.encodeStruct(new codec.Interface(producer$.ProducerPtr), val.producer);
    encoder.encodeStruct(codec.InterfaceRequest, val.virtualDevice);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DeviceFactory_AddTextureVirtualDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactory_AddTextureVirtualDevice_Params.prototype.initDefaults_ = function() {
    this.deviceInfo = null;
    this.virtualDevice = new bindings.InterfaceRequest();
  };
  DeviceFactory_AddTextureVirtualDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactory_AddTextureVirtualDevice_Params.generate = function(generator_) {
    var generated = new DeviceFactory_AddTextureVirtualDevice_Params;
    generated.deviceInfo = generator_.generateStruct(media.mojom.VideoCaptureDeviceInfo, false);
    generated.virtualDevice = generator_.generateInterfaceRequest("videoCapture.mojom.TextureVirtualDevice", false);
    return generated;
  };

  DeviceFactory_AddTextureVirtualDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceInfo = mutator_.mutateStruct(media.mojom.VideoCaptureDeviceInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.virtualDevice = mutator_.mutateInterfaceRequest(this.virtualDevice, "videoCapture.mojom.TextureVirtualDevice", false);
    }
    return this;
  };
  DeviceFactory_AddTextureVirtualDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.virtualDevice !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.TextureVirtualDeviceRequest"]);
    }
    return handles;
  };

  DeviceFactory_AddTextureVirtualDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactory_AddTextureVirtualDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.virtualDevice = handles[idx++];;
    return idx;
  };

  DeviceFactory_AddTextureVirtualDevice_Params.validate = function(messageValidator, offset) {
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


    // validate DeviceFactory_AddTextureVirtualDevice_Params.deviceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, video_capture_types$.VideoCaptureDeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DeviceFactory_AddTextureVirtualDevice_Params.virtualDevice
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceFactory_AddTextureVirtualDevice_Params.encodedSize = codec.kStructHeaderSize + 16;

  DeviceFactory_AddTextureVirtualDevice_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceFactory_AddTextureVirtualDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceInfo = decoder.decodeStructPointer(video_capture_types$.VideoCaptureDeviceInfo);
    val.virtualDevice = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceFactory_AddTextureVirtualDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactory_AddTextureVirtualDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(video_capture_types$.VideoCaptureDeviceInfo, val.deviceInfo);
    encoder.encodeStruct(codec.InterfaceRequest, val.virtualDevice);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDeviceFactory_GetDeviceInfos_Name = 665015271;
  var kDeviceFactory_CreateDevice_Name = 399109294;
  var kDeviceFactory_AddSharedMemoryVirtualDevice_Name = 1098533106;
  var kDeviceFactory_AddTextureVirtualDevice_Name = 159117196;

  function DeviceFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DeviceFactory,
                                                   handleOrPtrInfo);
  }

  function DeviceFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DeviceFactory, associatedInterfacePtrInfo);
  }

  DeviceFactoryAssociatedPtr.prototype =
      Object.create(DeviceFactoryPtr.prototype);
  DeviceFactoryAssociatedPtr.prototype.constructor =
      DeviceFactoryAssociatedPtr;

  function DeviceFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  DeviceFactoryPtr.prototype.getDeviceInfos = function() {
    return DeviceFactoryProxy.prototype.getDeviceInfos
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceFactoryProxy.prototype.getDeviceInfos = function() {
    var params_ = new DeviceFactory_GetDeviceInfos_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDeviceFactory_GetDeviceInfos_Name,
          codec.align(DeviceFactory_GetDeviceInfos_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DeviceFactory_GetDeviceInfos_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DeviceFactory_GetDeviceInfos_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DeviceFactoryPtr.prototype.createDevice = function() {
    return DeviceFactoryProxy.prototype.createDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceFactoryProxy.prototype.createDevice = function(deviceId, deviceRequest) {
    var params_ = new DeviceFactory_CreateDevice_Params();
    params_.deviceId = deviceId;
    params_.deviceRequest = deviceRequest;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDeviceFactory_CreateDevice_Name,
          codec.align(DeviceFactory_CreateDevice_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DeviceFactory_CreateDevice_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DeviceFactory_CreateDevice_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DeviceFactoryPtr.prototype.addSharedMemoryVirtualDevice = function() {
    return DeviceFactoryProxy.prototype.addSharedMemoryVirtualDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceFactoryProxy.prototype.addSharedMemoryVirtualDevice = function(deviceInfo, producer, virtualDevice) {
    var params_ = new DeviceFactory_AddSharedMemoryVirtualDevice_Params();
    params_.deviceInfo = deviceInfo;
    params_.producer = producer;
    params_.virtualDevice = virtualDevice;
    var builder = new codec.MessageV0Builder(
        kDeviceFactory_AddSharedMemoryVirtualDevice_Name,
        codec.align(DeviceFactory_AddSharedMemoryVirtualDevice_Params.encodedSize));
    builder.encodeStruct(DeviceFactory_AddSharedMemoryVirtualDevice_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DeviceFactoryPtr.prototype.addTextureVirtualDevice = function() {
    return DeviceFactoryProxy.prototype.addTextureVirtualDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceFactoryProxy.prototype.addTextureVirtualDevice = function(deviceInfo, virtualDevice) {
    var params_ = new DeviceFactory_AddTextureVirtualDevice_Params();
    params_.deviceInfo = deviceInfo;
    params_.virtualDevice = virtualDevice;
    var builder = new codec.MessageV0Builder(
        kDeviceFactory_AddTextureVirtualDevice_Name,
        codec.align(DeviceFactory_AddTextureVirtualDevice_Params.encodedSize));
    builder.encodeStruct(DeviceFactory_AddTextureVirtualDevice_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DeviceFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  DeviceFactoryStub.prototype.getDeviceInfos = function() {
    return this.delegate_ && this.delegate_.getDeviceInfos && this.delegate_.getDeviceInfos();
  }
  DeviceFactoryStub.prototype.createDevice = function(deviceId, deviceRequest) {
    return this.delegate_ && this.delegate_.createDevice && this.delegate_.createDevice(deviceId, deviceRequest);
  }
  DeviceFactoryStub.prototype.addSharedMemoryVirtualDevice = function(deviceInfo, producer, virtualDevice) {
    return this.delegate_ && this.delegate_.addSharedMemoryVirtualDevice && this.delegate_.addSharedMemoryVirtualDevice(deviceInfo, producer, virtualDevice);
  }
  DeviceFactoryStub.prototype.addTextureVirtualDevice = function(deviceInfo, virtualDevice) {
    return this.delegate_ && this.delegate_.addTextureVirtualDevice && this.delegate_.addTextureVirtualDevice(deviceInfo, virtualDevice);
  }

  DeviceFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceFactory_AddSharedMemoryVirtualDevice_Name:
      var params = reader.decodeStruct(DeviceFactory_AddSharedMemoryVirtualDevice_Params);
      this.addSharedMemoryVirtualDevice(params.deviceInfo, params.producer, params.virtualDevice);
      return true;
    case kDeviceFactory_AddTextureVirtualDevice_Name:
      var params = reader.decodeStruct(DeviceFactory_AddTextureVirtualDevice_Params);
      this.addTextureVirtualDevice(params.deviceInfo, params.virtualDevice);
      return true;
    default:
      return false;
    }
  };

  DeviceFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceFactory_GetDeviceInfos_Name:
      var params = reader.decodeStruct(DeviceFactory_GetDeviceInfos_Params);
      this.getDeviceInfos().then(function(response) {
        var responseParams =
            new DeviceFactory_GetDeviceInfos_ResponseParams();
        responseParams.deviceInfos = response.deviceInfos;
        var builder = new codec.MessageV1Builder(
            kDeviceFactory_GetDeviceInfos_Name,
            codec.align(DeviceFactory_GetDeviceInfos_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DeviceFactory_GetDeviceInfos_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDeviceFactory_CreateDevice_Name:
      var params = reader.decodeStruct(DeviceFactory_CreateDevice_Params);
      this.createDevice(params.deviceId, params.deviceRequest).then(function(response) {
        var responseParams =
            new DeviceFactory_CreateDevice_ResponseParams();
        responseParams.resultCode = response.resultCode;
        var builder = new codec.MessageV1Builder(
            kDeviceFactory_CreateDevice_Name,
            codec.align(DeviceFactory_CreateDevice_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DeviceFactory_CreateDevice_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDeviceFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDeviceFactory_GetDeviceInfos_Name:
        if (message.expectsResponse())
          paramsClass = DeviceFactory_GetDeviceInfos_Params;
      break;
      case kDeviceFactory_CreateDevice_Name:
        if (message.expectsResponse())
          paramsClass = DeviceFactory_CreateDevice_Params;
      break;
      case kDeviceFactory_AddSharedMemoryVirtualDevice_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceFactory_AddSharedMemoryVirtualDevice_Params;
      break;
      case kDeviceFactory_AddTextureVirtualDevice_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceFactory_AddTextureVirtualDevice_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceFactoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDeviceFactory_GetDeviceInfos_Name:
        if (message.isResponse())
          paramsClass = DeviceFactory_GetDeviceInfos_ResponseParams;
        break;
      case kDeviceFactory_CreateDevice_Name:
        if (message.isResponse())
          paramsClass = DeviceFactory_CreateDevice_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DeviceFactory = {
    name: 'video_capture.mojom.DeviceFactory',
    kVersion: 0,
    ptrClass: DeviceFactoryPtr,
    proxyClass: DeviceFactoryProxy,
    stubClass: DeviceFactoryStub,
    validateRequest: validateDeviceFactoryRequest,
    validateResponse: validateDeviceFactoryResponse,
    mojomId: 'services/video_capture/public/mojom/device_factory.mojom',
    fuzzMethods: {
      getDeviceInfos: {
        params: DeviceFactory_GetDeviceInfos_Params,
      },
      createDevice: {
        params: DeviceFactory_CreateDevice_Params,
      },
      addSharedMemoryVirtualDevice: {
        params: DeviceFactory_AddSharedMemoryVirtualDevice_Params,
      },
      addTextureVirtualDevice: {
        params: DeviceFactory_AddTextureVirtualDevice_Params,
      },
    },
  };
  DeviceFactoryStub.prototype.validator = validateDeviceFactoryRequest;
  DeviceFactoryProxy.prototype.validator = validateDeviceFactoryResponse;
  exports.DeviceAccessResultCode = DeviceAccessResultCode;
  exports.DeviceFactory = DeviceFactory;
  exports.DeviceFactoryPtr = DeviceFactoryPtr;
  exports.DeviceFactoryAssociatedPtr = DeviceFactoryAssociatedPtr;
})();