// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/media_metrics_provider.mojom';
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
  var video_decode_stats_recorder$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/video_decode_stats_recorder.mojom', 'video_decode_stats_recorder.mojom.js');
  }
  var watch_time_recorder$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/watch_time_recorder.mojom', 'watch_time_recorder.mojom.js');
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



  function MediaMetricsProvider_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_Initialize_Params.prototype.initDefaults_ = function() {
    this.isMse = false;
    this.isTopFrame = false;
    this.untrustedTopOrigin = null;
  };
  MediaMetricsProvider_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_Initialize_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_Initialize_Params;
    generated.isMse = generator_.generateBool();
    generated.isTopFrame = generator_.generateBool();
    generated.untrustedTopOrigin = generator_.generateStruct(url.mojom.Origin, false);
    return generated;
  };

  MediaMetricsProvider_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isMse = mutator_.mutateBool(this.isMse);
    }
    if (mutator_.chooseMutateField()) {
      this.isTopFrame = mutator_.mutateBool(this.isTopFrame);
    }
    if (mutator_.chooseMutateField()) {
      this.untrustedTopOrigin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    return this;
  };
  MediaMetricsProvider_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetricsProvider_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetricsProvider_Initialize_Params.validate = function(messageValidator, offset) {
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




    // validate MediaMetricsProvider_Initialize_Params.untrustedTopOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetricsProvider_Initialize_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaMetricsProvider_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isMse = (packed >> 0) & 1 ? true : false;
    val.isTopFrame = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.untrustedTopOrigin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  MediaMetricsProvider_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isMse & 1) << 0
    packed |= (val.isTopFrame & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(origin$.Origin, val.untrustedTopOrigin);
  };
  function MediaMetricsProvider_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_OnError_Params.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  MediaMetricsProvider_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_OnError_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_OnError_Params;
    generated.status = generator_.generateEnum();
    return generated;
  };

  MediaMetricsProvider_OnError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status);
    }
    return this;
  };
  MediaMetricsProvider_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetricsProvider_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetricsProvider_OnError_Params.validate = function(messageValidator, offset) {
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


    // validate MediaMetricsProvider_OnError_Params.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.PipelineStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetricsProvider_OnError_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaMetricsProvider_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaMetricsProvider_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaMetricsProvider_SetIsEME_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_SetIsEME_Params.prototype.initDefaults_ = function() {
  };
  MediaMetricsProvider_SetIsEME_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_SetIsEME_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_SetIsEME_Params;
    return generated;
  };

  MediaMetricsProvider_SetIsEME_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaMetricsProvider_SetIsEME_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetricsProvider_SetIsEME_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_SetIsEME_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetricsProvider_SetIsEME_Params.validate = function(messageValidator, offset) {
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

  MediaMetricsProvider_SetIsEME_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaMetricsProvider_SetIsEME_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_SetIsEME_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaMetricsProvider_SetIsEME_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_SetIsEME_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaMetricsProvider_SetTimeToMetadata_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_SetTimeToMetadata_Params.prototype.initDefaults_ = function() {
    this.elapsed = null;
  };
  MediaMetricsProvider_SetTimeToMetadata_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_SetTimeToMetadata_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_SetTimeToMetadata_Params;
    generated.elapsed = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  MediaMetricsProvider_SetTimeToMetadata_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.elapsed = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  MediaMetricsProvider_SetTimeToMetadata_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetricsProvider_SetTimeToMetadata_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_SetTimeToMetadata_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetricsProvider_SetTimeToMetadata_Params.validate = function(messageValidator, offset) {
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


    // validate MediaMetricsProvider_SetTimeToMetadata_Params.elapsed
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetricsProvider_SetTimeToMetadata_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaMetricsProvider_SetTimeToMetadata_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_SetTimeToMetadata_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.elapsed = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  MediaMetricsProvider_SetTimeToMetadata_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_SetTimeToMetadata_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.elapsed);
  };
  function MediaMetricsProvider_SetTimeToFirstFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_SetTimeToFirstFrame_Params.prototype.initDefaults_ = function() {
    this.elapsed = null;
  };
  MediaMetricsProvider_SetTimeToFirstFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_SetTimeToFirstFrame_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_SetTimeToFirstFrame_Params;
    generated.elapsed = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  MediaMetricsProvider_SetTimeToFirstFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.elapsed = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  MediaMetricsProvider_SetTimeToFirstFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetricsProvider_SetTimeToFirstFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_SetTimeToFirstFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetricsProvider_SetTimeToFirstFrame_Params.validate = function(messageValidator, offset) {
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


    // validate MediaMetricsProvider_SetTimeToFirstFrame_Params.elapsed
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetricsProvider_SetTimeToFirstFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaMetricsProvider_SetTimeToFirstFrame_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_SetTimeToFirstFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.elapsed = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  MediaMetricsProvider_SetTimeToFirstFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_SetTimeToFirstFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.elapsed);
  };
  function MediaMetricsProvider_SetTimeToPlayReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_SetTimeToPlayReady_Params.prototype.initDefaults_ = function() {
    this.elapsed = null;
  };
  MediaMetricsProvider_SetTimeToPlayReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_SetTimeToPlayReady_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_SetTimeToPlayReady_Params;
    generated.elapsed = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  MediaMetricsProvider_SetTimeToPlayReady_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.elapsed = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  MediaMetricsProvider_SetTimeToPlayReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetricsProvider_SetTimeToPlayReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_SetTimeToPlayReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetricsProvider_SetTimeToPlayReady_Params.validate = function(messageValidator, offset) {
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


    // validate MediaMetricsProvider_SetTimeToPlayReady_Params.elapsed
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetricsProvider_SetTimeToPlayReady_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaMetricsProvider_SetTimeToPlayReady_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_SetTimeToPlayReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.elapsed = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  MediaMetricsProvider_SetTimeToPlayReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_SetTimeToPlayReady_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.elapsed);
  };
  function MediaMetricsProvider_AcquireWatchTimeRecorder_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.prototype.initDefaults_ = function() {
    this.properties = null;
    this.recorder = new bindings.InterfaceRequest();
  };
  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_AcquireWatchTimeRecorder_Params;
    generated.properties = generator_.generateStruct(media.mojom.PlaybackProperties, false);
    generated.recorder = generator_.generateInterfaceRequest("media.mojom.WatchTimeRecorder", false);
    return generated;
  };

  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.properties = mutator_.mutateStruct(media.mojom.PlaybackProperties, false);
    }
    if (mutator_.chooseMutateField()) {
      this.recorder = mutator_.mutateInterfaceRequest(this.recorder, "media.mojom.WatchTimeRecorder", false);
    }
    return this;
  };
  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.recorder !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.WatchTimeRecorderRequest"]);
    }
    return handles;
  };

  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.recorder = handles[idx++];;
    return idx;
  };

  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.validate = function(messageValidator, offset) {
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


    // validate MediaMetricsProvider_AcquireWatchTimeRecorder_Params.properties
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, watch_time_recorder$.PlaybackProperties, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetricsProvider_AcquireWatchTimeRecorder_Params.recorder
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_AcquireWatchTimeRecorder_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.properties = decoder.decodeStructPointer(watch_time_recorder$.PlaybackProperties);
    val.recorder = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaMetricsProvider_AcquireWatchTimeRecorder_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_AcquireWatchTimeRecorder_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(watch_time_recorder$.PlaybackProperties, val.properties);
    encoder.encodeStruct(codec.InterfaceRequest, val.recorder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.prototype.initDefaults_ = function() {
    this.recorder = new bindings.InterfaceRequest();
  };
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.generate = function(generator_) {
    var generated = new MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params;
    generated.recorder = generator_.generateInterfaceRequest("media.mojom.VideoDecodeStatsRecorder", false);
    return generated;
  };

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.recorder = mutator_.mutateInterfaceRequest(this.recorder, "media.mojom.VideoDecodeStatsRecorder", false);
    }
    return this;
  };
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.recorder !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.VideoDecodeStatsRecorderRequest"]);
    }
    return handles;
  };

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.recorder = handles[idx++];;
    return idx;
  };

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.validate = function(messageValidator, offset) {
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


    // validate MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.recorder
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.decode = function(decoder) {
    var packed;
    var val = new MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.recorder = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.recorder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kMediaMetricsProvider_Initialize_Name = 761006356;
  var kMediaMetricsProvider_OnError_Name = 1736668419;
  var kMediaMetricsProvider_SetIsEME_Name = 547466812;
  var kMediaMetricsProvider_SetTimeToMetadata_Name = 1400423518;
  var kMediaMetricsProvider_SetTimeToFirstFrame_Name = 2035000106;
  var kMediaMetricsProvider_SetTimeToPlayReady_Name = 2137574108;
  var kMediaMetricsProvider_AcquireWatchTimeRecorder_Name = 682263891;
  var kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name = 1495064224;

  function MediaMetricsProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaMetricsProvider,
                                                   handleOrPtrInfo);
  }

  function MediaMetricsProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaMetricsProvider, associatedInterfacePtrInfo);
  }

  MediaMetricsProviderAssociatedPtr.prototype =
      Object.create(MediaMetricsProviderPtr.prototype);
  MediaMetricsProviderAssociatedPtr.prototype.constructor =
      MediaMetricsProviderAssociatedPtr;

  function MediaMetricsProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaMetricsProviderPtr.prototype.initialize = function() {
    return MediaMetricsProviderProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.initialize = function(isMse, isTopFrame, untrustedTopOrigin) {
    var params_ = new MediaMetricsProvider_Initialize_Params();
    params_.isMse = isMse;
    params_.isTopFrame = isTopFrame;
    params_.untrustedTopOrigin = untrustedTopOrigin;
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_Initialize_Name,
        codec.align(MediaMetricsProvider_Initialize_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_Initialize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaMetricsProviderPtr.prototype.onError = function() {
    return MediaMetricsProviderProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.onError = function(status) {
    var params_ = new MediaMetricsProvider_OnError_Params();
    params_.status = status;
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_OnError_Name,
        codec.align(MediaMetricsProvider_OnError_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaMetricsProviderPtr.prototype.setIsEME = function() {
    return MediaMetricsProviderProxy.prototype.setIsEME
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.setIsEME = function() {
    var params_ = new MediaMetricsProvider_SetIsEME_Params();
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_SetIsEME_Name,
        codec.align(MediaMetricsProvider_SetIsEME_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_SetIsEME_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaMetricsProviderPtr.prototype.setTimeToMetadata = function() {
    return MediaMetricsProviderProxy.prototype.setTimeToMetadata
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.setTimeToMetadata = function(elapsed) {
    var params_ = new MediaMetricsProvider_SetTimeToMetadata_Params();
    params_.elapsed = elapsed;
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_SetTimeToMetadata_Name,
        codec.align(MediaMetricsProvider_SetTimeToMetadata_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_SetTimeToMetadata_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaMetricsProviderPtr.prototype.setTimeToFirstFrame = function() {
    return MediaMetricsProviderProxy.prototype.setTimeToFirstFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.setTimeToFirstFrame = function(elapsed) {
    var params_ = new MediaMetricsProvider_SetTimeToFirstFrame_Params();
    params_.elapsed = elapsed;
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_SetTimeToFirstFrame_Name,
        codec.align(MediaMetricsProvider_SetTimeToFirstFrame_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_SetTimeToFirstFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaMetricsProviderPtr.prototype.setTimeToPlayReady = function() {
    return MediaMetricsProviderProxy.prototype.setTimeToPlayReady
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.setTimeToPlayReady = function(elapsed) {
    var params_ = new MediaMetricsProvider_SetTimeToPlayReady_Params();
    params_.elapsed = elapsed;
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_SetTimeToPlayReady_Name,
        codec.align(MediaMetricsProvider_SetTimeToPlayReady_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_SetTimeToPlayReady_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaMetricsProviderPtr.prototype.acquireWatchTimeRecorder = function() {
    return MediaMetricsProviderProxy.prototype.acquireWatchTimeRecorder
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.acquireWatchTimeRecorder = function(properties, recorder) {
    var params_ = new MediaMetricsProvider_AcquireWatchTimeRecorder_Params();
    params_.properties = properties;
    params_.recorder = recorder;
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_AcquireWatchTimeRecorder_Name,
        codec.align(MediaMetricsProvider_AcquireWatchTimeRecorder_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_AcquireWatchTimeRecorder_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaMetricsProviderPtr.prototype.acquireVideoDecodeStatsRecorder = function() {
    return MediaMetricsProviderProxy.prototype.acquireVideoDecodeStatsRecorder
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaMetricsProviderProxy.prototype.acquireVideoDecodeStatsRecorder = function(recorder) {
    var params_ = new MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params();
    params_.recorder = recorder;
    var builder = new codec.MessageV0Builder(
        kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name,
        codec.align(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params.encodedSize));
    builder.encodeStruct(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaMetricsProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaMetricsProviderStub.prototype.initialize = function(isMse, isTopFrame, untrustedTopOrigin) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(isMse, isTopFrame, untrustedTopOrigin);
  }
  MediaMetricsProviderStub.prototype.onError = function(status) {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError(status);
  }
  MediaMetricsProviderStub.prototype.setIsEME = function() {
    return this.delegate_ && this.delegate_.setIsEME && this.delegate_.setIsEME();
  }
  MediaMetricsProviderStub.prototype.setTimeToMetadata = function(elapsed) {
    return this.delegate_ && this.delegate_.setTimeToMetadata && this.delegate_.setTimeToMetadata(elapsed);
  }
  MediaMetricsProviderStub.prototype.setTimeToFirstFrame = function(elapsed) {
    return this.delegate_ && this.delegate_.setTimeToFirstFrame && this.delegate_.setTimeToFirstFrame(elapsed);
  }
  MediaMetricsProviderStub.prototype.setTimeToPlayReady = function(elapsed) {
    return this.delegate_ && this.delegate_.setTimeToPlayReady && this.delegate_.setTimeToPlayReady(elapsed);
  }
  MediaMetricsProviderStub.prototype.acquireWatchTimeRecorder = function(properties, recorder) {
    return this.delegate_ && this.delegate_.acquireWatchTimeRecorder && this.delegate_.acquireWatchTimeRecorder(properties, recorder);
  }
  MediaMetricsProviderStub.prototype.acquireVideoDecodeStatsRecorder = function(recorder) {
    return this.delegate_ && this.delegate_.acquireVideoDecodeStatsRecorder && this.delegate_.acquireVideoDecodeStatsRecorder(recorder);
  }

  MediaMetricsProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaMetricsProvider_Initialize_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_Initialize_Params);
      this.initialize(params.isMse, params.isTopFrame, params.untrustedTopOrigin);
      return true;
    case kMediaMetricsProvider_OnError_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_OnError_Params);
      this.onError(params.status);
      return true;
    case kMediaMetricsProvider_SetIsEME_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_SetIsEME_Params);
      this.setIsEME();
      return true;
    case kMediaMetricsProvider_SetTimeToMetadata_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_SetTimeToMetadata_Params);
      this.setTimeToMetadata(params.elapsed);
      return true;
    case kMediaMetricsProvider_SetTimeToFirstFrame_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_SetTimeToFirstFrame_Params);
      this.setTimeToFirstFrame(params.elapsed);
      return true;
    case kMediaMetricsProvider_SetTimeToPlayReady_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_SetTimeToPlayReady_Params);
      this.setTimeToPlayReady(params.elapsed);
      return true;
    case kMediaMetricsProvider_AcquireWatchTimeRecorder_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_AcquireWatchTimeRecorder_Params);
      this.acquireWatchTimeRecorder(params.properties, params.recorder);
      return true;
    case kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name:
      var params = reader.decodeStruct(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params);
      this.acquireVideoDecodeStatsRecorder(params.recorder);
      return true;
    default:
      return false;
    }
  };

  MediaMetricsProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaMetricsProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaMetricsProvider_Initialize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_Initialize_Params;
      break;
      case kMediaMetricsProvider_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_OnError_Params;
      break;
      case kMediaMetricsProvider_SetIsEME_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_SetIsEME_Params;
      break;
      case kMediaMetricsProvider_SetTimeToMetadata_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_SetTimeToMetadata_Params;
      break;
      case kMediaMetricsProvider_SetTimeToFirstFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_SetTimeToFirstFrame_Params;
      break;
      case kMediaMetricsProvider_SetTimeToPlayReady_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_SetTimeToPlayReady_Params;
      break;
      case kMediaMetricsProvider_AcquireWatchTimeRecorder_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_AcquireWatchTimeRecorder_Params;
      break;
      case kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaMetricsProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaMetricsProvider = {
    name: 'media.mojom.MediaMetricsProvider',
    kVersion: 0,
    ptrClass: MediaMetricsProviderPtr,
    proxyClass: MediaMetricsProviderProxy,
    stubClass: MediaMetricsProviderStub,
    validateRequest: validateMediaMetricsProviderRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/media_metrics_provider.mojom',
    fuzzMethods: {
      initialize: {
        params: MediaMetricsProvider_Initialize_Params,
      },
      onError: {
        params: MediaMetricsProvider_OnError_Params,
      },
      setIsEME: {
        params: MediaMetricsProvider_SetIsEME_Params,
      },
      setTimeToMetadata: {
        params: MediaMetricsProvider_SetTimeToMetadata_Params,
      },
      setTimeToFirstFrame: {
        params: MediaMetricsProvider_SetTimeToFirstFrame_Params,
      },
      setTimeToPlayReady: {
        params: MediaMetricsProvider_SetTimeToPlayReady_Params,
      },
      acquireWatchTimeRecorder: {
        params: MediaMetricsProvider_AcquireWatchTimeRecorder_Params,
      },
      acquireVideoDecodeStatsRecorder: {
        params: MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params,
      },
    },
  };
  MediaMetricsProviderStub.prototype.validator = validateMediaMetricsProviderRequest;
  MediaMetricsProviderProxy.prototype.validator = null;
  exports.MediaMetricsProvider = MediaMetricsProvider;
  exports.MediaMetricsProviderPtr = MediaMetricsProviderPtr;
  exports.MediaMetricsProviderAssociatedPtr = MediaMetricsProviderAssociatedPtr;
})();