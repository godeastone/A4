// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/browser/media/media_engagement_score_details.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function MediaEngagementScoreDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaEngagementScoreDetails.prototype.initDefaults_ = function() {
    this.origin = null;
    this.totalScore = 0;
    this.visits = 0;
    this.mediaPlaybacks = 0;
    this.lastMediaPlaybackTime = 0;
    this.isHigh = false;
    this.audiblePlaybacks = 0;
    this.significantPlaybacks = 0;
    this.highScoreChanges = 0;
  };
  MediaEngagementScoreDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaEngagementScoreDetails.generate = function(generator_) {
    var generated = new MediaEngagementScoreDetails;
    generated.origin = generator_.generateStruct(url.mojom.Url, false);
    generated.totalScore = generator_.generateDouble();
    generated.visits = generator_.generateInt32();
    generated.mediaPlaybacks = generator_.generateInt32();
    generated.lastMediaPlaybackTime = generator_.generateDouble();
    generated.isHigh = generator_.generateBool();
    generated.audiblePlaybacks = generator_.generateInt32();
    generated.significantPlaybacks = generator_.generateInt32();
    generated.highScoreChanges = generator_.generateInt32();
    return generated;
  };

  MediaEngagementScoreDetails.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.totalScore = mutator_.mutateDouble(this.totalScore);
    }
    if (mutator_.chooseMutateField()) {
      this.visits = mutator_.mutateInt32(this.visits);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaPlaybacks = mutator_.mutateInt32(this.mediaPlaybacks);
    }
    if (mutator_.chooseMutateField()) {
      this.lastMediaPlaybackTime = mutator_.mutateDouble(this.lastMediaPlaybackTime);
    }
    if (mutator_.chooseMutateField()) {
      this.isHigh = mutator_.mutateBool(this.isHigh);
    }
    if (mutator_.chooseMutateField()) {
      this.audiblePlaybacks = mutator_.mutateInt32(this.audiblePlaybacks);
    }
    if (mutator_.chooseMutateField()) {
      this.significantPlaybacks = mutator_.mutateInt32(this.significantPlaybacks);
    }
    if (mutator_.chooseMutateField()) {
      this.highScoreChanges = mutator_.mutateInt32(this.highScoreChanges);
    }
    return this;
  };
  MediaEngagementScoreDetails.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaEngagementScoreDetails.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaEngagementScoreDetails.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaEngagementScoreDetails.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaEngagementScoreDetails.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;









    return validator.validationError.NONE;
  };

  MediaEngagementScoreDetails.encodedSize = codec.kStructHeaderSize + 48;

  MediaEngagementScoreDetails.decode = function(decoder) {
    var packed;
    var val = new MediaEngagementScoreDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(url$.Url);
    val.totalScore = decoder.decodeStruct(codec.Double);
    val.visits = decoder.decodeStruct(codec.Int32);
    val.mediaPlaybacks = decoder.decodeStruct(codec.Int32);
    val.lastMediaPlaybackTime = decoder.decodeStruct(codec.Double);
    packed = decoder.readUint8();
    val.isHigh = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.audiblePlaybacks = decoder.decodeStruct(codec.Int32);
    val.significantPlaybacks = decoder.decodeStruct(codec.Int32);
    val.highScoreChanges = decoder.decodeStruct(codec.Int32);
    return val;
  };

  MediaEngagementScoreDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaEngagementScoreDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.origin);
    encoder.encodeStruct(codec.Double, val.totalScore);
    encoder.encodeStruct(codec.Int32, val.visits);
    encoder.encodeStruct(codec.Int32, val.mediaPlaybacks);
    encoder.encodeStruct(codec.Double, val.lastMediaPlaybackTime);
    packed = 0;
    packed |= (val.isHigh & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.audiblePlaybacks);
    encoder.encodeStruct(codec.Int32, val.significantPlaybacks);
    encoder.encodeStruct(codec.Int32, val.highScoreChanges);
  };
  function MediaEngagementConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaEngagementConfig.prototype.initDefaults_ = function() {
    this.scoreMinVisits = 0;
    this.featureRecordData = false;
    this.featureBypassAutoplay = false;
    this.featurePreloadData = false;
    this.highScoreLowerThreshold = 0;
    this.highScoreUpperThreshold = 0;
    this.autoplayPolicy = null;
    this.preloadVersion = null;
  };
  MediaEngagementConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaEngagementConfig.generate = function(generator_) {
    var generated = new MediaEngagementConfig;
    generated.scoreMinVisits = generator_.generateInt32();
    generated.highScoreLowerThreshold = generator_.generateDouble();
    generated.highScoreUpperThreshold = generator_.generateDouble();
    generated.featureRecordData = generator_.generateBool();
    generated.featureBypassAutoplay = generator_.generateBool();
    generated.featurePreloadData = generator_.generateBool();
    generated.autoplayPolicy = generator_.generateString(false);
    generated.preloadVersion = generator_.generateString(false);
    return generated;
  };

  MediaEngagementConfig.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scoreMinVisits = mutator_.mutateInt32(this.scoreMinVisits);
    }
    if (mutator_.chooseMutateField()) {
      this.highScoreLowerThreshold = mutator_.mutateDouble(this.highScoreLowerThreshold);
    }
    if (mutator_.chooseMutateField()) {
      this.highScoreUpperThreshold = mutator_.mutateDouble(this.highScoreUpperThreshold);
    }
    if (mutator_.chooseMutateField()) {
      this.featureRecordData = mutator_.mutateBool(this.featureRecordData);
    }
    if (mutator_.chooseMutateField()) {
      this.featureBypassAutoplay = mutator_.mutateBool(this.featureBypassAutoplay);
    }
    if (mutator_.chooseMutateField()) {
      this.featurePreloadData = mutator_.mutateBool(this.featurePreloadData);
    }
    if (mutator_.chooseMutateField()) {
      this.autoplayPolicy = mutator_.mutateString(this.autoplayPolicy, false);
    }
    if (mutator_.chooseMutateField()) {
      this.preloadVersion = mutator_.mutateString(this.preloadVersion, false);
    }
    return this;
  };
  MediaEngagementConfig.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaEngagementConfig.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaEngagementConfig.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaEngagementConfig.validate = function(messageValidator, offset) {
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








    // validate MediaEngagementConfig.autoplayPolicy
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaEngagementConfig.preloadVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaEngagementConfig.encodedSize = codec.kStructHeaderSize + 40;

  MediaEngagementConfig.decode = function(decoder) {
    var packed;
    var val = new MediaEngagementConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scoreMinVisits = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.featureRecordData = (packed >> 0) & 1 ? true : false;
    val.featureBypassAutoplay = (packed >> 1) & 1 ? true : false;
    val.featurePreloadData = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.highScoreLowerThreshold = decoder.decodeStruct(codec.Double);
    val.highScoreUpperThreshold = decoder.decodeStruct(codec.Double);
    val.autoplayPolicy = decoder.decodeStruct(codec.String);
    val.preloadVersion = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaEngagementConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaEngagementConfig.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.scoreMinVisits);
    packed = 0;
    packed |= (val.featureRecordData & 1) << 0
    packed |= (val.featureBypassAutoplay & 1) << 1
    packed |= (val.featurePreloadData & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Double, val.highScoreLowerThreshold);
    encoder.encodeStruct(codec.Double, val.highScoreUpperThreshold);
    encoder.encodeStruct(codec.String, val.autoplayPolicy);
    encoder.encodeStruct(codec.String, val.preloadVersion);
  };
  function MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.prototype.initDefaults_ = function() {
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.generate = function(generator_) {
    var generated = new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params;
    return generated;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.validate = function(messageValidator, offset) {
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

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.decode = function(decoder) {
    var packed;
    var val = new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.prototype.initDefaults_ = function() {
    this.info = null;
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.generate = function(generator_) {
    var generated = new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams;
    generated.info = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.MediaEngagementScoreDetails, false);
    });
    return generated;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateArray(this.info, function(val) {
        return mutator_.mutateStruct(media.mojom.MediaEngagementScoreDetails, false);
      });
    }
    return this;
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.info
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(MediaEngagementScoreDetails), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeArrayPointer(new codec.PointerTo(MediaEngagementScoreDetails));
    return val;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaEngagementScoreDetails), val.info);
  };
  function MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.prototype.initDefaults_ = function() {
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.generate = function(generator_) {
    var generated = new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params;
    return generated;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.validate = function(messageValidator, offset) {
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

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.decode = function(decoder) {
    var packed;
    var val = new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.prototype.initDefaults_ = function() {
    this.config = null;
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.generate = function(generator_) {
    var generated = new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams;
    generated.config = generator_.generateStruct(media.mojom.MediaEngagementConfig, false);
    return generated;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateStruct(media.mojom.MediaEngagementConfig, false);
    }
    return this;
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaEngagementConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStructPointer(MediaEngagementConfig);
    return val;
  };

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaEngagementConfig, val.config);
  };
  var kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name = 359830271;
  var kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name = 458642880;

  function MediaEngagementScoreDetailsProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaEngagementScoreDetailsProvider,
                                                   handleOrPtrInfo);
  }

  function MediaEngagementScoreDetailsProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaEngagementScoreDetailsProvider, associatedInterfacePtrInfo);
  }

  MediaEngagementScoreDetailsProviderAssociatedPtr.prototype =
      Object.create(MediaEngagementScoreDetailsProviderPtr.prototype);
  MediaEngagementScoreDetailsProviderAssociatedPtr.prototype.constructor =
      MediaEngagementScoreDetailsProviderAssociatedPtr;

  function MediaEngagementScoreDetailsProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaEngagementScoreDetailsProviderPtr.prototype.getMediaEngagementScoreDetails = function() {
    return MediaEngagementScoreDetailsProviderProxy.prototype.getMediaEngagementScoreDetails
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaEngagementScoreDetailsProviderProxy.prototype.getMediaEngagementScoreDetails = function() {
    var params_ = new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name,
          codec.align(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaEngagementScoreDetailsProviderPtr.prototype.getMediaEngagementConfig = function() {
    return MediaEngagementScoreDetailsProviderProxy.prototype.getMediaEngagementConfig
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaEngagementScoreDetailsProviderProxy.prototype.getMediaEngagementConfig = function() {
    var params_ = new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name,
          codec.align(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MediaEngagementScoreDetailsProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaEngagementScoreDetailsProviderStub.prototype.getMediaEngagementScoreDetails = function() {
    return this.delegate_ && this.delegate_.getMediaEngagementScoreDetails && this.delegate_.getMediaEngagementScoreDetails();
  }
  MediaEngagementScoreDetailsProviderStub.prototype.getMediaEngagementConfig = function() {
    return this.delegate_ && this.delegate_.getMediaEngagementConfig && this.delegate_.getMediaEngagementConfig();
  }

  MediaEngagementScoreDetailsProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  MediaEngagementScoreDetailsProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name:
      var params = reader.decodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params);
      this.getMediaEngagementScoreDetails().then(function(response) {
        var responseParams =
            new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams();
        responseParams.info = response.info;
        var builder = new codec.MessageV1Builder(
            kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name,
            codec.align(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name:
      var params = reader.decodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params);
      this.getMediaEngagementConfig().then(function(response) {
        var responseParams =
            new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams();
        responseParams.config = response.config;
        var builder = new codec.MessageV1Builder(
            kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name,
            codec.align(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaEngagementScoreDetailsProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name:
        if (message.expectsResponse())
          paramsClass = MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params;
      break;
      case kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name:
        if (message.expectsResponse())
          paramsClass = MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaEngagementScoreDetailsProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name:
        if (message.isResponse())
          paramsClass = MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams;
        break;
      case kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name:
        if (message.isResponse())
          paramsClass = MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaEngagementScoreDetailsProvider = {
    name: 'media.mojom.MediaEngagementScoreDetailsProvider',
    kVersion: 0,
    ptrClass: MediaEngagementScoreDetailsProviderPtr,
    proxyClass: MediaEngagementScoreDetailsProviderProxy,
    stubClass: MediaEngagementScoreDetailsProviderStub,
    validateRequest: validateMediaEngagementScoreDetailsProviderRequest,
    validateResponse: validateMediaEngagementScoreDetailsProviderResponse,
    mojomId: 'chrome/browser/media/media_engagement_score_details.mojom',
    fuzzMethods: {
      getMediaEngagementScoreDetails: {
        params: MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params,
      },
      getMediaEngagementConfig: {
        params: MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params,
      },
    },
  };
  MediaEngagementScoreDetailsProviderStub.prototype.validator = validateMediaEngagementScoreDetailsProviderRequest;
  MediaEngagementScoreDetailsProviderProxy.prototype.validator = validateMediaEngagementScoreDetailsProviderResponse;
  exports.MediaEngagementScoreDetails = MediaEngagementScoreDetails;
  exports.MediaEngagementConfig = MediaEngagementConfig;
  exports.MediaEngagementScoreDetailsProvider = MediaEngagementScoreDetailsProvider;
  exports.MediaEngagementScoreDetailsProviderPtr = MediaEngagementScoreDetailsProviderPtr;
  exports.MediaEngagementScoreDetailsProviderAssociatedPtr = MediaEngagementScoreDetailsProviderAssociatedPtr;
})();