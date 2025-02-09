// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/video_decode_perf_history.mojom';
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



  function VideoDecodePerfHistory_GetPerfInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodePerfHistory_GetPerfInfo_Params.prototype.initDefaults_ = function() {
    this.features = null;
  };
  VideoDecodePerfHistory_GetPerfInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodePerfHistory_GetPerfInfo_Params.generate = function(generator_) {
    var generated = new VideoDecodePerfHistory_GetPerfInfo_Params;
    generated.features = generator_.generateStruct(media.mojom.PredictionFeatures, false);
    return generated;
  };

  VideoDecodePerfHistory_GetPerfInfo_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.features = mutator_.mutateStruct(media.mojom.PredictionFeatures, false);
    }
    return this;
  };
  VideoDecodePerfHistory_GetPerfInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodePerfHistory_GetPerfInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodePerfHistory_GetPerfInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodePerfHistory_GetPerfInfo_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodePerfHistory_GetPerfInfo_Params.features
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.PredictionFeatures, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodePerfHistory_GetPerfInfo_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodePerfHistory_GetPerfInfo_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodePerfHistory_GetPerfInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.features = decoder.decodeStructPointer(media_types$.PredictionFeatures);
    return val;
  };

  VideoDecodePerfHistory_GetPerfInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodePerfHistory_GetPerfInfo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.PredictionFeatures, val.features);
  };
  function VideoDecodePerfHistory_GetPerfInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.isSmooth = false;
    this.isPowerEfficient = false;
  };
  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.generate = function(generator_) {
    var generated = new VideoDecodePerfHistory_GetPerfInfo_ResponseParams;
    generated.isSmooth = generator_.generateBool();
    generated.isPowerEfficient = generator_.generateBool();
    return generated;
  };

  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isSmooth = mutator_.mutateBool(this.isSmooth);
    }
    if (mutator_.chooseMutateField()) {
      this.isPowerEfficient = mutator_.mutateBool(this.isPowerEfficient);
    }
    return this;
  };
  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecodePerfHistory_GetPerfInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isSmooth = (packed >> 0) & 1 ? true : false;
    val.isPowerEfficient = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodePerfHistory_GetPerfInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodePerfHistory_GetPerfInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isSmooth & 1) << 0
    packed |= (val.isPowerEfficient & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVideoDecodePerfHistory_GetPerfInfo_Name = 2040510853;

  function VideoDecodePerfHistoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDecodePerfHistory,
                                                   handleOrPtrInfo);
  }

  function VideoDecodePerfHistoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDecodePerfHistory, associatedInterfacePtrInfo);
  }

  VideoDecodePerfHistoryAssociatedPtr.prototype =
      Object.create(VideoDecodePerfHistoryPtr.prototype);
  VideoDecodePerfHistoryAssociatedPtr.prototype.constructor =
      VideoDecodePerfHistoryAssociatedPtr;

  function VideoDecodePerfHistoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDecodePerfHistoryPtr.prototype.getPerfInfo = function() {
    return VideoDecodePerfHistoryProxy.prototype.getPerfInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodePerfHistoryProxy.prototype.getPerfInfo = function(features) {
    var params_ = new VideoDecodePerfHistory_GetPerfInfo_Params();
    params_.features = features;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoDecodePerfHistory_GetPerfInfo_Name,
          codec.align(VideoDecodePerfHistory_GetPerfInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecodePerfHistory_GetPerfInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecodePerfHistory_GetPerfInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VideoDecodePerfHistoryStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDecodePerfHistoryStub.prototype.getPerfInfo = function(features) {
    return this.delegate_ && this.delegate_.getPerfInfo && this.delegate_.getPerfInfo(features);
  }

  VideoDecodePerfHistoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  VideoDecodePerfHistoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecodePerfHistory_GetPerfInfo_Name:
      var params = reader.decodeStruct(VideoDecodePerfHistory_GetPerfInfo_Params);
      this.getPerfInfo(params.features).then(function(response) {
        var responseParams =
            new VideoDecodePerfHistory_GetPerfInfo_ResponseParams();
        responseParams.isSmooth = response.isSmooth;
        responseParams.isPowerEfficient = response.isPowerEfficient;
        var builder = new codec.MessageV1Builder(
            kVideoDecodePerfHistory_GetPerfInfo_Name,
            codec.align(VideoDecodePerfHistory_GetPerfInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecodePerfHistory_GetPerfInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVideoDecodePerfHistoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecodePerfHistory_GetPerfInfo_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecodePerfHistory_GetPerfInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecodePerfHistoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoDecodePerfHistory_GetPerfInfo_Name:
        if (message.isResponse())
          paramsClass = VideoDecodePerfHistory_GetPerfInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoDecodePerfHistory = {
    name: 'media.mojom.VideoDecodePerfHistory',
    kVersion: 0,
    ptrClass: VideoDecodePerfHistoryPtr,
    proxyClass: VideoDecodePerfHistoryProxy,
    stubClass: VideoDecodePerfHistoryStub,
    validateRequest: validateVideoDecodePerfHistoryRequest,
    validateResponse: validateVideoDecodePerfHistoryResponse,
    mojomId: 'media/mojo/interfaces/video_decode_perf_history.mojom',
    fuzzMethods: {
      getPerfInfo: {
        params: VideoDecodePerfHistory_GetPerfInfo_Params,
      },
    },
  };
  VideoDecodePerfHistoryStub.prototype.validator = validateVideoDecodePerfHistoryRequest;
  VideoDecodePerfHistoryProxy.prototype.validator = validateVideoDecodePerfHistoryResponse;
  exports.VideoDecodePerfHistory = VideoDecodePerfHistory;
  exports.VideoDecodePerfHistoryPtr = VideoDecodePerfHistoryPtr;
  exports.VideoDecodePerfHistoryAssociatedPtr = VideoDecodePerfHistoryAssociatedPtr;
})();