// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/capture/mojom/video_capture_types.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('media.mojom');
  var mailbox_holder$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/mailbox_holder.mojom', '../../../gpu/ipc/common/mailbox_holder.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../mojo/public/mojom/base/values.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var VideoCapturePixelFormat = {};
  VideoCapturePixelFormat.I420 = 0;
  VideoCapturePixelFormat.Y16 = VideoCapturePixelFormat.I420 + 1;
  VideoCapturePixelFormat.ARGB = VideoCapturePixelFormat.Y16 + 1;

  VideoCapturePixelFormat.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  VideoCapturePixelFormat.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ResolutionChangePolicy = {};
  ResolutionChangePolicy.FIXED_RESOLUTION = 0;
  ResolutionChangePolicy.FIXED_ASPECT_RATIO = ResolutionChangePolicy.FIXED_RESOLUTION + 1;
  ResolutionChangePolicy.ANY_WITHIN_LIMIT = ResolutionChangePolicy.FIXED_ASPECT_RATIO + 1;

  ResolutionChangePolicy.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ResolutionChangePolicy.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PowerLineFrequency = {};
  PowerLineFrequency.DEFAULT = 0;
  PowerLineFrequency.HZ_50 = PowerLineFrequency.DEFAULT + 1;
  PowerLineFrequency.HZ_60 = PowerLineFrequency.HZ_50 + 1;

  PowerLineFrequency.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PowerLineFrequency.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var VideoCaptureApi = {};
  VideoCaptureApi.LINUX_V4L2_SINGLE_PLANE = 0;
  VideoCaptureApi.WIN_MEDIA_FOUNDATION = VideoCaptureApi.LINUX_V4L2_SINGLE_PLANE + 1;
  VideoCaptureApi.WIN_MEDIA_FOUNDATION_SENSOR = VideoCaptureApi.WIN_MEDIA_FOUNDATION + 1;
  VideoCaptureApi.WIN_DIRECT_SHOW = VideoCaptureApi.WIN_MEDIA_FOUNDATION_SENSOR + 1;
  VideoCaptureApi.MACOSX_AVFOUNDATION = VideoCaptureApi.WIN_DIRECT_SHOW + 1;
  VideoCaptureApi.MACOSX_DECKLINK = VideoCaptureApi.MACOSX_AVFOUNDATION + 1;
  VideoCaptureApi.ANDROID_API1 = VideoCaptureApi.MACOSX_DECKLINK + 1;
  VideoCaptureApi.ANDROID_API2_LEGACY = VideoCaptureApi.ANDROID_API1 + 1;
  VideoCaptureApi.ANDROID_API2_FULL = VideoCaptureApi.ANDROID_API2_LEGACY + 1;
  VideoCaptureApi.ANDROID_API2_LIMITED = VideoCaptureApi.ANDROID_API2_FULL + 1;
  VideoCaptureApi.UNKNOWN = VideoCaptureApi.ANDROID_API2_LIMITED + 1;

  VideoCaptureApi.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  VideoCaptureApi.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var VideoCaptureTransportType = {};
  VideoCaptureTransportType.MACOSX_USB_OR_BUILT_IN = 0;
  VideoCaptureTransportType.OTHER_TRANSPORT = VideoCaptureTransportType.MACOSX_USB_OR_BUILT_IN + 1;

  VideoCaptureTransportType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  VideoCaptureTransportType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function VideoCaptureFormat(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoCaptureFormat.prototype.initDefaults_ = function() {
    this.frameSize = null;
    this.frameRate = 0;
    this.pixelFormat = 0;
  };
  VideoCaptureFormat.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoCaptureFormat.generate = function(generator_) {
    var generated = new VideoCaptureFormat;
    generated.frameSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.frameRate = generator_.generateFloat();
    generated.pixelFormat = generator_.generateEnum(0, 2);
    return generated;
  };

  VideoCaptureFormat.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameRate = mutator_.mutateFloat(this.frameRate);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelFormat = mutator_.mutateEnum(this.pixelFormat, 0, 2);
    }
    return this;
  };
  VideoCaptureFormat.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoCaptureFormat.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoCaptureFormat.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoCaptureFormat.validate = function(messageValidator, offset) {
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


    // validate VideoCaptureFormat.frameSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate VideoCaptureFormat.pixelFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, VideoCapturePixelFormat);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoCaptureFormat.encodedSize = codec.kStructHeaderSize + 16;

  VideoCaptureFormat.decode = function(decoder) {
    var packed;
    var val = new VideoCaptureFormat();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSize = decoder.decodeStructPointer(geometry$.Size);
    val.frameRate = decoder.decodeStruct(codec.Float);
    val.pixelFormat = decoder.decodeStruct(codec.Int32);
    return val;
  };

  VideoCaptureFormat.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoCaptureFormat.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.frameSize);
    encoder.encodeStruct(codec.Float, val.frameRate);
    encoder.encodeStruct(codec.Int32, val.pixelFormat);
  };
  function VideoCaptureParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoCaptureParams.prototype.initDefaults_ = function() {
    this.requestedFormat = null;
    this.resolutionChangePolicy = 0;
    this.powerLineFrequency = 0;
  };
  VideoCaptureParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoCaptureParams.generate = function(generator_) {
    var generated = new VideoCaptureParams;
    generated.requestedFormat = generator_.generateStruct(media.mojom.VideoCaptureFormat, false);
    generated.resolutionChangePolicy = generator_.generateEnum(0, 2);
    generated.powerLineFrequency = generator_.generateEnum(0, 2);
    return generated;
  };

  VideoCaptureParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestedFormat = mutator_.mutateStruct(media.mojom.VideoCaptureFormat, false);
    }
    if (mutator_.chooseMutateField()) {
      this.resolutionChangePolicy = mutator_.mutateEnum(this.resolutionChangePolicy, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.powerLineFrequency = mutator_.mutateEnum(this.powerLineFrequency, 0, 2);
    }
    return this;
  };
  VideoCaptureParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoCaptureParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoCaptureParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoCaptureParams.validate = function(messageValidator, offset) {
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


    // validate VideoCaptureParams.requestedFormat
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VideoCaptureFormat, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureParams.resolutionChangePolicy
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ResolutionChangePolicy);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureParams.powerLineFrequency
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, PowerLineFrequency);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoCaptureParams.encodedSize = codec.kStructHeaderSize + 16;

  VideoCaptureParams.decode = function(decoder) {
    var packed;
    var val = new VideoCaptureParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestedFormat = decoder.decodeStructPointer(VideoCaptureFormat);
    val.resolutionChangePolicy = decoder.decodeStruct(codec.Int32);
    val.powerLineFrequency = decoder.decodeStruct(codec.Int32);
    return val;
  };

  VideoCaptureParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoCaptureParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VideoCaptureFormat, val.requestedFormat);
    encoder.encodeStruct(codec.Int32, val.resolutionChangePolicy);
    encoder.encodeStruct(codec.Int32, val.powerLineFrequency);
  };
  function VideoFrameInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoFrameInfo.prototype.initDefaults_ = function() {
    this.timestamp = null;
    this.metadata = null;
    this.pixelFormat = 0;
    this.codedSize = null;
    this.visibleRect = null;
  };
  VideoFrameInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoFrameInfo.generate = function(generator_) {
    var generated = new VideoFrameInfo;
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.metadata = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    generated.pixelFormat = generator_.generateEnum(0, 2);
    generated.codedSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.visibleRect = generator_.generateStruct(gfx.mojom.Rect, false);
    return generated;
  };

  VideoFrameInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelFormat = mutator_.mutateEnum(this.pixelFormat, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.codedSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.visibleRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    return this;
  };
  VideoFrameInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoFrameInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoFrameInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoFrameInfo.validate = function(messageValidator, offset) {
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


    // validate VideoFrameInfo.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoFrameInfo.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoFrameInfo.pixelFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, VideoCapturePixelFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoFrameInfo.codedSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoFrameInfo.visibleRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoFrameInfo.encodedSize = codec.kStructHeaderSize + 40;

  VideoFrameInfo.decode = function(decoder) {
    var packed;
    var val = new VideoFrameInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.timestamp = decoder.decodeStructPointer(time$.TimeDelta);
    val.metadata = decoder.decodeStructPointer(values$.DictionaryValue);
    val.pixelFormat = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.codedSize = decoder.decodeStructPointer(geometry$.Size);
    val.visibleRect = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  VideoFrameInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoFrameInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.timestamp);
    encoder.encodeStructPointer(values$.DictionaryValue, val.metadata);
    encoder.encodeStruct(codec.Int32, val.pixelFormat);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.codedSize);
    encoder.encodeStructPointer(geometry$.Rect, val.visibleRect);
  };
  function VideoCaptureDeviceDescriptorCameraCalibration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoCaptureDeviceDescriptorCameraCalibration.prototype.initDefaults_ = function() {
    this.focalLengthX = 0;
    this.focalLengthY = 0;
    this.depthNear = 0;
    this.depthFar = 0;
  };
  VideoCaptureDeviceDescriptorCameraCalibration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoCaptureDeviceDescriptorCameraCalibration.generate = function(generator_) {
    var generated = new VideoCaptureDeviceDescriptorCameraCalibration;
    generated.focalLengthX = generator_.generateDouble();
    generated.focalLengthY = generator_.generateDouble();
    generated.depthNear = generator_.generateDouble();
    generated.depthFar = generator_.generateDouble();
    return generated;
  };

  VideoCaptureDeviceDescriptorCameraCalibration.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.focalLengthX = mutator_.mutateDouble(this.focalLengthX);
    }
    if (mutator_.chooseMutateField()) {
      this.focalLengthY = mutator_.mutateDouble(this.focalLengthY);
    }
    if (mutator_.chooseMutateField()) {
      this.depthNear = mutator_.mutateDouble(this.depthNear);
    }
    if (mutator_.chooseMutateField()) {
      this.depthFar = mutator_.mutateDouble(this.depthFar);
    }
    return this;
  };
  VideoCaptureDeviceDescriptorCameraCalibration.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoCaptureDeviceDescriptorCameraCalibration.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoCaptureDeviceDescriptorCameraCalibration.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoCaptureDeviceDescriptorCameraCalibration.validate = function(messageValidator, offset) {
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





    return validator.validationError.NONE;
  };

  VideoCaptureDeviceDescriptorCameraCalibration.encodedSize = codec.kStructHeaderSize + 32;

  VideoCaptureDeviceDescriptorCameraCalibration.decode = function(decoder) {
    var packed;
    var val = new VideoCaptureDeviceDescriptorCameraCalibration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.focalLengthX = decoder.decodeStruct(codec.Double);
    val.focalLengthY = decoder.decodeStruct(codec.Double);
    val.depthNear = decoder.decodeStruct(codec.Double);
    val.depthFar = decoder.decodeStruct(codec.Double);
    return val;
  };

  VideoCaptureDeviceDescriptorCameraCalibration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoCaptureDeviceDescriptorCameraCalibration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.focalLengthX);
    encoder.encodeStruct(codec.Double, val.focalLengthY);
    encoder.encodeStruct(codec.Double, val.depthNear);
    encoder.encodeStruct(codec.Double, val.depthFar);
  };
  function VideoCaptureDeviceDescriptor(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoCaptureDeviceDescriptor.prototype.initDefaults_ = function() {
    this.displayName = null;
    this.deviceId = null;
    this.modelId = null;
    this.captureApi = 0;
    this.transportType = 0;
    this.cameraCalibration = null;
  };
  VideoCaptureDeviceDescriptor.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoCaptureDeviceDescriptor.generate = function(generator_) {
    var generated = new VideoCaptureDeviceDescriptor;
    generated.displayName = generator_.generateString(false);
    generated.deviceId = generator_.generateString(false);
    generated.modelId = generator_.generateString(false);
    generated.captureApi = generator_.generateEnum(0, 10);
    generated.transportType = generator_.generateEnum(0, 1);
    generated.cameraCalibration = generator_.generateStruct(media.mojom.VideoCaptureDeviceDescriptorCameraCalibration, true);
    return generated;
  };

  VideoCaptureDeviceDescriptor.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayName = mutator_.mutateString(this.displayName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.modelId = mutator_.mutateString(this.modelId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.captureApi = mutator_.mutateEnum(this.captureApi, 0, 10);
    }
    if (mutator_.chooseMutateField()) {
      this.transportType = mutator_.mutateEnum(this.transportType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.cameraCalibration = mutator_.mutateStruct(media.mojom.VideoCaptureDeviceDescriptorCameraCalibration, true);
    }
    return this;
  };
  VideoCaptureDeviceDescriptor.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoCaptureDeviceDescriptor.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoCaptureDeviceDescriptor.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoCaptureDeviceDescriptor.validate = function(messageValidator, offset) {
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


    // validate VideoCaptureDeviceDescriptor.displayName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureDeviceDescriptor.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureDeviceDescriptor.modelId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureDeviceDescriptor.captureApi
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, VideoCaptureApi);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureDeviceDescriptor.transportType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 28, VideoCaptureTransportType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureDeviceDescriptor.cameraCalibration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, VideoCaptureDeviceDescriptorCameraCalibration, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoCaptureDeviceDescriptor.encodedSize = codec.kStructHeaderSize + 40;

  VideoCaptureDeviceDescriptor.decode = function(decoder) {
    var packed;
    var val = new VideoCaptureDeviceDescriptor();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayName = decoder.decodeStruct(codec.String);
    val.deviceId = decoder.decodeStruct(codec.String);
    val.modelId = decoder.decodeStruct(codec.String);
    val.captureApi = decoder.decodeStruct(codec.Int32);
    val.transportType = decoder.decodeStruct(codec.Int32);
    val.cameraCalibration = decoder.decodeStructPointer(VideoCaptureDeviceDescriptorCameraCalibration);
    return val;
  };

  VideoCaptureDeviceDescriptor.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoCaptureDeviceDescriptor.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.displayName);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStruct(codec.String, val.modelId);
    encoder.encodeStruct(codec.Int32, val.captureApi);
    encoder.encodeStruct(codec.Int32, val.transportType);
    encoder.encodeStructPointer(VideoCaptureDeviceDescriptorCameraCalibration, val.cameraCalibration);
  };
  function VideoCaptureDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoCaptureDeviceInfo.prototype.initDefaults_ = function() {
    this.descriptor = null;
    this.supportedFormats = null;
  };
  VideoCaptureDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoCaptureDeviceInfo.generate = function(generator_) {
    var generated = new VideoCaptureDeviceInfo;
    generated.descriptor = generator_.generateStruct(media.mojom.VideoCaptureDeviceDescriptor, false);
    generated.supportedFormats = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.VideoCaptureFormat, false);
    });
    return generated;
  };

  VideoCaptureDeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.descriptor = mutator_.mutateStruct(media.mojom.VideoCaptureDeviceDescriptor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.supportedFormats = mutator_.mutateArray(this.supportedFormats, function(val) {
        return mutator_.mutateStruct(media.mojom.VideoCaptureFormat, false);
      });
    }
    return this;
  };
  VideoCaptureDeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoCaptureDeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoCaptureDeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoCaptureDeviceInfo.validate = function(messageValidator, offset) {
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


    // validate VideoCaptureDeviceInfo.descriptor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VideoCaptureDeviceDescriptor, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoCaptureDeviceInfo.supportedFormats
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(VideoCaptureFormat), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoCaptureDeviceInfo.encodedSize = codec.kStructHeaderSize + 16;

  VideoCaptureDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new VideoCaptureDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.descriptor = decoder.decodeStructPointer(VideoCaptureDeviceDescriptor);
    val.supportedFormats = decoder.decodeArrayPointer(new codec.PointerTo(VideoCaptureFormat));
    return val;
  };

  VideoCaptureDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoCaptureDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VideoCaptureDeviceDescriptor, val.descriptor);
    encoder.encodeArrayPointer(new codec.PointerTo(VideoCaptureFormat), val.supportedFormats);
  };
  function MailboxBufferHandleSet(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MailboxBufferHandleSet.prototype.initDefaults_ = function() {
    this.mailboxHolder = null;
  };
  MailboxBufferHandleSet.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MailboxBufferHandleSet.generate = function(generator_) {
    var generated = new MailboxBufferHandleSet;
    generated.mailboxHolder = generator_.generateArray(function() {
      return generator_.generateStruct(gpu.mojom.MailboxHolder, false);
    });
    return generated;
  };

  MailboxBufferHandleSet.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mailboxHolder = mutator_.mutateArray(this.mailboxHolder, function(val) {
        return mutator_.mutateStruct(gpu.mojom.MailboxHolder, false);
      });
    }
    return this;
  };
  MailboxBufferHandleSet.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MailboxBufferHandleSet.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MailboxBufferHandleSet.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MailboxBufferHandleSet.validate = function(messageValidator, offset) {
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


    // validate MailboxBufferHandleSet.mailboxHolder
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(mailbox_holder$.MailboxHolder), false, [4], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MailboxBufferHandleSet.encodedSize = codec.kStructHeaderSize + 8;

  MailboxBufferHandleSet.decode = function(decoder) {
    var packed;
    var val = new MailboxBufferHandleSet();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mailboxHolder = decoder.decodeArrayPointer(new codec.PointerTo(mailbox_holder$.MailboxHolder));
    return val;
  };

  MailboxBufferHandleSet.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MailboxBufferHandleSet.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(mailbox_holder$.MailboxHolder), val.mailboxHolder);
  };

  function VideoBufferHandle(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  VideoBufferHandle.Tags = {
    sharedBufferHandle: 0,
    mailboxHandles: 1,
  };

  VideoBufferHandle.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  VideoBufferHandle.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "sharedBufferHandle",
        "mailboxHandles",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a VideoBufferHandle member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  VideoBufferHandle.generate = function(generator_) {
    var generated = new VideoBufferHandle;
    var generators = [
      {
        field: "sharedBufferHandle",

        generator: function() { return generator_.generateSharedBuffer(false); },
      },
      {
        field: "mailboxHandles",

        generator: function() { return generator_.generateStruct(media.mojom.MailboxBufferHandleSet, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  VideoBufferHandle.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "sharedBufferHandle",

        mutator: function() { return mutator_.mutateSharedBuffer(this.sharedBufferHandle, false); },
      },
      {
        field: "mailboxHandles",

        mutator: function() { return mutator_.mutateStruct(media.mojom.MailboxBufferHandleSet, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  VideoBufferHandle.prototype.getHandleDeps = function() {
    if (this.$tag == VideoBufferHandle.Tags.sharedBufferHandle) {
      return ["handle<shared_buffer>"];
    }
    return [];
  }
  VideoBufferHandle.prototype.setHandles = function() {
    if (this.$tag == VideoBufferHandle.Tags.sharedBufferHandle) {
      return this.sharedBufferHandle = handles[idx++];;
    }
    return [];
  }
  Object.defineProperty(VideoBufferHandle.prototype, "sharedBufferHandle", {
    get: function() {
      if (this.$tag != VideoBufferHandle.Tags.sharedBufferHandle) {
        throw new ReferenceError(
            "VideoBufferHandle.sharedBufferHandle is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = VideoBufferHandle.Tags.sharedBufferHandle;
      this.$data = value;
    }
  });
  Object.defineProperty(VideoBufferHandle.prototype, "mailboxHandles", {
    get: function() {
      if (this.$tag != VideoBufferHandle.Tags.mailboxHandles) {
        throw new ReferenceError(
            "VideoBufferHandle.mailboxHandles is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = VideoBufferHandle.Tags.mailboxHandles;
      this.$data = value;
    }
  });


    VideoBufferHandle.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case VideoBufferHandle.Tags.sharedBufferHandle:
          encoder.encodeStruct(codec.Handle, val.sharedBufferHandle);
          break;
        case VideoBufferHandle.Tags.mailboxHandles:
          encoder.encodeStructPointer(MailboxBufferHandleSet, val.mailboxHandles);
          break;
      }
      encoder.align();
    };


    VideoBufferHandle.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new VideoBufferHandle();
      var tag = decoder.readUint32();
      switch (tag) {
        case VideoBufferHandle.Tags.sharedBufferHandle:
          result.sharedBufferHandle = decoder.decodeStruct(codec.Handle);
          break;
        case VideoBufferHandle.Tags.mailboxHandles:
          result.mailboxHandles = decoder.decodeStructPointer(MailboxBufferHandleSet);
          break;
      }
      decoder.align();

      return result;
    };


    VideoBufferHandle.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case VideoBufferHandle.Tags.sharedBufferHandle:
          

    // validate VideoBufferHandle.sharedBufferHandle
    err = messageValidator.validateHandle(data_offset, false)
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case VideoBufferHandle.Tags.mailboxHandles:
          

    // validate VideoBufferHandle.mailboxHandles
    err = messageValidator.validateStructPointer(data_offset, MailboxBufferHandleSet, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  VideoBufferHandle.encodedSize = 16;
  exports.VideoCapturePixelFormat = VideoCapturePixelFormat;
  exports.ResolutionChangePolicy = ResolutionChangePolicy;
  exports.PowerLineFrequency = PowerLineFrequency;
  exports.VideoCaptureApi = VideoCaptureApi;
  exports.VideoCaptureTransportType = VideoCaptureTransportType;
  exports.VideoCaptureFormat = VideoCaptureFormat;
  exports.VideoCaptureParams = VideoCaptureParams;
  exports.VideoFrameInfo = VideoFrameInfo;
  exports.VideoCaptureDeviceDescriptorCameraCalibration = VideoCaptureDeviceDescriptorCameraCalibration;
  exports.VideoCaptureDeviceDescriptor = VideoCaptureDeviceDescriptor;
  exports.VideoCaptureDeviceInfo = VideoCaptureDeviceInfo;
  exports.MailboxBufferHandleSet = MailboxBufferHandleSet;
  exports.VideoBufferHandle = VideoBufferHandle;
})();