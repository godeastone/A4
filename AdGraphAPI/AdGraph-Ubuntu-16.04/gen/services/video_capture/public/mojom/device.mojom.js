// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/device.mojom';
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
  var image_capture$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/capture/mojom/image_capture.mojom', '../../../../media/capture/mojom/image_capture.mojom.js');
  }
  var receiver$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/receiver.mojom', 'receiver.mojom.js');
  }



  function Device_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_Start_Params.prototype.initDefaults_ = function() {
    this.requestedSettings = null;
    this.receiver = new receiver$.ReceiverPtr();
  };
  Device_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_Start_Params.generate = function(generator_) {
    var generated = new Device_Start_Params;
    generated.requestedSettings = generator_.generateStruct(media.mojom.VideoCaptureParams, false);
    generated.receiver = generator_.generateInterface("videoCapture.mojom.Receiver", false);
    return generated;
  };

  Device_Start_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestedSettings = mutator_.mutateStruct(media.mojom.VideoCaptureParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.receiver = mutator_.mutateInterface(this.receiver, "videoCapture.mojom.Receiver", false);
    }
    return this;
  };
  Device_Start_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.receiver !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.ReceiverPtr"]);
    }
    return handles;
  };

  Device_Start_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_Start_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.receiver = handles[idx++];;
    return idx;
  };

  Device_Start_Params.validate = function(messageValidator, offset) {
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


    // validate Device_Start_Params.requestedSettings
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, video_capture_types$.VideoCaptureParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Device_Start_Params.receiver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_Start_Params.encodedSize = codec.kStructHeaderSize + 16;

  Device_Start_Params.decode = function(decoder) {
    var packed;
    var val = new Device_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestedSettings = decoder.decodeStructPointer(video_capture_types$.VideoCaptureParams);
    val.receiver = decoder.decodeStruct(new codec.Interface(receiver$.ReceiverPtr));
    return val;
  };

  Device_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_Start_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(video_capture_types$.VideoCaptureParams, val.requestedSettings);
    encoder.encodeStruct(new codec.Interface(receiver$.ReceiverPtr), val.receiver);
  };
  function Device_OnReceiverReportingUtilization_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_OnReceiverReportingUtilization_Params.prototype.initDefaults_ = function() {
    this.frameFeedbackId = 0;
    this.utilization = 0;
  };
  Device_OnReceiverReportingUtilization_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_OnReceiverReportingUtilization_Params.generate = function(generator_) {
    var generated = new Device_OnReceiverReportingUtilization_Params;
    generated.frameFeedbackId = generator_.generateInt32();
    generated.utilization = generator_.generateDouble();
    return generated;
  };

  Device_OnReceiverReportingUtilization_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameFeedbackId = mutator_.mutateInt32(this.frameFeedbackId);
    }
    if (mutator_.chooseMutateField()) {
      this.utilization = mutator_.mutateDouble(this.utilization);
    }
    return this;
  };
  Device_OnReceiverReportingUtilization_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_OnReceiverReportingUtilization_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_OnReceiverReportingUtilization_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_OnReceiverReportingUtilization_Params.validate = function(messageValidator, offset) {
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

  Device_OnReceiverReportingUtilization_Params.encodedSize = codec.kStructHeaderSize + 16;

  Device_OnReceiverReportingUtilization_Params.decode = function(decoder) {
    var packed;
    var val = new Device_OnReceiverReportingUtilization_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameFeedbackId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.utilization = decoder.decodeStruct(codec.Double);
    return val;
  };

  Device_OnReceiverReportingUtilization_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_OnReceiverReportingUtilization_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.frameFeedbackId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Double, val.utilization);
  };
  function Device_RequestRefreshFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_RequestRefreshFrame_Params.prototype.initDefaults_ = function() {
  };
  Device_RequestRefreshFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_RequestRefreshFrame_Params.generate = function(generator_) {
    var generated = new Device_RequestRefreshFrame_Params;
    return generated;
  };

  Device_RequestRefreshFrame_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_RequestRefreshFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_RequestRefreshFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_RequestRefreshFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_RequestRefreshFrame_Params.validate = function(messageValidator, offset) {
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

  Device_RequestRefreshFrame_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_RequestRefreshFrame_Params.decode = function(decoder) {
    var packed;
    var val = new Device_RequestRefreshFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_RequestRefreshFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_RequestRefreshFrame_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_MaybeSuspend_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_MaybeSuspend_Params.prototype.initDefaults_ = function() {
  };
  Device_MaybeSuspend_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_MaybeSuspend_Params.generate = function(generator_) {
    var generated = new Device_MaybeSuspend_Params;
    return generated;
  };

  Device_MaybeSuspend_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_MaybeSuspend_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_MaybeSuspend_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_MaybeSuspend_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_MaybeSuspend_Params.validate = function(messageValidator, offset) {
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

  Device_MaybeSuspend_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_MaybeSuspend_Params.decode = function(decoder) {
    var packed;
    var val = new Device_MaybeSuspend_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_MaybeSuspend_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_MaybeSuspend_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_Resume_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_Resume_Params.prototype.initDefaults_ = function() {
  };
  Device_Resume_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_Resume_Params.generate = function(generator_) {
    var generated = new Device_Resume_Params;
    return generated;
  };

  Device_Resume_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_Resume_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_Resume_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_Resume_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_Resume_Params.validate = function(messageValidator, offset) {
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

  Device_Resume_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_Resume_Params.decode = function(decoder) {
    var packed;
    var val = new Device_Resume_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_Resume_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_Resume_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_GetPhotoState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetPhotoState_Params.prototype.initDefaults_ = function() {
  };
  Device_GetPhotoState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetPhotoState_Params.generate = function(generator_) {
    var generated = new Device_GetPhotoState_Params;
    return generated;
  };

  Device_GetPhotoState_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_GetPhotoState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetPhotoState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetPhotoState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetPhotoState_Params.validate = function(messageValidator, offset) {
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

  Device_GetPhotoState_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_GetPhotoState_Params.decode = function(decoder) {
    var packed;
    var val = new Device_GetPhotoState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_GetPhotoState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetPhotoState_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_GetPhotoState_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_GetPhotoState_ResponseParams.prototype.initDefaults_ = function() {
    this.capabilities = null;
  };
  Device_GetPhotoState_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_GetPhotoState_ResponseParams.generate = function(generator_) {
    var generated = new Device_GetPhotoState_ResponseParams;
    generated.capabilities = generator_.generateStruct(media.mojom.PhotoState, true);
    return generated;
  };

  Device_GetPhotoState_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.capabilities = mutator_.mutateStruct(media.mojom.PhotoState, true);
    }
    return this;
  };
  Device_GetPhotoState_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_GetPhotoState_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_GetPhotoState_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_GetPhotoState_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_GetPhotoState_ResponseParams.capabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, image_capture$.PhotoState, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_GetPhotoState_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_GetPhotoState_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_GetPhotoState_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.capabilities = decoder.decodeStructPointer(image_capture$.PhotoState);
    return val;
  };

  Device_GetPhotoState_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_GetPhotoState_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(image_capture$.PhotoState, val.capabilities);
  };
  function Device_SetPhotoOptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_SetPhotoOptions_Params.prototype.initDefaults_ = function() {
    this.settings = null;
  };
  Device_SetPhotoOptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_SetPhotoOptions_Params.generate = function(generator_) {
    var generated = new Device_SetPhotoOptions_Params;
    generated.settings = generator_.generateStruct(media.mojom.PhotoSettings, false);
    return generated;
  };

  Device_SetPhotoOptions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.settings = mutator_.mutateStruct(media.mojom.PhotoSettings, false);
    }
    return this;
  };
  Device_SetPhotoOptions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_SetPhotoOptions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_SetPhotoOptions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_SetPhotoOptions_Params.validate = function(messageValidator, offset) {
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


    // validate Device_SetPhotoOptions_Params.settings
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, image_capture$.PhotoSettings, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_SetPhotoOptions_Params.encodedSize = codec.kStructHeaderSize + 8;

  Device_SetPhotoOptions_Params.decode = function(decoder) {
    var packed;
    var val = new Device_SetPhotoOptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.settings = decoder.decodeStructPointer(image_capture$.PhotoSettings);
    return val;
  };

  Device_SetPhotoOptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_SetPhotoOptions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(image_capture$.PhotoSettings, val.settings);
  };
  function Device_SetPhotoOptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_SetPhotoOptions_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Device_SetPhotoOptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_SetPhotoOptions_ResponseParams.generate = function(generator_) {
    var generated = new Device_SetPhotoOptions_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Device_SetPhotoOptions_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Device_SetPhotoOptions_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_SetPhotoOptions_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_SetPhotoOptions_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_SetPhotoOptions_ResponseParams.validate = function(messageValidator, offset) {
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

  Device_SetPhotoOptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_SetPhotoOptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_SetPhotoOptions_ResponseParams();
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

  Device_SetPhotoOptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_SetPhotoOptions_ResponseParams.encodedSize);
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
  function Device_TakePhoto_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_TakePhoto_Params.prototype.initDefaults_ = function() {
  };
  Device_TakePhoto_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_TakePhoto_Params.generate = function(generator_) {
    var generated = new Device_TakePhoto_Params;
    return generated;
  };

  Device_TakePhoto_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Device_TakePhoto_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_TakePhoto_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_TakePhoto_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_TakePhoto_Params.validate = function(messageValidator, offset) {
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

  Device_TakePhoto_Params.encodedSize = codec.kStructHeaderSize + 0;

  Device_TakePhoto_Params.decode = function(decoder) {
    var packed;
    var val = new Device_TakePhoto_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Device_TakePhoto_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_TakePhoto_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Device_TakePhoto_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Device_TakePhoto_ResponseParams.prototype.initDefaults_ = function() {
    this.blob = null;
  };
  Device_TakePhoto_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Device_TakePhoto_ResponseParams.generate = function(generator_) {
    var generated = new Device_TakePhoto_ResponseParams;
    generated.blob = generator_.generateStruct(media.mojom.Blob, true);
    return generated;
  };

  Device_TakePhoto_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateStruct(media.mojom.Blob, true);
    }
    return this;
  };
  Device_TakePhoto_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Device_TakePhoto_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Device_TakePhoto_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Device_TakePhoto_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Device_TakePhoto_ResponseParams.blob
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, image_capture$.Blob, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Device_TakePhoto_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Device_TakePhoto_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Device_TakePhoto_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStructPointer(image_capture$.Blob);
    return val;
  };

  Device_TakePhoto_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Device_TakePhoto_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(image_capture$.Blob, val.blob);
  };
  var kDevice_Start_Name = 451558468;
  var kDevice_OnReceiverReportingUtilization_Name = 873596870;
  var kDevice_RequestRefreshFrame_Name = 467274438;
  var kDevice_MaybeSuspend_Name = 1141899083;
  var kDevice_Resume_Name = 2115220288;
  var kDevice_GetPhotoState_Name = 1312725024;
  var kDevice_SetPhotoOptions_Name = 343308883;
  var kDevice_TakePhoto_Name = 340663221;

  function DevicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Device,
                                                   handleOrPtrInfo);
  }

  function DeviceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Device, associatedInterfacePtrInfo);
  }

  DeviceAssociatedPtr.prototype =
      Object.create(DevicePtr.prototype);
  DeviceAssociatedPtr.prototype.constructor =
      DeviceAssociatedPtr;

  function DeviceProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevicePtr.prototype.start = function() {
    return DeviceProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.start = function(requestedSettings, receiver) {
    var params_ = new Device_Start_Params();
    params_.requestedSettings = requestedSettings;
    params_.receiver = receiver;
    var builder = new codec.MessageV0Builder(
        kDevice_Start_Name,
        codec.align(Device_Start_Params.encodedSize));
    builder.encodeStruct(Device_Start_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevicePtr.prototype.onReceiverReportingUtilization = function() {
    return DeviceProxy.prototype.onReceiverReportingUtilization
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.onReceiverReportingUtilization = function(frameFeedbackId, utilization) {
    var params_ = new Device_OnReceiverReportingUtilization_Params();
    params_.frameFeedbackId = frameFeedbackId;
    params_.utilization = utilization;
    var builder = new codec.MessageV0Builder(
        kDevice_OnReceiverReportingUtilization_Name,
        codec.align(Device_OnReceiverReportingUtilization_Params.encodedSize));
    builder.encodeStruct(Device_OnReceiverReportingUtilization_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevicePtr.prototype.requestRefreshFrame = function() {
    return DeviceProxy.prototype.requestRefreshFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.requestRefreshFrame = function() {
    var params_ = new Device_RequestRefreshFrame_Params();
    var builder = new codec.MessageV0Builder(
        kDevice_RequestRefreshFrame_Name,
        codec.align(Device_RequestRefreshFrame_Params.encodedSize));
    builder.encodeStruct(Device_RequestRefreshFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevicePtr.prototype.maybeSuspend = function() {
    return DeviceProxy.prototype.maybeSuspend
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.maybeSuspend = function() {
    var params_ = new Device_MaybeSuspend_Params();
    var builder = new codec.MessageV0Builder(
        kDevice_MaybeSuspend_Name,
        codec.align(Device_MaybeSuspend_Params.encodedSize));
    builder.encodeStruct(Device_MaybeSuspend_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevicePtr.prototype.resume = function() {
    return DeviceProxy.prototype.resume
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.resume = function() {
    var params_ = new Device_Resume_Params();
    var builder = new codec.MessageV0Builder(
        kDevice_Resume_Name,
        codec.align(Device_Resume_Params.encodedSize));
    builder.encodeStruct(Device_Resume_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevicePtr.prototype.getPhotoState = function() {
    return DeviceProxy.prototype.getPhotoState
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.getPhotoState = function() {
    var params_ = new Device_GetPhotoState_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_GetPhotoState_Name,
          codec.align(Device_GetPhotoState_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_GetPhotoState_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_GetPhotoState_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.setPhotoOptions = function() {
    return DeviceProxy.prototype.setPhotoOptions
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.setPhotoOptions = function(settings) {
    var params_ = new Device_SetPhotoOptions_Params();
    params_.settings = settings;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_SetPhotoOptions_Name,
          codec.align(Device_SetPhotoOptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_SetPhotoOptions_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_SetPhotoOptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DevicePtr.prototype.takePhoto = function() {
    return DeviceProxy.prototype.takePhoto
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceProxy.prototype.takePhoto = function() {
    var params_ = new Device_TakePhoto_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDevice_TakePhoto_Name,
          codec.align(Device_TakePhoto_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Device_TakePhoto_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Device_TakePhoto_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DeviceStub(delegate) {
    this.delegate_ = delegate;
  }
  DeviceStub.prototype.start = function(requestedSettings, receiver) {
    return this.delegate_ && this.delegate_.start && this.delegate_.start(requestedSettings, receiver);
  }
  DeviceStub.prototype.onReceiverReportingUtilization = function(frameFeedbackId, utilization) {
    return this.delegate_ && this.delegate_.onReceiverReportingUtilization && this.delegate_.onReceiverReportingUtilization(frameFeedbackId, utilization);
  }
  DeviceStub.prototype.requestRefreshFrame = function() {
    return this.delegate_ && this.delegate_.requestRefreshFrame && this.delegate_.requestRefreshFrame();
  }
  DeviceStub.prototype.maybeSuspend = function() {
    return this.delegate_ && this.delegate_.maybeSuspend && this.delegate_.maybeSuspend();
  }
  DeviceStub.prototype.resume = function() {
    return this.delegate_ && this.delegate_.resume && this.delegate_.resume();
  }
  DeviceStub.prototype.getPhotoState = function() {
    return this.delegate_ && this.delegate_.getPhotoState && this.delegate_.getPhotoState();
  }
  DeviceStub.prototype.setPhotoOptions = function(settings) {
    return this.delegate_ && this.delegate_.setPhotoOptions && this.delegate_.setPhotoOptions(settings);
  }
  DeviceStub.prototype.takePhoto = function() {
    return this.delegate_ && this.delegate_.takePhoto && this.delegate_.takePhoto();
  }

  DeviceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevice_Start_Name:
      var params = reader.decodeStruct(Device_Start_Params);
      this.start(params.requestedSettings, params.receiver);
      return true;
    case kDevice_OnReceiverReportingUtilization_Name:
      var params = reader.decodeStruct(Device_OnReceiverReportingUtilization_Params);
      this.onReceiverReportingUtilization(params.frameFeedbackId, params.utilization);
      return true;
    case kDevice_RequestRefreshFrame_Name:
      var params = reader.decodeStruct(Device_RequestRefreshFrame_Params);
      this.requestRefreshFrame();
      return true;
    case kDevice_MaybeSuspend_Name:
      var params = reader.decodeStruct(Device_MaybeSuspend_Params);
      this.maybeSuspend();
      return true;
    case kDevice_Resume_Name:
      var params = reader.decodeStruct(Device_Resume_Params);
      this.resume();
      return true;
    default:
      return false;
    }
  };

  DeviceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevice_GetPhotoState_Name:
      var params = reader.decodeStruct(Device_GetPhotoState_Params);
      this.getPhotoState().then(function(response) {
        var responseParams =
            new Device_GetPhotoState_ResponseParams();
        responseParams.capabilities = response.capabilities;
        var builder = new codec.MessageV1Builder(
            kDevice_GetPhotoState_Name,
            codec.align(Device_GetPhotoState_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_GetPhotoState_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_SetPhotoOptions_Name:
      var params = reader.decodeStruct(Device_SetPhotoOptions_Params);
      this.setPhotoOptions(params.settings).then(function(response) {
        var responseParams =
            new Device_SetPhotoOptions_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kDevice_SetPhotoOptions_Name,
            codec.align(Device_SetPhotoOptions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_SetPhotoOptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDevice_TakePhoto_Name:
      var params = reader.decodeStruct(Device_TakePhoto_Params);
      this.takePhoto().then(function(response) {
        var responseParams =
            new Device_TakePhoto_ResponseParams();
        responseParams.blob = response.blob;
        var builder = new codec.MessageV1Builder(
            kDevice_TakePhoto_Name,
            codec.align(Device_TakePhoto_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Device_TakePhoto_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDeviceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevice_Start_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Device_Start_Params;
      break;
      case kDevice_OnReceiverReportingUtilization_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Device_OnReceiverReportingUtilization_Params;
      break;
      case kDevice_RequestRefreshFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Device_RequestRefreshFrame_Params;
      break;
      case kDevice_MaybeSuspend_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Device_MaybeSuspend_Params;
      break;
      case kDevice_Resume_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Device_Resume_Params;
      break;
      case kDevice_GetPhotoState_Name:
        if (message.expectsResponse())
          paramsClass = Device_GetPhotoState_Params;
      break;
      case kDevice_SetPhotoOptions_Name:
        if (message.expectsResponse())
          paramsClass = Device_SetPhotoOptions_Params;
      break;
      case kDevice_TakePhoto_Name:
        if (message.expectsResponse())
          paramsClass = Device_TakePhoto_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDevice_GetPhotoState_Name:
        if (message.isResponse())
          paramsClass = Device_GetPhotoState_ResponseParams;
        break;
      case kDevice_SetPhotoOptions_Name:
        if (message.isResponse())
          paramsClass = Device_SetPhotoOptions_ResponseParams;
        break;
      case kDevice_TakePhoto_Name:
        if (message.isResponse())
          paramsClass = Device_TakePhoto_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Device = {
    name: 'video_capture.mojom.Device',
    kVersion: 0,
    ptrClass: DevicePtr,
    proxyClass: DeviceProxy,
    stubClass: DeviceStub,
    validateRequest: validateDeviceRequest,
    validateResponse: validateDeviceResponse,
    mojomId: 'services/video_capture/public/mojom/device.mojom',
    fuzzMethods: {
      start: {
        params: Device_Start_Params,
      },
      onReceiverReportingUtilization: {
        params: Device_OnReceiverReportingUtilization_Params,
      },
      requestRefreshFrame: {
        params: Device_RequestRefreshFrame_Params,
      },
      maybeSuspend: {
        params: Device_MaybeSuspend_Params,
      },
      resume: {
        params: Device_Resume_Params,
      },
      getPhotoState: {
        params: Device_GetPhotoState_Params,
      },
      setPhotoOptions: {
        params: Device_SetPhotoOptions_Params,
      },
      takePhoto: {
        params: Device_TakePhoto_Params,
      },
    },
  };
  DeviceStub.prototype.validator = validateDeviceRequest;
  DeviceProxy.prototype.validator = validateDeviceResponse;
  exports.Device = Device;
  exports.DevicePtr = DevicePtr;
  exports.DeviceAssociatedPtr = DeviceAssociatedPtr;
})();