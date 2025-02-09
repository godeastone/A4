// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/mediastream/media_devices.mojom';
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
  var video_capture_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/capture/mojom/video_capture_types.mojom', '../../../../../../media/capture/mojom/video_capture_types.mojom.js');
  }
  var audio_parameters$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_parameters.mojom', '../../../../../../media/mojo/interfaces/audio_parameters.mojom.js');
  }


  var MediaDeviceType = {};
  MediaDeviceType.MEDIA_AUDIO_INPUT = 0;
  MediaDeviceType.MEDIA_VIDEO_INPUT = MediaDeviceType.MEDIA_AUDIO_INPUT + 1;
  MediaDeviceType.MEDIA_AUDIO_OUTPUT = MediaDeviceType.MEDIA_VIDEO_INPUT + 1;
  MediaDeviceType.NUM_MEDIA_DEVICE_TYPES = MediaDeviceType.MEDIA_AUDIO_OUTPUT + 1;

  MediaDeviceType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  MediaDeviceType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FacingMode = {};
  FacingMode.NONE = 0;
  FacingMode.USER = FacingMode.NONE + 1;
  FacingMode.ENVIRONMENT = FacingMode.USER + 1;
  FacingMode.LEFT = FacingMode.ENVIRONMENT + 1;
  FacingMode.RIGHT = FacingMode.LEFT + 1;

  FacingMode.isKnownEnumValue = function(value) {
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

  FacingMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function MediaDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDeviceInfo.prototype.initDefaults_ = function() {
    this.deviceId = null;
    this.label = null;
    this.groupId = null;
  };
  MediaDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDeviceInfo.generate = function(generator_) {
    var generated = new MediaDeviceInfo;
    generated.deviceId = generator_.generateString(false);
    generated.label = generator_.generateString(false);
    generated.groupId = generator_.generateString(false);
    return generated;
  };

  MediaDeviceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateString(this.groupId, false);
    }
    return this;
  };
  MediaDeviceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDeviceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDeviceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDeviceInfo.validate = function(messageValidator, offset) {
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


    // validate MediaDeviceInfo.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDeviceInfo.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDeviceInfo.groupId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDeviceInfo.encodedSize = codec.kStructHeaderSize + 24;

  MediaDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new MediaDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    val.label = decoder.decodeStruct(codec.String);
    val.groupId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStruct(codec.String, val.groupId);
  };
  function VideoInputDeviceCapabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoInputDeviceCapabilities.prototype.initDefaults_ = function() {
    this.deviceId = null;
    this.groupId = null;
    this.formats = null;
    this.facingMode = 0;
  };
  VideoInputDeviceCapabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoInputDeviceCapabilities.generate = function(generator_) {
    var generated = new VideoInputDeviceCapabilities;
    generated.deviceId = generator_.generateString(false);
    generated.groupId = generator_.generateString(false);
    generated.formats = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.VideoCaptureFormat, false);
    });
    generated.facingMode = generator_.generateEnum(0, 4);
    return generated;
  };

  VideoInputDeviceCapabilities.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateString(this.groupId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.formats = mutator_.mutateArray(this.formats, function(val) {
        return mutator_.mutateStruct(media.mojom.VideoCaptureFormat, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.facingMode = mutator_.mutateEnum(this.facingMode, 0, 4);
    }
    return this;
  };
  VideoInputDeviceCapabilities.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoInputDeviceCapabilities.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoInputDeviceCapabilities.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoInputDeviceCapabilities.validate = function(messageValidator, offset) {
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


    // validate VideoInputDeviceCapabilities.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoInputDeviceCapabilities.groupId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoInputDeviceCapabilities.formats
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(video_capture_types$.VideoCaptureFormat), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoInputDeviceCapabilities.facingMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, FacingMode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoInputDeviceCapabilities.encodedSize = codec.kStructHeaderSize + 32;

  VideoInputDeviceCapabilities.decode = function(decoder) {
    var packed;
    var val = new VideoInputDeviceCapabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    val.groupId = decoder.decodeStruct(codec.String);
    val.formats = decoder.decodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureFormat));
    val.facingMode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoInputDeviceCapabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoInputDeviceCapabilities.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStruct(codec.String, val.groupId);
    encoder.encodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureFormat), val.formats);
    encoder.encodeStruct(codec.Int32, val.facingMode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AudioInputDeviceCapabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioInputDeviceCapabilities.prototype.initDefaults_ = function() {
    this.deviceId = null;
    this.parameters = null;
  };
  AudioInputDeviceCapabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioInputDeviceCapabilities.generate = function(generator_) {
    var generated = new AudioInputDeviceCapabilities;
    generated.deviceId = generator_.generateString(false);
    generated.parameters = generator_.generateStruct(media.mojom.AudioParameters, false);
    return generated;
  };

  AudioInputDeviceCapabilities.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.parameters = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    return this;
  };
  AudioInputDeviceCapabilities.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioInputDeviceCapabilities.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioInputDeviceCapabilities.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioInputDeviceCapabilities.validate = function(messageValidator, offset) {
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


    // validate AudioInputDeviceCapabilities.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioInputDeviceCapabilities.parameters
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioInputDeviceCapabilities.encodedSize = codec.kStructHeaderSize + 16;

  AudioInputDeviceCapabilities.decode = function(decoder) {
    var packed;
    var val = new AudioInputDeviceCapabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    val.parameters = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    return val;
  };

  AudioInputDeviceCapabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioInputDeviceCapabilities.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.parameters);
  };
  function MediaDevicesDispatcherHost_EnumerateDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_EnumerateDevices_Params.prototype.initDefaults_ = function() {
    this.requestAudioInput = false;
    this.requestVideoInput = false;
    this.requestAudioOutput = false;
    this.requestVideoInputCapabilities = false;
  };
  MediaDevicesDispatcherHost_EnumerateDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_EnumerateDevices_Params.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_EnumerateDevices_Params;
    generated.requestAudioInput = generator_.generateBool();
    generated.requestVideoInput = generator_.generateBool();
    generated.requestAudioOutput = generator_.generateBool();
    generated.requestVideoInputCapabilities = generator_.generateBool();
    return generated;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestAudioInput = mutator_.mutateBool(this.requestAudioInput);
    }
    if (mutator_.chooseMutateField()) {
      this.requestVideoInput = mutator_.mutateBool(this.requestVideoInput);
    }
    if (mutator_.chooseMutateField()) {
      this.requestAudioOutput = mutator_.mutateBool(this.requestAudioOutput);
    }
    if (mutator_.chooseMutateField()) {
      this.requestVideoInputCapabilities = mutator_.mutateBool(this.requestVideoInputCapabilities);
    }
    return this;
  };
  MediaDevicesDispatcherHost_EnumerateDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_EnumerateDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_Params.validate = function(messageValidator, offset) {
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

  MediaDevicesDispatcherHost_EnumerateDevices_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaDevicesDispatcherHost_EnumerateDevices_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_EnumerateDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.requestAudioInput = (packed >> 0) & 1 ? true : false;
    val.requestVideoInput = (packed >> 1) & 1 ? true : false;
    val.requestAudioOutput = (packed >> 2) & 1 ? true : false;
    val.requestVideoInputCapabilities = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_EnumerateDevices_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.requestAudioInput & 1) << 0
    packed |= (val.requestVideoInput & 1) << 1
    packed |= (val.requestAudioOutput & 1) << 2
    packed |= (val.requestVideoInputCapabilities & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.enumeration = null;
    this.videoInputDeviceCapabilities = null;
  };
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams;
    generated.enumeration = generator_.generateArray(function() {
      return generator_.generateArray(function() {
        return generator_.generateStruct(blink.mojom.MediaDeviceInfo, false);
      });
    });
    generated.videoInputDeviceCapabilities = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.VideoInputDeviceCapabilities, false);
    });
    return generated;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enumeration = mutator_.mutateArray(this.enumeration, function(val) {
        return mutator_.mutateArray(val, function(val) {
          return mutator_.mutateStruct(blink.mojom.MediaDeviceInfo, false);
        });
      });
    }
    if (mutator_.chooseMutateField()) {
      this.videoInputDeviceCapabilities = mutator_.mutateArray(this.videoInputDeviceCapabilities, function(val) {
        return mutator_.mutateStruct(blink.mojom.VideoInputDeviceCapabilities, false);
      });
    }
    return this;
  };
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.enumeration
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.ArrayOf(new codec.PointerTo(MediaDeviceInfo)), false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.videoInputDeviceCapabilities
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(VideoInputDeviceCapabilities), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.enumeration = decoder.decodeArrayPointer(new codec.ArrayOf(new codec.PointerTo(MediaDeviceInfo)));
    val.videoInputDeviceCapabilities = decoder.decodeArrayPointer(new codec.PointerTo(VideoInputDeviceCapabilities));
    return val;
  };

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.ArrayOf(new codec.PointerTo(MediaDeviceInfo)), val.enumeration);
    encoder.encodeArrayPointer(new codec.PointerTo(VideoInputDeviceCapabilities), val.videoInputDeviceCapabilities);
  };
  function MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.prototype.initDefaults_ = function() {
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params;
    return generated;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.validate = function(messageValidator, offset) {
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

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.prototype.initDefaults_ = function() {
    this.videoInputDeviceCapabilities = null;
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams;
    generated.videoInputDeviceCapabilities = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.VideoInputDeviceCapabilities, false);
    });
    return generated;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.videoInputDeviceCapabilities = mutator_.mutateArray(this.videoInputDeviceCapabilities, function(val) {
        return mutator_.mutateStruct(blink.mojom.VideoInputDeviceCapabilities, false);
      });
    }
    return this;
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.videoInputDeviceCapabilities
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(VideoInputDeviceCapabilities), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.videoInputDeviceCapabilities = decoder.decodeArrayPointer(new codec.PointerTo(VideoInputDeviceCapabilities));
    return val;
  };

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(VideoInputDeviceCapabilities), val.videoInputDeviceCapabilities);
  };
  function MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params;
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.prototype.initDefaults_ = function() {
    this.formats = null;
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams;
    generated.formats = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.VideoCaptureFormat, false);
    });
    return generated;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.formats = mutator_.mutateArray(this.formats, function(val) {
        return mutator_.mutateStruct(media.mojom.VideoCaptureFormat, false);
      });
    }
    return this;
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.formats
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(video_capture_types$.VideoCaptureFormat), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.formats = decoder.decodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureFormat));
    return val;
  };

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureFormat), val.formats);
  };
  function MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params;
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.prototype.initDefaults_ = function() {
    this.formats = null;
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams;
    generated.formats = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.VideoCaptureFormat, false);
    });
    return generated;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.formats = mutator_.mutateArray(this.formats, function(val) {
        return mutator_.mutateStruct(media.mojom.VideoCaptureFormat, false);
      });
    }
    return this;
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.formats
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(video_capture_types$.VideoCaptureFormat), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.formats = decoder.decodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureFormat));
    return val;
  };

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(video_capture_types$.VideoCaptureFormat), val.formats);
  };
  function MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.prototype.initDefaults_ = function() {
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params;
    return generated;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.validate = function(messageValidator, offset) {
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

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.prototype.initDefaults_ = function() {
    this.audioInputDeviceCapabilities = null;
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams;
    generated.audioInputDeviceCapabilities = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.AudioInputDeviceCapabilities, false);
    });
    return generated;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.audioInputDeviceCapabilities = mutator_.mutateArray(this.audioInputDeviceCapabilities, function(val) {
        return mutator_.mutateStruct(blink.mojom.AudioInputDeviceCapabilities, false);
      });
    }
    return this;
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.audioInputDeviceCapabilities
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(AudioInputDeviceCapabilities), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audioInputDeviceCapabilities = decoder.decodeArrayPointer(new codec.PointerTo(AudioInputDeviceCapabilities));
    return val;
  };

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(AudioInputDeviceCapabilities), val.audioInputDeviceCapabilities);
  };
  function MediaDevicesDispatcherHost_AddMediaDevicesListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.prototype.initDefaults_ = function() {
    this.subscribeAudioInput = false;
    this.subscribeVideoInput = false;
    this.subscribeAudioOutput = false;
    this.listener = new MediaDevicesListenerPtr();
  };
  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.generate = function(generator_) {
    var generated = new MediaDevicesDispatcherHost_AddMediaDevicesListener_Params;
    generated.subscribeAudioInput = generator_.generateBool();
    generated.subscribeVideoInput = generator_.generateBool();
    generated.subscribeAudioOutput = generator_.generateBool();
    generated.listener = generator_.generateInterface("blink.mojom.MediaDevicesListener", false);
    return generated;
  };

  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.subscribeAudioInput = mutator_.mutateBool(this.subscribeAudioInput);
    }
    if (mutator_.chooseMutateField()) {
      this.subscribeVideoInput = mutator_.mutateBool(this.subscribeVideoInput);
    }
    if (mutator_.chooseMutateField()) {
      this.subscribeAudioOutput = mutator_.mutateBool(this.subscribeAudioOutput);
    }
    if (mutator_.chooseMutateField()) {
      this.listener = mutator_.mutateInterface(this.listener, "blink.mojom.MediaDevicesListener", false);
    }
    return this;
  };
  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.listener !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.MediaDevicesListenerPtr"]);
    }
    return handles;
  };

  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.listener = handles[idx++];;
    return idx;
  };

  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.validate = function(messageValidator, offset) {
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





    // validate MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesDispatcherHost_AddMediaDevicesListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.subscribeAudioInput = (packed >> 0) & 1 ? true : false;
    val.subscribeVideoInput = (packed >> 1) & 1 ? true : false;
    val.subscribeAudioOutput = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.listener = decoder.decodeStruct(new codec.Interface(MediaDevicesListenerPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.subscribeAudioInput & 1) << 0
    packed |= (val.subscribeVideoInput & 1) << 1
    packed |= (val.subscribeAudioOutput & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(new codec.Interface(MediaDevicesListenerPtr), val.listener);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaDevicesListener_OnDevicesChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDevicesListener_OnDevicesChanged_Params.prototype.initDefaults_ = function() {
    this.type = 0;
    this.deviceInfos = null;
  };
  MediaDevicesListener_OnDevicesChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDevicesListener_OnDevicesChanged_Params.generate = function(generator_) {
    var generated = new MediaDevicesListener_OnDevicesChanged_Params;
    generated.type = generator_.generateEnum(0, 3);
    generated.deviceInfos = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.MediaDeviceInfo, false);
    });
    return generated;
  };

  MediaDevicesListener_OnDevicesChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceInfos = mutator_.mutateArray(this.deviceInfos, function(val) {
        return mutator_.mutateStruct(blink.mojom.MediaDeviceInfo, false);
      });
    }
    return this;
  };
  MediaDevicesListener_OnDevicesChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDevicesListener_OnDevicesChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDevicesListener_OnDevicesChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDevicesListener_OnDevicesChanged_Params.validate = function(messageValidator, offset) {
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


    // validate MediaDevicesListener_OnDevicesChanged_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaDeviceType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDevicesListener_OnDevicesChanged_Params.deviceInfos
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(MediaDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDevicesListener_OnDevicesChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaDevicesListener_OnDevicesChanged_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDevicesListener_OnDevicesChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.deviceInfos = decoder.decodeArrayPointer(new codec.PointerTo(MediaDeviceInfo));
    return val;
  };

  MediaDevicesListener_OnDevicesChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDevicesListener_OnDevicesChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaDeviceInfo), val.deviceInfos);
  };
  var kMediaDevicesDispatcherHost_EnumerateDevices_Name = 120453855;
  var kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name = 1019092370;
  var kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name = 282403794;
  var kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name = 1300422374;
  var kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name = 1693769212;
  var kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name = 729447600;

  function MediaDevicesDispatcherHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaDevicesDispatcherHost,
                                                   handleOrPtrInfo);
  }

  function MediaDevicesDispatcherHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaDevicesDispatcherHost, associatedInterfacePtrInfo);
  }

  MediaDevicesDispatcherHostAssociatedPtr.prototype =
      Object.create(MediaDevicesDispatcherHostPtr.prototype);
  MediaDevicesDispatcherHostAssociatedPtr.prototype.constructor =
      MediaDevicesDispatcherHostAssociatedPtr;

  function MediaDevicesDispatcherHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaDevicesDispatcherHostPtr.prototype.enumerateDevices = function() {
    return MediaDevicesDispatcherHostProxy.prototype.enumerateDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDevicesDispatcherHostProxy.prototype.enumerateDevices = function(requestAudioInput, requestVideoInput, requestAudioOutput, requestVideoInputCapabilities) {
    var params_ = new MediaDevicesDispatcherHost_EnumerateDevices_Params();
    params_.requestAudioInput = requestAudioInput;
    params_.requestVideoInput = requestVideoInput;
    params_.requestAudioOutput = requestAudioOutput;
    params_.requestVideoInputCapabilities = requestVideoInputCapabilities;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDevicesDispatcherHost_EnumerateDevices_Name,
          codec.align(MediaDevicesDispatcherHost_EnumerateDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDevicesDispatcherHost_EnumerateDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDevicesDispatcherHostPtr.prototype.getVideoInputCapabilities = function() {
    return MediaDevicesDispatcherHostProxy.prototype.getVideoInputCapabilities
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDevicesDispatcherHostProxy.prototype.getVideoInputCapabilities = function() {
    var params_ = new MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name,
          codec.align(MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDevicesDispatcherHostPtr.prototype.getAllVideoInputDeviceFormats = function() {
    return MediaDevicesDispatcherHostProxy.prototype.getAllVideoInputDeviceFormats
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDevicesDispatcherHostProxy.prototype.getAllVideoInputDeviceFormats = function(deviceId) {
    var params_ = new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params();
    params_.deviceId = deviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name,
          codec.align(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDevicesDispatcherHostPtr.prototype.getAvailableVideoInputDeviceFormats = function() {
    return MediaDevicesDispatcherHostProxy.prototype.getAvailableVideoInputDeviceFormats
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDevicesDispatcherHostProxy.prototype.getAvailableVideoInputDeviceFormats = function(deviceId) {
    var params_ = new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params();
    params_.deviceId = deviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name,
          codec.align(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDevicesDispatcherHostPtr.prototype.getAudioInputCapabilities = function() {
    return MediaDevicesDispatcherHostProxy.prototype.getAudioInputCapabilities
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDevicesDispatcherHostProxy.prototype.getAudioInputCapabilities = function() {
    var params_ = new MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name,
          codec.align(MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDevicesDispatcherHostPtr.prototype.addMediaDevicesListener = function() {
    return MediaDevicesDispatcherHostProxy.prototype.addMediaDevicesListener
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDevicesDispatcherHostProxy.prototype.addMediaDevicesListener = function(subscribeAudioInput, subscribeVideoInput, subscribeAudioOutput, listener) {
    var params_ = new MediaDevicesDispatcherHost_AddMediaDevicesListener_Params();
    params_.subscribeAudioInput = subscribeAudioInput;
    params_.subscribeVideoInput = subscribeVideoInput;
    params_.subscribeAudioOutput = subscribeAudioOutput;
    params_.listener = listener;
    var builder = new codec.MessageV0Builder(
        kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name,
        codec.align(MediaDevicesDispatcherHost_AddMediaDevicesListener_Params.encodedSize));
    builder.encodeStruct(MediaDevicesDispatcherHost_AddMediaDevicesListener_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaDevicesDispatcherHostStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaDevicesDispatcherHostStub.prototype.enumerateDevices = function(requestAudioInput, requestVideoInput, requestAudioOutput, requestVideoInputCapabilities) {
    return this.delegate_ && this.delegate_.enumerateDevices && this.delegate_.enumerateDevices(requestAudioInput, requestVideoInput, requestAudioOutput, requestVideoInputCapabilities);
  }
  MediaDevicesDispatcherHostStub.prototype.getVideoInputCapabilities = function() {
    return this.delegate_ && this.delegate_.getVideoInputCapabilities && this.delegate_.getVideoInputCapabilities();
  }
  MediaDevicesDispatcherHostStub.prototype.getAllVideoInputDeviceFormats = function(deviceId) {
    return this.delegate_ && this.delegate_.getAllVideoInputDeviceFormats && this.delegate_.getAllVideoInputDeviceFormats(deviceId);
  }
  MediaDevicesDispatcherHostStub.prototype.getAvailableVideoInputDeviceFormats = function(deviceId) {
    return this.delegate_ && this.delegate_.getAvailableVideoInputDeviceFormats && this.delegate_.getAvailableVideoInputDeviceFormats(deviceId);
  }
  MediaDevicesDispatcherHostStub.prototype.getAudioInputCapabilities = function() {
    return this.delegate_ && this.delegate_.getAudioInputCapabilities && this.delegate_.getAudioInputCapabilities();
  }
  MediaDevicesDispatcherHostStub.prototype.addMediaDevicesListener = function(subscribeAudioInput, subscribeVideoInput, subscribeAudioOutput, listener) {
    return this.delegate_ && this.delegate_.addMediaDevicesListener && this.delegate_.addMediaDevicesListener(subscribeAudioInput, subscribeVideoInput, subscribeAudioOutput, listener);
  }

  MediaDevicesDispatcherHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name:
      var params = reader.decodeStruct(MediaDevicesDispatcherHost_AddMediaDevicesListener_Params);
      this.addMediaDevicesListener(params.subscribeAudioInput, params.subscribeVideoInput, params.subscribeAudioOutput, params.listener);
      return true;
    default:
      return false;
    }
  };

  MediaDevicesDispatcherHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaDevicesDispatcherHost_EnumerateDevices_Name:
      var params = reader.decodeStruct(MediaDevicesDispatcherHost_EnumerateDevices_Params);
      this.enumerateDevices(params.requestAudioInput, params.requestVideoInput, params.requestAudioOutput, params.requestVideoInputCapabilities).then(function(response) {
        var responseParams =
            new MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams();
        responseParams.enumeration = response.enumeration;
        responseParams.videoInputDeviceCapabilities = response.videoInputDeviceCapabilities;
        var builder = new codec.MessageV1Builder(
            kMediaDevicesDispatcherHost_EnumerateDevices_Name,
            codec.align(MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name:
      var params = reader.decodeStruct(MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params);
      this.getVideoInputCapabilities().then(function(response) {
        var responseParams =
            new MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams();
        responseParams.videoInputDeviceCapabilities = response.videoInputDeviceCapabilities;
        var builder = new codec.MessageV1Builder(
            kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name,
            codec.align(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name:
      var params = reader.decodeStruct(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params);
      this.getAllVideoInputDeviceFormats(params.deviceId).then(function(response) {
        var responseParams =
            new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams();
        responseParams.formats = response.formats;
        var builder = new codec.MessageV1Builder(
            kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name,
            codec.align(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name:
      var params = reader.decodeStruct(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params);
      this.getAvailableVideoInputDeviceFormats(params.deviceId).then(function(response) {
        var responseParams =
            new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams();
        responseParams.formats = response.formats;
        var builder = new codec.MessageV1Builder(
            kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name,
            codec.align(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name:
      var params = reader.decodeStruct(MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params);
      this.getAudioInputCapabilities().then(function(response) {
        var responseParams =
            new MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams();
        responseParams.audioInputDeviceCapabilities = response.audioInputDeviceCapabilities;
        var builder = new codec.MessageV1Builder(
            kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name,
            codec.align(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaDevicesDispatcherHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaDevicesDispatcherHost_EnumerateDevices_Name:
        if (message.expectsResponse())
          paramsClass = MediaDevicesDispatcherHost_EnumerateDevices_Params;
      break;
      case kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name:
        if (message.expectsResponse())
          paramsClass = MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params;
      break;
      case kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name:
        if (message.expectsResponse())
          paramsClass = MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params;
      break;
      case kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name:
        if (message.expectsResponse())
          paramsClass = MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params;
      break;
      case kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name:
        if (message.expectsResponse())
          paramsClass = MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params;
      break;
      case kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaDevicesDispatcherHost_AddMediaDevicesListener_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaDevicesDispatcherHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaDevicesDispatcherHost_EnumerateDevices_Name:
        if (message.isResponse())
          paramsClass = MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams;
        break;
      case kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name:
        if (message.isResponse())
          paramsClass = MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams;
        break;
      case kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name:
        if (message.isResponse())
          paramsClass = MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams;
        break;
      case kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name:
        if (message.isResponse())
          paramsClass = MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams;
        break;
      case kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name:
        if (message.isResponse())
          paramsClass = MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaDevicesDispatcherHost = {
    name: 'blink.mojom.MediaDevicesDispatcherHost',
    kVersion: 0,
    ptrClass: MediaDevicesDispatcherHostPtr,
    proxyClass: MediaDevicesDispatcherHostProxy,
    stubClass: MediaDevicesDispatcherHostStub,
    validateRequest: validateMediaDevicesDispatcherHostRequest,
    validateResponse: validateMediaDevicesDispatcherHostResponse,
    mojomId: 'third_party/blink/public/platform/modules/mediastream/media_devices.mojom',
    fuzzMethods: {
      enumerateDevices: {
        params: MediaDevicesDispatcherHost_EnumerateDevices_Params,
      },
      getVideoInputCapabilities: {
        params: MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params,
      },
      getAllVideoInputDeviceFormats: {
        params: MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params,
      },
      getAvailableVideoInputDeviceFormats: {
        params: MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params,
      },
      getAudioInputCapabilities: {
        params: MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params,
      },
      addMediaDevicesListener: {
        params: MediaDevicesDispatcherHost_AddMediaDevicesListener_Params,
      },
    },
  };
  MediaDevicesDispatcherHostStub.prototype.validator = validateMediaDevicesDispatcherHostRequest;
  MediaDevicesDispatcherHostProxy.prototype.validator = validateMediaDevicesDispatcherHostResponse;
  var kMediaDevicesListener_OnDevicesChanged_Name = 861623040;

  function MediaDevicesListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaDevicesListener,
                                                   handleOrPtrInfo);
  }

  function MediaDevicesListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaDevicesListener, associatedInterfacePtrInfo);
  }

  MediaDevicesListenerAssociatedPtr.prototype =
      Object.create(MediaDevicesListenerPtr.prototype);
  MediaDevicesListenerAssociatedPtr.prototype.constructor =
      MediaDevicesListenerAssociatedPtr;

  function MediaDevicesListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaDevicesListenerPtr.prototype.onDevicesChanged = function() {
    return MediaDevicesListenerProxy.prototype.onDevicesChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDevicesListenerProxy.prototype.onDevicesChanged = function(type, deviceInfos) {
    var params_ = new MediaDevicesListener_OnDevicesChanged_Params();
    params_.type = type;
    params_.deviceInfos = deviceInfos;
    var builder = new codec.MessageV0Builder(
        kMediaDevicesListener_OnDevicesChanged_Name,
        codec.align(MediaDevicesListener_OnDevicesChanged_Params.encodedSize));
    builder.encodeStruct(MediaDevicesListener_OnDevicesChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaDevicesListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaDevicesListenerStub.prototype.onDevicesChanged = function(type, deviceInfos) {
    return this.delegate_ && this.delegate_.onDevicesChanged && this.delegate_.onDevicesChanged(type, deviceInfos);
  }

  MediaDevicesListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaDevicesListener_OnDevicesChanged_Name:
      var params = reader.decodeStruct(MediaDevicesListener_OnDevicesChanged_Params);
      this.onDevicesChanged(params.type, params.deviceInfos);
      return true;
    default:
      return false;
    }
  };

  MediaDevicesListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaDevicesListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaDevicesListener_OnDevicesChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaDevicesListener_OnDevicesChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaDevicesListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaDevicesListener = {
    name: 'blink.mojom.MediaDevicesListener',
    kVersion: 0,
    ptrClass: MediaDevicesListenerPtr,
    proxyClass: MediaDevicesListenerProxy,
    stubClass: MediaDevicesListenerStub,
    validateRequest: validateMediaDevicesListenerRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/mediastream/media_devices.mojom',
    fuzzMethods: {
      onDevicesChanged: {
        params: MediaDevicesListener_OnDevicesChanged_Params,
      },
    },
  };
  MediaDevicesListenerStub.prototype.validator = validateMediaDevicesListenerRequest;
  MediaDevicesListenerProxy.prototype.validator = null;
  exports.MediaDeviceType = MediaDeviceType;
  exports.FacingMode = FacingMode;
  exports.MediaDeviceInfo = MediaDeviceInfo;
  exports.VideoInputDeviceCapabilities = VideoInputDeviceCapabilities;
  exports.AudioInputDeviceCapabilities = AudioInputDeviceCapabilities;
  exports.MediaDevicesDispatcherHost = MediaDevicesDispatcherHost;
  exports.MediaDevicesDispatcherHostPtr = MediaDevicesDispatcherHostPtr;
  exports.MediaDevicesDispatcherHostAssociatedPtr = MediaDevicesDispatcherHostAssociatedPtr;
  exports.MediaDevicesListener = MediaDevicesListener;
  exports.MediaDevicesListenerPtr = MediaDevicesListenerPtr;
  exports.MediaDevicesListenerAssociatedPtr = MediaDevicesListenerAssociatedPtr;
})();