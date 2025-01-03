// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/gpu_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gpu.mojom');
  var dx_diag_node$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/dx_diag_node.mojom', 'dx_diag_node.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var VideoCodecProfile = {};
  VideoCodecProfile.VIDEO_CODEC_PROFILE_UNKNOWN = -1;
  VideoCodecProfile.H264PROFILE_BASELINE = 0;
  VideoCodecProfile.H264PROFILE_MAIN = VideoCodecProfile.H264PROFILE_BASELINE + 1;
  VideoCodecProfile.H264PROFILE_EXTENDED = VideoCodecProfile.H264PROFILE_MAIN + 1;
  VideoCodecProfile.H264PROFILE_HIGH = VideoCodecProfile.H264PROFILE_EXTENDED + 1;
  VideoCodecProfile.H264PROFILE_HIGH10PROFILE = VideoCodecProfile.H264PROFILE_HIGH + 1;
  VideoCodecProfile.H264PROFILE_HIGH422PROFILE = VideoCodecProfile.H264PROFILE_HIGH10PROFILE + 1;
  VideoCodecProfile.H264PROFILE_HIGH444PREDICTIVEPROFILE = VideoCodecProfile.H264PROFILE_HIGH422PROFILE + 1;
  VideoCodecProfile.H264PROFILE_SCALABLEBASELINE = VideoCodecProfile.H264PROFILE_HIGH444PREDICTIVEPROFILE + 1;
  VideoCodecProfile.H264PROFILE_SCALABLEHIGH = VideoCodecProfile.H264PROFILE_SCALABLEBASELINE + 1;
  VideoCodecProfile.H264PROFILE_STEREOHIGH = VideoCodecProfile.H264PROFILE_SCALABLEHIGH + 1;
  VideoCodecProfile.H264PROFILE_MULTIVIEWHIGH = VideoCodecProfile.H264PROFILE_STEREOHIGH + 1;
  VideoCodecProfile.VP8PROFILE_ANY = VideoCodecProfile.H264PROFILE_MULTIVIEWHIGH + 1;
  VideoCodecProfile.VP9PROFILE_PROFILE0 = VideoCodecProfile.VP8PROFILE_ANY + 1;
  VideoCodecProfile.VP9PROFILE_PROFILE1 = VideoCodecProfile.VP9PROFILE_PROFILE0 + 1;
  VideoCodecProfile.VP9PROFILE_PROFILE2 = VideoCodecProfile.VP9PROFILE_PROFILE1 + 1;
  VideoCodecProfile.VP9PROFILE_PROFILE3 = VideoCodecProfile.VP9PROFILE_PROFILE2 + 1;
  VideoCodecProfile.HEVCPROFILE_MAIN = VideoCodecProfile.VP9PROFILE_PROFILE3 + 1;
  VideoCodecProfile.HEVCPROFILE_MAIN10 = VideoCodecProfile.HEVCPROFILE_MAIN + 1;
  VideoCodecProfile.HEVCPROFILE_MAIN_STILL_PICTURE = VideoCodecProfile.HEVCPROFILE_MAIN10 + 1;
  VideoCodecProfile.DOLBYVISION_PROFILE0 = VideoCodecProfile.HEVCPROFILE_MAIN_STILL_PICTURE + 1;
  VideoCodecProfile.DOLBYVISION_PROFILE4 = VideoCodecProfile.DOLBYVISION_PROFILE0 + 1;
  VideoCodecProfile.DOLBYVISION_PROFILE5 = VideoCodecProfile.DOLBYVISION_PROFILE4 + 1;
  VideoCodecProfile.DOLBYVISION_PROFILE7 = VideoCodecProfile.DOLBYVISION_PROFILE5 + 1;
  VideoCodecProfile.THEORAPROFILE_ANY = VideoCodecProfile.DOLBYVISION_PROFILE7 + 1;
  VideoCodecProfile.AV1PROFILE_PROFILE0 = VideoCodecProfile.THEORAPROFILE_ANY + 1;

  VideoCodecProfile.isKnownEnumValue = function(value) {
    switch (value) {
    case -1:
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
      return true;
    }
    return false;
  };

  VideoCodecProfile.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function GpuDevice(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuDevice.prototype.initDefaults_ = function() {
    this.vendorId = 0;
    this.deviceId = 0;
    this.active = false;
    this.vendorString = null;
    this.deviceString = null;
  };
  GpuDevice.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuDevice.generate = function(generator_) {
    var generated = new GpuDevice;
    generated.vendorId = generator_.generateUint32();
    generated.deviceId = generator_.generateUint32();
    generated.active = generator_.generateBool();
    generated.vendorString = generator_.generateString(false);
    generated.deviceString = generator_.generateString(false);
    return generated;
  };

  GpuDevice.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.vendorId = mutator_.mutateUint32(this.vendorId);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateUint32(this.deviceId);
    }
    if (mutator_.chooseMutateField()) {
      this.active = mutator_.mutateBool(this.active);
    }
    if (mutator_.chooseMutateField()) {
      this.vendorString = mutator_.mutateString(this.vendorString, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceString = mutator_.mutateString(this.deviceString, false);
    }
    return this;
  };
  GpuDevice.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuDevice.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuDevice.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuDevice.validate = function(messageValidator, offset) {
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





    // validate GpuDevice.vendorString
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuDevice.deviceString
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuDevice.encodedSize = codec.kStructHeaderSize + 32;

  GpuDevice.decode = function(decoder) {
    var packed;
    var val = new GpuDevice();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vendorId = decoder.decodeStruct(codec.Uint32);
    val.deviceId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.active = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.vendorString = decoder.decodeStruct(codec.String);
    val.deviceString = decoder.decodeStruct(codec.String);
    return val;
  };

  GpuDevice.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuDevice.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.vendorId);
    encoder.encodeStruct(codec.Uint32, val.deviceId);
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
    encoder.encodeStruct(codec.String, val.vendorString);
    encoder.encodeStruct(codec.String, val.deviceString);
  };
  function VideoDecodeAcceleratorSupportedProfile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAcceleratorSupportedProfile.prototype.initDefaults_ = function() {
    this.profile = 0;
    this.encryptedOnly = false;
    this.maxResolution = null;
    this.minResolution = null;
  };
  VideoDecodeAcceleratorSupportedProfile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAcceleratorSupportedProfile.generate = function(generator_) {
    var generated = new VideoDecodeAcceleratorSupportedProfile;
    generated.profile = generator_.generateEnum(0, 24);
    generated.maxResolution = generator_.generateStruct(gfx.mojom.Size, false);
    generated.minResolution = generator_.generateStruct(gfx.mojom.Size, false);
    generated.encryptedOnly = generator_.generateBool();
    return generated;
  };

  VideoDecodeAcceleratorSupportedProfile.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.profile = mutator_.mutateEnum(this.profile, 0, 24);
    }
    if (mutator_.chooseMutateField()) {
      this.maxResolution = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.minResolution = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.encryptedOnly = mutator_.mutateBool(this.encryptedOnly);
    }
    return this;
  };
  VideoDecodeAcceleratorSupportedProfile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAcceleratorSupportedProfile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAcceleratorSupportedProfile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAcceleratorSupportedProfile.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAcceleratorSupportedProfile.profile
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoCodecProfile);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecodeAcceleratorSupportedProfile.maxResolution
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecodeAcceleratorSupportedProfile.minResolution
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoDecodeAcceleratorSupportedProfile.encodedSize = codec.kStructHeaderSize + 24;

  VideoDecodeAcceleratorSupportedProfile.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAcceleratorSupportedProfile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.profile = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.encryptedOnly = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxResolution = decoder.decodeStructPointer(geometry$.Size);
    val.minResolution = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  VideoDecodeAcceleratorSupportedProfile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAcceleratorSupportedProfile.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.profile);
    packed = 0;
    packed |= (val.encryptedOnly & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.maxResolution);
    encoder.encodeStructPointer(geometry$.Size, val.minResolution);
  };
  function VideoDecodeAcceleratorCapabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAcceleratorCapabilities.prototype.initDefaults_ = function() {
    this.supportedProfiles = null;
    this.flags = 0;
  };
  VideoDecodeAcceleratorCapabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAcceleratorCapabilities.generate = function(generator_) {
    var generated = new VideoDecodeAcceleratorCapabilities;
    generated.supportedProfiles = generator_.generateArray(function() {
      return generator_.generateStruct(gpu.mojom.VideoDecodeAcceleratorSupportedProfile, false);
    });
    generated.flags = generator_.generateUint32();
    return generated;
  };

  VideoDecodeAcceleratorCapabilities.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.supportedProfiles = mutator_.mutateArray(this.supportedProfiles, function(val) {
        return mutator_.mutateStruct(gpu.mojom.VideoDecodeAcceleratorSupportedProfile, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateUint32(this.flags);
    }
    return this;
  };
  VideoDecodeAcceleratorCapabilities.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAcceleratorCapabilities.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAcceleratorCapabilities.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAcceleratorCapabilities.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAcceleratorCapabilities.supportedProfiles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(VideoDecodeAcceleratorSupportedProfile), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoDecodeAcceleratorCapabilities.encodedSize = codec.kStructHeaderSize + 16;

  VideoDecodeAcceleratorCapabilities.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAcceleratorCapabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.supportedProfiles = decoder.decodeArrayPointer(new codec.PointerTo(VideoDecodeAcceleratorSupportedProfile));
    val.flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeAcceleratorCapabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAcceleratorCapabilities.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(VideoDecodeAcceleratorSupportedProfile), val.supportedProfiles);
    encoder.encodeStruct(codec.Uint32, val.flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoEncodeAcceleratorSupportedProfile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAcceleratorSupportedProfile.prototype.initDefaults_ = function() {
    this.profile = 0;
    this.maxFramerateNumerator = 0;
    this.maxResolution = null;
    this.maxFramerateDenominator = 0;
  };
  VideoEncodeAcceleratorSupportedProfile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAcceleratorSupportedProfile.generate = function(generator_) {
    var generated = new VideoEncodeAcceleratorSupportedProfile;
    generated.profile = generator_.generateEnum(0, 24);
    generated.maxResolution = generator_.generateStruct(gfx.mojom.Size, false);
    generated.maxFramerateNumerator = generator_.generateUint32();
    generated.maxFramerateDenominator = generator_.generateUint32();
    return generated;
  };

  VideoEncodeAcceleratorSupportedProfile.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.profile = mutator_.mutateEnum(this.profile, 0, 24);
    }
    if (mutator_.chooseMutateField()) {
      this.maxResolution = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxFramerateNumerator = mutator_.mutateUint32(this.maxFramerateNumerator);
    }
    if (mutator_.chooseMutateField()) {
      this.maxFramerateDenominator = mutator_.mutateUint32(this.maxFramerateDenominator);
    }
    return this;
  };
  VideoEncodeAcceleratorSupportedProfile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAcceleratorSupportedProfile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAcceleratorSupportedProfile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAcceleratorSupportedProfile.validate = function(messageValidator, offset) {
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


    // validate VideoEncodeAcceleratorSupportedProfile.profile
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoCodecProfile);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncodeAcceleratorSupportedProfile.maxResolution
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VideoEncodeAcceleratorSupportedProfile.encodedSize = codec.kStructHeaderSize + 24;

  VideoEncodeAcceleratorSupportedProfile.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAcceleratorSupportedProfile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.profile = decoder.decodeStruct(codec.Int32);
    val.maxFramerateNumerator = decoder.decodeStruct(codec.Uint32);
    val.maxResolution = decoder.decodeStructPointer(geometry$.Size);
    val.maxFramerateDenominator = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoEncodeAcceleratorSupportedProfile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAcceleratorSupportedProfile.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.profile);
    encoder.encodeStruct(codec.Uint32, val.maxFramerateNumerator);
    encoder.encodeStructPointer(geometry$.Size, val.maxResolution);
    encoder.encodeStruct(codec.Uint32, val.maxFramerateDenominator);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuInfo.prototype.initDefaults_ = function() {
    this.initializationTime = null;
    this.optimus = false;
    this.amdSwitchable = false;
    this.softwareRendering = false;
    this.directRendering = false;
    this.sandboxed = false;
    this.inProcessGpu = false;
    this.passthroughCmdDecoder = false;
    this.directComposition = false;
    this.supportsOverlays = false;
    this.canSupportThreadedTextureMailbox = false;
    this.jpegDecodeAcceleratorSupported = false;
    this.glResetNotificationStrategy = 0;
    this.gpu = null;
    this.secondaryGpus = null;
    this.driverVendor = null;
    this.driverVersion = null;
    this.driverDate = null;
    this.pixelShaderVersion = null;
    this.vertexShaderVersion = null;
    this.maxMsaaSamples = null;
    this.machineModelName = null;
    this.machineModelVersion = null;
    this.glVersion = null;
    this.glVendor = null;
    this.glRenderer = null;
    this.glExtensions = null;
    this.glWsVendor = null;
    this.glWsVersion = null;
    this.glWsExtensions = null;
    this.videoDecodeAcceleratorCapabilities = null;
    this.videoEncodeAcceleratorSupportedProfiles = null;
    this.systemVisual = 0;
    this.rgbaVisual = 0;
  };
  GpuInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuInfo.generate = function(generator_) {
    var generated = new GpuInfo;
    generated.initializationTime = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.optimus = generator_.generateBool();
    generated.amdSwitchable = generator_.generateBool();
    generated.gpu = generator_.generateStruct(gpu.mojom.GpuDevice, false);
    generated.secondaryGpus = generator_.generateArray(function() {
      return generator_.generateStruct(gpu.mojom.GpuDevice, false);
    });
    generated.driverVendor = generator_.generateString(false);
    generated.driverVersion = generator_.generateString(false);
    generated.driverDate = generator_.generateString(false);
    generated.pixelShaderVersion = generator_.generateString(false);
    generated.vertexShaderVersion = generator_.generateString(false);
    generated.maxMsaaSamples = generator_.generateString(false);
    generated.machineModelName = generator_.generateString(false);
    generated.machineModelVersion = generator_.generateString(false);
    generated.glVersion = generator_.generateString(false);
    generated.glVendor = generator_.generateString(false);
    generated.glRenderer = generator_.generateString(false);
    generated.glExtensions = generator_.generateString(false);
    generated.glWsVendor = generator_.generateString(false);
    generated.glWsVersion = generator_.generateString(false);
    generated.glWsExtensions = generator_.generateString(false);
    generated.glResetNotificationStrategy = generator_.generateUint32();
    generated.softwareRendering = generator_.generateBool();
    generated.directRendering = generator_.generateBool();
    generated.sandboxed = generator_.generateBool();
    generated.inProcessGpu = generator_.generateBool();
    generated.passthroughCmdDecoder = generator_.generateBool();
    generated.directComposition = generator_.generateBool();
    generated.supportsOverlays = generator_.generateBool();
    generated.canSupportThreadedTextureMailbox = generator_.generateBool();
    generated.videoDecodeAcceleratorCapabilities = generator_.generateStruct(gpu.mojom.VideoDecodeAcceleratorCapabilities, false);
    generated.videoEncodeAcceleratorSupportedProfiles = generator_.generateArray(function() {
      return generator_.generateStruct(gpu.mojom.VideoEncodeAcceleratorSupportedProfile, false);
    });
    generated.jpegDecodeAcceleratorSupported = generator_.generateBool();
    generated.systemVisual = generator_.generateUint64();
    generated.rgbaVisual = generator_.generateUint64();
    return generated;
  };

  GpuInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.initializationTime = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.optimus = mutator_.mutateBool(this.optimus);
    }
    if (mutator_.chooseMutateField()) {
      this.amdSwitchable = mutator_.mutateBool(this.amdSwitchable);
    }
    if (mutator_.chooseMutateField()) {
      this.gpu = mutator_.mutateStruct(gpu.mojom.GpuDevice, false);
    }
    if (mutator_.chooseMutateField()) {
      this.secondaryGpus = mutator_.mutateArray(this.secondaryGpus, function(val) {
        return mutator_.mutateStruct(gpu.mojom.GpuDevice, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.driverVendor = mutator_.mutateString(this.driverVendor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.driverVersion = mutator_.mutateString(this.driverVersion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.driverDate = mutator_.mutateString(this.driverDate, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelShaderVersion = mutator_.mutateString(this.pixelShaderVersion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.vertexShaderVersion = mutator_.mutateString(this.vertexShaderVersion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxMsaaSamples = mutator_.mutateString(this.maxMsaaSamples, false);
    }
    if (mutator_.chooseMutateField()) {
      this.machineModelName = mutator_.mutateString(this.machineModelName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.machineModelVersion = mutator_.mutateString(this.machineModelVersion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glVersion = mutator_.mutateString(this.glVersion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glVendor = mutator_.mutateString(this.glVendor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glRenderer = mutator_.mutateString(this.glRenderer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glExtensions = mutator_.mutateString(this.glExtensions, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glWsVendor = mutator_.mutateString(this.glWsVendor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glWsVersion = mutator_.mutateString(this.glWsVersion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glWsExtensions = mutator_.mutateString(this.glWsExtensions, false);
    }
    if (mutator_.chooseMutateField()) {
      this.glResetNotificationStrategy = mutator_.mutateUint32(this.glResetNotificationStrategy);
    }
    if (mutator_.chooseMutateField()) {
      this.softwareRendering = mutator_.mutateBool(this.softwareRendering);
    }
    if (mutator_.chooseMutateField()) {
      this.directRendering = mutator_.mutateBool(this.directRendering);
    }
    if (mutator_.chooseMutateField()) {
      this.sandboxed = mutator_.mutateBool(this.sandboxed);
    }
    if (mutator_.chooseMutateField()) {
      this.inProcessGpu = mutator_.mutateBool(this.inProcessGpu);
    }
    if (mutator_.chooseMutateField()) {
      this.passthroughCmdDecoder = mutator_.mutateBool(this.passthroughCmdDecoder);
    }
    if (mutator_.chooseMutateField()) {
      this.directComposition = mutator_.mutateBool(this.directComposition);
    }
    if (mutator_.chooseMutateField()) {
      this.supportsOverlays = mutator_.mutateBool(this.supportsOverlays);
    }
    if (mutator_.chooseMutateField()) {
      this.canSupportThreadedTextureMailbox = mutator_.mutateBool(this.canSupportThreadedTextureMailbox);
    }
    if (mutator_.chooseMutateField()) {
      this.videoDecodeAcceleratorCapabilities = mutator_.mutateStruct(gpu.mojom.VideoDecodeAcceleratorCapabilities, false);
    }
    if (mutator_.chooseMutateField()) {
      this.videoEncodeAcceleratorSupportedProfiles = mutator_.mutateArray(this.videoEncodeAcceleratorSupportedProfiles, function(val) {
        return mutator_.mutateStruct(gpu.mojom.VideoEncodeAcceleratorSupportedProfile, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.jpegDecodeAcceleratorSupported = mutator_.mutateBool(this.jpegDecodeAcceleratorSupported);
    }
    if (mutator_.chooseMutateField()) {
      this.systemVisual = mutator_.mutateUint64(this.systemVisual);
    }
    if (mutator_.chooseMutateField()) {
      this.rgbaVisual = mutator_.mutateUint64(this.rgbaVisual);
    }
    return this;
  };
  GpuInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 192}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.initializationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate GpuInfo.gpu
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, GpuDevice, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.secondaryGpus
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(GpuDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.driverVendor
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.driverVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.driverDate
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.pixelShaderVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.vertexShaderVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.maxMsaaSamples
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.machineModelName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.machineModelVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 88, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.glVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 96, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.glVendor
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 104, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.glRenderer
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 112, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.glExtensions
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 120, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.glWsVendor
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 128, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.glWsVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 136, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.glWsExtensions
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 144, false)
    if (err !== validator.validationError.NONE)
        return err;











    // validate GpuInfo.videoDecodeAcceleratorCapabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 152, VideoDecodeAcceleratorCapabilities, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuInfo.videoEncodeAcceleratorSupportedProfiles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 160, 8, new codec.PointerTo(VideoEncodeAcceleratorSupportedProfile), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  GpuInfo.encodedSize = codec.kStructHeaderSize + 184;

  GpuInfo.decode = function(decoder) {
    var packed;
    var val = new GpuInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.initializationTime = decoder.decodeStructPointer(time$.TimeDelta);
    packed = decoder.readUint8();
    val.optimus = (packed >> 0) & 1 ? true : false;
    val.amdSwitchable = (packed >> 1) & 1 ? true : false;
    val.softwareRendering = (packed >> 2) & 1 ? true : false;
    val.directRendering = (packed >> 3) & 1 ? true : false;
    val.sandboxed = (packed >> 4) & 1 ? true : false;
    val.inProcessGpu = (packed >> 5) & 1 ? true : false;
    val.passthroughCmdDecoder = (packed >> 6) & 1 ? true : false;
    val.directComposition = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.supportsOverlays = (packed >> 0) & 1 ? true : false;
    val.canSupportThreadedTextureMailbox = (packed >> 1) & 1 ? true : false;
    val.jpegDecodeAcceleratorSupported = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    val.glResetNotificationStrategy = decoder.decodeStruct(codec.Uint32);
    val.gpu = decoder.decodeStructPointer(GpuDevice);
    val.secondaryGpus = decoder.decodeArrayPointer(new codec.PointerTo(GpuDevice));
    val.driverVendor = decoder.decodeStruct(codec.String);
    val.driverVersion = decoder.decodeStruct(codec.String);
    val.driverDate = decoder.decodeStruct(codec.String);
    val.pixelShaderVersion = decoder.decodeStruct(codec.String);
    val.vertexShaderVersion = decoder.decodeStruct(codec.String);
    val.maxMsaaSamples = decoder.decodeStruct(codec.String);
    val.machineModelName = decoder.decodeStruct(codec.String);
    val.machineModelVersion = decoder.decodeStruct(codec.String);
    val.glVersion = decoder.decodeStruct(codec.String);
    val.glVendor = decoder.decodeStruct(codec.String);
    val.glRenderer = decoder.decodeStruct(codec.String);
    val.glExtensions = decoder.decodeStruct(codec.String);
    val.glWsVendor = decoder.decodeStruct(codec.String);
    val.glWsVersion = decoder.decodeStruct(codec.String);
    val.glWsExtensions = decoder.decodeStruct(codec.String);
    val.videoDecodeAcceleratorCapabilities = decoder.decodeStructPointer(VideoDecodeAcceleratorCapabilities);
    val.videoEncodeAcceleratorSupportedProfiles = decoder.decodeArrayPointer(new codec.PointerTo(VideoEncodeAcceleratorSupportedProfile));
    val.systemVisual = decoder.decodeStruct(codec.Uint64);
    val.rgbaVisual = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  GpuInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.initializationTime);
    packed = 0;
    packed |= (val.optimus & 1) << 0
    packed |= (val.amdSwitchable & 1) << 1
    packed |= (val.softwareRendering & 1) << 2
    packed |= (val.directRendering & 1) << 3
    packed |= (val.sandboxed & 1) << 4
    packed |= (val.inProcessGpu & 1) << 5
    packed |= (val.passthroughCmdDecoder & 1) << 6
    packed |= (val.directComposition & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.supportsOverlays & 1) << 0
    packed |= (val.canSupportThreadedTextureMailbox & 1) << 1
    packed |= (val.jpegDecodeAcceleratorSupported & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.glResetNotificationStrategy);
    encoder.encodeStructPointer(GpuDevice, val.gpu);
    encoder.encodeArrayPointer(new codec.PointerTo(GpuDevice), val.secondaryGpus);
    encoder.encodeStruct(codec.String, val.driverVendor);
    encoder.encodeStruct(codec.String, val.driverVersion);
    encoder.encodeStruct(codec.String, val.driverDate);
    encoder.encodeStruct(codec.String, val.pixelShaderVersion);
    encoder.encodeStruct(codec.String, val.vertexShaderVersion);
    encoder.encodeStruct(codec.String, val.maxMsaaSamples);
    encoder.encodeStruct(codec.String, val.machineModelName);
    encoder.encodeStruct(codec.String, val.machineModelVersion);
    encoder.encodeStruct(codec.String, val.glVersion);
    encoder.encodeStruct(codec.String, val.glVendor);
    encoder.encodeStruct(codec.String, val.glRenderer);
    encoder.encodeStruct(codec.String, val.glExtensions);
    encoder.encodeStruct(codec.String, val.glWsVendor);
    encoder.encodeStruct(codec.String, val.glWsVersion);
    encoder.encodeStruct(codec.String, val.glWsExtensions);
    encoder.encodeStructPointer(VideoDecodeAcceleratorCapabilities, val.videoDecodeAcceleratorCapabilities);
    encoder.encodeArrayPointer(new codec.PointerTo(VideoEncodeAcceleratorSupportedProfile), val.videoEncodeAcceleratorSupportedProfiles);
    encoder.encodeStruct(codec.Uint64, val.systemVisual);
    encoder.encodeStruct(codec.Uint64, val.rgbaVisual);
  };
  exports.VideoCodecProfile = VideoCodecProfile;
  exports.GpuDevice = GpuDevice;
  exports.VideoDecodeAcceleratorSupportedProfile = VideoDecodeAcceleratorSupportedProfile;
  exports.VideoDecodeAcceleratorCapabilities = VideoDecodeAcceleratorCapabilities;
  exports.VideoEncodeAcceleratorSupportedProfile = VideoEncodeAcceleratorSupportedProfile;
  exports.GpuInfo = GpuInfo;
})();