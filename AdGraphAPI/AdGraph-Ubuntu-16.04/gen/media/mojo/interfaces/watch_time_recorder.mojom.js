// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/watch_time_recorder.mojom';
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
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', 'media_types.mojom.js');
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
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../url/mojom/origin.mojom.js');
  }



  function PlaybackProperties(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlaybackProperties.prototype.initDefaults_ = function() {
    this.audioCodec = 0;
    this.videoCodec = 0;
    this.hasAudio = false;
    this.hasVideo = false;
    this.isBackground = false;
    this.isMuted = false;
    this.isMse = false;
    this.isEme = false;
    this.isEmbeddedMediaExperience = false;
    this.naturalSize = null;
  };
  PlaybackProperties.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PlaybackProperties.generate = function(generator_) {
    var generated = new PlaybackProperties;
    generated.audioCodec = generator_.generateEnum();
    generated.videoCodec = generator_.generateEnum();
    generated.hasAudio = generator_.generateBool();
    generated.hasVideo = generator_.generateBool();
    generated.isBackground = generator_.generateBool();
    generated.isMuted = generator_.generateBool();
    generated.isMse = generator_.generateBool();
    generated.isEme = generator_.generateBool();
    generated.isEmbeddedMediaExperience = generator_.generateBool();
    generated.naturalSize = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  PlaybackProperties.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.audioCodec = mutator_.mutateEnum(this.audioCodec);
    }
    if (mutator_.chooseMutateField()) {
      this.videoCodec = mutator_.mutateEnum(this.videoCodec);
    }
    if (mutator_.chooseMutateField()) {
      this.hasAudio = mutator_.mutateBool(this.hasAudio);
    }
    if (mutator_.chooseMutateField()) {
      this.hasVideo = mutator_.mutateBool(this.hasVideo);
    }
    if (mutator_.chooseMutateField()) {
      this.isBackground = mutator_.mutateBool(this.isBackground);
    }
    if (mutator_.chooseMutateField()) {
      this.isMuted = mutator_.mutateBool(this.isMuted);
    }
    if (mutator_.chooseMutateField()) {
      this.isMse = mutator_.mutateBool(this.isMse);
    }
    if (mutator_.chooseMutateField()) {
      this.isEme = mutator_.mutateBool(this.isEme);
    }
    if (mutator_.chooseMutateField()) {
      this.isEmbeddedMediaExperience = mutator_.mutateBool(this.isEmbeddedMediaExperience);
    }
    if (mutator_.chooseMutateField()) {
      this.naturalSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  PlaybackProperties.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PlaybackProperties.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PlaybackProperties.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PlaybackProperties.validate = function(messageValidator, offset) {
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


    // validate PlaybackProperties.audioCodec
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.AudioCodec);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PlaybackProperties.videoCodec
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, media_types$.VideoCodec);
    if (err !== validator.validationError.NONE)
        return err;









    // validate PlaybackProperties.naturalSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PlaybackProperties.encodedSize = codec.kStructHeaderSize + 24;

  PlaybackProperties.decode = function(decoder) {
    var packed;
    var val = new PlaybackProperties();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audioCodec = decoder.decodeStruct(codec.Int32);
    val.videoCodec = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.hasAudio = (packed >> 0) & 1 ? true : false;
    val.hasVideo = (packed >> 1) & 1 ? true : false;
    val.isBackground = (packed >> 2) & 1 ? true : false;
    val.isMuted = (packed >> 3) & 1 ? true : false;
    val.isMse = (packed >> 4) & 1 ? true : false;
    val.isEme = (packed >> 5) & 1 ? true : false;
    val.isEmbeddedMediaExperience = (packed >> 6) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.naturalSize = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  PlaybackProperties.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlaybackProperties.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.audioCodec);
    encoder.encodeStruct(codec.Int32, val.videoCodec);
    packed = 0;
    packed |= (val.hasAudio & 1) << 0
    packed |= (val.hasVideo & 1) << 1
    packed |= (val.isBackground & 1) << 2
    packed |= (val.isMuted & 1) << 3
    packed |= (val.isMse & 1) << 4
    packed |= (val.isEme & 1) << 5
    packed |= (val.isEmbeddedMediaExperience & 1) << 6
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.naturalSize);
  };
  function WatchTimeRecorder_RecordWatchTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WatchTimeRecorder_RecordWatchTime_Params.prototype.initDefaults_ = function() {
    this.key = 0;
    this.watchTime = null;
  };
  WatchTimeRecorder_RecordWatchTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WatchTimeRecorder_RecordWatchTime_Params.generate = function(generator_) {
    var generated = new WatchTimeRecorder_RecordWatchTime_Params;
    generated.key = generator_.generateEnum();
    generated.watchTime = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  WatchTimeRecorder_RecordWatchTime_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateEnum(this.key);
    }
    if (mutator_.chooseMutateField()) {
      this.watchTime = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  WatchTimeRecorder_RecordWatchTime_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WatchTimeRecorder_RecordWatchTime_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WatchTimeRecorder_RecordWatchTime_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WatchTimeRecorder_RecordWatchTime_Params.validate = function(messageValidator, offset) {
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


    // validate WatchTimeRecorder_RecordWatchTime_Params.key
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.WatchTimeKey);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WatchTimeRecorder_RecordWatchTime_Params.watchTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WatchTimeRecorder_RecordWatchTime_Params.encodedSize = codec.kStructHeaderSize + 16;

  WatchTimeRecorder_RecordWatchTime_Params.decode = function(decoder) {
    var packed;
    var val = new WatchTimeRecorder_RecordWatchTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.watchTime = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  WatchTimeRecorder_RecordWatchTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WatchTimeRecorder_RecordWatchTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.key);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.watchTime);
  };
  function WatchTimeRecorder_FinalizeWatchTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WatchTimeRecorder_FinalizeWatchTime_Params.prototype.initDefaults_ = function() {
    this.watchTimeKeys = null;
  };
  WatchTimeRecorder_FinalizeWatchTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WatchTimeRecorder_FinalizeWatchTime_Params.generate = function(generator_) {
    var generated = new WatchTimeRecorder_FinalizeWatchTime_Params;
    generated.watchTimeKeys = generator_.generateArray(function() {
      return generator_.generateEnum();
    });
    return generated;
  };

  WatchTimeRecorder_FinalizeWatchTime_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.watchTimeKeys = mutator_.mutateArray(this.watchTimeKeys, function(val) {
        return mutator_.mutateEnum(val);
      });
    }
    return this;
  };
  WatchTimeRecorder_FinalizeWatchTime_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WatchTimeRecorder_FinalizeWatchTime_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WatchTimeRecorder_FinalizeWatchTime_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WatchTimeRecorder_FinalizeWatchTime_Params.validate = function(messageValidator, offset) {
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


    // validate WatchTimeRecorder_FinalizeWatchTime_Params.watchTimeKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, new codec.Enum(media_types$.WatchTimeKey), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WatchTimeRecorder_FinalizeWatchTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  WatchTimeRecorder_FinalizeWatchTime_Params.decode = function(decoder) {
    var packed;
    var val = new WatchTimeRecorder_FinalizeWatchTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.watchTimeKeys = decoder.decodeArrayPointer(new codec.Enum(media_types$.WatchTimeKey));
    return val;
  };

  WatchTimeRecorder_FinalizeWatchTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WatchTimeRecorder_FinalizeWatchTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.Enum(media_types$.WatchTimeKey), val.watchTimeKeys);
  };
  function WatchTimeRecorder_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WatchTimeRecorder_OnError_Params.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  WatchTimeRecorder_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WatchTimeRecorder_OnError_Params.generate = function(generator_) {
    var generated = new WatchTimeRecorder_OnError_Params;
    generated.status = generator_.generateEnum();
    return generated;
  };

  WatchTimeRecorder_OnError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status);
    }
    return this;
  };
  WatchTimeRecorder_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WatchTimeRecorder_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WatchTimeRecorder_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WatchTimeRecorder_OnError_Params.validate = function(messageValidator, offset) {
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


    // validate WatchTimeRecorder_OnError_Params.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.PipelineStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WatchTimeRecorder_OnError_Params.encodedSize = codec.kStructHeaderSize + 8;

  WatchTimeRecorder_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new WatchTimeRecorder_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WatchTimeRecorder_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WatchTimeRecorder_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WatchTimeRecorder_SetAudioDecoderName_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WatchTimeRecorder_SetAudioDecoderName_Params.prototype.initDefaults_ = function() {
    this.name = null;
  };
  WatchTimeRecorder_SetAudioDecoderName_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WatchTimeRecorder_SetAudioDecoderName_Params.generate = function(generator_) {
    var generated = new WatchTimeRecorder_SetAudioDecoderName_Params;
    generated.name = generator_.generateString(false);
    return generated;
  };

  WatchTimeRecorder_SetAudioDecoderName_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    return this;
  };
  WatchTimeRecorder_SetAudioDecoderName_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WatchTimeRecorder_SetAudioDecoderName_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WatchTimeRecorder_SetAudioDecoderName_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WatchTimeRecorder_SetAudioDecoderName_Params.validate = function(messageValidator, offset) {
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


    // validate WatchTimeRecorder_SetAudioDecoderName_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WatchTimeRecorder_SetAudioDecoderName_Params.encodedSize = codec.kStructHeaderSize + 8;

  WatchTimeRecorder_SetAudioDecoderName_Params.decode = function(decoder) {
    var packed;
    var val = new WatchTimeRecorder_SetAudioDecoderName_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  WatchTimeRecorder_SetAudioDecoderName_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WatchTimeRecorder_SetAudioDecoderName_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
  };
  function WatchTimeRecorder_SetVideoDecoderName_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WatchTimeRecorder_SetVideoDecoderName_Params.prototype.initDefaults_ = function() {
    this.name = null;
  };
  WatchTimeRecorder_SetVideoDecoderName_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WatchTimeRecorder_SetVideoDecoderName_Params.generate = function(generator_) {
    var generated = new WatchTimeRecorder_SetVideoDecoderName_Params;
    generated.name = generator_.generateString(false);
    return generated;
  };

  WatchTimeRecorder_SetVideoDecoderName_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    return this;
  };
  WatchTimeRecorder_SetVideoDecoderName_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WatchTimeRecorder_SetVideoDecoderName_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WatchTimeRecorder_SetVideoDecoderName_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WatchTimeRecorder_SetVideoDecoderName_Params.validate = function(messageValidator, offset) {
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


    // validate WatchTimeRecorder_SetVideoDecoderName_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WatchTimeRecorder_SetVideoDecoderName_Params.encodedSize = codec.kStructHeaderSize + 8;

  WatchTimeRecorder_SetVideoDecoderName_Params.decode = function(decoder) {
    var packed;
    var val = new WatchTimeRecorder_SetVideoDecoderName_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  WatchTimeRecorder_SetVideoDecoderName_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WatchTimeRecorder_SetVideoDecoderName_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
  };
  function WatchTimeRecorder_SetAutoplayInitiated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WatchTimeRecorder_SetAutoplayInitiated_Params.prototype.initDefaults_ = function() {
    this.value = false;
  };
  WatchTimeRecorder_SetAutoplayInitiated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WatchTimeRecorder_SetAutoplayInitiated_Params.generate = function(generator_) {
    var generated = new WatchTimeRecorder_SetAutoplayInitiated_Params;
    generated.value = generator_.generateBool();
    return generated;
  };

  WatchTimeRecorder_SetAutoplayInitiated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateBool(this.value);
    }
    return this;
  };
  WatchTimeRecorder_SetAutoplayInitiated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WatchTimeRecorder_SetAutoplayInitiated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WatchTimeRecorder_SetAutoplayInitiated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WatchTimeRecorder_SetAutoplayInitiated_Params.validate = function(messageValidator, offset) {
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

  WatchTimeRecorder_SetAutoplayInitiated_Params.encodedSize = codec.kStructHeaderSize + 8;

  WatchTimeRecorder_SetAutoplayInitiated_Params.decode = function(decoder) {
    var packed;
    var val = new WatchTimeRecorder_SetAutoplayInitiated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.value = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WatchTimeRecorder_SetAutoplayInitiated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WatchTimeRecorder_SetAutoplayInitiated_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.value & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WatchTimeRecorder_UpdateUnderflowCount_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WatchTimeRecorder_UpdateUnderflowCount_Params.prototype.initDefaults_ = function() {
    this.count = 0;
  };
  WatchTimeRecorder_UpdateUnderflowCount_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WatchTimeRecorder_UpdateUnderflowCount_Params.generate = function(generator_) {
    var generated = new WatchTimeRecorder_UpdateUnderflowCount_Params;
    generated.count = generator_.generateInt32();
    return generated;
  };

  WatchTimeRecorder_UpdateUnderflowCount_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.count = mutator_.mutateInt32(this.count);
    }
    return this;
  };
  WatchTimeRecorder_UpdateUnderflowCount_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WatchTimeRecorder_UpdateUnderflowCount_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WatchTimeRecorder_UpdateUnderflowCount_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WatchTimeRecorder_UpdateUnderflowCount_Params.validate = function(messageValidator, offset) {
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

  WatchTimeRecorder_UpdateUnderflowCount_Params.encodedSize = codec.kStructHeaderSize + 8;

  WatchTimeRecorder_UpdateUnderflowCount_Params.decode = function(decoder) {
    var packed;
    var val = new WatchTimeRecorder_UpdateUnderflowCount_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.count = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WatchTimeRecorder_UpdateUnderflowCount_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WatchTimeRecorder_UpdateUnderflowCount_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.count);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWatchTimeRecorder_RecordWatchTime_Name = 2111182695;
  var kWatchTimeRecorder_FinalizeWatchTime_Name = 1165016582;
  var kWatchTimeRecorder_OnError_Name = 1807592247;
  var kWatchTimeRecorder_SetAudioDecoderName_Name = 847512903;
  var kWatchTimeRecorder_SetVideoDecoderName_Name = 1207166149;
  var kWatchTimeRecorder_SetAutoplayInitiated_Name = 533543695;
  var kWatchTimeRecorder_UpdateUnderflowCount_Name = 521088931;

  function WatchTimeRecorderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WatchTimeRecorder,
                                                   handleOrPtrInfo);
  }

  function WatchTimeRecorderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WatchTimeRecorder, associatedInterfacePtrInfo);
  }

  WatchTimeRecorderAssociatedPtr.prototype =
      Object.create(WatchTimeRecorderPtr.prototype);
  WatchTimeRecorderAssociatedPtr.prototype.constructor =
      WatchTimeRecorderAssociatedPtr;

  function WatchTimeRecorderProxy(receiver) {
    this.receiver_ = receiver;
  }
  WatchTimeRecorderPtr.prototype.recordWatchTime = function() {
    return WatchTimeRecorderProxy.prototype.recordWatchTime
        .apply(this.ptr.getProxy(), arguments);
  };

  WatchTimeRecorderProxy.prototype.recordWatchTime = function(key, watchTime) {
    var params_ = new WatchTimeRecorder_RecordWatchTime_Params();
    params_.key = key;
    params_.watchTime = watchTime;
    var builder = new codec.MessageV0Builder(
        kWatchTimeRecorder_RecordWatchTime_Name,
        codec.align(WatchTimeRecorder_RecordWatchTime_Params.encodedSize));
    builder.encodeStruct(WatchTimeRecorder_RecordWatchTime_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WatchTimeRecorderPtr.prototype.finalizeWatchTime = function() {
    return WatchTimeRecorderProxy.prototype.finalizeWatchTime
        .apply(this.ptr.getProxy(), arguments);
  };

  WatchTimeRecorderProxy.prototype.finalizeWatchTime = function(watchTimeKeys) {
    var params_ = new WatchTimeRecorder_FinalizeWatchTime_Params();
    params_.watchTimeKeys = watchTimeKeys;
    var builder = new codec.MessageV0Builder(
        kWatchTimeRecorder_FinalizeWatchTime_Name,
        codec.align(WatchTimeRecorder_FinalizeWatchTime_Params.encodedSize));
    builder.encodeStruct(WatchTimeRecorder_FinalizeWatchTime_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WatchTimeRecorderPtr.prototype.onError = function() {
    return WatchTimeRecorderProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  WatchTimeRecorderProxy.prototype.onError = function(status) {
    var params_ = new WatchTimeRecorder_OnError_Params();
    params_.status = status;
    var builder = new codec.MessageV0Builder(
        kWatchTimeRecorder_OnError_Name,
        codec.align(WatchTimeRecorder_OnError_Params.encodedSize));
    builder.encodeStruct(WatchTimeRecorder_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WatchTimeRecorderPtr.prototype.setAudioDecoderName = function() {
    return WatchTimeRecorderProxy.prototype.setAudioDecoderName
        .apply(this.ptr.getProxy(), arguments);
  };

  WatchTimeRecorderProxy.prototype.setAudioDecoderName = function(name) {
    var params_ = new WatchTimeRecorder_SetAudioDecoderName_Params();
    params_.name = name;
    var builder = new codec.MessageV0Builder(
        kWatchTimeRecorder_SetAudioDecoderName_Name,
        codec.align(WatchTimeRecorder_SetAudioDecoderName_Params.encodedSize));
    builder.encodeStruct(WatchTimeRecorder_SetAudioDecoderName_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WatchTimeRecorderPtr.prototype.setVideoDecoderName = function() {
    return WatchTimeRecorderProxy.prototype.setVideoDecoderName
        .apply(this.ptr.getProxy(), arguments);
  };

  WatchTimeRecorderProxy.prototype.setVideoDecoderName = function(name) {
    var params_ = new WatchTimeRecorder_SetVideoDecoderName_Params();
    params_.name = name;
    var builder = new codec.MessageV0Builder(
        kWatchTimeRecorder_SetVideoDecoderName_Name,
        codec.align(WatchTimeRecorder_SetVideoDecoderName_Params.encodedSize));
    builder.encodeStruct(WatchTimeRecorder_SetVideoDecoderName_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WatchTimeRecorderPtr.prototype.setAutoplayInitiated = function() {
    return WatchTimeRecorderProxy.prototype.setAutoplayInitiated
        .apply(this.ptr.getProxy(), arguments);
  };

  WatchTimeRecorderProxy.prototype.setAutoplayInitiated = function(value) {
    var params_ = new WatchTimeRecorder_SetAutoplayInitiated_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kWatchTimeRecorder_SetAutoplayInitiated_Name,
        codec.align(WatchTimeRecorder_SetAutoplayInitiated_Params.encodedSize));
    builder.encodeStruct(WatchTimeRecorder_SetAutoplayInitiated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WatchTimeRecorderPtr.prototype.updateUnderflowCount = function() {
    return WatchTimeRecorderProxy.prototype.updateUnderflowCount
        .apply(this.ptr.getProxy(), arguments);
  };

  WatchTimeRecorderProxy.prototype.updateUnderflowCount = function(count) {
    var params_ = new WatchTimeRecorder_UpdateUnderflowCount_Params();
    params_.count = count;
    var builder = new codec.MessageV0Builder(
        kWatchTimeRecorder_UpdateUnderflowCount_Name,
        codec.align(WatchTimeRecorder_UpdateUnderflowCount_Params.encodedSize));
    builder.encodeStruct(WatchTimeRecorder_UpdateUnderflowCount_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WatchTimeRecorderStub(delegate) {
    this.delegate_ = delegate;
  }
  WatchTimeRecorderStub.prototype.recordWatchTime = function(key, watchTime) {
    return this.delegate_ && this.delegate_.recordWatchTime && this.delegate_.recordWatchTime(key, watchTime);
  }
  WatchTimeRecorderStub.prototype.finalizeWatchTime = function(watchTimeKeys) {
    return this.delegate_ && this.delegate_.finalizeWatchTime && this.delegate_.finalizeWatchTime(watchTimeKeys);
  }
  WatchTimeRecorderStub.prototype.onError = function(status) {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError(status);
  }
  WatchTimeRecorderStub.prototype.setAudioDecoderName = function(name) {
    return this.delegate_ && this.delegate_.setAudioDecoderName && this.delegate_.setAudioDecoderName(name);
  }
  WatchTimeRecorderStub.prototype.setVideoDecoderName = function(name) {
    return this.delegate_ && this.delegate_.setVideoDecoderName && this.delegate_.setVideoDecoderName(name);
  }
  WatchTimeRecorderStub.prototype.setAutoplayInitiated = function(value) {
    return this.delegate_ && this.delegate_.setAutoplayInitiated && this.delegate_.setAutoplayInitiated(value);
  }
  WatchTimeRecorderStub.prototype.updateUnderflowCount = function(count) {
    return this.delegate_ && this.delegate_.updateUnderflowCount && this.delegate_.updateUnderflowCount(count);
  }

  WatchTimeRecorderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWatchTimeRecorder_RecordWatchTime_Name:
      var params = reader.decodeStruct(WatchTimeRecorder_RecordWatchTime_Params);
      this.recordWatchTime(params.key, params.watchTime);
      return true;
    case kWatchTimeRecorder_FinalizeWatchTime_Name:
      var params = reader.decodeStruct(WatchTimeRecorder_FinalizeWatchTime_Params);
      this.finalizeWatchTime(params.watchTimeKeys);
      return true;
    case kWatchTimeRecorder_OnError_Name:
      var params = reader.decodeStruct(WatchTimeRecorder_OnError_Params);
      this.onError(params.status);
      return true;
    case kWatchTimeRecorder_SetAudioDecoderName_Name:
      var params = reader.decodeStruct(WatchTimeRecorder_SetAudioDecoderName_Params);
      this.setAudioDecoderName(params.name);
      return true;
    case kWatchTimeRecorder_SetVideoDecoderName_Name:
      var params = reader.decodeStruct(WatchTimeRecorder_SetVideoDecoderName_Params);
      this.setVideoDecoderName(params.name);
      return true;
    case kWatchTimeRecorder_SetAutoplayInitiated_Name:
      var params = reader.decodeStruct(WatchTimeRecorder_SetAutoplayInitiated_Params);
      this.setAutoplayInitiated(params.value);
      return true;
    case kWatchTimeRecorder_UpdateUnderflowCount_Name:
      var params = reader.decodeStruct(WatchTimeRecorder_UpdateUnderflowCount_Params);
      this.updateUnderflowCount(params.count);
      return true;
    default:
      return false;
    }
  };

  WatchTimeRecorderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWatchTimeRecorderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWatchTimeRecorder_RecordWatchTime_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WatchTimeRecorder_RecordWatchTime_Params;
      break;
      case kWatchTimeRecorder_FinalizeWatchTime_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WatchTimeRecorder_FinalizeWatchTime_Params;
      break;
      case kWatchTimeRecorder_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WatchTimeRecorder_OnError_Params;
      break;
      case kWatchTimeRecorder_SetAudioDecoderName_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WatchTimeRecorder_SetAudioDecoderName_Params;
      break;
      case kWatchTimeRecorder_SetVideoDecoderName_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WatchTimeRecorder_SetVideoDecoderName_Params;
      break;
      case kWatchTimeRecorder_SetAutoplayInitiated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WatchTimeRecorder_SetAutoplayInitiated_Params;
      break;
      case kWatchTimeRecorder_UpdateUnderflowCount_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WatchTimeRecorder_UpdateUnderflowCount_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWatchTimeRecorderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WatchTimeRecorder = {
    name: 'media.mojom.WatchTimeRecorder',
    kVersion: 0,
    ptrClass: WatchTimeRecorderPtr,
    proxyClass: WatchTimeRecorderProxy,
    stubClass: WatchTimeRecorderStub,
    validateRequest: validateWatchTimeRecorderRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/watch_time_recorder.mojom',
    fuzzMethods: {
      recordWatchTime: {
        params: WatchTimeRecorder_RecordWatchTime_Params,
      },
      finalizeWatchTime: {
        params: WatchTimeRecorder_FinalizeWatchTime_Params,
      },
      onError: {
        params: WatchTimeRecorder_OnError_Params,
      },
      setAudioDecoderName: {
        params: WatchTimeRecorder_SetAudioDecoderName_Params,
      },
      setVideoDecoderName: {
        params: WatchTimeRecorder_SetVideoDecoderName_Params,
      },
      setAutoplayInitiated: {
        params: WatchTimeRecorder_SetAutoplayInitiated_Params,
      },
      updateUnderflowCount: {
        params: WatchTimeRecorder_UpdateUnderflowCount_Params,
      },
    },
  };
  WatchTimeRecorderStub.prototype.validator = validateWatchTimeRecorderRequest;
  WatchTimeRecorderProxy.prototype.validator = null;
  exports.PlaybackProperties = PlaybackProperties;
  exports.WatchTimeRecorder = WatchTimeRecorder;
  exports.WatchTimeRecorderPtr = WatchTimeRecorderPtr;
  exports.WatchTimeRecorderAssociatedPtr = WatchTimeRecorderAssociatedPtr;
})();