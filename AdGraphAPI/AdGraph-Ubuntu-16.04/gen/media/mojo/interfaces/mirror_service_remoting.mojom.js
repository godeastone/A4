// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/mirror_service_remoting.mojom';
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
  var remoting_common$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/remoting_common.mojom', 'remoting_common.mojom.js');
  }



  function MirrorServiceRemoter_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemoter_Start_Params.prototype.initDefaults_ = function() {
  };
  MirrorServiceRemoter_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemoter_Start_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemoter_Start_Params;
    return generated;
  };

  MirrorServiceRemoter_Start_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MirrorServiceRemoter_Start_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemoter_Start_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemoter_Start_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemoter_Start_Params.validate = function(messageValidator, offset) {
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

  MirrorServiceRemoter_Start_Params.encodedSize = codec.kStructHeaderSize + 0;

  MirrorServiceRemoter_Start_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemoter_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MirrorServiceRemoter_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemoter_Start_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MirrorServiceRemoter_StartDataStreams_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemoter_StartDataStreams_Params.prototype.initDefaults_ = function() {
    this.hasAudio = false;
    this.hasVideo = false;
  };
  MirrorServiceRemoter_StartDataStreams_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemoter_StartDataStreams_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemoter_StartDataStreams_Params;
    generated.hasAudio = generator_.generateBool();
    generated.hasVideo = generator_.generateBool();
    return generated;
  };

  MirrorServiceRemoter_StartDataStreams_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hasAudio = mutator_.mutateBool(this.hasAudio);
    }
    if (mutator_.chooseMutateField()) {
      this.hasVideo = mutator_.mutateBool(this.hasVideo);
    }
    return this;
  };
  MirrorServiceRemoter_StartDataStreams_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemoter_StartDataStreams_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemoter_StartDataStreams_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemoter_StartDataStreams_Params.validate = function(messageValidator, offset) {
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

  MirrorServiceRemoter_StartDataStreams_Params.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemoter_StartDataStreams_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemoter_StartDataStreams_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasAudio = (packed >> 0) & 1 ? true : false;
    val.hasVideo = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MirrorServiceRemoter_StartDataStreams_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemoter_StartDataStreams_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasAudio & 1) << 0
    packed |= (val.hasVideo & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MirrorServiceRemoter_StartDataStreams_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemoter_StartDataStreams_ResponseParams.prototype.initDefaults_ = function() {
    this.audioStreamId = 0;
    this.videoStreamId = 0;
  };
  MirrorServiceRemoter_StartDataStreams_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemoter_StartDataStreams_ResponseParams.generate = function(generator_) {
    var generated = new MirrorServiceRemoter_StartDataStreams_ResponseParams;
    generated.audioStreamId = generator_.generateInt32();
    generated.videoStreamId = generator_.generateInt32();
    return generated;
  };

  MirrorServiceRemoter_StartDataStreams_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.audioStreamId = mutator_.mutateInt32(this.audioStreamId);
    }
    if (mutator_.chooseMutateField()) {
      this.videoStreamId = mutator_.mutateInt32(this.videoStreamId);
    }
    return this;
  };
  MirrorServiceRemoter_StartDataStreams_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemoter_StartDataStreams_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemoter_StartDataStreams_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemoter_StartDataStreams_ResponseParams.validate = function(messageValidator, offset) {
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

  MirrorServiceRemoter_StartDataStreams_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemoter_StartDataStreams_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemoter_StartDataStreams_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audioStreamId = decoder.decodeStruct(codec.Int32);
    val.videoStreamId = decoder.decodeStruct(codec.Int32);
    return val;
  };

  MirrorServiceRemoter_StartDataStreams_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemoter_StartDataStreams_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.audioStreamId);
    encoder.encodeStruct(codec.Int32, val.videoStreamId);
  };
  function MirrorServiceRemoter_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemoter_Stop_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  MirrorServiceRemoter_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemoter_Stop_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemoter_Stop_Params;
    generated.reason = generator_.generateEnum(0, 7);
    return generated;
  };

  MirrorServiceRemoter_Stop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 7);
    }
    return this;
  };
  MirrorServiceRemoter_Stop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemoter_Stop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemoter_Stop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemoter_Stop_Params.validate = function(messageValidator, offset) {
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


    // validate MirrorServiceRemoter_Stop_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, remoting_common$.RemotingStopReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MirrorServiceRemoter_Stop_Params.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemoter_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemoter_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MirrorServiceRemoter_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemoter_Stop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MirrorServiceRemoter_SendMessageToSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemoter_SendMessageToSink_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  MirrorServiceRemoter_SendMessageToSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemoter_SendMessageToSink_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemoter_SendMessageToSink_Params;
    generated.message = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  MirrorServiceRemoter_SendMessageToSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateArray(this.message, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  MirrorServiceRemoter_SendMessageToSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemoter_SendMessageToSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemoter_SendMessageToSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemoter_SendMessageToSink_Params.validate = function(messageValidator, offset) {
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


    // validate MirrorServiceRemoter_SendMessageToSink_Params.message
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MirrorServiceRemoter_SendMessageToSink_Params.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemoter_SendMessageToSink_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemoter_SendMessageToSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  MirrorServiceRemoter_SendMessageToSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemoter_SendMessageToSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.message);
  };
  function MirrorServiceRemoter_EstimateTransmissionCapacity_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.prototype.initDefaults_ = function() {
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemoter_EstimateTransmissionCapacity_Params;
    return generated;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.validate = function(messageValidator, offset) {
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

  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.encodedSize = codec.kStructHeaderSize + 0;

  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemoter_EstimateTransmissionCapacity_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemoter_EstimateTransmissionCapacity_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.prototype.initDefaults_ = function() {
    this.rate = 0;
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.generate = function(generator_) {
    var generated = new MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams;
    generated.rate = generator_.generateDouble();
    return generated;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rate = mutator_.mutateDouble(this.rate);
    }
    return this;
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.validate = function(messageValidator, offset) {
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

  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rate = decoder.decodeStruct(codec.Double);
    return val;
  };

  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.rate);
  };
  function MirrorServiceRemotingSource_OnSinkAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemotingSource_OnSinkAvailable_Params.prototype.initDefaults_ = function() {
    this.metadata = null;
  };
  MirrorServiceRemotingSource_OnSinkAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemotingSource_OnSinkAvailable_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemotingSource_OnSinkAvailable_Params;
    generated.metadata = generator_.generateStruct(media.mojom.RemotingSinkMetadata, false);
    return generated;
  };

  MirrorServiceRemotingSource_OnSinkAvailable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(media.mojom.RemotingSinkMetadata, false);
    }
    return this;
  };
  MirrorServiceRemotingSource_OnSinkAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemotingSource_OnSinkAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemotingSource_OnSinkAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemotingSource_OnSinkAvailable_Params.validate = function(messageValidator, offset) {
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


    // validate MirrorServiceRemotingSource_OnSinkAvailable_Params.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, remoting_common$.RemotingSinkMetadata, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MirrorServiceRemotingSource_OnSinkAvailable_Params.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemotingSource_OnSinkAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemotingSource_OnSinkAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metadata = decoder.decodeStructPointer(remoting_common$.RemotingSinkMetadata);
    return val;
  };

  MirrorServiceRemotingSource_OnSinkAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemotingSource_OnSinkAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(remoting_common$.RemotingSinkMetadata, val.metadata);
  };
  function MirrorServiceRemotingSource_OnMessageFromSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemotingSource_OnMessageFromSink_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  MirrorServiceRemotingSource_OnMessageFromSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemotingSource_OnMessageFromSink_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemotingSource_OnMessageFromSink_Params;
    generated.message = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  MirrorServiceRemotingSource_OnMessageFromSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateArray(this.message, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  MirrorServiceRemotingSource_OnMessageFromSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemotingSource_OnMessageFromSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemotingSource_OnMessageFromSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemotingSource_OnMessageFromSink_Params.validate = function(messageValidator, offset) {
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


    // validate MirrorServiceRemotingSource_OnMessageFromSink_Params.message
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MirrorServiceRemotingSource_OnMessageFromSink_Params.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemotingSource_OnMessageFromSink_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemotingSource_OnMessageFromSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  MirrorServiceRemotingSource_OnMessageFromSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemotingSource_OnMessageFromSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.message);
  };
  function MirrorServiceRemotingSource_OnStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemotingSource_OnStopped_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  MirrorServiceRemotingSource_OnStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemotingSource_OnStopped_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemotingSource_OnStopped_Params;
    generated.reason = generator_.generateEnum(0, 7);
    return generated;
  };

  MirrorServiceRemotingSource_OnStopped_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 7);
    }
    return this;
  };
  MirrorServiceRemotingSource_OnStopped_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemotingSource_OnStopped_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemotingSource_OnStopped_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemotingSource_OnStopped_Params.validate = function(messageValidator, offset) {
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


    // validate MirrorServiceRemotingSource_OnStopped_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, remoting_common$.RemotingStopReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MirrorServiceRemotingSource_OnStopped_Params.encodedSize = codec.kStructHeaderSize + 8;

  MirrorServiceRemotingSource_OnStopped_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemotingSource_OnStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MirrorServiceRemotingSource_OnStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemotingSource_OnStopped_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MirrorServiceRemotingSource_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MirrorServiceRemotingSource_OnError_Params.prototype.initDefaults_ = function() {
  };
  MirrorServiceRemotingSource_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MirrorServiceRemotingSource_OnError_Params.generate = function(generator_) {
    var generated = new MirrorServiceRemotingSource_OnError_Params;
    return generated;
  };

  MirrorServiceRemotingSource_OnError_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MirrorServiceRemotingSource_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MirrorServiceRemotingSource_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MirrorServiceRemotingSource_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MirrorServiceRemotingSource_OnError_Params.validate = function(messageValidator, offset) {
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

  MirrorServiceRemotingSource_OnError_Params.encodedSize = codec.kStructHeaderSize + 0;

  MirrorServiceRemotingSource_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new MirrorServiceRemotingSource_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MirrorServiceRemotingSource_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MirrorServiceRemotingSource_OnError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kMirrorServiceRemoter_Start_Name = 1844107303;
  var kMirrorServiceRemoter_StartDataStreams_Name = 1175046345;
  var kMirrorServiceRemoter_Stop_Name = 384221531;
  var kMirrorServiceRemoter_SendMessageToSink_Name = 226184609;
  var kMirrorServiceRemoter_EstimateTransmissionCapacity_Name = 825117958;

  function MirrorServiceRemoterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MirrorServiceRemoter,
                                                   handleOrPtrInfo);
  }

  function MirrorServiceRemoterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MirrorServiceRemoter, associatedInterfacePtrInfo);
  }

  MirrorServiceRemoterAssociatedPtr.prototype =
      Object.create(MirrorServiceRemoterPtr.prototype);
  MirrorServiceRemoterAssociatedPtr.prototype.constructor =
      MirrorServiceRemoterAssociatedPtr;

  function MirrorServiceRemoterProxy(receiver) {
    this.receiver_ = receiver;
  }
  MirrorServiceRemoterPtr.prototype.start = function() {
    return MirrorServiceRemoterProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemoterProxy.prototype.start = function() {
    var params_ = new MirrorServiceRemoter_Start_Params();
    var builder = new codec.MessageV0Builder(
        kMirrorServiceRemoter_Start_Name,
        codec.align(MirrorServiceRemoter_Start_Params.encodedSize));
    builder.encodeStruct(MirrorServiceRemoter_Start_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MirrorServiceRemoterPtr.prototype.startDataStreams = function() {
    return MirrorServiceRemoterProxy.prototype.startDataStreams
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemoterProxy.prototype.startDataStreams = function(hasAudio, hasVideo) {
    var params_ = new MirrorServiceRemoter_StartDataStreams_Params();
    params_.hasAudio = hasAudio;
    params_.hasVideo = hasVideo;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMirrorServiceRemoter_StartDataStreams_Name,
          codec.align(MirrorServiceRemoter_StartDataStreams_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MirrorServiceRemoter_StartDataStreams_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MirrorServiceRemoter_StartDataStreams_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MirrorServiceRemoterPtr.prototype.stop = function() {
    return MirrorServiceRemoterProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemoterProxy.prototype.stop = function(reason) {
    var params_ = new MirrorServiceRemoter_Stop_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kMirrorServiceRemoter_Stop_Name,
        codec.align(MirrorServiceRemoter_Stop_Params.encodedSize));
    builder.encodeStruct(MirrorServiceRemoter_Stop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MirrorServiceRemoterPtr.prototype.sendMessageToSink = function() {
    return MirrorServiceRemoterProxy.prototype.sendMessageToSink
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemoterProxy.prototype.sendMessageToSink = function(message) {
    var params_ = new MirrorServiceRemoter_SendMessageToSink_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kMirrorServiceRemoter_SendMessageToSink_Name,
        codec.align(MirrorServiceRemoter_SendMessageToSink_Params.encodedSize));
    builder.encodeStruct(MirrorServiceRemoter_SendMessageToSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MirrorServiceRemoterPtr.prototype.estimateTransmissionCapacity = function() {
    return MirrorServiceRemoterProxy.prototype.estimateTransmissionCapacity
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemoterProxy.prototype.estimateTransmissionCapacity = function() {
    var params_ = new MirrorServiceRemoter_EstimateTransmissionCapacity_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMirrorServiceRemoter_EstimateTransmissionCapacity_Name,
          codec.align(MirrorServiceRemoter_EstimateTransmissionCapacity_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MirrorServiceRemoter_EstimateTransmissionCapacity_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MirrorServiceRemoterStub(delegate) {
    this.delegate_ = delegate;
  }
  MirrorServiceRemoterStub.prototype.start = function() {
    return this.delegate_ && this.delegate_.start && this.delegate_.start();
  }
  MirrorServiceRemoterStub.prototype.startDataStreams = function(hasAudio, hasVideo) {
    return this.delegate_ && this.delegate_.startDataStreams && this.delegate_.startDataStreams(hasAudio, hasVideo);
  }
  MirrorServiceRemoterStub.prototype.stop = function(reason) {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop(reason);
  }
  MirrorServiceRemoterStub.prototype.sendMessageToSink = function(message) {
    return this.delegate_ && this.delegate_.sendMessageToSink && this.delegate_.sendMessageToSink(message);
  }
  MirrorServiceRemoterStub.prototype.estimateTransmissionCapacity = function() {
    return this.delegate_ && this.delegate_.estimateTransmissionCapacity && this.delegate_.estimateTransmissionCapacity();
  }

  MirrorServiceRemoterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMirrorServiceRemoter_Start_Name:
      var params = reader.decodeStruct(MirrorServiceRemoter_Start_Params);
      this.start();
      return true;
    case kMirrorServiceRemoter_Stop_Name:
      var params = reader.decodeStruct(MirrorServiceRemoter_Stop_Params);
      this.stop(params.reason);
      return true;
    case kMirrorServiceRemoter_SendMessageToSink_Name:
      var params = reader.decodeStruct(MirrorServiceRemoter_SendMessageToSink_Params);
      this.sendMessageToSink(params.message);
      return true;
    default:
      return false;
    }
  };

  MirrorServiceRemoterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMirrorServiceRemoter_StartDataStreams_Name:
      var params = reader.decodeStruct(MirrorServiceRemoter_StartDataStreams_Params);
      this.startDataStreams(params.hasAudio, params.hasVideo).then(function(response) {
        var responseParams =
            new MirrorServiceRemoter_StartDataStreams_ResponseParams();
        responseParams.audioStreamId = response.audioStreamId;
        responseParams.videoStreamId = response.videoStreamId;
        var builder = new codec.MessageV1Builder(
            kMirrorServiceRemoter_StartDataStreams_Name,
            codec.align(MirrorServiceRemoter_StartDataStreams_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MirrorServiceRemoter_StartDataStreams_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMirrorServiceRemoter_EstimateTransmissionCapacity_Name:
      var params = reader.decodeStruct(MirrorServiceRemoter_EstimateTransmissionCapacity_Params);
      this.estimateTransmissionCapacity().then(function(response) {
        var responseParams =
            new MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams();
        responseParams.rate = response.rate;
        var builder = new codec.MessageV1Builder(
            kMirrorServiceRemoter_EstimateTransmissionCapacity_Name,
            codec.align(MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMirrorServiceRemoterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMirrorServiceRemoter_Start_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MirrorServiceRemoter_Start_Params;
      break;
      case kMirrorServiceRemoter_StartDataStreams_Name:
        if (message.expectsResponse())
          paramsClass = MirrorServiceRemoter_StartDataStreams_Params;
      break;
      case kMirrorServiceRemoter_Stop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MirrorServiceRemoter_Stop_Params;
      break;
      case kMirrorServiceRemoter_SendMessageToSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MirrorServiceRemoter_SendMessageToSink_Params;
      break;
      case kMirrorServiceRemoter_EstimateTransmissionCapacity_Name:
        if (message.expectsResponse())
          paramsClass = MirrorServiceRemoter_EstimateTransmissionCapacity_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMirrorServiceRemoterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMirrorServiceRemoter_StartDataStreams_Name:
        if (message.isResponse())
          paramsClass = MirrorServiceRemoter_StartDataStreams_ResponseParams;
        break;
      case kMirrorServiceRemoter_EstimateTransmissionCapacity_Name:
        if (message.isResponse())
          paramsClass = MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MirrorServiceRemoter = {
    name: 'media.mojom.MirrorServiceRemoter',
    kVersion: 0,
    ptrClass: MirrorServiceRemoterPtr,
    proxyClass: MirrorServiceRemoterProxy,
    stubClass: MirrorServiceRemoterStub,
    validateRequest: validateMirrorServiceRemoterRequest,
    validateResponse: validateMirrorServiceRemoterResponse,
    mojomId: 'media/mojo/interfaces/mirror_service_remoting.mojom',
    fuzzMethods: {
      start: {
        params: MirrorServiceRemoter_Start_Params,
      },
      startDataStreams: {
        params: MirrorServiceRemoter_StartDataStreams_Params,
      },
      stop: {
        params: MirrorServiceRemoter_Stop_Params,
      },
      sendMessageToSink: {
        params: MirrorServiceRemoter_SendMessageToSink_Params,
      },
      estimateTransmissionCapacity: {
        params: MirrorServiceRemoter_EstimateTransmissionCapacity_Params,
      },
    },
  };
  MirrorServiceRemoterStub.prototype.validator = validateMirrorServiceRemoterRequest;
  MirrorServiceRemoterProxy.prototype.validator = validateMirrorServiceRemoterResponse;
  var kMirrorServiceRemotingSource_OnSinkAvailable_Name = 101924686;
  var kMirrorServiceRemotingSource_OnMessageFromSink_Name = 849204405;
  var kMirrorServiceRemotingSource_OnStopped_Name = 514992717;
  var kMirrorServiceRemotingSource_OnError_Name = 1925601013;

  function MirrorServiceRemotingSourcePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MirrorServiceRemotingSource,
                                                   handleOrPtrInfo);
  }

  function MirrorServiceRemotingSourceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MirrorServiceRemotingSource, associatedInterfacePtrInfo);
  }

  MirrorServiceRemotingSourceAssociatedPtr.prototype =
      Object.create(MirrorServiceRemotingSourcePtr.prototype);
  MirrorServiceRemotingSourceAssociatedPtr.prototype.constructor =
      MirrorServiceRemotingSourceAssociatedPtr;

  function MirrorServiceRemotingSourceProxy(receiver) {
    this.receiver_ = receiver;
  }
  MirrorServiceRemotingSourcePtr.prototype.onSinkAvailable = function() {
    return MirrorServiceRemotingSourceProxy.prototype.onSinkAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemotingSourceProxy.prototype.onSinkAvailable = function(metadata) {
    var params_ = new MirrorServiceRemotingSource_OnSinkAvailable_Params();
    params_.metadata = metadata;
    var builder = new codec.MessageV0Builder(
        kMirrorServiceRemotingSource_OnSinkAvailable_Name,
        codec.align(MirrorServiceRemotingSource_OnSinkAvailable_Params.encodedSize));
    builder.encodeStruct(MirrorServiceRemotingSource_OnSinkAvailable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MirrorServiceRemotingSourcePtr.prototype.onMessageFromSink = function() {
    return MirrorServiceRemotingSourceProxy.prototype.onMessageFromSink
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemotingSourceProxy.prototype.onMessageFromSink = function(message) {
    var params_ = new MirrorServiceRemotingSource_OnMessageFromSink_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kMirrorServiceRemotingSource_OnMessageFromSink_Name,
        codec.align(MirrorServiceRemotingSource_OnMessageFromSink_Params.encodedSize));
    builder.encodeStruct(MirrorServiceRemotingSource_OnMessageFromSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MirrorServiceRemotingSourcePtr.prototype.onStopped = function() {
    return MirrorServiceRemotingSourceProxy.prototype.onStopped
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemotingSourceProxy.prototype.onStopped = function(reason) {
    var params_ = new MirrorServiceRemotingSource_OnStopped_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kMirrorServiceRemotingSource_OnStopped_Name,
        codec.align(MirrorServiceRemotingSource_OnStopped_Params.encodedSize));
    builder.encodeStruct(MirrorServiceRemotingSource_OnStopped_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MirrorServiceRemotingSourcePtr.prototype.onError = function() {
    return MirrorServiceRemotingSourceProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  MirrorServiceRemotingSourceProxy.prototype.onError = function() {
    var params_ = new MirrorServiceRemotingSource_OnError_Params();
    var builder = new codec.MessageV0Builder(
        kMirrorServiceRemotingSource_OnError_Name,
        codec.align(MirrorServiceRemotingSource_OnError_Params.encodedSize));
    builder.encodeStruct(MirrorServiceRemotingSource_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MirrorServiceRemotingSourceStub(delegate) {
    this.delegate_ = delegate;
  }
  MirrorServiceRemotingSourceStub.prototype.onSinkAvailable = function(metadata) {
    return this.delegate_ && this.delegate_.onSinkAvailable && this.delegate_.onSinkAvailable(metadata);
  }
  MirrorServiceRemotingSourceStub.prototype.onMessageFromSink = function(message) {
    return this.delegate_ && this.delegate_.onMessageFromSink && this.delegate_.onMessageFromSink(message);
  }
  MirrorServiceRemotingSourceStub.prototype.onStopped = function(reason) {
    return this.delegate_ && this.delegate_.onStopped && this.delegate_.onStopped(reason);
  }
  MirrorServiceRemotingSourceStub.prototype.onError = function() {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError();
  }

  MirrorServiceRemotingSourceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMirrorServiceRemotingSource_OnSinkAvailable_Name:
      var params = reader.decodeStruct(MirrorServiceRemotingSource_OnSinkAvailable_Params);
      this.onSinkAvailable(params.metadata);
      return true;
    case kMirrorServiceRemotingSource_OnMessageFromSink_Name:
      var params = reader.decodeStruct(MirrorServiceRemotingSource_OnMessageFromSink_Params);
      this.onMessageFromSink(params.message);
      return true;
    case kMirrorServiceRemotingSource_OnStopped_Name:
      var params = reader.decodeStruct(MirrorServiceRemotingSource_OnStopped_Params);
      this.onStopped(params.reason);
      return true;
    case kMirrorServiceRemotingSource_OnError_Name:
      var params = reader.decodeStruct(MirrorServiceRemotingSource_OnError_Params);
      this.onError();
      return true;
    default:
      return false;
    }
  };

  MirrorServiceRemotingSourceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMirrorServiceRemotingSourceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMirrorServiceRemotingSource_OnSinkAvailable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MirrorServiceRemotingSource_OnSinkAvailable_Params;
      break;
      case kMirrorServiceRemotingSource_OnMessageFromSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MirrorServiceRemotingSource_OnMessageFromSink_Params;
      break;
      case kMirrorServiceRemotingSource_OnStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MirrorServiceRemotingSource_OnStopped_Params;
      break;
      case kMirrorServiceRemotingSource_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MirrorServiceRemotingSource_OnError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMirrorServiceRemotingSourceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MirrorServiceRemotingSource = {
    name: 'media.mojom.MirrorServiceRemotingSource',
    kVersion: 0,
    ptrClass: MirrorServiceRemotingSourcePtr,
    proxyClass: MirrorServiceRemotingSourceProxy,
    stubClass: MirrorServiceRemotingSourceStub,
    validateRequest: validateMirrorServiceRemotingSourceRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/mirror_service_remoting.mojom',
    fuzzMethods: {
      onSinkAvailable: {
        params: MirrorServiceRemotingSource_OnSinkAvailable_Params,
      },
      onMessageFromSink: {
        params: MirrorServiceRemotingSource_OnMessageFromSink_Params,
      },
      onStopped: {
        params: MirrorServiceRemotingSource_OnStopped_Params,
      },
      onError: {
        params: MirrorServiceRemotingSource_OnError_Params,
      },
    },
  };
  MirrorServiceRemotingSourceStub.prototype.validator = validateMirrorServiceRemotingSourceRequest;
  MirrorServiceRemotingSourceProxy.prototype.validator = null;
  exports.MirrorServiceRemoter = MirrorServiceRemoter;
  exports.MirrorServiceRemoterPtr = MirrorServiceRemoterPtr;
  exports.MirrorServiceRemoterAssociatedPtr = MirrorServiceRemoterAssociatedPtr;
  exports.MirrorServiceRemotingSource = MirrorServiceRemotingSource;
  exports.MirrorServiceRemotingSourcePtr = MirrorServiceRemotingSourcePtr;
  exports.MirrorServiceRemotingSourceAssociatedPtr = MirrorServiceRemotingSourceAssociatedPtr;
})();