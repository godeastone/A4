// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var video_capture_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/capture/mojom/video_capture_types.mojom', '../../../../../media/capture/mojom/video_capture_types.mojom.js');
  }
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', '../../../../../media/mojo/interfaces/media_types.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var frame_sink_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/frame_sink_id.mojom', '../../../public/interfaces/compositing/frame_sink_id.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function FrameSinkVideoConsumerFrameCallbacks_Done_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoConsumerFrameCallbacks_Done_Params.prototype.initDefaults_ = function() {
  };
  FrameSinkVideoConsumerFrameCallbacks_Done_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoConsumerFrameCallbacks_Done_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoConsumerFrameCallbacks_Done_Params;
    return generated;
  };

  FrameSinkVideoConsumerFrameCallbacks_Done_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameSinkVideoConsumerFrameCallbacks_Done_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoConsumerFrameCallbacks_Done_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoConsumerFrameCallbacks_Done_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoConsumerFrameCallbacks_Done_Params.validate = function(messageValidator, offset) {
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

  FrameSinkVideoConsumerFrameCallbacks_Done_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameSinkVideoConsumerFrameCallbacks_Done_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoConsumerFrameCallbacks_Done_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameSinkVideoConsumerFrameCallbacks_Done_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoConsumerFrameCallbacks_Done_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.prototype.initDefaults_ = function() {
    this.utilization = 0;
  };
  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params;
    generated.utilization = generator_.generateDouble();
    return generated;
  };

  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.utilization = mutator_.mutateDouble(this.utilization);
    }
    return this;
  };
  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.validate = function(messageValidator, offset) {
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

  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.utilization = decoder.decodeStruct(codec.Double);
    return val;
  };

  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.utilization);
  };
  function FrameSinkVideoConsumer_OnFrameCaptured_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoConsumer_OnFrameCaptured_Params.prototype.initDefaults_ = function() {
    this.buffer = null;
    this.bufferSize = 0;
    this.info = null;
    this.updateRect = null;
    this.contentRect = null;
    this.callbacks = new FrameSinkVideoConsumerFrameCallbacksPtr();
  };
  FrameSinkVideoConsumer_OnFrameCaptured_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoConsumer_OnFrameCaptured_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoConsumer_OnFrameCaptured_Params;
    generated.buffer = generator_.generateSharedBuffer(false);
    generated.bufferSize = generator_.generateUint32();
    generated.info = generator_.generateStruct(media.mojom.VideoFrameInfo, false);
    generated.updateRect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.contentRect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.callbacks = generator_.generateInterface("viz.mojom.FrameSinkVideoConsumerFrameCallbacks", false);
    return generated;
  };

  FrameSinkVideoConsumer_OnFrameCaptured_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateSharedBuffer(this.buffer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferSize = mutator_.mutateUint32(this.bufferSize);
    }
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(media.mojom.VideoFrameInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.updateRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contentRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateInterface(this.callbacks, "viz.mojom.FrameSinkVideoConsumerFrameCallbacks", false);
    }
    return this;
  };
  FrameSinkVideoConsumer_OnFrameCaptured_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.buffer !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.FrameSinkVideoConsumerFrameCallbacksPtr"]);
    }
    return handles;
  };

  FrameSinkVideoConsumer_OnFrameCaptured_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoConsumer_OnFrameCaptured_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.buffer = handles[idx++];;
    this.callbacks = handles[idx++];;
    return idx;
  };

  FrameSinkVideoConsumer_OnFrameCaptured_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoConsumer_OnFrameCaptured_Params.buffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate FrameSinkVideoConsumer_OnFrameCaptured_Params.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_capture_types$.VideoFrameInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkVideoConsumer_OnFrameCaptured_Params.updateRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkVideoConsumer_OnFrameCaptured_Params.contentRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkVideoConsumer_OnFrameCaptured_Params.callbacks
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 32, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkVideoConsumer_OnFrameCaptured_Params.encodedSize = codec.kStructHeaderSize + 40;

  FrameSinkVideoConsumer_OnFrameCaptured_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoConsumer_OnFrameCaptured_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Handle);
    val.bufferSize = decoder.decodeStruct(codec.Uint32);
    val.info = decoder.decodeStructPointer(video_capture_types$.VideoFrameInfo);
    val.updateRect = decoder.decodeStructPointer(geometry$.Rect);
    val.contentRect = decoder.decodeStructPointer(geometry$.Rect);
    val.callbacks = decoder.decodeStruct(new codec.Interface(FrameSinkVideoConsumerFrameCallbacksPtr));
    return val;
  };

  FrameSinkVideoConsumer_OnFrameCaptured_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoConsumer_OnFrameCaptured_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.buffer);
    encoder.encodeStruct(codec.Uint32, val.bufferSize);
    encoder.encodeStructPointer(video_capture_types$.VideoFrameInfo, val.info);
    encoder.encodeStructPointer(geometry$.Rect, val.updateRect);
    encoder.encodeStructPointer(geometry$.Rect, val.contentRect);
    encoder.encodeStruct(new codec.Interface(FrameSinkVideoConsumerFrameCallbacksPtr), val.callbacks);
  };
  function FrameSinkVideoConsumer_OnTargetLost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoConsumer_OnTargetLost_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
  };
  FrameSinkVideoConsumer_OnTargetLost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoConsumer_OnTargetLost_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoConsumer_OnTargetLost_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkVideoConsumer_OnTargetLost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkVideoConsumer_OnTargetLost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoConsumer_OnTargetLost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoConsumer_OnTargetLost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoConsumer_OnTargetLost_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoConsumer_OnTargetLost_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkVideoConsumer_OnTargetLost_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoConsumer_OnTargetLost_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoConsumer_OnTargetLost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkVideoConsumer_OnTargetLost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoConsumer_OnTargetLost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
  };
  function FrameSinkVideoConsumer_OnStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoConsumer_OnStopped_Params.prototype.initDefaults_ = function() {
  };
  FrameSinkVideoConsumer_OnStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoConsumer_OnStopped_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoConsumer_OnStopped_Params;
    return generated;
  };

  FrameSinkVideoConsumer_OnStopped_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameSinkVideoConsumer_OnStopped_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoConsumer_OnStopped_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoConsumer_OnStopped_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoConsumer_OnStopped_Params.validate = function(messageValidator, offset) {
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

  FrameSinkVideoConsumer_OnStopped_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameSinkVideoConsumer_OnStopped_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoConsumer_OnStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameSinkVideoConsumer_OnStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoConsumer_OnStopped_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameSinkVideoCapturer_SetFormat_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_SetFormat_Params.prototype.initDefaults_ = function() {
    this.format = 0;
    this.colorSpace = 0;
  };
  FrameSinkVideoCapturer_SetFormat_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_SetFormat_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_SetFormat_Params;
    generated.format = generator_.generateEnum();
    generated.colorSpace = generator_.generateEnum();
    return generated;
  };

  FrameSinkVideoCapturer_SetFormat_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateEnum(this.format);
    }
    if (mutator_.chooseMutateField()) {
      this.colorSpace = mutator_.mutateEnum(this.colorSpace);
    }
    return this;
  };
  FrameSinkVideoCapturer_SetFormat_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_SetFormat_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_SetFormat_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_SetFormat_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoCapturer_SetFormat_Params.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.VideoPixelFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkVideoCapturer_SetFormat_Params.colorSpace
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, media_types$.ColorSpace);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkVideoCapturer_SetFormat_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoCapturer_SetFormat_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_SetFormat_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.format = decoder.decodeStruct(codec.Int32);
    val.colorSpace = decoder.decodeStruct(codec.Int32);
    return val;
  };

  FrameSinkVideoCapturer_SetFormat_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_SetFormat_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.colorSpace);
  };
  function FrameSinkVideoCapturer_SetMinCapturePeriod_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.prototype.initDefaults_ = function() {
    this.minPeriod = null;
  };
  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_SetMinCapturePeriod_Params;
    generated.minPeriod = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.minPeriod = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoCapturer_SetMinCapturePeriod_Params.minPeriod
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_SetMinCapturePeriod_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.minPeriod = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  FrameSinkVideoCapturer_SetMinCapturePeriod_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_SetMinCapturePeriod_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.minPeriod);
  };
  function FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.prototype.initDefaults_ = function() {
    this.minPeriod = null;
  };
  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params;
    generated.minPeriod = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.minPeriod = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.minPeriod
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.minPeriod = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.minPeriod);
  };
  function FrameSinkVideoCapturer_SetResolutionConstraints_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_SetResolutionConstraints_Params.prototype.initDefaults_ = function() {
    this.minSize = null;
    this.maxSize = null;
    this.useFixedAspectRatio = false;
  };
  FrameSinkVideoCapturer_SetResolutionConstraints_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_SetResolutionConstraints_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_SetResolutionConstraints_Params;
    generated.minSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.maxSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.useFixedAspectRatio = generator_.generateBool();
    return generated;
  };

  FrameSinkVideoCapturer_SetResolutionConstraints_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.minSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.useFixedAspectRatio = mutator_.mutateBool(this.useFixedAspectRatio);
    }
    return this;
  };
  FrameSinkVideoCapturer_SetResolutionConstraints_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_SetResolutionConstraints_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_SetResolutionConstraints_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_SetResolutionConstraints_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoCapturer_SetResolutionConstraints_Params.minSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkVideoCapturer_SetResolutionConstraints_Params.maxSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FrameSinkVideoCapturer_SetResolutionConstraints_Params.encodedSize = codec.kStructHeaderSize + 24;

  FrameSinkVideoCapturer_SetResolutionConstraints_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_SetResolutionConstraints_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.minSize = decoder.decodeStructPointer(geometry$.Size);
    val.maxSize = decoder.decodeStructPointer(geometry$.Size);
    packed = decoder.readUint8();
    val.useFixedAspectRatio = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameSinkVideoCapturer_SetResolutionConstraints_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_SetResolutionConstraints_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.minSize);
    encoder.encodeStructPointer(geometry$.Size, val.maxSize);
    packed = 0;
    packed |= (val.useFixedAspectRatio & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.prototype.initDefaults_ = function() {
    this.enabled = false;
  };
  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params;
    generated.enabled = generator_.generateBool();
    return generated;
  };

  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    return this;
  };
  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.validate = function(messageValidator, offset) {
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

  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameSinkVideoCapturer_ChangeTarget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_ChangeTarget_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
  };
  FrameSinkVideoCapturer_ChangeTarget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_ChangeTarget_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_ChangeTarget_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  FrameSinkVideoCapturer_ChangeTarget_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  FrameSinkVideoCapturer_ChangeTarget_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_ChangeTarget_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_ChangeTarget_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_ChangeTarget_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoCapturer_ChangeTarget_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkVideoCapturer_ChangeTarget_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoCapturer_ChangeTarget_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_ChangeTarget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  FrameSinkVideoCapturer_ChangeTarget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_ChangeTarget_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
  };
  function FrameSinkVideoCapturer_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_Start_Params.prototype.initDefaults_ = function() {
    this.consumer = new FrameSinkVideoConsumerPtr();
  };
  FrameSinkVideoCapturer_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_Start_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_Start_Params;
    generated.consumer = generator_.generateInterface("viz.mojom.FrameSinkVideoConsumer", false);
    return generated;
  };

  FrameSinkVideoCapturer_Start_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.consumer = mutator_.mutateInterface(this.consumer, "viz.mojom.FrameSinkVideoConsumer", false);
    }
    return this;
  };
  FrameSinkVideoCapturer_Start_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.consumer !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.FrameSinkVideoConsumerPtr"]);
    }
    return handles;
  };

  FrameSinkVideoCapturer_Start_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_Start_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.consumer = handles[idx++];;
    return idx;
  };

  FrameSinkVideoCapturer_Start_Params.validate = function(messageValidator, offset) {
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


    // validate FrameSinkVideoCapturer_Start_Params.consumer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkVideoCapturer_Start_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkVideoCapturer_Start_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.consumer = decoder.decodeStruct(new codec.Interface(FrameSinkVideoConsumerPtr));
    return val;
  };

  FrameSinkVideoCapturer_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_Start_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(FrameSinkVideoConsumerPtr), val.consumer);
  };
  function FrameSinkVideoCapturer_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_Stop_Params.prototype.initDefaults_ = function() {
  };
  FrameSinkVideoCapturer_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_Stop_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_Stop_Params;
    return generated;
  };

  FrameSinkVideoCapturer_Stop_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameSinkVideoCapturer_Stop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_Stop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_Stop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_Stop_Params.validate = function(messageValidator, offset) {
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

  FrameSinkVideoCapturer_Stop_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameSinkVideoCapturer_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameSinkVideoCapturer_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_Stop_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameSinkVideoCapturer_RequestRefreshFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkVideoCapturer_RequestRefreshFrame_Params.prototype.initDefaults_ = function() {
  };
  FrameSinkVideoCapturer_RequestRefreshFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkVideoCapturer_RequestRefreshFrame_Params.generate = function(generator_) {
    var generated = new FrameSinkVideoCapturer_RequestRefreshFrame_Params;
    return generated;
  };

  FrameSinkVideoCapturer_RequestRefreshFrame_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameSinkVideoCapturer_RequestRefreshFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkVideoCapturer_RequestRefreshFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkVideoCapturer_RequestRefreshFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkVideoCapturer_RequestRefreshFrame_Params.validate = function(messageValidator, offset) {
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

  FrameSinkVideoCapturer_RequestRefreshFrame_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameSinkVideoCapturer_RequestRefreshFrame_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkVideoCapturer_RequestRefreshFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameSinkVideoCapturer_RequestRefreshFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkVideoCapturer_RequestRefreshFrame_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kFrameSinkVideoConsumerFrameCallbacks_Done_Name = 1548581297;
  var kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name = 1072359301;

  function FrameSinkVideoConsumerFrameCallbacksPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameSinkVideoConsumerFrameCallbacks,
                                                   handleOrPtrInfo);
  }

  function FrameSinkVideoConsumerFrameCallbacksAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameSinkVideoConsumerFrameCallbacks, associatedInterfacePtrInfo);
  }

  FrameSinkVideoConsumerFrameCallbacksAssociatedPtr.prototype =
      Object.create(FrameSinkVideoConsumerFrameCallbacksPtr.prototype);
  FrameSinkVideoConsumerFrameCallbacksAssociatedPtr.prototype.constructor =
      FrameSinkVideoConsumerFrameCallbacksAssociatedPtr;

  function FrameSinkVideoConsumerFrameCallbacksProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameSinkVideoConsumerFrameCallbacksPtr.prototype.done = function() {
    return FrameSinkVideoConsumerFrameCallbacksProxy.prototype.done
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoConsumerFrameCallbacksProxy.prototype.done = function() {
    var params_ = new FrameSinkVideoConsumerFrameCallbacks_Done_Params();
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoConsumerFrameCallbacks_Done_Name,
        codec.align(FrameSinkVideoConsumerFrameCallbacks_Done_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoConsumerFrameCallbacks_Done_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoConsumerFrameCallbacksPtr.prototype.provideFeedback = function() {
    return FrameSinkVideoConsumerFrameCallbacksProxy.prototype.provideFeedback
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoConsumerFrameCallbacksProxy.prototype.provideFeedback = function(utilization) {
    var params_ = new FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params();
    params_.utilization = utilization;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name,
        codec.align(FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameSinkVideoConsumerFrameCallbacksStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameSinkVideoConsumerFrameCallbacksStub.prototype.done = function() {
    return this.delegate_ && this.delegate_.done && this.delegate_.done();
  }
  FrameSinkVideoConsumerFrameCallbacksStub.prototype.provideFeedback = function(utilization) {
    return this.delegate_ && this.delegate_.provideFeedback && this.delegate_.provideFeedback(utilization);
  }

  FrameSinkVideoConsumerFrameCallbacksStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameSinkVideoConsumerFrameCallbacks_Done_Name:
      var params = reader.decodeStruct(FrameSinkVideoConsumerFrameCallbacks_Done_Params);
      this.done();
      return true;
    case kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name:
      var params = reader.decodeStruct(FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params);
      this.provideFeedback(params.utilization);
      return true;
    default:
      return false;
    }
  };

  FrameSinkVideoConsumerFrameCallbacksStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameSinkVideoConsumerFrameCallbacksRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameSinkVideoConsumerFrameCallbacks_Done_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoConsumerFrameCallbacks_Done_Params;
      break;
      case kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameSinkVideoConsumerFrameCallbacksResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameSinkVideoConsumerFrameCallbacks = {
    name: 'viz.mojom.FrameSinkVideoConsumerFrameCallbacks',
    kVersion: 0,
    ptrClass: FrameSinkVideoConsumerFrameCallbacksPtr,
    proxyClass: FrameSinkVideoConsumerFrameCallbacksProxy,
    stubClass: FrameSinkVideoConsumerFrameCallbacksStub,
    validateRequest: validateFrameSinkVideoConsumerFrameCallbacksRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom',
    fuzzMethods: {
      done: {
        params: FrameSinkVideoConsumerFrameCallbacks_Done_Params,
      },
      provideFeedback: {
        params: FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params,
      },
    },
  };
  FrameSinkVideoConsumerFrameCallbacksStub.prototype.validator = validateFrameSinkVideoConsumerFrameCallbacksRequest;
  FrameSinkVideoConsumerFrameCallbacksProxy.prototype.validator = null;
  var kFrameSinkVideoConsumer_OnFrameCaptured_Name = 850061272;
  var kFrameSinkVideoConsumer_OnTargetLost_Name = 354527018;
  var kFrameSinkVideoConsumer_OnStopped_Name = 1037244159;

  function FrameSinkVideoConsumerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameSinkVideoConsumer,
                                                   handleOrPtrInfo);
  }

  function FrameSinkVideoConsumerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameSinkVideoConsumer, associatedInterfacePtrInfo);
  }

  FrameSinkVideoConsumerAssociatedPtr.prototype =
      Object.create(FrameSinkVideoConsumerPtr.prototype);
  FrameSinkVideoConsumerAssociatedPtr.prototype.constructor =
      FrameSinkVideoConsumerAssociatedPtr;

  function FrameSinkVideoConsumerProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameSinkVideoConsumerPtr.prototype.onFrameCaptured = function() {
    return FrameSinkVideoConsumerProxy.prototype.onFrameCaptured
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoConsumerProxy.prototype.onFrameCaptured = function(buffer, bufferSize, info, updateRect, contentRect, callbacks) {
    var params_ = new FrameSinkVideoConsumer_OnFrameCaptured_Params();
    params_.buffer = buffer;
    params_.bufferSize = bufferSize;
    params_.info = info;
    params_.updateRect = updateRect;
    params_.contentRect = contentRect;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoConsumer_OnFrameCaptured_Name,
        codec.align(FrameSinkVideoConsumer_OnFrameCaptured_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoConsumer_OnFrameCaptured_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoConsumerPtr.prototype.onTargetLost = function() {
    return FrameSinkVideoConsumerProxy.prototype.onTargetLost
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoConsumerProxy.prototype.onTargetLost = function(frameSinkId) {
    var params_ = new FrameSinkVideoConsumer_OnTargetLost_Params();
    params_.frameSinkId = frameSinkId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoConsumer_OnTargetLost_Name,
        codec.align(FrameSinkVideoConsumer_OnTargetLost_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoConsumer_OnTargetLost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoConsumerPtr.prototype.onStopped = function() {
    return FrameSinkVideoConsumerProxy.prototype.onStopped
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoConsumerProxy.prototype.onStopped = function() {
    var params_ = new FrameSinkVideoConsumer_OnStopped_Params();
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoConsumer_OnStopped_Name,
        codec.align(FrameSinkVideoConsumer_OnStopped_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoConsumer_OnStopped_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameSinkVideoConsumerStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameSinkVideoConsumerStub.prototype.onFrameCaptured = function(buffer, bufferSize, info, updateRect, contentRect, callbacks) {
    return this.delegate_ && this.delegate_.onFrameCaptured && this.delegate_.onFrameCaptured(buffer, bufferSize, info, updateRect, contentRect, callbacks);
  }
  FrameSinkVideoConsumerStub.prototype.onTargetLost = function(frameSinkId) {
    return this.delegate_ && this.delegate_.onTargetLost && this.delegate_.onTargetLost(frameSinkId);
  }
  FrameSinkVideoConsumerStub.prototype.onStopped = function() {
    return this.delegate_ && this.delegate_.onStopped && this.delegate_.onStopped();
  }

  FrameSinkVideoConsumerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameSinkVideoConsumer_OnFrameCaptured_Name:
      var params = reader.decodeStruct(FrameSinkVideoConsumer_OnFrameCaptured_Params);
      this.onFrameCaptured(params.buffer, params.bufferSize, params.info, params.updateRect, params.contentRect, params.callbacks);
      return true;
    case kFrameSinkVideoConsumer_OnTargetLost_Name:
      var params = reader.decodeStruct(FrameSinkVideoConsumer_OnTargetLost_Params);
      this.onTargetLost(params.frameSinkId);
      return true;
    case kFrameSinkVideoConsumer_OnStopped_Name:
      var params = reader.decodeStruct(FrameSinkVideoConsumer_OnStopped_Params);
      this.onStopped();
      return true;
    default:
      return false;
    }
  };

  FrameSinkVideoConsumerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameSinkVideoConsumerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameSinkVideoConsumer_OnFrameCaptured_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoConsumer_OnFrameCaptured_Params;
      break;
      case kFrameSinkVideoConsumer_OnTargetLost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoConsumer_OnTargetLost_Params;
      break;
      case kFrameSinkVideoConsumer_OnStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoConsumer_OnStopped_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameSinkVideoConsumerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameSinkVideoConsumer = {
    name: 'viz.mojom.FrameSinkVideoConsumer',
    kVersion: 0,
    ptrClass: FrameSinkVideoConsumerPtr,
    proxyClass: FrameSinkVideoConsumerProxy,
    stubClass: FrameSinkVideoConsumerStub,
    validateRequest: validateFrameSinkVideoConsumerRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom',
    fuzzMethods: {
      onFrameCaptured: {
        params: FrameSinkVideoConsumer_OnFrameCaptured_Params,
      },
      onTargetLost: {
        params: FrameSinkVideoConsumer_OnTargetLost_Params,
      },
      onStopped: {
        params: FrameSinkVideoConsumer_OnStopped_Params,
      },
    },
  };
  FrameSinkVideoConsumerStub.prototype.validator = validateFrameSinkVideoConsumerRequest;
  FrameSinkVideoConsumerProxy.prototype.validator = null;
  var kFrameSinkVideoCapturer_SetFormat_Name = 900168683;
  var kFrameSinkVideoCapturer_SetMinCapturePeriod_Name = 1896176480;
  var kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name = 1567982844;
  var kFrameSinkVideoCapturer_SetResolutionConstraints_Name = 1561622464;
  var kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name = 819280628;
  var kFrameSinkVideoCapturer_ChangeTarget_Name = 1961373202;
  var kFrameSinkVideoCapturer_Start_Name = 196870321;
  var kFrameSinkVideoCapturer_Stop_Name = 1996887941;
  var kFrameSinkVideoCapturer_RequestRefreshFrame_Name = 304763690;

  function FrameSinkVideoCapturerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameSinkVideoCapturer,
                                                   handleOrPtrInfo);
  }

  function FrameSinkVideoCapturerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameSinkVideoCapturer, associatedInterfacePtrInfo);
  }

  FrameSinkVideoCapturerAssociatedPtr.prototype =
      Object.create(FrameSinkVideoCapturerPtr.prototype);
  FrameSinkVideoCapturerAssociatedPtr.prototype.constructor =
      FrameSinkVideoCapturerAssociatedPtr;

  function FrameSinkVideoCapturerProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameSinkVideoCapturerPtr.prototype.setFormat = function() {
    return FrameSinkVideoCapturerProxy.prototype.setFormat
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.setFormat = function(format, colorSpace) {
    var params_ = new FrameSinkVideoCapturer_SetFormat_Params();
    params_.format = format;
    params_.colorSpace = colorSpace;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_SetFormat_Name,
        codec.align(FrameSinkVideoCapturer_SetFormat_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_SetFormat_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.setMinCapturePeriod = function() {
    return FrameSinkVideoCapturerProxy.prototype.setMinCapturePeriod
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.setMinCapturePeriod = function(minPeriod) {
    var params_ = new FrameSinkVideoCapturer_SetMinCapturePeriod_Params();
    params_.minPeriod = minPeriod;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_SetMinCapturePeriod_Name,
        codec.align(FrameSinkVideoCapturer_SetMinCapturePeriod_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_SetMinCapturePeriod_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.setMinSizeChangePeriod = function() {
    return FrameSinkVideoCapturerProxy.prototype.setMinSizeChangePeriod
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.setMinSizeChangePeriod = function(minPeriod) {
    var params_ = new FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params();
    params_.minPeriod = minPeriod;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name,
        codec.align(FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.setResolutionConstraints = function() {
    return FrameSinkVideoCapturerProxy.prototype.setResolutionConstraints
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.setResolutionConstraints = function(minSize, maxSize, useFixedAspectRatio) {
    var params_ = new FrameSinkVideoCapturer_SetResolutionConstraints_Params();
    params_.minSize = minSize;
    params_.maxSize = maxSize;
    params_.useFixedAspectRatio = useFixedAspectRatio;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_SetResolutionConstraints_Name,
        codec.align(FrameSinkVideoCapturer_SetResolutionConstraints_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_SetResolutionConstraints_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.setAutoThrottlingEnabled = function() {
    return FrameSinkVideoCapturerProxy.prototype.setAutoThrottlingEnabled
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.setAutoThrottlingEnabled = function(enabled) {
    var params_ = new FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params();
    params_.enabled = enabled;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name,
        codec.align(FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.changeTarget = function() {
    return FrameSinkVideoCapturerProxy.prototype.changeTarget
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.changeTarget = function(frameSinkId) {
    var params_ = new FrameSinkVideoCapturer_ChangeTarget_Params();
    params_.frameSinkId = frameSinkId;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_ChangeTarget_Name,
        codec.align(FrameSinkVideoCapturer_ChangeTarget_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_ChangeTarget_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.start = function() {
    return FrameSinkVideoCapturerProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.start = function(consumer) {
    var params_ = new FrameSinkVideoCapturer_Start_Params();
    params_.consumer = consumer;
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_Start_Name,
        codec.align(FrameSinkVideoCapturer_Start_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_Start_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.stop = function() {
    return FrameSinkVideoCapturerProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.stop = function() {
    var params_ = new FrameSinkVideoCapturer_Stop_Params();
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_Stop_Name,
        codec.align(FrameSinkVideoCapturer_Stop_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_Stop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkVideoCapturerPtr.prototype.requestRefreshFrame = function() {
    return FrameSinkVideoCapturerProxy.prototype.requestRefreshFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkVideoCapturerProxy.prototype.requestRefreshFrame = function() {
    var params_ = new FrameSinkVideoCapturer_RequestRefreshFrame_Params();
    var builder = new codec.MessageV0Builder(
        kFrameSinkVideoCapturer_RequestRefreshFrame_Name,
        codec.align(FrameSinkVideoCapturer_RequestRefreshFrame_Params.encodedSize));
    builder.encodeStruct(FrameSinkVideoCapturer_RequestRefreshFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameSinkVideoCapturerStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameSinkVideoCapturerStub.prototype.setFormat = function(format, colorSpace) {
    return this.delegate_ && this.delegate_.setFormat && this.delegate_.setFormat(format, colorSpace);
  }
  FrameSinkVideoCapturerStub.prototype.setMinCapturePeriod = function(minPeriod) {
    return this.delegate_ && this.delegate_.setMinCapturePeriod && this.delegate_.setMinCapturePeriod(minPeriod);
  }
  FrameSinkVideoCapturerStub.prototype.setMinSizeChangePeriod = function(minPeriod) {
    return this.delegate_ && this.delegate_.setMinSizeChangePeriod && this.delegate_.setMinSizeChangePeriod(minPeriod);
  }
  FrameSinkVideoCapturerStub.prototype.setResolutionConstraints = function(minSize, maxSize, useFixedAspectRatio) {
    return this.delegate_ && this.delegate_.setResolutionConstraints && this.delegate_.setResolutionConstraints(minSize, maxSize, useFixedAspectRatio);
  }
  FrameSinkVideoCapturerStub.prototype.setAutoThrottlingEnabled = function(enabled) {
    return this.delegate_ && this.delegate_.setAutoThrottlingEnabled && this.delegate_.setAutoThrottlingEnabled(enabled);
  }
  FrameSinkVideoCapturerStub.prototype.changeTarget = function(frameSinkId) {
    return this.delegate_ && this.delegate_.changeTarget && this.delegate_.changeTarget(frameSinkId);
  }
  FrameSinkVideoCapturerStub.prototype.start = function(consumer) {
    return this.delegate_ && this.delegate_.start && this.delegate_.start(consumer);
  }
  FrameSinkVideoCapturerStub.prototype.stop = function() {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop();
  }
  FrameSinkVideoCapturerStub.prototype.requestRefreshFrame = function() {
    return this.delegate_ && this.delegate_.requestRefreshFrame && this.delegate_.requestRefreshFrame();
  }

  FrameSinkVideoCapturerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameSinkVideoCapturer_SetFormat_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_SetFormat_Params);
      this.setFormat(params.format, params.colorSpace);
      return true;
    case kFrameSinkVideoCapturer_SetMinCapturePeriod_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_SetMinCapturePeriod_Params);
      this.setMinCapturePeriod(params.minPeriod);
      return true;
    case kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params);
      this.setMinSizeChangePeriod(params.minPeriod);
      return true;
    case kFrameSinkVideoCapturer_SetResolutionConstraints_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_SetResolutionConstraints_Params);
      this.setResolutionConstraints(params.minSize, params.maxSize, params.useFixedAspectRatio);
      return true;
    case kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params);
      this.setAutoThrottlingEnabled(params.enabled);
      return true;
    case kFrameSinkVideoCapturer_ChangeTarget_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_ChangeTarget_Params);
      this.changeTarget(params.frameSinkId);
      return true;
    case kFrameSinkVideoCapturer_Start_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_Start_Params);
      this.start(params.consumer);
      return true;
    case kFrameSinkVideoCapturer_Stop_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_Stop_Params);
      this.stop();
      return true;
    case kFrameSinkVideoCapturer_RequestRefreshFrame_Name:
      var params = reader.decodeStruct(FrameSinkVideoCapturer_RequestRefreshFrame_Params);
      this.requestRefreshFrame();
      return true;
    default:
      return false;
    }
  };

  FrameSinkVideoCapturerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameSinkVideoCapturerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameSinkVideoCapturer_SetFormat_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_SetFormat_Params;
      break;
      case kFrameSinkVideoCapturer_SetMinCapturePeriod_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_SetMinCapturePeriod_Params;
      break;
      case kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params;
      break;
      case kFrameSinkVideoCapturer_SetResolutionConstraints_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_SetResolutionConstraints_Params;
      break;
      case kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params;
      break;
      case kFrameSinkVideoCapturer_ChangeTarget_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_ChangeTarget_Params;
      break;
      case kFrameSinkVideoCapturer_Start_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_Start_Params;
      break;
      case kFrameSinkVideoCapturer_Stop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_Stop_Params;
      break;
      case kFrameSinkVideoCapturer_RequestRefreshFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkVideoCapturer_RequestRefreshFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameSinkVideoCapturerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameSinkVideoCapturer = {
    name: 'viz.mojom.FrameSinkVideoCapturer',
    kVersion: 0,
    ptrClass: FrameSinkVideoCapturerPtr,
    proxyClass: FrameSinkVideoCapturerProxy,
    stubClass: FrameSinkVideoCapturerStub,
    validateRequest: validateFrameSinkVideoCapturerRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom',
    fuzzMethods: {
      setFormat: {
        params: FrameSinkVideoCapturer_SetFormat_Params,
      },
      setMinCapturePeriod: {
        params: FrameSinkVideoCapturer_SetMinCapturePeriod_Params,
      },
      setMinSizeChangePeriod: {
        params: FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params,
      },
      setResolutionConstraints: {
        params: FrameSinkVideoCapturer_SetResolutionConstraints_Params,
      },
      setAutoThrottlingEnabled: {
        params: FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params,
      },
      changeTarget: {
        params: FrameSinkVideoCapturer_ChangeTarget_Params,
      },
      start: {
        params: FrameSinkVideoCapturer_Start_Params,
      },
      stop: {
        params: FrameSinkVideoCapturer_Stop_Params,
      },
      requestRefreshFrame: {
        params: FrameSinkVideoCapturer_RequestRefreshFrame_Params,
      },
    },
  };
  FrameSinkVideoCapturerStub.prototype.validator = validateFrameSinkVideoCapturerRequest;
  FrameSinkVideoCapturerProxy.prototype.validator = null;
  exports.FrameSinkVideoConsumerFrameCallbacks = FrameSinkVideoConsumerFrameCallbacks;
  exports.FrameSinkVideoConsumerFrameCallbacksPtr = FrameSinkVideoConsumerFrameCallbacksPtr;
  exports.FrameSinkVideoConsumerFrameCallbacksAssociatedPtr = FrameSinkVideoConsumerFrameCallbacksAssociatedPtr;
  exports.FrameSinkVideoConsumer = FrameSinkVideoConsumer;
  exports.FrameSinkVideoConsumerPtr = FrameSinkVideoConsumerPtr;
  exports.FrameSinkVideoConsumerAssociatedPtr = FrameSinkVideoConsumerAssociatedPtr;
  exports.FrameSinkVideoCapturer = FrameSinkVideoCapturer;
  exports.FrameSinkVideoCapturerPtr = FrameSinkVideoCapturerPtr;
  exports.FrameSinkVideoCapturerAssociatedPtr = FrameSinkVideoCapturerAssociatedPtr;
})();