// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/video_decode_stats_recorder.mojom';
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



  function VideoDecodeStatsRecorder_StartNewRecord_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeStatsRecorder_StartNewRecord_Params.prototype.initDefaults_ = function() {
    this.features = null;
  };
  VideoDecodeStatsRecorder_StartNewRecord_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeStatsRecorder_StartNewRecord_Params.generate = function(generator_) {
    var generated = new VideoDecodeStatsRecorder_StartNewRecord_Params;
    generated.features = generator_.generateStruct(media.mojom.PredictionFeatures, false);
    return generated;
  };

  VideoDecodeStatsRecorder_StartNewRecord_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.features = mutator_.mutateStruct(media.mojom.PredictionFeatures, false);
    }
    return this;
  };
  VideoDecodeStatsRecorder_StartNewRecord_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeStatsRecorder_StartNewRecord_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeStatsRecorder_StartNewRecord_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeStatsRecorder_StartNewRecord_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeStatsRecorder_StartNewRecord_Params.features
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.PredictionFeatures, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeStatsRecorder_StartNewRecord_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeStatsRecorder_StartNewRecord_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeStatsRecorder_StartNewRecord_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.features = decoder.decodeStructPointer(media_types$.PredictionFeatures);
    return val;
  };

  VideoDecodeStatsRecorder_StartNewRecord_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeStatsRecorder_StartNewRecord_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.PredictionFeatures, val.features);
  };
  function VideoDecodeStatsRecorder_UpdateRecord_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeStatsRecorder_UpdateRecord_Params.prototype.initDefaults_ = function() {
    this.targets = null;
  };
  VideoDecodeStatsRecorder_UpdateRecord_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeStatsRecorder_UpdateRecord_Params.generate = function(generator_) {
    var generated = new VideoDecodeStatsRecorder_UpdateRecord_Params;
    generated.targets = generator_.generateStruct(media.mojom.PredictionTargets, false);
    return generated;
  };

  VideoDecodeStatsRecorder_UpdateRecord_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.targets = mutator_.mutateStruct(media.mojom.PredictionTargets, false);
    }
    return this;
  };
  VideoDecodeStatsRecorder_UpdateRecord_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeStatsRecorder_UpdateRecord_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeStatsRecorder_UpdateRecord_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeStatsRecorder_UpdateRecord_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeStatsRecorder_UpdateRecord_Params.targets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.PredictionTargets, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeStatsRecorder_UpdateRecord_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeStatsRecorder_UpdateRecord_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeStatsRecorder_UpdateRecord_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.targets = decoder.decodeStructPointer(media_types$.PredictionTargets);
    return val;
  };

  VideoDecodeStatsRecorder_UpdateRecord_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeStatsRecorder_UpdateRecord_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.PredictionTargets, val.targets);
  };
  var kVideoDecodeStatsRecorder_StartNewRecord_Name = 1547263275;
  var kVideoDecodeStatsRecorder_UpdateRecord_Name = 1250012675;

  function VideoDecodeStatsRecorderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDecodeStatsRecorder,
                                                   handleOrPtrInfo);
  }

  function VideoDecodeStatsRecorderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDecodeStatsRecorder, associatedInterfacePtrInfo);
  }

  VideoDecodeStatsRecorderAssociatedPtr.prototype =
      Object.create(VideoDecodeStatsRecorderPtr.prototype);
  VideoDecodeStatsRecorderAssociatedPtr.prototype.constructor =
      VideoDecodeStatsRecorderAssociatedPtr;

  function VideoDecodeStatsRecorderProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDecodeStatsRecorderPtr.prototype.startNewRecord = function() {
    return VideoDecodeStatsRecorderProxy.prototype.startNewRecord
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeStatsRecorderProxy.prototype.startNewRecord = function(features) {
    var params_ = new VideoDecodeStatsRecorder_StartNewRecord_Params();
    params_.features = features;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeStatsRecorder_StartNewRecord_Name,
        codec.align(VideoDecodeStatsRecorder_StartNewRecord_Params.encodedSize));
    builder.encodeStruct(VideoDecodeStatsRecorder_StartNewRecord_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeStatsRecorderPtr.prototype.updateRecord = function() {
    return VideoDecodeStatsRecorderProxy.prototype.updateRecord
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeStatsRecorderProxy.prototype.updateRecord = function(targets) {
    var params_ = new VideoDecodeStatsRecorder_UpdateRecord_Params();
    params_.targets = targets;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeStatsRecorder_UpdateRecord_Name,
        codec.align(VideoDecodeStatsRecorder_UpdateRecord_Params.encodedSize));
    builder.encodeStruct(VideoDecodeStatsRecorder_UpdateRecord_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoDecodeStatsRecorderStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDecodeStatsRecorderStub.prototype.startNewRecord = function(features) {
    return this.delegate_ && this.delegate_.startNewRecord && this.delegate_.startNewRecord(features);
  }
  VideoDecodeStatsRecorderStub.prototype.updateRecord = function(targets) {
    return this.delegate_ && this.delegate_.updateRecord && this.delegate_.updateRecord(targets);
  }

  VideoDecodeStatsRecorderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecodeStatsRecorder_StartNewRecord_Name:
      var params = reader.decodeStruct(VideoDecodeStatsRecorder_StartNewRecord_Params);
      this.startNewRecord(params.features);
      return true;
    case kVideoDecodeStatsRecorder_UpdateRecord_Name:
      var params = reader.decodeStruct(VideoDecodeStatsRecorder_UpdateRecord_Params);
      this.updateRecord(params.targets);
      return true;
    default:
      return false;
    }
  };

  VideoDecodeStatsRecorderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoDecodeStatsRecorderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecodeStatsRecorder_StartNewRecord_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeStatsRecorder_StartNewRecord_Params;
      break;
      case kVideoDecodeStatsRecorder_UpdateRecord_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeStatsRecorder_UpdateRecord_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecodeStatsRecorderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoDecodeStatsRecorder = {
    name: 'media.mojom.VideoDecodeStatsRecorder',
    kVersion: 0,
    ptrClass: VideoDecodeStatsRecorderPtr,
    proxyClass: VideoDecodeStatsRecorderProxy,
    stubClass: VideoDecodeStatsRecorderStub,
    validateRequest: validateVideoDecodeStatsRecorderRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/video_decode_stats_recorder.mojom',
    fuzzMethods: {
      startNewRecord: {
        params: VideoDecodeStatsRecorder_StartNewRecord_Params,
      },
      updateRecord: {
        params: VideoDecodeStatsRecorder_UpdateRecord_Params,
      },
    },
  };
  VideoDecodeStatsRecorderStub.prototype.validator = validateVideoDecodeStatsRecorderRequest;
  VideoDecodeStatsRecorderProxy.prototype.validator = null;
  exports.VideoDecodeStatsRecorder = VideoDecodeStatsRecorder;
  exports.VideoDecodeStatsRecorderPtr = VideoDecodeStatsRecorderPtr;
  exports.VideoDecodeStatsRecorderAssociatedPtr = VideoDecodeStatsRecorderAssociatedPtr;
})();