// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/audio/public/mojom/system_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('audio.mojom');
  var audio_parameters$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_parameters.mojom', '../../../../media/mojo/interfaces/audio_parameters.mojom.js');
  }
  var audio_device_description$ =
      mojo.internal.exposeNamespace('audio.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/audio/public/mojom/audio_device_description.mojom', 'audio_device_description.mojom.js');
  }



  function SystemInfo_GetInputStreamParameters_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetInputStreamParameters_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
  };
  SystemInfo_GetInputStreamParameters_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetInputStreamParameters_Params.generate = function(generator_) {
    var generated = new SystemInfo_GetInputStreamParameters_Params;
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  SystemInfo_GetInputStreamParameters_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  SystemInfo_GetInputStreamParameters_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetInputStreamParameters_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetInputStreamParameters_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetInputStreamParameters_Params.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetInputStreamParameters_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetInputStreamParameters_Params.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetInputStreamParameters_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetInputStreamParameters_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  SystemInfo_GetInputStreamParameters_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetInputStreamParameters_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function SystemInfo_GetInputStreamParameters_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetInputStreamParameters_ResponseParams.prototype.initDefaults_ = function() {
    this.params = null;
  };
  SystemInfo_GetInputStreamParameters_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetInputStreamParameters_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_GetInputStreamParameters_ResponseParams;
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, true);
    return generated;
  };

  SystemInfo_GetInputStreamParameters_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, true);
    }
    return this;
  };
  SystemInfo_GetInputStreamParameters_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetInputStreamParameters_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetInputStreamParameters_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetInputStreamParameters_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetInputStreamParameters_ResponseParams.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_parameters$.AudioParameters, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetInputStreamParameters_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetInputStreamParameters_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetInputStreamParameters_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    return val;
  };

  SystemInfo_GetInputStreamParameters_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetInputStreamParameters_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
  };
  function SystemInfo_GetOutputStreamParameters_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetOutputStreamParameters_Params.prototype.initDefaults_ = function() {
    this.deviceId = null;
  };
  SystemInfo_GetOutputStreamParameters_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetOutputStreamParameters_Params.generate = function(generator_) {
    var generated = new SystemInfo_GetOutputStreamParameters_Params;
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  SystemInfo_GetOutputStreamParameters_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  SystemInfo_GetOutputStreamParameters_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetOutputStreamParameters_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetOutputStreamParameters_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetOutputStreamParameters_Params.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetOutputStreamParameters_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetOutputStreamParameters_Params.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetOutputStreamParameters_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetOutputStreamParameters_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  SystemInfo_GetOutputStreamParameters_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetOutputStreamParameters_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function SystemInfo_GetOutputStreamParameters_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetOutputStreamParameters_ResponseParams.prototype.initDefaults_ = function() {
    this.params = null;
  };
  SystemInfo_GetOutputStreamParameters_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetOutputStreamParameters_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_GetOutputStreamParameters_ResponseParams;
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, true);
    return generated;
  };

  SystemInfo_GetOutputStreamParameters_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, true);
    }
    return this;
  };
  SystemInfo_GetOutputStreamParameters_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetOutputStreamParameters_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetOutputStreamParameters_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetOutputStreamParameters_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetOutputStreamParameters_ResponseParams.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_parameters$.AudioParameters, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetOutputStreamParameters_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetOutputStreamParameters_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetOutputStreamParameters_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    return val;
  };

  SystemInfo_GetOutputStreamParameters_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetOutputStreamParameters_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
  };
  function SystemInfo_HasInputDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_HasInputDevices_Params.prototype.initDefaults_ = function() {
  };
  SystemInfo_HasInputDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_HasInputDevices_Params.generate = function(generator_) {
    var generated = new SystemInfo_HasInputDevices_Params;
    return generated;
  };

  SystemInfo_HasInputDevices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SystemInfo_HasInputDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_HasInputDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_HasInputDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_HasInputDevices_Params.validate = function(messageValidator, offset) {
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

  SystemInfo_HasInputDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  SystemInfo_HasInputDevices_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_HasInputDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SystemInfo_HasInputDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_HasInputDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SystemInfo_HasInputDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_HasInputDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.hasInputDevices = false;
  };
  SystemInfo_HasInputDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_HasInputDevices_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_HasInputDevices_ResponseParams;
    generated.hasInputDevices = generator_.generateBool();
    return generated;
  };

  SystemInfo_HasInputDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hasInputDevices = mutator_.mutateBool(this.hasInputDevices);
    }
    return this;
  };
  SystemInfo_HasInputDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_HasInputDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_HasInputDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_HasInputDevices_ResponseParams.validate = function(messageValidator, offset) {
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

  SystemInfo_HasInputDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_HasInputDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_HasInputDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasInputDevices = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SystemInfo_HasInputDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_HasInputDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasInputDevices & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SystemInfo_HasOutputDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_HasOutputDevices_Params.prototype.initDefaults_ = function() {
  };
  SystemInfo_HasOutputDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_HasOutputDevices_Params.generate = function(generator_) {
    var generated = new SystemInfo_HasOutputDevices_Params;
    return generated;
  };

  SystemInfo_HasOutputDevices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SystemInfo_HasOutputDevices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_HasOutputDevices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_HasOutputDevices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_HasOutputDevices_Params.validate = function(messageValidator, offset) {
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

  SystemInfo_HasOutputDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  SystemInfo_HasOutputDevices_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_HasOutputDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SystemInfo_HasOutputDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_HasOutputDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SystemInfo_HasOutputDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_HasOutputDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.hasOutputDevices = false;
  };
  SystemInfo_HasOutputDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_HasOutputDevices_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_HasOutputDevices_ResponseParams;
    generated.hasOutputDevices = generator_.generateBool();
    return generated;
  };

  SystemInfo_HasOutputDevices_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hasOutputDevices = mutator_.mutateBool(this.hasOutputDevices);
    }
    return this;
  };
  SystemInfo_HasOutputDevices_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_HasOutputDevices_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_HasOutputDevices_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_HasOutputDevices_ResponseParams.validate = function(messageValidator, offset) {
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

  SystemInfo_HasOutputDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_HasOutputDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_HasOutputDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasOutputDevices = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SystemInfo_HasOutputDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_HasOutputDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasOutputDevices & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SystemInfo_GetInputDeviceDescriptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetInputDeviceDescriptions_Params.prototype.initDefaults_ = function() {
  };
  SystemInfo_GetInputDeviceDescriptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetInputDeviceDescriptions_Params.generate = function(generator_) {
    var generated = new SystemInfo_GetInputDeviceDescriptions_Params;
    return generated;
  };

  SystemInfo_GetInputDeviceDescriptions_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SystemInfo_GetInputDeviceDescriptions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetInputDeviceDescriptions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetInputDeviceDescriptions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetInputDeviceDescriptions_Params.validate = function(messageValidator, offset) {
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

  SystemInfo_GetInputDeviceDescriptions_Params.encodedSize = codec.kStructHeaderSize + 0;

  SystemInfo_GetInputDeviceDescriptions_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetInputDeviceDescriptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SystemInfo_GetInputDeviceDescriptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetInputDeviceDescriptions_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SystemInfo_GetInputDeviceDescriptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetInputDeviceDescriptions_ResponseParams.prototype.initDefaults_ = function() {
    this.deviceDescriptions = null;
  };
  SystemInfo_GetInputDeviceDescriptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetInputDeviceDescriptions_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_GetInputDeviceDescriptions_ResponseParams;
    generated.deviceDescriptions = generator_.generateArray(function() {
      return generator_.generateStruct(audio.mojom.AudioDeviceDescription, false);
    });
    return generated;
  };

  SystemInfo_GetInputDeviceDescriptions_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceDescriptions = mutator_.mutateArray(this.deviceDescriptions, function(val) {
        return mutator_.mutateStruct(audio.mojom.AudioDeviceDescription, false);
      });
    }
    return this;
  };
  SystemInfo_GetInputDeviceDescriptions_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetInputDeviceDescriptions_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetInputDeviceDescriptions_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetInputDeviceDescriptions_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetInputDeviceDescriptions_ResponseParams.deviceDescriptions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(audio_device_description$.AudioDeviceDescription), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetInputDeviceDescriptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetInputDeviceDescriptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetInputDeviceDescriptions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceDescriptions = decoder.decodeArrayPointer(new codec.PointerTo(audio_device_description$.AudioDeviceDescription));
    return val;
  };

  SystemInfo_GetInputDeviceDescriptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetInputDeviceDescriptions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(audio_device_description$.AudioDeviceDescription), val.deviceDescriptions);
  };
  function SystemInfo_GetOutputDeviceDescriptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetOutputDeviceDescriptions_Params.prototype.initDefaults_ = function() {
  };
  SystemInfo_GetOutputDeviceDescriptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetOutputDeviceDescriptions_Params.generate = function(generator_) {
    var generated = new SystemInfo_GetOutputDeviceDescriptions_Params;
    return generated;
  };

  SystemInfo_GetOutputDeviceDescriptions_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SystemInfo_GetOutputDeviceDescriptions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetOutputDeviceDescriptions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetOutputDeviceDescriptions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetOutputDeviceDescriptions_Params.validate = function(messageValidator, offset) {
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

  SystemInfo_GetOutputDeviceDescriptions_Params.encodedSize = codec.kStructHeaderSize + 0;

  SystemInfo_GetOutputDeviceDescriptions_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetOutputDeviceDescriptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SystemInfo_GetOutputDeviceDescriptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetOutputDeviceDescriptions_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SystemInfo_GetOutputDeviceDescriptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.prototype.initDefaults_ = function() {
    this.deviceDescriptions = null;
  };
  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_GetOutputDeviceDescriptions_ResponseParams;
    generated.deviceDescriptions = generator_.generateArray(function() {
      return generator_.generateStruct(audio.mojom.AudioDeviceDescription, false);
    });
    return generated;
  };

  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceDescriptions = mutator_.mutateArray(this.deviceDescriptions, function(val) {
        return mutator_.mutateStruct(audio.mojom.AudioDeviceDescription, false);
      });
    }
    return this;
  };
  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetOutputDeviceDescriptions_ResponseParams.deviceDescriptions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(audio_device_description$.AudioDeviceDescription), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetOutputDeviceDescriptions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceDescriptions = decoder.decodeArrayPointer(new codec.PointerTo(audio_device_description$.AudioDeviceDescription));
    return val;
  };

  SystemInfo_GetOutputDeviceDescriptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetOutputDeviceDescriptions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(audio_device_description$.AudioDeviceDescription), val.deviceDescriptions);
  };
  function SystemInfo_GetAssociatedOutputDeviceID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetAssociatedOutputDeviceID_Params.prototype.initDefaults_ = function() {
    this.inputDeviceId = null;
  };
  SystemInfo_GetAssociatedOutputDeviceID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetAssociatedOutputDeviceID_Params.generate = function(generator_) {
    var generated = new SystemInfo_GetAssociatedOutputDeviceID_Params;
    generated.inputDeviceId = generator_.generateString(false);
    return generated;
  };

  SystemInfo_GetAssociatedOutputDeviceID_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputDeviceId = mutator_.mutateString(this.inputDeviceId, false);
    }
    return this;
  };
  SystemInfo_GetAssociatedOutputDeviceID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetAssociatedOutputDeviceID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetAssociatedOutputDeviceID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetAssociatedOutputDeviceID_Params.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetAssociatedOutputDeviceID_Params.inputDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetAssociatedOutputDeviceID_Params.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetAssociatedOutputDeviceID_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetAssociatedOutputDeviceID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputDeviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  SystemInfo_GetAssociatedOutputDeviceID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetAssociatedOutputDeviceID_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.inputDeviceId);
  };
  function SystemInfo_GetAssociatedOutputDeviceID_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.prototype.initDefaults_ = function() {
    this.associatedOutputDeviceId = null;
  };
  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_GetAssociatedOutputDeviceID_ResponseParams;
    generated.associatedOutputDeviceId = generator_.generateString(true);
    return generated;
  };

  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.associatedOutputDeviceId = mutator_.mutateString(this.associatedOutputDeviceId, true);
    }
    return this;
  };
  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.associatedOutputDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetAssociatedOutputDeviceID_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.associatedOutputDeviceId = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.associatedOutputDeviceId);
  };
  function SystemInfo_GetInputDeviceInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetInputDeviceInfo_Params.prototype.initDefaults_ = function() {
    this.inputDeviceId = null;
  };
  SystemInfo_GetInputDeviceInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetInputDeviceInfo_Params.generate = function(generator_) {
    var generated = new SystemInfo_GetInputDeviceInfo_Params;
    generated.inputDeviceId = generator_.generateString(false);
    return generated;
  };

  SystemInfo_GetInputDeviceInfo_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputDeviceId = mutator_.mutateString(this.inputDeviceId, false);
    }
    return this;
  };
  SystemInfo_GetInputDeviceInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetInputDeviceInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetInputDeviceInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetInputDeviceInfo_Params.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetInputDeviceInfo_Params.inputDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetInputDeviceInfo_Params.encodedSize = codec.kStructHeaderSize + 8;

  SystemInfo_GetInputDeviceInfo_Params.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetInputDeviceInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputDeviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  SystemInfo_GetInputDeviceInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetInputDeviceInfo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.inputDeviceId);
  };
  function SystemInfo_GetInputDeviceInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemInfo_GetInputDeviceInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.inputParams = null;
    this.associatedOutputDeviceId = null;
  };
  SystemInfo_GetInputDeviceInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemInfo_GetInputDeviceInfo_ResponseParams.generate = function(generator_) {
    var generated = new SystemInfo_GetInputDeviceInfo_ResponseParams;
    generated.inputParams = generator_.generateStruct(media.mojom.AudioParameters, true);
    generated.associatedOutputDeviceId = generator_.generateString(true);
    return generated;
  };

  SystemInfo_GetInputDeviceInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputParams = mutator_.mutateStruct(media.mojom.AudioParameters, true);
    }
    if (mutator_.chooseMutateField()) {
      this.associatedOutputDeviceId = mutator_.mutateString(this.associatedOutputDeviceId, true);
    }
    return this;
  };
  SystemInfo_GetInputDeviceInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemInfo_GetInputDeviceInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemInfo_GetInputDeviceInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemInfo_GetInputDeviceInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SystemInfo_GetInputDeviceInfo_ResponseParams.inputParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_parameters$.AudioParameters, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SystemInfo_GetInputDeviceInfo_ResponseParams.associatedOutputDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemInfo_GetInputDeviceInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  SystemInfo_GetInputDeviceInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemInfo_GetInputDeviceInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputParams = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    val.associatedOutputDeviceId = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  SystemInfo_GetInputDeviceInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemInfo_GetInputDeviceInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.inputParams);
    encoder.encodeStruct(codec.NullableString, val.associatedOutputDeviceId);
  };
  var kSystemInfo_GetInputStreamParameters_Name = 1410512256;
  var kSystemInfo_GetOutputStreamParameters_Name = 290612465;
  var kSystemInfo_HasInputDevices_Name = 1982975734;
  var kSystemInfo_HasOutputDevices_Name = 780770133;
  var kSystemInfo_GetInputDeviceDescriptions_Name = 907947424;
  var kSystemInfo_GetOutputDeviceDescriptions_Name = 1835833315;
  var kSystemInfo_GetAssociatedOutputDeviceID_Name = 390323992;
  var kSystemInfo_GetInputDeviceInfo_Name = 1241852900;

  function SystemInfoPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SystemInfo,
                                                   handleOrPtrInfo);
  }

  function SystemInfoAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SystemInfo, associatedInterfacePtrInfo);
  }

  SystemInfoAssociatedPtr.prototype =
      Object.create(SystemInfoPtr.prototype);
  SystemInfoAssociatedPtr.prototype.constructor =
      SystemInfoAssociatedPtr;

  function SystemInfoProxy(receiver) {
    this.receiver_ = receiver;
  }
  SystemInfoPtr.prototype.getInputStreamParameters = function() {
    return SystemInfoProxy.prototype.getInputStreamParameters
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.getInputStreamParameters = function(deviceId) {
    var params_ = new SystemInfo_GetInputStreamParameters_Params();
    params_.deviceId = deviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_GetInputStreamParameters_Name,
          codec.align(SystemInfo_GetInputStreamParameters_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_GetInputStreamParameters_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_GetInputStreamParameters_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemInfoPtr.prototype.getOutputStreamParameters = function() {
    return SystemInfoProxy.prototype.getOutputStreamParameters
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.getOutputStreamParameters = function(deviceId) {
    var params_ = new SystemInfo_GetOutputStreamParameters_Params();
    params_.deviceId = deviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_GetOutputStreamParameters_Name,
          codec.align(SystemInfo_GetOutputStreamParameters_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_GetOutputStreamParameters_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_GetOutputStreamParameters_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemInfoPtr.prototype.hasInputDevices = function() {
    return SystemInfoProxy.prototype.hasInputDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.hasInputDevices = function() {
    var params_ = new SystemInfo_HasInputDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_HasInputDevices_Name,
          codec.align(SystemInfo_HasInputDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_HasInputDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_HasInputDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemInfoPtr.prototype.hasOutputDevices = function() {
    return SystemInfoProxy.prototype.hasOutputDevices
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.hasOutputDevices = function() {
    var params_ = new SystemInfo_HasOutputDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_HasOutputDevices_Name,
          codec.align(SystemInfo_HasOutputDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_HasOutputDevices_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_HasOutputDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemInfoPtr.prototype.getInputDeviceDescriptions = function() {
    return SystemInfoProxy.prototype.getInputDeviceDescriptions
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.getInputDeviceDescriptions = function() {
    var params_ = new SystemInfo_GetInputDeviceDescriptions_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_GetInputDeviceDescriptions_Name,
          codec.align(SystemInfo_GetInputDeviceDescriptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_GetInputDeviceDescriptions_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_GetInputDeviceDescriptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemInfoPtr.prototype.getOutputDeviceDescriptions = function() {
    return SystemInfoProxy.prototype.getOutputDeviceDescriptions
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.getOutputDeviceDescriptions = function() {
    var params_ = new SystemInfo_GetOutputDeviceDescriptions_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_GetOutputDeviceDescriptions_Name,
          codec.align(SystemInfo_GetOutputDeviceDescriptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_GetOutputDeviceDescriptions_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_GetOutputDeviceDescriptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemInfoPtr.prototype.getAssociatedOutputDeviceID = function() {
    return SystemInfoProxy.prototype.getAssociatedOutputDeviceID
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.getAssociatedOutputDeviceID = function(inputDeviceId) {
    var params_ = new SystemInfo_GetAssociatedOutputDeviceID_Params();
    params_.inputDeviceId = inputDeviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_GetAssociatedOutputDeviceID_Name,
          codec.align(SystemInfo_GetAssociatedOutputDeviceID_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_GetAssociatedOutputDeviceID_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_GetAssociatedOutputDeviceID_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemInfoPtr.prototype.getInputDeviceInfo = function() {
    return SystemInfoProxy.prototype.getInputDeviceInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemInfoProxy.prototype.getInputDeviceInfo = function(inputDeviceId) {
    var params_ = new SystemInfo_GetInputDeviceInfo_Params();
    params_.inputDeviceId = inputDeviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemInfo_GetInputDeviceInfo_Name,
          codec.align(SystemInfo_GetInputDeviceInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemInfo_GetInputDeviceInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemInfo_GetInputDeviceInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SystemInfoStub(delegate) {
    this.delegate_ = delegate;
  }
  SystemInfoStub.prototype.getInputStreamParameters = function(deviceId) {
    return this.delegate_ && this.delegate_.getInputStreamParameters && this.delegate_.getInputStreamParameters(deviceId);
  }
  SystemInfoStub.prototype.getOutputStreamParameters = function(deviceId) {
    return this.delegate_ && this.delegate_.getOutputStreamParameters && this.delegate_.getOutputStreamParameters(deviceId);
  }
  SystemInfoStub.prototype.hasInputDevices = function() {
    return this.delegate_ && this.delegate_.hasInputDevices && this.delegate_.hasInputDevices();
  }
  SystemInfoStub.prototype.hasOutputDevices = function() {
    return this.delegate_ && this.delegate_.hasOutputDevices && this.delegate_.hasOutputDevices();
  }
  SystemInfoStub.prototype.getInputDeviceDescriptions = function() {
    return this.delegate_ && this.delegate_.getInputDeviceDescriptions && this.delegate_.getInputDeviceDescriptions();
  }
  SystemInfoStub.prototype.getOutputDeviceDescriptions = function() {
    return this.delegate_ && this.delegate_.getOutputDeviceDescriptions && this.delegate_.getOutputDeviceDescriptions();
  }
  SystemInfoStub.prototype.getAssociatedOutputDeviceID = function(inputDeviceId) {
    return this.delegate_ && this.delegate_.getAssociatedOutputDeviceID && this.delegate_.getAssociatedOutputDeviceID(inputDeviceId);
  }
  SystemInfoStub.prototype.getInputDeviceInfo = function(inputDeviceId) {
    return this.delegate_ && this.delegate_.getInputDeviceInfo && this.delegate_.getInputDeviceInfo(inputDeviceId);
  }

  SystemInfoStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  SystemInfoStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSystemInfo_GetInputStreamParameters_Name:
      var params = reader.decodeStruct(SystemInfo_GetInputStreamParameters_Params);
      this.getInputStreamParameters(params.deviceId).then(function(response) {
        var responseParams =
            new SystemInfo_GetInputStreamParameters_ResponseParams();
        responseParams.params = response.params;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_GetInputStreamParameters_Name,
            codec.align(SystemInfo_GetInputStreamParameters_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_GetInputStreamParameters_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSystemInfo_GetOutputStreamParameters_Name:
      var params = reader.decodeStruct(SystemInfo_GetOutputStreamParameters_Params);
      this.getOutputStreamParameters(params.deviceId).then(function(response) {
        var responseParams =
            new SystemInfo_GetOutputStreamParameters_ResponseParams();
        responseParams.params = response.params;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_GetOutputStreamParameters_Name,
            codec.align(SystemInfo_GetOutputStreamParameters_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_GetOutputStreamParameters_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSystemInfo_HasInputDevices_Name:
      var params = reader.decodeStruct(SystemInfo_HasInputDevices_Params);
      this.hasInputDevices().then(function(response) {
        var responseParams =
            new SystemInfo_HasInputDevices_ResponseParams();
        responseParams.hasInputDevices = response.hasInputDevices;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_HasInputDevices_Name,
            codec.align(SystemInfo_HasInputDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_HasInputDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSystemInfo_HasOutputDevices_Name:
      var params = reader.decodeStruct(SystemInfo_HasOutputDevices_Params);
      this.hasOutputDevices().then(function(response) {
        var responseParams =
            new SystemInfo_HasOutputDevices_ResponseParams();
        responseParams.hasOutputDevices = response.hasOutputDevices;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_HasOutputDevices_Name,
            codec.align(SystemInfo_HasOutputDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_HasOutputDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSystemInfo_GetInputDeviceDescriptions_Name:
      var params = reader.decodeStruct(SystemInfo_GetInputDeviceDescriptions_Params);
      this.getInputDeviceDescriptions().then(function(response) {
        var responseParams =
            new SystemInfo_GetInputDeviceDescriptions_ResponseParams();
        responseParams.deviceDescriptions = response.deviceDescriptions;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_GetInputDeviceDescriptions_Name,
            codec.align(SystemInfo_GetInputDeviceDescriptions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_GetInputDeviceDescriptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSystemInfo_GetOutputDeviceDescriptions_Name:
      var params = reader.decodeStruct(SystemInfo_GetOutputDeviceDescriptions_Params);
      this.getOutputDeviceDescriptions().then(function(response) {
        var responseParams =
            new SystemInfo_GetOutputDeviceDescriptions_ResponseParams();
        responseParams.deviceDescriptions = response.deviceDescriptions;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_GetOutputDeviceDescriptions_Name,
            codec.align(SystemInfo_GetOutputDeviceDescriptions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_GetOutputDeviceDescriptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSystemInfo_GetAssociatedOutputDeviceID_Name:
      var params = reader.decodeStruct(SystemInfo_GetAssociatedOutputDeviceID_Params);
      this.getAssociatedOutputDeviceID(params.inputDeviceId).then(function(response) {
        var responseParams =
            new SystemInfo_GetAssociatedOutputDeviceID_ResponseParams();
        responseParams.associatedOutputDeviceId = response.associatedOutputDeviceId;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_GetAssociatedOutputDeviceID_Name,
            codec.align(SystemInfo_GetAssociatedOutputDeviceID_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_GetAssociatedOutputDeviceID_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSystemInfo_GetInputDeviceInfo_Name:
      var params = reader.decodeStruct(SystemInfo_GetInputDeviceInfo_Params);
      this.getInputDeviceInfo(params.inputDeviceId).then(function(response) {
        var responseParams =
            new SystemInfo_GetInputDeviceInfo_ResponseParams();
        responseParams.inputParams = response.inputParams;
        responseParams.associatedOutputDeviceId = response.associatedOutputDeviceId;
        var builder = new codec.MessageV1Builder(
            kSystemInfo_GetInputDeviceInfo_Name,
            codec.align(SystemInfo_GetInputDeviceInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemInfo_GetInputDeviceInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSystemInfoRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSystemInfo_GetInputStreamParameters_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_GetInputStreamParameters_Params;
      break;
      case kSystemInfo_GetOutputStreamParameters_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_GetOutputStreamParameters_Params;
      break;
      case kSystemInfo_HasInputDevices_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_HasInputDevices_Params;
      break;
      case kSystemInfo_HasOutputDevices_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_HasOutputDevices_Params;
      break;
      case kSystemInfo_GetInputDeviceDescriptions_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_GetInputDeviceDescriptions_Params;
      break;
      case kSystemInfo_GetOutputDeviceDescriptions_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_GetOutputDeviceDescriptions_Params;
      break;
      case kSystemInfo_GetAssociatedOutputDeviceID_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_GetAssociatedOutputDeviceID_Params;
      break;
      case kSystemInfo_GetInputDeviceInfo_Name:
        if (message.expectsResponse())
          paramsClass = SystemInfo_GetInputDeviceInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSystemInfoResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSystemInfo_GetInputStreamParameters_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_GetInputStreamParameters_ResponseParams;
        break;
      case kSystemInfo_GetOutputStreamParameters_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_GetOutputStreamParameters_ResponseParams;
        break;
      case kSystemInfo_HasInputDevices_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_HasInputDevices_ResponseParams;
        break;
      case kSystemInfo_HasOutputDevices_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_HasOutputDevices_ResponseParams;
        break;
      case kSystemInfo_GetInputDeviceDescriptions_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_GetInputDeviceDescriptions_ResponseParams;
        break;
      case kSystemInfo_GetOutputDeviceDescriptions_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_GetOutputDeviceDescriptions_ResponseParams;
        break;
      case kSystemInfo_GetAssociatedOutputDeviceID_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_GetAssociatedOutputDeviceID_ResponseParams;
        break;
      case kSystemInfo_GetInputDeviceInfo_Name:
        if (message.isResponse())
          paramsClass = SystemInfo_GetInputDeviceInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SystemInfo = {
    name: 'audio.mojom.SystemInfo',
    kVersion: 0,
    ptrClass: SystemInfoPtr,
    proxyClass: SystemInfoProxy,
    stubClass: SystemInfoStub,
    validateRequest: validateSystemInfoRequest,
    validateResponse: validateSystemInfoResponse,
    mojomId: 'services/audio/public/mojom/system_info.mojom',
    fuzzMethods: {
      getInputStreamParameters: {
        params: SystemInfo_GetInputStreamParameters_Params,
      },
      getOutputStreamParameters: {
        params: SystemInfo_GetOutputStreamParameters_Params,
      },
      hasInputDevices: {
        params: SystemInfo_HasInputDevices_Params,
      },
      hasOutputDevices: {
        params: SystemInfo_HasOutputDevices_Params,
      },
      getInputDeviceDescriptions: {
        params: SystemInfo_GetInputDeviceDescriptions_Params,
      },
      getOutputDeviceDescriptions: {
        params: SystemInfo_GetOutputDeviceDescriptions_Params,
      },
      getAssociatedOutputDeviceID: {
        params: SystemInfo_GetAssociatedOutputDeviceID_Params,
      },
      getInputDeviceInfo: {
        params: SystemInfo_GetInputDeviceInfo_Params,
      },
    },
  };
  SystemInfoStub.prototype.validator = validateSystemInfoRequest;
  SystemInfoProxy.prototype.validator = validateSystemInfoResponse;
  exports.SystemInfo = SystemInfo;
  exports.SystemInfoPtr = SystemInfoPtr;
  exports.SystemInfoAssociatedPtr = SystemInfoAssociatedPtr;
})();