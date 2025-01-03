// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/media/media_stream.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');


  var MediaStreamType = {};
  MediaStreamType.MEDIA_NO_SERVICE = 0;
  MediaStreamType.MEDIA_DEVICE_AUDIO_CAPTURE = MediaStreamType.MEDIA_NO_SERVICE + 1;
  MediaStreamType.MEDIA_DEVICE_VIDEO_CAPTURE = MediaStreamType.MEDIA_DEVICE_AUDIO_CAPTURE + 1;
  MediaStreamType.MEDIA_TAB_AUDIO_CAPTURE = MediaStreamType.MEDIA_DEVICE_VIDEO_CAPTURE + 1;
  MediaStreamType.MEDIA_TAB_VIDEO_CAPTURE = MediaStreamType.MEDIA_TAB_AUDIO_CAPTURE + 1;
  MediaStreamType.MEDIA_DESKTOP_VIDEO_CAPTURE = MediaStreamType.MEDIA_TAB_VIDEO_CAPTURE + 1;
  MediaStreamType.MEDIA_DESKTOP_AUDIO_CAPTURE = MediaStreamType.MEDIA_DESKTOP_VIDEO_CAPTURE + 1;
  MediaStreamType.NUM_MEDIA_TYPES = MediaStreamType.MEDIA_DESKTOP_AUDIO_CAPTURE + 1;

  MediaStreamType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  MediaStreamType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var MediaStreamRequestResult = {};
  MediaStreamRequestResult.OK = 0;
  MediaStreamRequestResult.PERMISSION_DENIED = MediaStreamRequestResult.OK + 1;
  MediaStreamRequestResult.PERMISSION_DISMISSED = MediaStreamRequestResult.PERMISSION_DENIED + 1;
  MediaStreamRequestResult.INVALID_STATE = MediaStreamRequestResult.PERMISSION_DISMISSED + 1;
  MediaStreamRequestResult.NO_HARDWARE = MediaStreamRequestResult.INVALID_STATE + 1;
  MediaStreamRequestResult.INVALID_SECURITY_ORIGIN = MediaStreamRequestResult.NO_HARDWARE + 1;
  MediaStreamRequestResult.TAB_CAPTURE_FAILURE = MediaStreamRequestResult.INVALID_SECURITY_ORIGIN + 1;
  MediaStreamRequestResult.SCREEN_CAPTURE_FAILURE = MediaStreamRequestResult.TAB_CAPTURE_FAILURE + 1;
  MediaStreamRequestResult.CAPTURE_FAILURE = MediaStreamRequestResult.SCREEN_CAPTURE_FAILURE + 1;
  MediaStreamRequestResult.CONSTRAINT_NOT_SATISFIED = MediaStreamRequestResult.CAPTURE_FAILURE + 1;
  MediaStreamRequestResult.TRACK_START_FAILURE_AUDIO = MediaStreamRequestResult.CONSTRAINT_NOT_SATISFIED + 1;
  MediaStreamRequestResult.TRACK_START_FAILURE_VIDEO = MediaStreamRequestResult.TRACK_START_FAILURE_AUDIO + 1;
  MediaStreamRequestResult.NOT_SUPPORTED = MediaStreamRequestResult.TRACK_START_FAILURE_VIDEO + 1;
  MediaStreamRequestResult.FAILED_DUE_TO_SHUTDOWN = MediaStreamRequestResult.NOT_SUPPORTED + 1;
  MediaStreamRequestResult.KILL_SWITCH_ON = MediaStreamRequestResult.FAILED_DUE_TO_SHUTDOWN + 1;

  MediaStreamRequestResult.isKnownEnumValue = function(value) {
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
    case 11:
    case 12:
    case 13:
    case 14:
      return true;
    }
    return false;
  };

  MediaStreamRequestResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function MediaStreamDevice(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDevice.prototype.initDefaults_ = function() {
  };
  MediaStreamDevice.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDevice.generate = function(generator_) {
    var generated = new MediaStreamDevice;
    return generated;
  };

  MediaStreamDevice.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaStreamDevice.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDevice.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDevice.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDevice.validate = function(messageValidator, offset) {
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

  MediaStreamDevice.encodedSize = codec.kStructHeaderSize + 0;

  MediaStreamDevice.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDevice();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaStreamDevice.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDevice.encodedSize);
    encoder.writeUint32(0);
  };
  function TrackControls(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TrackControls.prototype.initDefaults_ = function() {
    this.requested = false;
    this.streamSource = null;
    this.deviceId = null;
  };
  TrackControls.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TrackControls.generate = function(generator_) {
    var generated = new TrackControls;
    generated.requested = generator_.generateBool();
    generated.streamSource = generator_.generateString(false);
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  TrackControls.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requested = mutator_.mutateBool(this.requested);
    }
    if (mutator_.chooseMutateField()) {
      this.streamSource = mutator_.mutateString(this.streamSource, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  TrackControls.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TrackControls.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TrackControls.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TrackControls.validate = function(messageValidator, offset) {
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



    // validate TrackControls.streamSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackControls.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TrackControls.encodedSize = codec.kStructHeaderSize + 24;

  TrackControls.decode = function(decoder) {
    var packed;
    var val = new TrackControls();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.requested = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.streamSource = decoder.decodeStruct(codec.String);
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  TrackControls.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TrackControls.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.requested & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.streamSource);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function StreamControls(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamControls.prototype.initDefaults_ = function() {
    this.audio = null;
    this.video = null;
    this.hotwordEnabled = false;
    this.disableLocalEcho = false;
  };
  StreamControls.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamControls.generate = function(generator_) {
    var generated = new StreamControls;
    generated.audio = generator_.generateStruct(content.mojom.TrackControls, false);
    generated.video = generator_.generateStruct(content.mojom.TrackControls, false);
    generated.hotwordEnabled = generator_.generateBool();
    generated.disableLocalEcho = generator_.generateBool();
    return generated;
  };

  StreamControls.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.audio = mutator_.mutateStruct(content.mojom.TrackControls, false);
    }
    if (mutator_.chooseMutateField()) {
      this.video = mutator_.mutateStruct(content.mojom.TrackControls, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hotwordEnabled = mutator_.mutateBool(this.hotwordEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.disableLocalEcho = mutator_.mutateBool(this.disableLocalEcho);
    }
    return this;
  };
  StreamControls.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  StreamControls.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamControls.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  StreamControls.validate = function(messageValidator, offset) {
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


    // validate StreamControls.audio
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, TrackControls, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamControls.video
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, TrackControls, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  StreamControls.encodedSize = codec.kStructHeaderSize + 24;

  StreamControls.decode = function(decoder) {
    var packed;
    var val = new StreamControls();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audio = decoder.decodeStructPointer(TrackControls);
    val.video = decoder.decodeStructPointer(TrackControls);
    packed = decoder.readUint8();
    val.hotwordEnabled = (packed >> 0) & 1 ? true : false;
    val.disableLocalEcho = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  StreamControls.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamControls.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(TrackControls, val.audio);
    encoder.encodeStructPointer(TrackControls, val.video);
    packed = 0;
    packed |= (val.hotwordEnabled & 1) << 0
    packed |= (val.disableLocalEcho & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaStreamDeviceObserver_OnDeviceStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDeviceObserver_OnDeviceStopped_Params.prototype.initDefaults_ = function() {
    this.label = null;
    this.device = null;
  };
  MediaStreamDeviceObserver_OnDeviceStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDeviceObserver_OnDeviceStopped_Params.generate = function(generator_) {
    var generated = new MediaStreamDeviceObserver_OnDeviceStopped_Params;
    generated.label = generator_.generateString(false);
    generated.device = generator_.generateStruct(content.mojom.MediaStreamDevice, false);
    return generated;
  };

  MediaStreamDeviceObserver_OnDeviceStopped_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    if (mutator_.chooseMutateField()) {
      this.device = mutator_.mutateStruct(content.mojom.MediaStreamDevice, false);
    }
    return this;
  };
  MediaStreamDeviceObserver_OnDeviceStopped_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDeviceObserver_OnDeviceStopped_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDeviceObserver_OnDeviceStopped_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDeviceObserver_OnDeviceStopped_Params.validate = function(messageValidator, offset) {
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


    // validate MediaStreamDeviceObserver_OnDeviceStopped_Params.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaStreamDeviceObserver_OnDeviceStopped_Params.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, MediaStreamDevice, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaStreamDeviceObserver_OnDeviceStopped_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaStreamDeviceObserver_OnDeviceStopped_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDeviceObserver_OnDeviceStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.label = decoder.decodeStruct(codec.String);
    val.device = decoder.decodeStructPointer(MediaStreamDevice);
    return val;
  };

  MediaStreamDeviceObserver_OnDeviceStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDeviceObserver_OnDeviceStopped_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStructPointer(MediaStreamDevice, val.device);
  };
  function MediaStreamDispatcherHost_GenerateStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_GenerateStream_Params.prototype.initDefaults_ = function() {
    this.requestId = 0;
    this.userGesture = false;
    this.controls = null;
  };
  MediaStreamDispatcherHost_GenerateStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_GenerateStream_Params.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_GenerateStream_Params;
    generated.requestId = generator_.generateInt32();
    generated.controls = generator_.generateStruct(content.mojom.StreamControls, false);
    generated.userGesture = generator_.generateBool();
    return generated;
  };

  MediaStreamDispatcherHost_GenerateStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateInt32(this.requestId);
    }
    if (mutator_.chooseMutateField()) {
      this.controls = mutator_.mutateStruct(content.mojom.StreamControls, false);
    }
    if (mutator_.chooseMutateField()) {
      this.userGesture = mutator_.mutateBool(this.userGesture);
    }
    return this;
  };
  MediaStreamDispatcherHost_GenerateStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_GenerateStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_GenerateStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_GenerateStream_Params.validate = function(messageValidator, offset) {
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



    // validate MediaStreamDispatcherHost_GenerateStream_Params.controls
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, StreamControls, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_GenerateStream_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaStreamDispatcherHost_GenerateStream_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_GenerateStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.userGesture = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.controls = decoder.decodeStructPointer(StreamControls);
    return val;
  };

  MediaStreamDispatcherHost_GenerateStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_GenerateStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.requestId);
    packed = 0;
    packed |= (val.userGesture & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(StreamControls, val.controls);
  };
  function MediaStreamDispatcherHost_GenerateStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_GenerateStream_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.label = null;
    this.audioDevices = null;
    this.videoDevices = null;
  };
  MediaStreamDispatcherHost_GenerateStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_GenerateStream_ResponseParams.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_GenerateStream_ResponseParams;
    generated.result = generator_.generateEnum(0, 14);
    generated.label = generator_.generateString(false);
    generated.audioDevices = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.MediaStreamDevice, false);
    });
    generated.videoDevices = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.MediaStreamDevice, false);
    });
    return generated;
  };

  MediaStreamDispatcherHost_GenerateStream_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 14);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    if (mutator_.chooseMutateField()) {
      this.audioDevices = mutator_.mutateArray(this.audioDevices, function(val) {
        return mutator_.mutateStruct(content.mojom.MediaStreamDevice, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.videoDevices = mutator_.mutateArray(this.videoDevices, function(val) {
        return mutator_.mutateStruct(content.mojom.MediaStreamDevice, false);
      });
    }
    return this;
  };
  MediaStreamDispatcherHost_GenerateStream_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_GenerateStream_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_GenerateStream_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_GenerateStream_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaStreamDispatcherHost_GenerateStream_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaStreamRequestResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaStreamDispatcherHost_GenerateStream_ResponseParams.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaStreamDispatcherHost_GenerateStream_ResponseParams.audioDevices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(MediaStreamDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaStreamDispatcherHost_GenerateStream_ResponseParams.videoDevices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(MediaStreamDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_GenerateStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 32;

  MediaStreamDispatcherHost_GenerateStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_GenerateStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.label = decoder.decodeStruct(codec.String);
    val.audioDevices = decoder.decodeArrayPointer(new codec.PointerTo(MediaStreamDevice));
    val.videoDevices = decoder.decodeArrayPointer(new codec.PointerTo(MediaStreamDevice));
    return val;
  };

  MediaStreamDispatcherHost_GenerateStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_GenerateStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaStreamDevice), val.audioDevices);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaStreamDevice), val.videoDevices);
  };
  function MediaStreamDispatcherHost_CancelRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_CancelRequest_Params.prototype.initDefaults_ = function() {
    this.requestId = 0;
  };
  MediaStreamDispatcherHost_CancelRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_CancelRequest_Params.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_CancelRequest_Params;
    generated.requestId = generator_.generateInt32();
    return generated;
  };

  MediaStreamDispatcherHost_CancelRequest_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateInt32(this.requestId);
    }
    return this;
  };
  MediaStreamDispatcherHost_CancelRequest_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_CancelRequest_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_CancelRequest_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_CancelRequest_Params.validate = function(messageValidator, offset) {
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

  MediaStreamDispatcherHost_CancelRequest_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaStreamDispatcherHost_CancelRequest_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_CancelRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaStreamDispatcherHost_CancelRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_CancelRequest_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.requestId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaStreamDispatcherHost_StopStreamDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_StopStreamDevice_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
    this.sessionId = 0;
  };
  MediaStreamDispatcherHost_StopStreamDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_StopStreamDevice_Params.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_StopStreamDevice_Params;
    generated.deviceId = generator_.generateString(false);
    generated.sessionId = generator_.generateInt32();
    return generated;
  };

  MediaStreamDispatcherHost_StopStreamDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateInt32(this.sessionId);
    }
    return this;
  };
  MediaStreamDispatcherHost_StopStreamDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_StopStreamDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_StopStreamDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_StopStreamDevice_Params.validate = function(messageValidator, offset) {
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


    // validate MediaStreamDispatcherHost_StopStreamDevice_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_StopStreamDevice_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaStreamDispatcherHost_StopStreamDevice_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_StopStreamDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    val.sessionId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaStreamDispatcherHost_StopStreamDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_StopStreamDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStruct(codec.Int32, val.sessionId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaStreamDispatcherHost_OpenDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_OpenDevice_Params.prototype.initDefaults_ = function() {
    this.requestId = 0;
    this.type = 0;
    this.deviceId = null;
  };
  MediaStreamDispatcherHost_OpenDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_OpenDevice_Params.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_OpenDevice_Params;
    generated.requestId = generator_.generateInt32();
    generated.deviceId = generator_.generateString(false);
    generated.type = generator_.generateEnum(0, 7);
    return generated;
  };

  MediaStreamDispatcherHost_OpenDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateInt32(this.requestId);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 7);
    }
    return this;
  };
  MediaStreamDispatcherHost_OpenDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_OpenDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_OpenDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_OpenDevice_Params.validate = function(messageValidator, offset) {
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



    // validate MediaStreamDispatcherHost_OpenDevice_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaStreamDispatcherHost_OpenDevice_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, MediaStreamType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_OpenDevice_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaStreamDispatcherHost_OpenDevice_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_OpenDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestId = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.Int32);
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaStreamDispatcherHost_OpenDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_OpenDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.requestId);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function MediaStreamDispatcherHost_OpenDevice_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_OpenDevice_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.label = null;
    this.device = null;
  };
  MediaStreamDispatcherHost_OpenDevice_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_OpenDevice_ResponseParams.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_OpenDevice_ResponseParams;
    generated.success = generator_.generateBool();
    generated.label = generator_.generateString(false);
    generated.device = generator_.generateStruct(content.mojom.MediaStreamDevice, false);
    return generated;
  };

  MediaStreamDispatcherHost_OpenDevice_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    if (mutator_.chooseMutateField()) {
      this.device = mutator_.mutateStruct(content.mojom.MediaStreamDevice, false);
    }
    return this;
  };
  MediaStreamDispatcherHost_OpenDevice_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_OpenDevice_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_OpenDevice_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_OpenDevice_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate MediaStreamDispatcherHost_OpenDevice_ResponseParams.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaStreamDispatcherHost_OpenDevice_ResponseParams.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, MediaStreamDevice, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_OpenDevice_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  MediaStreamDispatcherHost_OpenDevice_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_OpenDevice_ResponseParams();
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
    val.label = decoder.decodeStruct(codec.String);
    val.device = decoder.decodeStructPointer(MediaStreamDevice);
    return val;
  };

  MediaStreamDispatcherHost_OpenDevice_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_OpenDevice_ResponseParams.encodedSize);
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
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStructPointer(MediaStreamDevice, val.device);
  };
  function MediaStreamDispatcherHost_CloseDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_CloseDevice_Params.prototype.initDefaults_ = function() {
    this.label = null;
  };
  MediaStreamDispatcherHost_CloseDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_CloseDevice_Params.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_CloseDevice_Params;
    generated.label = generator_.generateString(false);
    return generated;
  };

  MediaStreamDispatcherHost_CloseDevice_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    return this;
  };
  MediaStreamDispatcherHost_CloseDevice_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_CloseDevice_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_CloseDevice_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_CloseDevice_Params.validate = function(messageValidator, offset) {
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


    // validate MediaStreamDispatcherHost_CloseDevice_Params.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_CloseDevice_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaStreamDispatcherHost_CloseDevice_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_CloseDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.label = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaStreamDispatcherHost_CloseDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_CloseDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.label);
  };
  function MediaStreamDispatcherHost_SetCapturingLinkSecured_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.prototype.initDefaults_ = function() {
    this.sessionId = 0;
    this.type = 0;
    this.isSecure = false;
  };
  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_SetCapturingLinkSecured_Params;
    generated.sessionId = generator_.generateInt32();
    generated.type = generator_.generateEnum(0, 7);
    generated.isSecure = generator_.generateBool();
    return generated;
  };

  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateInt32(this.sessionId);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.isSecure = mutator_.mutateBool(this.isSecure);
    }
    return this;
  };
  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.validate = function(messageValidator, offset) {
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



    // validate MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, MediaStreamType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_SetCapturingLinkSecured_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isSecure = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sessionId);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.isSecure & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaStreamDispatcherHost_OnStreamStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamDispatcherHost_OnStreamStarted_Params.prototype.initDefaults_ = function() {
    this.label = null;
  };
  MediaStreamDispatcherHost_OnStreamStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamDispatcherHost_OnStreamStarted_Params.generate = function(generator_) {
    var generated = new MediaStreamDispatcherHost_OnStreamStarted_Params;
    generated.label = generator_.generateString(false);
    return generated;
  };

  MediaStreamDispatcherHost_OnStreamStarted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    return this;
  };
  MediaStreamDispatcherHost_OnStreamStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamDispatcherHost_OnStreamStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamDispatcherHost_OnStreamStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamDispatcherHost_OnStreamStarted_Params.validate = function(messageValidator, offset) {
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


    // validate MediaStreamDispatcherHost_OnStreamStarted_Params.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaStreamDispatcherHost_OnStreamStarted_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaStreamDispatcherHost_OnStreamStarted_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamDispatcherHost_OnStreamStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.label = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaStreamDispatcherHost_OnStreamStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamDispatcherHost_OnStreamStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.label);
  };
  function MediaStreamTrackMetricsHost_AddTrack_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamTrackMetricsHost_AddTrack_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.isAudio = false;
    this.isRemote = false;
  };
  MediaStreamTrackMetricsHost_AddTrack_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamTrackMetricsHost_AddTrack_Params.generate = function(generator_) {
    var generated = new MediaStreamTrackMetricsHost_AddTrack_Params;
    generated.id = generator_.generateUint64();
    generated.isAudio = generator_.generateBool();
    generated.isRemote = generator_.generateBool();
    return generated;
  };

  MediaStreamTrackMetricsHost_AddTrack_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.isAudio = mutator_.mutateBool(this.isAudio);
    }
    if (mutator_.chooseMutateField()) {
      this.isRemote = mutator_.mutateBool(this.isRemote);
    }
    return this;
  };
  MediaStreamTrackMetricsHost_AddTrack_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamTrackMetricsHost_AddTrack_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamTrackMetricsHost_AddTrack_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamTrackMetricsHost_AddTrack_Params.validate = function(messageValidator, offset) {
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

  MediaStreamTrackMetricsHost_AddTrack_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaStreamTrackMetricsHost_AddTrack_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamTrackMetricsHost_AddTrack_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.isAudio = (packed >> 0) & 1 ? true : false;
    val.isRemote = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaStreamTrackMetricsHost_AddTrack_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamTrackMetricsHost_AddTrack_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
    packed = 0;
    packed |= (val.isAudio & 1) << 0
    packed |= (val.isRemote & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaStreamTrackMetricsHost_RemoveTrack_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamTrackMetricsHost_RemoveTrack_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  MediaStreamTrackMetricsHost_RemoveTrack_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamTrackMetricsHost_RemoveTrack_Params.generate = function(generator_) {
    var generated = new MediaStreamTrackMetricsHost_RemoveTrack_Params;
    generated.id = generator_.generateUint64();
    return generated;
  };

  MediaStreamTrackMetricsHost_RemoveTrack_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint64(this.id);
    }
    return this;
  };
  MediaStreamTrackMetricsHost_RemoveTrack_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamTrackMetricsHost_RemoveTrack_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamTrackMetricsHost_RemoveTrack_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamTrackMetricsHost_RemoveTrack_Params.validate = function(messageValidator, offset) {
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

  MediaStreamTrackMetricsHost_RemoveTrack_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaStreamTrackMetricsHost_RemoveTrack_Params.decode = function(decoder) {
    var packed;
    var val = new MediaStreamTrackMetricsHost_RemoveTrack_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  MediaStreamTrackMetricsHost_RemoveTrack_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamTrackMetricsHost_RemoveTrack_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
  };
  var kMediaStreamDeviceObserver_OnDeviceStopped_Name = 2082661608;

  function MediaStreamDeviceObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaStreamDeviceObserver,
                                                   handleOrPtrInfo);
  }

  function MediaStreamDeviceObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaStreamDeviceObserver, associatedInterfacePtrInfo);
  }

  MediaStreamDeviceObserverAssociatedPtr.prototype =
      Object.create(MediaStreamDeviceObserverPtr.prototype);
  MediaStreamDeviceObserverAssociatedPtr.prototype.constructor =
      MediaStreamDeviceObserverAssociatedPtr;

  function MediaStreamDeviceObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaStreamDeviceObserverPtr.prototype.onDeviceStopped = function() {
    return MediaStreamDeviceObserverProxy.prototype.onDeviceStopped
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDeviceObserverProxy.prototype.onDeviceStopped = function(label, device) {
    var params_ = new MediaStreamDeviceObserver_OnDeviceStopped_Params();
    params_.label = label;
    params_.device = device;
    var builder = new codec.MessageV0Builder(
        kMediaStreamDeviceObserver_OnDeviceStopped_Name,
        codec.align(MediaStreamDeviceObserver_OnDeviceStopped_Params.encodedSize));
    builder.encodeStruct(MediaStreamDeviceObserver_OnDeviceStopped_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaStreamDeviceObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaStreamDeviceObserverStub.prototype.onDeviceStopped = function(label, device) {
    return this.delegate_ && this.delegate_.onDeviceStopped && this.delegate_.onDeviceStopped(label, device);
  }

  MediaStreamDeviceObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaStreamDeviceObserver_OnDeviceStopped_Name:
      var params = reader.decodeStruct(MediaStreamDeviceObserver_OnDeviceStopped_Params);
      this.onDeviceStopped(params.label, params.device);
      return true;
    default:
      return false;
    }
  };

  MediaStreamDeviceObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaStreamDeviceObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaStreamDeviceObserver_OnDeviceStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamDeviceObserver_OnDeviceStopped_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaStreamDeviceObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaStreamDeviceObserver = {
    name: 'content.mojom.MediaStreamDeviceObserver',
    kVersion: 0,
    ptrClass: MediaStreamDeviceObserverPtr,
    proxyClass: MediaStreamDeviceObserverProxy,
    stubClass: MediaStreamDeviceObserverStub,
    validateRequest: validateMediaStreamDeviceObserverRequest,
    validateResponse: null,
    mojomId: 'content/common/media/media_stream.mojom',
    fuzzMethods: {
      onDeviceStopped: {
        params: MediaStreamDeviceObserver_OnDeviceStopped_Params,
      },
    },
  };
  MediaStreamDeviceObserverStub.prototype.validator = validateMediaStreamDeviceObserverRequest;
  MediaStreamDeviceObserverProxy.prototype.validator = null;
  var kMediaStreamDispatcherHost_GenerateStream_Name = 88012877;
  var kMediaStreamDispatcherHost_CancelRequest_Name = 311943134;
  var kMediaStreamDispatcherHost_StopStreamDevice_Name = 950875823;
  var kMediaStreamDispatcherHost_OpenDevice_Name = 519173471;
  var kMediaStreamDispatcherHost_CloseDevice_Name = 969987833;
  var kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name = 1344460159;
  var kMediaStreamDispatcherHost_OnStreamStarted_Name = 1891166826;

  function MediaStreamDispatcherHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaStreamDispatcherHost,
                                                   handleOrPtrInfo);
  }

  function MediaStreamDispatcherHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaStreamDispatcherHost, associatedInterfacePtrInfo);
  }

  MediaStreamDispatcherHostAssociatedPtr.prototype =
      Object.create(MediaStreamDispatcherHostPtr.prototype);
  MediaStreamDispatcherHostAssociatedPtr.prototype.constructor =
      MediaStreamDispatcherHostAssociatedPtr;

  function MediaStreamDispatcherHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaStreamDispatcherHostPtr.prototype.generateStream = function() {
    return MediaStreamDispatcherHostProxy.prototype.generateStream
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDispatcherHostProxy.prototype.generateStream = function(requestId, controls, userGesture) {
    var params_ = new MediaStreamDispatcherHost_GenerateStream_Params();
    params_.requestId = requestId;
    params_.controls = controls;
    params_.userGesture = userGesture;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaStreamDispatcherHost_GenerateStream_Name,
          codec.align(MediaStreamDispatcherHost_GenerateStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaStreamDispatcherHost_GenerateStream_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaStreamDispatcherHost_GenerateStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaStreamDispatcherHostPtr.prototype.cancelRequest = function() {
    return MediaStreamDispatcherHostProxy.prototype.cancelRequest
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDispatcherHostProxy.prototype.cancelRequest = function(requestId) {
    var params_ = new MediaStreamDispatcherHost_CancelRequest_Params();
    params_.requestId = requestId;
    var builder = new codec.MessageV0Builder(
        kMediaStreamDispatcherHost_CancelRequest_Name,
        codec.align(MediaStreamDispatcherHost_CancelRequest_Params.encodedSize));
    builder.encodeStruct(MediaStreamDispatcherHost_CancelRequest_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaStreamDispatcherHostPtr.prototype.stopStreamDevice = function() {
    return MediaStreamDispatcherHostProxy.prototype.stopStreamDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDispatcherHostProxy.prototype.stopStreamDevice = function(deviceId, sessionId) {
    var params_ = new MediaStreamDispatcherHost_StopStreamDevice_Params();
    params_.deviceId = deviceId;
    params_.sessionId = sessionId;
    var builder = new codec.MessageV0Builder(
        kMediaStreamDispatcherHost_StopStreamDevice_Name,
        codec.align(MediaStreamDispatcherHost_StopStreamDevice_Params.encodedSize));
    builder.encodeStruct(MediaStreamDispatcherHost_StopStreamDevice_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaStreamDispatcherHostPtr.prototype.openDevice = function() {
    return MediaStreamDispatcherHostProxy.prototype.openDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDispatcherHostProxy.prototype.openDevice = function(requestId, deviceId, type) {
    var params_ = new MediaStreamDispatcherHost_OpenDevice_Params();
    params_.requestId = requestId;
    params_.deviceId = deviceId;
    params_.type = type;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaStreamDispatcherHost_OpenDevice_Name,
          codec.align(MediaStreamDispatcherHost_OpenDevice_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaStreamDispatcherHost_OpenDevice_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaStreamDispatcherHost_OpenDevice_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaStreamDispatcherHostPtr.prototype.closeDevice = function() {
    return MediaStreamDispatcherHostProxy.prototype.closeDevice
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDispatcherHostProxy.prototype.closeDevice = function(label) {
    var params_ = new MediaStreamDispatcherHost_CloseDevice_Params();
    params_.label = label;
    var builder = new codec.MessageV0Builder(
        kMediaStreamDispatcherHost_CloseDevice_Name,
        codec.align(MediaStreamDispatcherHost_CloseDevice_Params.encodedSize));
    builder.encodeStruct(MediaStreamDispatcherHost_CloseDevice_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaStreamDispatcherHostPtr.prototype.setCapturingLinkSecured = function() {
    return MediaStreamDispatcherHostProxy.prototype.setCapturingLinkSecured
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDispatcherHostProxy.prototype.setCapturingLinkSecured = function(sessionId, type, isSecure) {
    var params_ = new MediaStreamDispatcherHost_SetCapturingLinkSecured_Params();
    params_.sessionId = sessionId;
    params_.type = type;
    params_.isSecure = isSecure;
    var builder = new codec.MessageV0Builder(
        kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name,
        codec.align(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params.encodedSize));
    builder.encodeStruct(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaStreamDispatcherHostPtr.prototype.onStreamStarted = function() {
    return MediaStreamDispatcherHostProxy.prototype.onStreamStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamDispatcherHostProxy.prototype.onStreamStarted = function(label) {
    var params_ = new MediaStreamDispatcherHost_OnStreamStarted_Params();
    params_.label = label;
    var builder = new codec.MessageV0Builder(
        kMediaStreamDispatcherHost_OnStreamStarted_Name,
        codec.align(MediaStreamDispatcherHost_OnStreamStarted_Params.encodedSize));
    builder.encodeStruct(MediaStreamDispatcherHost_OnStreamStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaStreamDispatcherHostStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaStreamDispatcherHostStub.prototype.generateStream = function(requestId, controls, userGesture) {
    return this.delegate_ && this.delegate_.generateStream && this.delegate_.generateStream(requestId, controls, userGesture);
  }
  MediaStreamDispatcherHostStub.prototype.cancelRequest = function(requestId) {
    return this.delegate_ && this.delegate_.cancelRequest && this.delegate_.cancelRequest(requestId);
  }
  MediaStreamDispatcherHostStub.prototype.stopStreamDevice = function(deviceId, sessionId) {
    return this.delegate_ && this.delegate_.stopStreamDevice && this.delegate_.stopStreamDevice(deviceId, sessionId);
  }
  MediaStreamDispatcherHostStub.prototype.openDevice = function(requestId, deviceId, type) {
    return this.delegate_ && this.delegate_.openDevice && this.delegate_.openDevice(requestId, deviceId, type);
  }
  MediaStreamDispatcherHostStub.prototype.closeDevice = function(label) {
    return this.delegate_ && this.delegate_.closeDevice && this.delegate_.closeDevice(label);
  }
  MediaStreamDispatcherHostStub.prototype.setCapturingLinkSecured = function(sessionId, type, isSecure) {
    return this.delegate_ && this.delegate_.setCapturingLinkSecured && this.delegate_.setCapturingLinkSecured(sessionId, type, isSecure);
  }
  MediaStreamDispatcherHostStub.prototype.onStreamStarted = function(label) {
    return this.delegate_ && this.delegate_.onStreamStarted && this.delegate_.onStreamStarted(label);
  }

  MediaStreamDispatcherHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaStreamDispatcherHost_CancelRequest_Name:
      var params = reader.decodeStruct(MediaStreamDispatcherHost_CancelRequest_Params);
      this.cancelRequest(params.requestId);
      return true;
    case kMediaStreamDispatcherHost_StopStreamDevice_Name:
      var params = reader.decodeStruct(MediaStreamDispatcherHost_StopStreamDevice_Params);
      this.stopStreamDevice(params.deviceId, params.sessionId);
      return true;
    case kMediaStreamDispatcherHost_CloseDevice_Name:
      var params = reader.decodeStruct(MediaStreamDispatcherHost_CloseDevice_Params);
      this.closeDevice(params.label);
      return true;
    case kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name:
      var params = reader.decodeStruct(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params);
      this.setCapturingLinkSecured(params.sessionId, params.type, params.isSecure);
      return true;
    case kMediaStreamDispatcherHost_OnStreamStarted_Name:
      var params = reader.decodeStruct(MediaStreamDispatcherHost_OnStreamStarted_Params);
      this.onStreamStarted(params.label);
      return true;
    default:
      return false;
    }
  };

  MediaStreamDispatcherHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaStreamDispatcherHost_GenerateStream_Name:
      var params = reader.decodeStruct(MediaStreamDispatcherHost_GenerateStream_Params);
      this.generateStream(params.requestId, params.controls, params.userGesture).then(function(response) {
        var responseParams =
            new MediaStreamDispatcherHost_GenerateStream_ResponseParams();
        responseParams.result = response.result;
        responseParams.label = response.label;
        responseParams.audioDevices = response.audioDevices;
        responseParams.videoDevices = response.videoDevices;
        var builder = new codec.MessageV1Builder(
            kMediaStreamDispatcherHost_GenerateStream_Name,
            codec.align(MediaStreamDispatcherHost_GenerateStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaStreamDispatcherHost_GenerateStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaStreamDispatcherHost_OpenDevice_Name:
      var params = reader.decodeStruct(MediaStreamDispatcherHost_OpenDevice_Params);
      this.openDevice(params.requestId, params.deviceId, params.type).then(function(response) {
        var responseParams =
            new MediaStreamDispatcherHost_OpenDevice_ResponseParams();
        responseParams.success = response.success;
        responseParams.label = response.label;
        responseParams.device = response.device;
        var builder = new codec.MessageV1Builder(
            kMediaStreamDispatcherHost_OpenDevice_Name,
            codec.align(MediaStreamDispatcherHost_OpenDevice_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaStreamDispatcherHost_OpenDevice_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaStreamDispatcherHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaStreamDispatcherHost_GenerateStream_Name:
        if (message.expectsResponse())
          paramsClass = MediaStreamDispatcherHost_GenerateStream_Params;
      break;
      case kMediaStreamDispatcherHost_CancelRequest_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamDispatcherHost_CancelRequest_Params;
      break;
      case kMediaStreamDispatcherHost_StopStreamDevice_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamDispatcherHost_StopStreamDevice_Params;
      break;
      case kMediaStreamDispatcherHost_OpenDevice_Name:
        if (message.expectsResponse())
          paramsClass = MediaStreamDispatcherHost_OpenDevice_Params;
      break;
      case kMediaStreamDispatcherHost_CloseDevice_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamDispatcherHost_CloseDevice_Params;
      break;
      case kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamDispatcherHost_SetCapturingLinkSecured_Params;
      break;
      case kMediaStreamDispatcherHost_OnStreamStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamDispatcherHost_OnStreamStarted_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaStreamDispatcherHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaStreamDispatcherHost_GenerateStream_Name:
        if (message.isResponse())
          paramsClass = MediaStreamDispatcherHost_GenerateStream_ResponseParams;
        break;
      case kMediaStreamDispatcherHost_OpenDevice_Name:
        if (message.isResponse())
          paramsClass = MediaStreamDispatcherHost_OpenDevice_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaStreamDispatcherHost = {
    name: 'content.mojom.MediaStreamDispatcherHost',
    kVersion: 0,
    ptrClass: MediaStreamDispatcherHostPtr,
    proxyClass: MediaStreamDispatcherHostProxy,
    stubClass: MediaStreamDispatcherHostStub,
    validateRequest: validateMediaStreamDispatcherHostRequest,
    validateResponse: validateMediaStreamDispatcherHostResponse,
    mojomId: 'content/common/media/media_stream.mojom',
    fuzzMethods: {
      generateStream: {
        params: MediaStreamDispatcherHost_GenerateStream_Params,
      },
      cancelRequest: {
        params: MediaStreamDispatcherHost_CancelRequest_Params,
      },
      stopStreamDevice: {
        params: MediaStreamDispatcherHost_StopStreamDevice_Params,
      },
      openDevice: {
        params: MediaStreamDispatcherHost_OpenDevice_Params,
      },
      closeDevice: {
        params: MediaStreamDispatcherHost_CloseDevice_Params,
      },
      setCapturingLinkSecured: {
        params: MediaStreamDispatcherHost_SetCapturingLinkSecured_Params,
      },
      onStreamStarted: {
        params: MediaStreamDispatcherHost_OnStreamStarted_Params,
      },
    },
  };
  MediaStreamDispatcherHostStub.prototype.validator = validateMediaStreamDispatcherHostRequest;
  MediaStreamDispatcherHostProxy.prototype.validator = validateMediaStreamDispatcherHostResponse;
  var kMediaStreamTrackMetricsHost_AddTrack_Name = 2141798759;
  var kMediaStreamTrackMetricsHost_RemoveTrack_Name = 1390925918;

  function MediaStreamTrackMetricsHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaStreamTrackMetricsHost,
                                                   handleOrPtrInfo);
  }

  function MediaStreamTrackMetricsHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaStreamTrackMetricsHost, associatedInterfacePtrInfo);
  }

  MediaStreamTrackMetricsHostAssociatedPtr.prototype =
      Object.create(MediaStreamTrackMetricsHostPtr.prototype);
  MediaStreamTrackMetricsHostAssociatedPtr.prototype.constructor =
      MediaStreamTrackMetricsHostAssociatedPtr;

  function MediaStreamTrackMetricsHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaStreamTrackMetricsHostPtr.prototype.addTrack = function() {
    return MediaStreamTrackMetricsHostProxy.prototype.addTrack
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamTrackMetricsHostProxy.prototype.addTrack = function(id, isAudio, isRemote) {
    var params_ = new MediaStreamTrackMetricsHost_AddTrack_Params();
    params_.id = id;
    params_.isAudio = isAudio;
    params_.isRemote = isRemote;
    var builder = new codec.MessageV0Builder(
        kMediaStreamTrackMetricsHost_AddTrack_Name,
        codec.align(MediaStreamTrackMetricsHost_AddTrack_Params.encodedSize));
    builder.encodeStruct(MediaStreamTrackMetricsHost_AddTrack_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaStreamTrackMetricsHostPtr.prototype.removeTrack = function() {
    return MediaStreamTrackMetricsHostProxy.prototype.removeTrack
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaStreamTrackMetricsHostProxy.prototype.removeTrack = function(id) {
    var params_ = new MediaStreamTrackMetricsHost_RemoveTrack_Params();
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kMediaStreamTrackMetricsHost_RemoveTrack_Name,
        codec.align(MediaStreamTrackMetricsHost_RemoveTrack_Params.encodedSize));
    builder.encodeStruct(MediaStreamTrackMetricsHost_RemoveTrack_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaStreamTrackMetricsHostStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaStreamTrackMetricsHostStub.prototype.addTrack = function(id, isAudio, isRemote) {
    return this.delegate_ && this.delegate_.addTrack && this.delegate_.addTrack(id, isAudio, isRemote);
  }
  MediaStreamTrackMetricsHostStub.prototype.removeTrack = function(id) {
    return this.delegate_ && this.delegate_.removeTrack && this.delegate_.removeTrack(id);
  }

  MediaStreamTrackMetricsHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaStreamTrackMetricsHost_AddTrack_Name:
      var params = reader.decodeStruct(MediaStreamTrackMetricsHost_AddTrack_Params);
      this.addTrack(params.id, params.isAudio, params.isRemote);
      return true;
    case kMediaStreamTrackMetricsHost_RemoveTrack_Name:
      var params = reader.decodeStruct(MediaStreamTrackMetricsHost_RemoveTrack_Params);
      this.removeTrack(params.id);
      return true;
    default:
      return false;
    }
  };

  MediaStreamTrackMetricsHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaStreamTrackMetricsHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaStreamTrackMetricsHost_AddTrack_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamTrackMetricsHost_AddTrack_Params;
      break;
      case kMediaStreamTrackMetricsHost_RemoveTrack_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaStreamTrackMetricsHost_RemoveTrack_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaStreamTrackMetricsHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaStreamTrackMetricsHost = {
    name: 'content.mojom.MediaStreamTrackMetricsHost',
    kVersion: 0,
    ptrClass: MediaStreamTrackMetricsHostPtr,
    proxyClass: MediaStreamTrackMetricsHostProxy,
    stubClass: MediaStreamTrackMetricsHostStub,
    validateRequest: validateMediaStreamTrackMetricsHostRequest,
    validateResponse: null,
    mojomId: 'content/common/media/media_stream.mojom',
    fuzzMethods: {
      addTrack: {
        params: MediaStreamTrackMetricsHost_AddTrack_Params,
      },
      removeTrack: {
        params: MediaStreamTrackMetricsHost_RemoveTrack_Params,
      },
    },
  };
  MediaStreamTrackMetricsHostStub.prototype.validator = validateMediaStreamTrackMetricsHostRequest;
  MediaStreamTrackMetricsHostProxy.prototype.validator = null;
  exports.MediaStreamType = MediaStreamType;
  exports.MediaStreamRequestResult = MediaStreamRequestResult;
  exports.MediaStreamDevice = MediaStreamDevice;
  exports.TrackControls = TrackControls;
  exports.StreamControls = StreamControls;
  exports.MediaStreamDeviceObserver = MediaStreamDeviceObserver;
  exports.MediaStreamDeviceObserverPtr = MediaStreamDeviceObserverPtr;
  exports.MediaStreamDeviceObserverAssociatedPtr = MediaStreamDeviceObserverAssociatedPtr;
  exports.MediaStreamDispatcherHost = MediaStreamDispatcherHost;
  exports.MediaStreamDispatcherHostPtr = MediaStreamDispatcherHostPtr;
  exports.MediaStreamDispatcherHostAssociatedPtr = MediaStreamDispatcherHostAssociatedPtr;
  exports.MediaStreamTrackMetricsHost = MediaStreamTrackMetricsHost;
  exports.MediaStreamTrackMetricsHostPtr = MediaStreamTrackMetricsHostPtr;
  exports.MediaStreamTrackMetricsHostAssociatedPtr = MediaStreamTrackMetricsHostAssociatedPtr;
})();