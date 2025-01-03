// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/arc/common/video_encode_accelerator.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('arc.mojom');
  var video_common$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_common.mojom', 'video_common.mojom.js');
  }


  var VideoPixelFormat = {};
  VideoPixelFormat.PIXEL_FORMAT_UNKNOWN = 0;
  VideoPixelFormat.PIXEL_FORMAT_I420 = 1;

  VideoPixelFormat.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  VideoPixelFormat.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function VideoEncodeProfile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeProfile.prototype.initDefaults_ = function() {
    this.profile = 0;
    this.maxFramerateNumerator = 0;
    this.maxResolution = null;
    this.maxFramerateDenominator = 0;
  };
  VideoEncodeProfile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeProfile.generate = function(generator_) {
    var generated = new VideoEncodeProfile;
    generated.profile = generator_.generateEnum(0, 24);
    generated.maxResolution = generator_.generateStruct(arc.mojom.Size, false);
    generated.maxFramerateNumerator = generator_.generateUint32();
    generated.maxFramerateDenominator = generator_.generateUint32();
    return generated;
  };

  VideoEncodeProfile.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.profile = mutator_.mutateEnum(this.profile, 0, 24);
    }
    if (mutator_.chooseMutateField()) {
      this.maxResolution = mutator_.mutateStruct(arc.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxFramerateNumerator = mutator_.mutateUint32(this.maxFramerateNumerator);
    }
    if (mutator_.chooseMutateField()) {
      this.maxFramerateDenominator = mutator_.mutateUint32(this.maxFramerateDenominator);
    }
    return this;
  };
  VideoEncodeProfile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeProfile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeProfile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeProfile.validate = function(messageValidator, offset) {
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


    // validate VideoEncodeProfile.profile
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, video_common$.VideoCodecProfile);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncodeProfile.maxResolution
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_common$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VideoEncodeProfile.encodedSize = codec.kStructHeaderSize + 24;

  VideoEncodeProfile.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeProfile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.profile = decoder.decodeStruct(codec.Int32);
    val.maxFramerateNumerator = decoder.decodeStruct(codec.Uint32);
    val.maxResolution = decoder.decodeStructPointer(video_common$.Size);
    val.maxFramerateDenominator = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoEncodeProfile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeProfile.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.profile);
    encoder.encodeStruct(codec.Uint32, val.maxFramerateNumerator);
    encoder.encodeStructPointer(video_common$.Size, val.maxResolution);
    encoder.encodeStruct(codec.Uint32, val.maxFramerateDenominator);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoEncodeAccelerator_GetSupportedProfiles_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_GetSupportedProfiles_Params.prototype.initDefaults_ = function() {
  };
  VideoEncodeAccelerator_GetSupportedProfiles_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_GetSupportedProfiles_Params.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_GetSupportedProfiles_Params;
    return generated;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoEncodeAccelerator_GetSupportedProfiles_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_GetSupportedProfiles_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_Params.validate = function(messageValidator, offset) {
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

  VideoEncodeAccelerator_GetSupportedProfiles_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoEncodeAccelerator_GetSupportedProfiles_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_GetSupportedProfiles_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_GetSupportedProfiles_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.prototype.initDefaults_ = function() {
    this.profiles = null;
  };
  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams;
    generated.profiles = generator_.generateArray(function() {
      return generator_.generateStruct(arc.mojom.VideoEncodeProfile, false);
    });
    return generated;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.profiles = mutator_.mutateArray(this.profiles, function(val) {
        return mutator_.mutateStruct(arc.mojom.VideoEncodeProfile, false);
      });
    }
    return this;
  };
  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.profiles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(VideoEncodeProfile), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.profiles = decoder.decodeArrayPointer(new codec.PointerTo(VideoEncodeProfile));
    return val;
  };

  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(VideoEncodeProfile), val.profiles);
  };
  function VideoEncodeAccelerator_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_Initialize_Params.prototype.initDefaults_ = function() {
    this.inputFormat = 0;
    this.inputStorage = 0;
    this.visibleSize = null;
    this.outputProfile = 0;
    this.initialBitrate = 0;
    this.client = new VideoEncodeClientPtr();
  };
  VideoEncodeAccelerator_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_Initialize_Params.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_Initialize_Params;
    generated.inputFormat = generator_.generateEnum(0, 1);
    generated.visibleSize = generator_.generateStruct(arc.mojom.Size, false);
    generated.inputStorage = generator_.generateEnum(0, 1);
    generated.outputProfile = generator_.generateEnum(0, 24);
    generated.initialBitrate = generator_.generateUint32();
    generated.client = generator_.generateInterface("arc.mojom.VideoEncodeClient", false);
    return generated;
  };

  VideoEncodeAccelerator_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputFormat = mutator_.mutateEnum(this.inputFormat, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.visibleSize = mutator_.mutateStruct(arc.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.inputStorage = mutator_.mutateEnum(this.inputStorage, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.outputProfile = mutator_.mutateEnum(this.outputProfile, 0, 24);
    }
    if (mutator_.chooseMutateField()) {
      this.initialBitrate = mutator_.mutateUint32(this.initialBitrate);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "arc.mojom.VideoEncodeClient", false);
    }
    return this;
  };
  VideoEncodeAccelerator_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["arc.mojom.VideoEncodeClientPtr"]);
    }
    return handles;
  };

  VideoEncodeAccelerator_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  VideoEncodeAccelerator_Initialize_Params.validate = function(messageValidator, offset) {
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


    // validate VideoEncodeAccelerator_Initialize_Params.inputFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoPixelFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncodeAccelerator_Initialize_Params.visibleSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_common$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncodeAccelerator_Initialize_Params.inputStorage
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, VideoEncodeAccelerator.StorageType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncodeAccelerator_Initialize_Params.outputProfile
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, video_common$.VideoCodecProfile);
    if (err !== validator.validationError.NONE)
        return err;



    // validate VideoEncodeAccelerator_Initialize_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoEncodeAccelerator_Initialize_Params.encodedSize = codec.kStructHeaderSize + 32;

  VideoEncodeAccelerator_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputFormat = decoder.decodeStruct(codec.Int32);
    val.inputStorage = decoder.decodeStruct(codec.Int32);
    val.visibleSize = decoder.decodeStructPointer(video_common$.Size);
    val.outputProfile = decoder.decodeStruct(codec.Int32);
    val.initialBitrate = decoder.decodeStruct(codec.Uint32);
    val.client = decoder.decodeStruct(new codec.Interface(VideoEncodeClientPtr));
    return val;
  };

  VideoEncodeAccelerator_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.inputFormat);
    encoder.encodeStruct(codec.Int32, val.inputStorage);
    encoder.encodeStructPointer(video_common$.Size, val.visibleSize);
    encoder.encodeStruct(codec.Int32, val.outputProfile);
    encoder.encodeStruct(codec.Uint32, val.initialBitrate);
    encoder.encodeStruct(new codec.Interface(VideoEncodeClientPtr), val.client);
  };
  function VideoEncodeAccelerator_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  VideoEncodeAccelerator_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_Initialize_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  VideoEncodeAccelerator_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  VideoEncodeAccelerator_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoEncodeAccelerator_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoEncodeAccelerator_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_Initialize_ResponseParams();
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

  VideoEncodeAccelerator_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_Initialize_ResponseParams.encodedSize);
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
  function VideoEncodeAccelerator_Encode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_Encode_Params.prototype.initDefaults_ = function() {
    this.frameFd = null;
    this.forceKeyframe = false;
    this.planes = null;
    this.timestamp = 0;
  };
  VideoEncodeAccelerator_Encode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_Encode_Params.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_Encode_Params;
    generated.frameFd = generator_.generateHandle(false);
    generated.planes = generator_.generateArray(function() {
      return generator_.generateStruct(arc.mojom.VideoFramePlane, false);
    });
    generated.timestamp = generator_.generateInt64();
    generated.forceKeyframe = generator_.generateBool();
    return generated;
  };

  VideoEncodeAccelerator_Encode_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameFd = mutator_.mutateHandle(this.frameFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.planes = mutator_.mutateArray(this.planes, function(val) {
        return mutator_.mutateStruct(arc.mojom.VideoFramePlane, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateInt64(this.timestamp);
    }
    if (mutator_.chooseMutateField()) {
      this.forceKeyframe = mutator_.mutateBool(this.forceKeyframe);
    }
    return this;
  };
  VideoEncodeAccelerator_Encode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.frameFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VideoEncodeAccelerator_Encode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_Encode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.frameFd = handles[idx++];;
    return idx;
  };

  VideoEncodeAccelerator_Encode_Params.validate = function(messageValidator, offset) {
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


    // validate VideoEncodeAccelerator_Encode_Params.frameFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncodeAccelerator_Encode_Params.planes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(video_common$.VideoFramePlane), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VideoEncodeAccelerator_Encode_Params.encodedSize = codec.kStructHeaderSize + 24;

  VideoEncodeAccelerator_Encode_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_Encode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameFd = decoder.decodeStruct(codec.Handle);
    packed = decoder.readUint8();
    val.forceKeyframe = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.planes = decoder.decodeArrayPointer(new codec.PointerTo(video_common$.VideoFramePlane));
    val.timestamp = decoder.decodeStruct(codec.Int64);
    return val;
  };

  VideoEncodeAccelerator_Encode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_Encode_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.frameFd);
    packed = 0;
    packed |= (val.forceKeyframe & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(video_common$.VideoFramePlane), val.planes);
    encoder.encodeStruct(codec.Int64, val.timestamp);
  };
  function VideoEncodeAccelerator_Encode_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_Encode_ResponseParams.prototype.initDefaults_ = function() {
  };
  VideoEncodeAccelerator_Encode_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_Encode_ResponseParams.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_Encode_ResponseParams;
    return generated;
  };

  VideoEncodeAccelerator_Encode_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoEncodeAccelerator_Encode_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_Encode_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_Encode_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_Encode_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoEncodeAccelerator_Encode_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VideoEncodeAccelerator_Encode_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_Encode_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoEncodeAccelerator_Encode_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_Encode_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoEncodeAccelerator_UseBitstreamBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_UseBitstreamBuffer_Params.prototype.initDefaults_ = function() {
    this.shmemFd = null;
    this.offset = 0;
    this.size = 0;
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_Params.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_UseBitstreamBuffer_Params;
    generated.shmemFd = generator_.generateHandle(false);
    generated.offset = generator_.generateUint32();
    generated.size = generator_.generateUint32();
    return generated;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.shmemFd = mutator_.mutateHandle(this.shmemFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint32(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint32(this.size);
    }
    return this;
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.shmemFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.shmemFd = handles[idx++];;
    return idx;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_Params.validate = function(messageValidator, offset) {
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


    // validate VideoEncodeAccelerator_UseBitstreamBuffer_Params.shmemFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoEncodeAccelerator_UseBitstreamBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_UseBitstreamBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.shmemFd = decoder.decodeStruct(codec.Handle);
    val.offset = decoder.decodeStruct(codec.Uint32);
    val.size = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_UseBitstreamBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.shmemFd);
    encoder.encodeStruct(codec.Uint32, val.offset);
    encoder.encodeStruct(codec.Uint32, val.size);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.prototype.initDefaults_ = function() {
    this.payloadSize = 0;
    this.keyFrame = false;
    this.timestamp = 0;
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams;
    generated.payloadSize = generator_.generateUint32();
    generated.keyFrame = generator_.generateBool();
    generated.timestamp = generator_.generateInt64();
    return generated;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.payloadSize = mutator_.mutateUint32(this.payloadSize);
    }
    if (mutator_.chooseMutateField()) {
      this.keyFrame = mutator_.mutateBool(this.keyFrame);
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateInt64(this.timestamp);
    }
    return this;
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.payloadSize = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.keyFrame = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timestamp = decoder.decodeStruct(codec.Int64);
    return val;
  };

  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.payloadSize);
    packed = 0;
    packed |= (val.keyFrame & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.timestamp);
  };
  function VideoEncodeAccelerator_RequestEncodingParametersChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.prototype.initDefaults_ = function() {
    this.bitrate = 0;
    this.framerate = 0;
  };
  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_RequestEncodingParametersChange_Params;
    generated.bitrate = generator_.generateUint32();
    generated.framerate = generator_.generateUint32();
    return generated;
  };

  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitrate = mutator_.mutateUint32(this.bitrate);
    }
    if (mutator_.chooseMutateField()) {
      this.framerate = mutator_.mutateUint32(this.framerate);
    }
    return this;
  };
  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.validate = function(messageValidator, offset) {
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

  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_RequestEncodingParametersChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitrate = decoder.decodeStruct(codec.Uint32);
    val.framerate = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  VideoEncodeAccelerator_RequestEncodingParametersChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_RequestEncodingParametersChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bitrate);
    encoder.encodeStruct(codec.Uint32, val.framerate);
  };
  function VideoEncodeAccelerator_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_Flush_Params.prototype.initDefaults_ = function() {
  };
  VideoEncodeAccelerator_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_Flush_Params.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_Flush_Params;
    return generated;
  };

  VideoEncodeAccelerator_Flush_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoEncodeAccelerator_Flush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_Flush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_Flush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_Flush_Params.validate = function(messageValidator, offset) {
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

  VideoEncodeAccelerator_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoEncodeAccelerator_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoEncodeAccelerator_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoEncodeAccelerator_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeAccelerator_Flush_ResponseParams.prototype.initDefaults_ = function() {
    this.flushDone = false;
  };
  VideoEncodeAccelerator_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeAccelerator_Flush_ResponseParams.generate = function(generator_) {
    var generated = new VideoEncodeAccelerator_Flush_ResponseParams;
    generated.flushDone = generator_.generateBool();
    return generated;
  };

  VideoEncodeAccelerator_Flush_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.flushDone = mutator_.mutateBool(this.flushDone);
    }
    return this;
  };
  VideoEncodeAccelerator_Flush_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeAccelerator_Flush_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeAccelerator_Flush_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeAccelerator_Flush_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoEncodeAccelerator_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoEncodeAccelerator_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeAccelerator_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.flushDone = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoEncodeAccelerator_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeAccelerator_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.flushDone & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoEncodeClient_RequireBitstreamBuffers_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeClient_RequireBitstreamBuffers_Params.prototype.initDefaults_ = function() {
    this.inputCount = 0;
    this.outputBufferSize = 0;
    this.inputCodedSize = null;
  };
  VideoEncodeClient_RequireBitstreamBuffers_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeClient_RequireBitstreamBuffers_Params.generate = function(generator_) {
    var generated = new VideoEncodeClient_RequireBitstreamBuffers_Params;
    generated.inputCount = generator_.generateUint32();
    generated.inputCodedSize = generator_.generateStruct(arc.mojom.Size, false);
    generated.outputBufferSize = generator_.generateUint32();
    return generated;
  };

  VideoEncodeClient_RequireBitstreamBuffers_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputCount = mutator_.mutateUint32(this.inputCount);
    }
    if (mutator_.chooseMutateField()) {
      this.inputCodedSize = mutator_.mutateStruct(arc.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputBufferSize = mutator_.mutateUint32(this.outputBufferSize);
    }
    return this;
  };
  VideoEncodeClient_RequireBitstreamBuffers_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeClient_RequireBitstreamBuffers_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeClient_RequireBitstreamBuffers_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeClient_RequireBitstreamBuffers_Params.validate = function(messageValidator, offset) {
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



    // validate VideoEncodeClient_RequireBitstreamBuffers_Params.inputCodedSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_common$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoEncodeClient_RequireBitstreamBuffers_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoEncodeClient_RequireBitstreamBuffers_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeClient_RequireBitstreamBuffers_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputCount = decoder.decodeStruct(codec.Uint32);
    val.outputBufferSize = decoder.decodeStruct(codec.Uint32);
    val.inputCodedSize = decoder.decodeStructPointer(video_common$.Size);
    return val;
  };

  VideoEncodeClient_RequireBitstreamBuffers_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeClient_RequireBitstreamBuffers_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.inputCount);
    encoder.encodeStruct(codec.Uint32, val.outputBufferSize);
    encoder.encodeStructPointer(video_common$.Size, val.inputCodedSize);
  };
  function VideoEncodeClient_NotifyError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncodeClient_NotifyError_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  VideoEncodeClient_NotifyError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoEncodeClient_NotifyError_Params.generate = function(generator_) {
    var generated = new VideoEncodeClient_NotifyError_Params;
    generated.error = generator_.generateEnum(0, 2);
    return generated;
  };

  VideoEncodeClient_NotifyError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 2);
    }
    return this;
  };
  VideoEncodeClient_NotifyError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoEncodeClient_NotifyError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoEncodeClient_NotifyError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoEncodeClient_NotifyError_Params.validate = function(messageValidator, offset) {
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


    // validate VideoEncodeClient_NotifyError_Params.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoEncodeAccelerator.Error);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoEncodeClient_NotifyError_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoEncodeClient_NotifyError_Params.decode = function(decoder) {
    var packed;
    var val = new VideoEncodeClient_NotifyError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoEncodeClient_NotifyError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncodeClient_NotifyError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVideoEncodeAccelerator_GetSupportedProfiles_Name = 1129039403;
  var kVideoEncodeAccelerator_Initialize_Name = 1256570445;
  var kVideoEncodeAccelerator_Encode_Name = 1253159633;
  var kVideoEncodeAccelerator_UseBitstreamBuffer_Name = 1222763237;
  var kVideoEncodeAccelerator_RequestEncodingParametersChange_Name = 246181798;
  var kVideoEncodeAccelerator_Flush_Name = 844100780;

  function VideoEncodeAcceleratorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoEncodeAccelerator,
                                                   handleOrPtrInfo);
  }

  function VideoEncodeAcceleratorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoEncodeAccelerator, associatedInterfacePtrInfo);
  }

  VideoEncodeAcceleratorAssociatedPtr.prototype =
      Object.create(VideoEncodeAcceleratorPtr.prototype);
  VideoEncodeAcceleratorAssociatedPtr.prototype.constructor =
      VideoEncodeAcceleratorAssociatedPtr;

  function VideoEncodeAcceleratorProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoEncodeAcceleratorPtr.prototype.getSupportedProfiles = function() {
    return VideoEncodeAcceleratorProxy.prototype.getSupportedProfiles
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeAcceleratorProxy.prototype.getSupportedProfiles = function() {
    var params_ = new VideoEncodeAccelerator_GetSupportedProfiles_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoEncodeAccelerator_GetSupportedProfiles_Name,
          codec.align(VideoEncodeAccelerator_GetSupportedProfiles_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoEncodeAccelerator_GetSupportedProfiles_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoEncodeAcceleratorPtr.prototype.initialize = function() {
    return VideoEncodeAcceleratorProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeAcceleratorProxy.prototype.initialize = function(inputFormat, visibleSize, inputStorage, outputProfile, initialBitrate, client) {
    var params_ = new VideoEncodeAccelerator_Initialize_Params();
    params_.inputFormat = inputFormat;
    params_.visibleSize = visibleSize;
    params_.inputStorage = inputStorage;
    params_.outputProfile = outputProfile;
    params_.initialBitrate = initialBitrate;
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoEncodeAccelerator_Initialize_Name,
          codec.align(VideoEncodeAccelerator_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoEncodeAccelerator_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoEncodeAccelerator_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoEncodeAcceleratorPtr.prototype.encode = function() {
    return VideoEncodeAcceleratorProxy.prototype.encode
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeAcceleratorProxy.prototype.encode = function(frameFd, planes, timestamp, forceKeyframe) {
    var params_ = new VideoEncodeAccelerator_Encode_Params();
    params_.frameFd = frameFd;
    params_.planes = planes;
    params_.timestamp = timestamp;
    params_.forceKeyframe = forceKeyframe;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoEncodeAccelerator_Encode_Name,
          codec.align(VideoEncodeAccelerator_Encode_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoEncodeAccelerator_Encode_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoEncodeAccelerator_Encode_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoEncodeAcceleratorPtr.prototype.useBitstreamBuffer = function() {
    return VideoEncodeAcceleratorProxy.prototype.useBitstreamBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeAcceleratorProxy.prototype.useBitstreamBuffer = function(shmemFd, offset, size) {
    var params_ = new VideoEncodeAccelerator_UseBitstreamBuffer_Params();
    params_.shmemFd = shmemFd;
    params_.offset = offset;
    params_.size = size;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoEncodeAccelerator_UseBitstreamBuffer_Name,
          codec.align(VideoEncodeAccelerator_UseBitstreamBuffer_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoEncodeAccelerator_UseBitstreamBuffer_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoEncodeAcceleratorPtr.prototype.requestEncodingParametersChange = function() {
    return VideoEncodeAcceleratorProxy.prototype.requestEncodingParametersChange
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeAcceleratorProxy.prototype.requestEncodingParametersChange = function(bitrate, framerate) {
    var params_ = new VideoEncodeAccelerator_RequestEncodingParametersChange_Params();
    params_.bitrate = bitrate;
    params_.framerate = framerate;
    var builder = new codec.MessageV0Builder(
        kVideoEncodeAccelerator_RequestEncodingParametersChange_Name,
        codec.align(VideoEncodeAccelerator_RequestEncodingParametersChange_Params.encodedSize));
    builder.encodeStruct(VideoEncodeAccelerator_RequestEncodingParametersChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoEncodeAcceleratorPtr.prototype.flush = function() {
    return VideoEncodeAcceleratorProxy.prototype.flush
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeAcceleratorProxy.prototype.flush = function() {
    var params_ = new VideoEncodeAccelerator_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoEncodeAccelerator_Flush_Name,
          codec.align(VideoEncodeAccelerator_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoEncodeAccelerator_Flush_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoEncodeAccelerator_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VideoEncodeAcceleratorStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoEncodeAcceleratorStub.prototype.getSupportedProfiles = function() {
    return this.delegate_ && this.delegate_.getSupportedProfiles && this.delegate_.getSupportedProfiles();
  }
  VideoEncodeAcceleratorStub.prototype.initialize = function(inputFormat, visibleSize, inputStorage, outputProfile, initialBitrate, client) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(inputFormat, visibleSize, inputStorage, outputProfile, initialBitrate, client);
  }
  VideoEncodeAcceleratorStub.prototype.encode = function(frameFd, planes, timestamp, forceKeyframe) {
    return this.delegate_ && this.delegate_.encode && this.delegate_.encode(frameFd, planes, timestamp, forceKeyframe);
  }
  VideoEncodeAcceleratorStub.prototype.useBitstreamBuffer = function(shmemFd, offset, size) {
    return this.delegate_ && this.delegate_.useBitstreamBuffer && this.delegate_.useBitstreamBuffer(shmemFd, offset, size);
  }
  VideoEncodeAcceleratorStub.prototype.requestEncodingParametersChange = function(bitrate, framerate) {
    return this.delegate_ && this.delegate_.requestEncodingParametersChange && this.delegate_.requestEncodingParametersChange(bitrate, framerate);
  }
  VideoEncodeAcceleratorStub.prototype.flush = function() {
    return this.delegate_ && this.delegate_.flush && this.delegate_.flush();
  }

  VideoEncodeAcceleratorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoEncodeAccelerator_RequestEncodingParametersChange_Name:
      var params = reader.decodeStruct(VideoEncodeAccelerator_RequestEncodingParametersChange_Params);
      this.requestEncodingParametersChange(params.bitrate, params.framerate);
      return true;
    default:
      return false;
    }
  };

  VideoEncodeAcceleratorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoEncodeAccelerator_GetSupportedProfiles_Name:
      var params = reader.decodeStruct(VideoEncodeAccelerator_GetSupportedProfiles_Params);
      this.getSupportedProfiles().then(function(response) {
        var responseParams =
            new VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams();
        responseParams.profiles = response.profiles;
        var builder = new codec.MessageV1Builder(
            kVideoEncodeAccelerator_GetSupportedProfiles_Name,
            codec.align(VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoEncodeAccelerator_Initialize_Name:
      var params = reader.decodeStruct(VideoEncodeAccelerator_Initialize_Params);
      this.initialize(params.inputFormat, params.visibleSize, params.inputStorage, params.outputProfile, params.initialBitrate, params.client).then(function(response) {
        var responseParams =
            new VideoEncodeAccelerator_Initialize_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kVideoEncodeAccelerator_Initialize_Name,
            codec.align(VideoEncodeAccelerator_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoEncodeAccelerator_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoEncodeAccelerator_Encode_Name:
      var params = reader.decodeStruct(VideoEncodeAccelerator_Encode_Params);
      this.encode(params.frameFd, params.planes, params.timestamp, params.forceKeyframe).then(function(response) {
        var responseParams =
            new VideoEncodeAccelerator_Encode_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVideoEncodeAccelerator_Encode_Name,
            codec.align(VideoEncodeAccelerator_Encode_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoEncodeAccelerator_Encode_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoEncodeAccelerator_UseBitstreamBuffer_Name:
      var params = reader.decodeStruct(VideoEncodeAccelerator_UseBitstreamBuffer_Params);
      this.useBitstreamBuffer(params.shmemFd, params.offset, params.size).then(function(response) {
        var responseParams =
            new VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams();
        responseParams.payloadSize = response.payloadSize;
        responseParams.keyFrame = response.keyFrame;
        responseParams.timestamp = response.timestamp;
        var builder = new codec.MessageV1Builder(
            kVideoEncodeAccelerator_UseBitstreamBuffer_Name,
            codec.align(VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoEncodeAccelerator_Flush_Name:
      var params = reader.decodeStruct(VideoEncodeAccelerator_Flush_Params);
      this.flush().then(function(response) {
        var responseParams =
            new VideoEncodeAccelerator_Flush_ResponseParams();
        responseParams.flushDone = response.flushDone;
        var builder = new codec.MessageV1Builder(
            kVideoEncodeAccelerator_Flush_Name,
            codec.align(VideoEncodeAccelerator_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoEncodeAccelerator_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVideoEncodeAcceleratorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoEncodeAccelerator_GetSupportedProfiles_Name:
        if (message.expectsResponse())
          paramsClass = VideoEncodeAccelerator_GetSupportedProfiles_Params;
      break;
      case kVideoEncodeAccelerator_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = VideoEncodeAccelerator_Initialize_Params;
      break;
      case kVideoEncodeAccelerator_Encode_Name:
        if (message.expectsResponse())
          paramsClass = VideoEncodeAccelerator_Encode_Params;
      break;
      case kVideoEncodeAccelerator_UseBitstreamBuffer_Name:
        if (message.expectsResponse())
          paramsClass = VideoEncodeAccelerator_UseBitstreamBuffer_Params;
      break;
      case kVideoEncodeAccelerator_RequestEncodingParametersChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoEncodeAccelerator_RequestEncodingParametersChange_Params;
      break;
      case kVideoEncodeAccelerator_Flush_Name:
        if (message.expectsResponse())
          paramsClass = VideoEncodeAccelerator_Flush_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoEncodeAcceleratorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoEncodeAccelerator_GetSupportedProfiles_Name:
        if (message.isResponse())
          paramsClass = VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams;
        break;
      case kVideoEncodeAccelerator_Initialize_Name:
        if (message.isResponse())
          paramsClass = VideoEncodeAccelerator_Initialize_ResponseParams;
        break;
      case kVideoEncodeAccelerator_Encode_Name:
        if (message.isResponse())
          paramsClass = VideoEncodeAccelerator_Encode_ResponseParams;
        break;
      case kVideoEncodeAccelerator_UseBitstreamBuffer_Name:
        if (message.isResponse())
          paramsClass = VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams;
        break;
      case kVideoEncodeAccelerator_Flush_Name:
        if (message.isResponse())
          paramsClass = VideoEncodeAccelerator_Flush_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoEncodeAccelerator = {
    name: 'arc.mojom.VideoEncodeAccelerator',
    kVersion: 0,
    ptrClass: VideoEncodeAcceleratorPtr,
    proxyClass: VideoEncodeAcceleratorProxy,
    stubClass: VideoEncodeAcceleratorStub,
    validateRequest: validateVideoEncodeAcceleratorRequest,
    validateResponse: validateVideoEncodeAcceleratorResponse,
    mojomId: 'components/arc/common/video_encode_accelerator.mojom',
    fuzzMethods: {
      getSupportedProfiles: {
        params: VideoEncodeAccelerator_GetSupportedProfiles_Params,
      },
      initialize: {
        params: VideoEncodeAccelerator_Initialize_Params,
      },
      encode: {
        params: VideoEncodeAccelerator_Encode_Params,
      },
      useBitstreamBuffer: {
        params: VideoEncodeAccelerator_UseBitstreamBuffer_Params,
      },
      requestEncodingParametersChange: {
        params: VideoEncodeAccelerator_RequestEncodingParametersChange_Params,
      },
      flush: {
        params: VideoEncodeAccelerator_Flush_Params,
      },
    },
  };
  VideoEncodeAccelerator.StorageType = {};
  VideoEncodeAccelerator.StorageType.SHARED_MEMORY = 0;
  VideoEncodeAccelerator.StorageType.DMABUF = VideoEncodeAccelerator.StorageType.SHARED_MEMORY + 1;

  VideoEncodeAccelerator.StorageType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  VideoEncodeAccelerator.StorageType.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  VideoEncodeAccelerator.Error = {};
  VideoEncodeAccelerator.Error.kIllegalStateError = 0;
  VideoEncodeAccelerator.Error.kInvalidArgumentError = 1;
  VideoEncodeAccelerator.Error.kPlatformFailureError = 2;
  VideoEncodeAccelerator.Error.kErrorMax = VideoEncodeAccelerator.Error.kPlatformFailureError;

  VideoEncodeAccelerator.Error.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  VideoEncodeAccelerator.Error.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  VideoEncodeAcceleratorStub.prototype.validator = validateVideoEncodeAcceleratorRequest;
  VideoEncodeAcceleratorProxy.prototype.validator = validateVideoEncodeAcceleratorResponse;
  var kVideoEncodeClient_RequireBitstreamBuffers_Name = 1149227798;
  var kVideoEncodeClient_NotifyError_Name = 307113308;

  function VideoEncodeClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoEncodeClient,
                                                   handleOrPtrInfo);
  }

  function VideoEncodeClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoEncodeClient, associatedInterfacePtrInfo);
  }

  VideoEncodeClientAssociatedPtr.prototype =
      Object.create(VideoEncodeClientPtr.prototype);
  VideoEncodeClientAssociatedPtr.prototype.constructor =
      VideoEncodeClientAssociatedPtr;

  function VideoEncodeClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoEncodeClientPtr.prototype.requireBitstreamBuffers = function() {
    return VideoEncodeClientProxy.prototype.requireBitstreamBuffers
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeClientProxy.prototype.requireBitstreamBuffers = function(inputCount, inputCodedSize, outputBufferSize) {
    var params_ = new VideoEncodeClient_RequireBitstreamBuffers_Params();
    params_.inputCount = inputCount;
    params_.inputCodedSize = inputCodedSize;
    params_.outputBufferSize = outputBufferSize;
    var builder = new codec.MessageV0Builder(
        kVideoEncodeClient_RequireBitstreamBuffers_Name,
        codec.align(VideoEncodeClient_RequireBitstreamBuffers_Params.encodedSize));
    builder.encodeStruct(VideoEncodeClient_RequireBitstreamBuffers_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoEncodeClientPtr.prototype.notifyError = function() {
    return VideoEncodeClientProxy.prototype.notifyError
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoEncodeClientProxy.prototype.notifyError = function(error) {
    var params_ = new VideoEncodeClient_NotifyError_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kVideoEncodeClient_NotifyError_Name,
        codec.align(VideoEncodeClient_NotifyError_Params.encodedSize));
    builder.encodeStruct(VideoEncodeClient_NotifyError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoEncodeClientStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoEncodeClientStub.prototype.requireBitstreamBuffers = function(inputCount, inputCodedSize, outputBufferSize) {
    return this.delegate_ && this.delegate_.requireBitstreamBuffers && this.delegate_.requireBitstreamBuffers(inputCount, inputCodedSize, outputBufferSize);
  }
  VideoEncodeClientStub.prototype.notifyError = function(error) {
    return this.delegate_ && this.delegate_.notifyError && this.delegate_.notifyError(error);
  }

  VideoEncodeClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoEncodeClient_RequireBitstreamBuffers_Name:
      var params = reader.decodeStruct(VideoEncodeClient_RequireBitstreamBuffers_Params);
      this.requireBitstreamBuffers(params.inputCount, params.inputCodedSize, params.outputBufferSize);
      return true;
    case kVideoEncodeClient_NotifyError_Name:
      var params = reader.decodeStruct(VideoEncodeClient_NotifyError_Params);
      this.notifyError(params.error);
      return true;
    default:
      return false;
    }
  };

  VideoEncodeClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoEncodeClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoEncodeClient_RequireBitstreamBuffers_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoEncodeClient_RequireBitstreamBuffers_Params;
      break;
      case kVideoEncodeClient_NotifyError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoEncodeClient_NotifyError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoEncodeClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoEncodeClient = {
    name: 'arc.mojom.VideoEncodeClient',
    kVersion: 0,
    ptrClass: VideoEncodeClientPtr,
    proxyClass: VideoEncodeClientProxy,
    stubClass: VideoEncodeClientStub,
    validateRequest: validateVideoEncodeClientRequest,
    validateResponse: null,
    mojomId: 'components/arc/common/video_encode_accelerator.mojom',
    fuzzMethods: {
      requireBitstreamBuffers: {
        params: VideoEncodeClient_RequireBitstreamBuffers_Params,
      },
      notifyError: {
        params: VideoEncodeClient_NotifyError_Params,
      },
    },
  };
  VideoEncodeClientStub.prototype.validator = validateVideoEncodeClientRequest;
  VideoEncodeClientProxy.prototype.validator = null;
  exports.VideoPixelFormat = VideoPixelFormat;
  exports.VideoEncodeProfile = VideoEncodeProfile;
  exports.VideoEncodeAccelerator = VideoEncodeAccelerator;
  exports.VideoEncodeAcceleratorPtr = VideoEncodeAcceleratorPtr;
  exports.VideoEncodeAcceleratorAssociatedPtr = VideoEncodeAcceleratorAssociatedPtr;
  exports.VideoEncodeClient = VideoEncodeClient;
  exports.VideoEncodeClientPtr = VideoEncodeClientPtr;
  exports.VideoEncodeClientAssociatedPtr = VideoEncodeClientAssociatedPtr;
})();