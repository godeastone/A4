// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/remoting.mojom';
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



  function RemoterFactory_Create_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemoterFactory_Create_Params.prototype.initDefaults_ = function() {
    this.source = new RemotingSourcePtr();
    this.remoter = new bindings.InterfaceRequest();
  };
  RemoterFactory_Create_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemoterFactory_Create_Params.generate = function(generator_) {
    var generated = new RemoterFactory_Create_Params;
    generated.source = generator_.generateInterface("media.mojom.RemotingSource", false);
    generated.remoter = generator_.generateInterfaceRequest("media.mojom.Remoter", false);
    return generated;
  };

  RemoterFactory_Create_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateInterface(this.source, "media.mojom.RemotingSource", false);
    }
    if (mutator_.chooseMutateField()) {
      this.remoter = mutator_.mutateInterfaceRequest(this.remoter, "media.mojom.Remoter", false);
    }
    return this;
  };
  RemoterFactory_Create_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.source !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.RemotingSourcePtr"]);
    }
    if (this.remoter !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.RemoterRequest"]);
    }
    return handles;
  };

  RemoterFactory_Create_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemoterFactory_Create_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.source = handles[idx++];;
    this.remoter = handles[idx++];;
    return idx;
  };

  RemoterFactory_Create_Params.validate = function(messageValidator, offset) {
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


    // validate RemoterFactory_Create_Params.source
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RemoterFactory_Create_Params.remoter
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemoterFactory_Create_Params.encodedSize = codec.kStructHeaderSize + 16;

  RemoterFactory_Create_Params.decode = function(decoder) {
    var packed;
    var val = new RemoterFactory_Create_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(new codec.Interface(RemotingSourcePtr));
    val.remoter = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RemoterFactory_Create_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemoterFactory_Create_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(RemotingSourcePtr), val.source);
    encoder.encodeStruct(codec.InterfaceRequest, val.remoter);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RemotingDataStreamSender_SendFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingDataStreamSender_SendFrame_Params.prototype.initDefaults_ = function() {
    this.frameSize = 0;
  };
  RemotingDataStreamSender_SendFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingDataStreamSender_SendFrame_Params.generate = function(generator_) {
    var generated = new RemotingDataStreamSender_SendFrame_Params;
    generated.frameSize = generator_.generateUint32();
    return generated;
  };

  RemotingDataStreamSender_SendFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSize = mutator_.mutateUint32(this.frameSize);
    }
    return this;
  };
  RemotingDataStreamSender_SendFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingDataStreamSender_SendFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingDataStreamSender_SendFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingDataStreamSender_SendFrame_Params.validate = function(messageValidator, offset) {
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

  RemotingDataStreamSender_SendFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  RemotingDataStreamSender_SendFrame_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingDataStreamSender_SendFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSize = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RemotingDataStreamSender_SendFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingDataStreamSender_SendFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.frameSize);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RemotingDataStreamSender_CancelInFlightData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingDataStreamSender_CancelInFlightData_Params.prototype.initDefaults_ = function() {
  };
  RemotingDataStreamSender_CancelInFlightData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingDataStreamSender_CancelInFlightData_Params.generate = function(generator_) {
    var generated = new RemotingDataStreamSender_CancelInFlightData_Params;
    return generated;
  };

  RemotingDataStreamSender_CancelInFlightData_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RemotingDataStreamSender_CancelInFlightData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingDataStreamSender_CancelInFlightData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingDataStreamSender_CancelInFlightData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingDataStreamSender_CancelInFlightData_Params.validate = function(messageValidator, offset) {
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

  RemotingDataStreamSender_CancelInFlightData_Params.encodedSize = codec.kStructHeaderSize + 0;

  RemotingDataStreamSender_CancelInFlightData_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingDataStreamSender_CancelInFlightData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RemotingDataStreamSender_CancelInFlightData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingDataStreamSender_CancelInFlightData_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Remoter_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Remoter_Start_Params.prototype.initDefaults_ = function() {
  };
  Remoter_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Remoter_Start_Params.generate = function(generator_) {
    var generated = new Remoter_Start_Params;
    return generated;
  };

  Remoter_Start_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Remoter_Start_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Remoter_Start_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Remoter_Start_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Remoter_Start_Params.validate = function(messageValidator, offset) {
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

  Remoter_Start_Params.encodedSize = codec.kStructHeaderSize + 0;

  Remoter_Start_Params.decode = function(decoder) {
    var packed;
    var val = new Remoter_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Remoter_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Remoter_Start_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Remoter_StartDataStreams_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Remoter_StartDataStreams_Params.prototype.initDefaults_ = function() {
    this.audioPipe = null;
    this.videoPipe = null;
    this.audioSender = new bindings.InterfaceRequest();
    this.videoSender = new bindings.InterfaceRequest();
  };
  Remoter_StartDataStreams_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Remoter_StartDataStreams_Params.generate = function(generator_) {
    var generated = new Remoter_StartDataStreams_Params;
    generated.audioPipe = generator_.generateDataPipeConsumer(true);
    generated.videoPipe = generator_.generateDataPipeConsumer(true);
    generated.audioSender = generator_.generateInterfaceRequest("media.mojom.RemotingDataStreamSender", true);
    generated.videoSender = generator_.generateInterfaceRequest("media.mojom.RemotingDataStreamSender", true);
    return generated;
  };

  Remoter_StartDataStreams_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.audioPipe = mutator_.mutateDataPipeConsumer(this.audioPipe, true);
    }
    if (mutator_.chooseMutateField()) {
      this.videoPipe = mutator_.mutateDataPipeConsumer(this.videoPipe, true);
    }
    if (mutator_.chooseMutateField()) {
      this.audioSender = mutator_.mutateInterfaceRequest(this.audioSender, "media.mojom.RemotingDataStreamSender", true);
    }
    if (mutator_.chooseMutateField()) {
      this.videoSender = mutator_.mutateInterfaceRequest(this.videoSender, "media.mojom.RemotingDataStreamSender", true);
    }
    return this;
  };
  Remoter_StartDataStreams_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.audioPipe !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.videoPipe !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.audioSender !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.RemotingDataStreamSenderRequest"]);
    }
    if (this.videoSender !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.RemotingDataStreamSenderRequest"]);
    }
    return handles;
  };

  Remoter_StartDataStreams_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Remoter_StartDataStreams_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.audioPipe = handles[idx++];;
    this.videoPipe = handles[idx++];;
    this.audioSender = handles[idx++];;
    this.videoSender = handles[idx++];;
    return idx;
  };

  Remoter_StartDataStreams_Params.validate = function(messageValidator, offset) {
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


    // validate Remoter_StartDataStreams_Params.audioPipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Remoter_StartDataStreams_Params.videoPipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Remoter_StartDataStreams_Params.audioSender
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Remoter_StartDataStreams_Params.videoSender
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 12, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Remoter_StartDataStreams_Params.encodedSize = codec.kStructHeaderSize + 16;

  Remoter_StartDataStreams_Params.decode = function(decoder) {
    var packed;
    var val = new Remoter_StartDataStreams_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audioPipe = decoder.decodeStruct(codec.NullableHandle);
    val.videoPipe = decoder.decodeStruct(codec.NullableHandle);
    val.audioSender = decoder.decodeStruct(codec.NullableInterfaceRequest);
    val.videoSender = decoder.decodeStruct(codec.NullableInterfaceRequest);
    return val;
  };

  Remoter_StartDataStreams_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Remoter_StartDataStreams_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableHandle, val.audioPipe);
    encoder.encodeStruct(codec.NullableHandle, val.videoPipe);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.audioSender);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.videoSender);
  };
  function Remoter_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Remoter_Stop_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  Remoter_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Remoter_Stop_Params.generate = function(generator_) {
    var generated = new Remoter_Stop_Params;
    generated.reason = generator_.generateEnum(0, 7);
    return generated;
  };

  Remoter_Stop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 7);
    }
    return this;
  };
  Remoter_Stop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Remoter_Stop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Remoter_Stop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Remoter_Stop_Params.validate = function(messageValidator, offset) {
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


    // validate Remoter_Stop_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, remoting_common$.RemotingStopReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Remoter_Stop_Params.encodedSize = codec.kStructHeaderSize + 8;

  Remoter_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new Remoter_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Remoter_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Remoter_Stop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Remoter_SendMessageToSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Remoter_SendMessageToSink_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  Remoter_SendMessageToSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Remoter_SendMessageToSink_Params.generate = function(generator_) {
    var generated = new Remoter_SendMessageToSink_Params;
    generated.message = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Remoter_SendMessageToSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateArray(this.message, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Remoter_SendMessageToSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Remoter_SendMessageToSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Remoter_SendMessageToSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Remoter_SendMessageToSink_Params.validate = function(messageValidator, offset) {
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


    // validate Remoter_SendMessageToSink_Params.message
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Remoter_SendMessageToSink_Params.encodedSize = codec.kStructHeaderSize + 8;

  Remoter_SendMessageToSink_Params.decode = function(decoder) {
    var packed;
    var val = new Remoter_SendMessageToSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Remoter_SendMessageToSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Remoter_SendMessageToSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.message);
  };
  function Remoter_EstimateTransmissionCapacity_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Remoter_EstimateTransmissionCapacity_Params.prototype.initDefaults_ = function() {
  };
  Remoter_EstimateTransmissionCapacity_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Remoter_EstimateTransmissionCapacity_Params.generate = function(generator_) {
    var generated = new Remoter_EstimateTransmissionCapacity_Params;
    return generated;
  };

  Remoter_EstimateTransmissionCapacity_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Remoter_EstimateTransmissionCapacity_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Remoter_EstimateTransmissionCapacity_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Remoter_EstimateTransmissionCapacity_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Remoter_EstimateTransmissionCapacity_Params.validate = function(messageValidator, offset) {
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

  Remoter_EstimateTransmissionCapacity_Params.encodedSize = codec.kStructHeaderSize + 0;

  Remoter_EstimateTransmissionCapacity_Params.decode = function(decoder) {
    var packed;
    var val = new Remoter_EstimateTransmissionCapacity_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Remoter_EstimateTransmissionCapacity_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Remoter_EstimateTransmissionCapacity_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Remoter_EstimateTransmissionCapacity_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Remoter_EstimateTransmissionCapacity_ResponseParams.prototype.initDefaults_ = function() {
    this.rate = 0;
  };
  Remoter_EstimateTransmissionCapacity_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Remoter_EstimateTransmissionCapacity_ResponseParams.generate = function(generator_) {
    var generated = new Remoter_EstimateTransmissionCapacity_ResponseParams;
    generated.rate = generator_.generateDouble();
    return generated;
  };

  Remoter_EstimateTransmissionCapacity_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rate = mutator_.mutateDouble(this.rate);
    }
    return this;
  };
  Remoter_EstimateTransmissionCapacity_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Remoter_EstimateTransmissionCapacity_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Remoter_EstimateTransmissionCapacity_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Remoter_EstimateTransmissionCapacity_ResponseParams.validate = function(messageValidator, offset) {
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

  Remoter_EstimateTransmissionCapacity_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Remoter_EstimateTransmissionCapacity_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Remoter_EstimateTransmissionCapacity_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rate = decoder.decodeStruct(codec.Double);
    return val;
  };

  Remoter_EstimateTransmissionCapacity_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Remoter_EstimateTransmissionCapacity_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.rate);
  };
  function RemotingSource_OnSinkAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingSource_OnSinkAvailable_Params.prototype.initDefaults_ = function() {
    this.metadata = null;
  };
  RemotingSource_OnSinkAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingSource_OnSinkAvailable_Params.generate = function(generator_) {
    var generated = new RemotingSource_OnSinkAvailable_Params;
    generated.metadata = generator_.generateStruct(media.mojom.RemotingSinkMetadata, false);
    return generated;
  };

  RemotingSource_OnSinkAvailable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(media.mojom.RemotingSinkMetadata, false);
    }
    return this;
  };
  RemotingSource_OnSinkAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingSource_OnSinkAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingSource_OnSinkAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingSource_OnSinkAvailable_Params.validate = function(messageValidator, offset) {
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


    // validate RemotingSource_OnSinkAvailable_Params.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, remoting_common$.RemotingSinkMetadata, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemotingSource_OnSinkAvailable_Params.encodedSize = codec.kStructHeaderSize + 8;

  RemotingSource_OnSinkAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingSource_OnSinkAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metadata = decoder.decodeStructPointer(remoting_common$.RemotingSinkMetadata);
    return val;
  };

  RemotingSource_OnSinkAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingSource_OnSinkAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(remoting_common$.RemotingSinkMetadata, val.metadata);
  };
  function RemotingSource_OnSinkGone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingSource_OnSinkGone_Params.prototype.initDefaults_ = function() {
  };
  RemotingSource_OnSinkGone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingSource_OnSinkGone_Params.generate = function(generator_) {
    var generated = new RemotingSource_OnSinkGone_Params;
    return generated;
  };

  RemotingSource_OnSinkGone_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RemotingSource_OnSinkGone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingSource_OnSinkGone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingSource_OnSinkGone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingSource_OnSinkGone_Params.validate = function(messageValidator, offset) {
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

  RemotingSource_OnSinkGone_Params.encodedSize = codec.kStructHeaderSize + 0;

  RemotingSource_OnSinkGone_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingSource_OnSinkGone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RemotingSource_OnSinkGone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingSource_OnSinkGone_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RemotingSource_OnStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingSource_OnStarted_Params.prototype.initDefaults_ = function() {
  };
  RemotingSource_OnStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingSource_OnStarted_Params.generate = function(generator_) {
    var generated = new RemotingSource_OnStarted_Params;
    return generated;
  };

  RemotingSource_OnStarted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RemotingSource_OnStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingSource_OnStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingSource_OnStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingSource_OnStarted_Params.validate = function(messageValidator, offset) {
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

  RemotingSource_OnStarted_Params.encodedSize = codec.kStructHeaderSize + 0;

  RemotingSource_OnStarted_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingSource_OnStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RemotingSource_OnStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingSource_OnStarted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RemotingSource_OnStartFailed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingSource_OnStartFailed_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  RemotingSource_OnStartFailed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingSource_OnStartFailed_Params.generate = function(generator_) {
    var generated = new RemotingSource_OnStartFailed_Params;
    generated.reason = generator_.generateEnum(0, 2);
    return generated;
  };

  RemotingSource_OnStartFailed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 2);
    }
    return this;
  };
  RemotingSource_OnStartFailed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingSource_OnStartFailed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingSource_OnStartFailed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingSource_OnStartFailed_Params.validate = function(messageValidator, offset) {
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


    // validate RemotingSource_OnStartFailed_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, remoting_common$.RemotingStartFailReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemotingSource_OnStartFailed_Params.encodedSize = codec.kStructHeaderSize + 8;

  RemotingSource_OnStartFailed_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingSource_OnStartFailed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RemotingSource_OnStartFailed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingSource_OnStartFailed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RemotingSource_OnMessageFromSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingSource_OnMessageFromSink_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  RemotingSource_OnMessageFromSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingSource_OnMessageFromSink_Params.generate = function(generator_) {
    var generated = new RemotingSource_OnMessageFromSink_Params;
    generated.message = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  RemotingSource_OnMessageFromSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateArray(this.message, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  RemotingSource_OnMessageFromSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingSource_OnMessageFromSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingSource_OnMessageFromSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingSource_OnMessageFromSink_Params.validate = function(messageValidator, offset) {
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


    // validate RemotingSource_OnMessageFromSink_Params.message
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemotingSource_OnMessageFromSink_Params.encodedSize = codec.kStructHeaderSize + 8;

  RemotingSource_OnMessageFromSink_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingSource_OnMessageFromSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  RemotingSource_OnMessageFromSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingSource_OnMessageFromSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.message);
  };
  function RemotingSource_OnStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemotingSource_OnStopped_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  RemotingSource_OnStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemotingSource_OnStopped_Params.generate = function(generator_) {
    var generated = new RemotingSource_OnStopped_Params;
    generated.reason = generator_.generateEnum(0, 7);
    return generated;
  };

  RemotingSource_OnStopped_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 7);
    }
    return this;
  };
  RemotingSource_OnStopped_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemotingSource_OnStopped_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemotingSource_OnStopped_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemotingSource_OnStopped_Params.validate = function(messageValidator, offset) {
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


    // validate RemotingSource_OnStopped_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, remoting_common$.RemotingStopReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemotingSource_OnStopped_Params.encodedSize = codec.kStructHeaderSize + 8;

  RemotingSource_OnStopped_Params.decode = function(decoder) {
    var packed;
    var val = new RemotingSource_OnStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RemotingSource_OnStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemotingSource_OnStopped_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kRemoterFactory_Create_Name = 223331420;

  function RemoterFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RemoterFactory,
                                                   handleOrPtrInfo);
  }

  function RemoterFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RemoterFactory, associatedInterfacePtrInfo);
  }

  RemoterFactoryAssociatedPtr.prototype =
      Object.create(RemoterFactoryPtr.prototype);
  RemoterFactoryAssociatedPtr.prototype.constructor =
      RemoterFactoryAssociatedPtr;

  function RemoterFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  RemoterFactoryPtr.prototype.create = function() {
    return RemoterFactoryProxy.prototype.create
        .apply(this.ptr.getProxy(), arguments);
  };

  RemoterFactoryProxy.prototype.create = function(source, remoter) {
    var params_ = new RemoterFactory_Create_Params();
    params_.source = source;
    params_.remoter = remoter;
    var builder = new codec.MessageV0Builder(
        kRemoterFactory_Create_Name,
        codec.align(RemoterFactory_Create_Params.encodedSize));
    builder.encodeStruct(RemoterFactory_Create_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RemoterFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  RemoterFactoryStub.prototype.create = function(source, remoter) {
    return this.delegate_ && this.delegate_.create && this.delegate_.create(source, remoter);
  }

  RemoterFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRemoterFactory_Create_Name:
      var params = reader.decodeStruct(RemoterFactory_Create_Params);
      this.create(params.source, params.remoter);
      return true;
    default:
      return false;
    }
  };

  RemoterFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRemoterFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRemoterFactory_Create_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemoterFactory_Create_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRemoterFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RemoterFactory = {
    name: 'media.mojom.RemoterFactory',
    kVersion: 0,
    ptrClass: RemoterFactoryPtr,
    proxyClass: RemoterFactoryProxy,
    stubClass: RemoterFactoryStub,
    validateRequest: validateRemoterFactoryRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/remoting.mojom',
    fuzzMethods: {
      create: {
        params: RemoterFactory_Create_Params,
      },
    },
  };
  RemoterFactoryStub.prototype.validator = validateRemoterFactoryRequest;
  RemoterFactoryProxy.prototype.validator = null;
  var kRemotingDataStreamSender_SendFrame_Name = 125716312;
  var kRemotingDataStreamSender_CancelInFlightData_Name = 1950198336;

  function RemotingDataStreamSenderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RemotingDataStreamSender,
                                                   handleOrPtrInfo);
  }

  function RemotingDataStreamSenderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RemotingDataStreamSender, associatedInterfacePtrInfo);
  }

  RemotingDataStreamSenderAssociatedPtr.prototype =
      Object.create(RemotingDataStreamSenderPtr.prototype);
  RemotingDataStreamSenderAssociatedPtr.prototype.constructor =
      RemotingDataStreamSenderAssociatedPtr;

  function RemotingDataStreamSenderProxy(receiver) {
    this.receiver_ = receiver;
  }
  RemotingDataStreamSenderPtr.prototype.sendFrame = function() {
    return RemotingDataStreamSenderProxy.prototype.sendFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingDataStreamSenderProxy.prototype.sendFrame = function(frameSize) {
    var params_ = new RemotingDataStreamSender_SendFrame_Params();
    params_.frameSize = frameSize;
    var builder = new codec.MessageV0Builder(
        kRemotingDataStreamSender_SendFrame_Name,
        codec.align(RemotingDataStreamSender_SendFrame_Params.encodedSize));
    builder.encodeStruct(RemotingDataStreamSender_SendFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemotingDataStreamSenderPtr.prototype.cancelInFlightData = function() {
    return RemotingDataStreamSenderProxy.prototype.cancelInFlightData
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingDataStreamSenderProxy.prototype.cancelInFlightData = function() {
    var params_ = new RemotingDataStreamSender_CancelInFlightData_Params();
    var builder = new codec.MessageV0Builder(
        kRemotingDataStreamSender_CancelInFlightData_Name,
        codec.align(RemotingDataStreamSender_CancelInFlightData_Params.encodedSize));
    builder.encodeStruct(RemotingDataStreamSender_CancelInFlightData_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RemotingDataStreamSenderStub(delegate) {
    this.delegate_ = delegate;
  }
  RemotingDataStreamSenderStub.prototype.sendFrame = function(frameSize) {
    return this.delegate_ && this.delegate_.sendFrame && this.delegate_.sendFrame(frameSize);
  }
  RemotingDataStreamSenderStub.prototype.cancelInFlightData = function() {
    return this.delegate_ && this.delegate_.cancelInFlightData && this.delegate_.cancelInFlightData();
  }

  RemotingDataStreamSenderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRemotingDataStreamSender_SendFrame_Name:
      var params = reader.decodeStruct(RemotingDataStreamSender_SendFrame_Params);
      this.sendFrame(params.frameSize);
      return true;
    case kRemotingDataStreamSender_CancelInFlightData_Name:
      var params = reader.decodeStruct(RemotingDataStreamSender_CancelInFlightData_Params);
      this.cancelInFlightData();
      return true;
    default:
      return false;
    }
  };

  RemotingDataStreamSenderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRemotingDataStreamSenderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRemotingDataStreamSender_SendFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingDataStreamSender_SendFrame_Params;
      break;
      case kRemotingDataStreamSender_CancelInFlightData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingDataStreamSender_CancelInFlightData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRemotingDataStreamSenderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RemotingDataStreamSender = {
    name: 'media.mojom.RemotingDataStreamSender',
    kVersion: 0,
    ptrClass: RemotingDataStreamSenderPtr,
    proxyClass: RemotingDataStreamSenderProxy,
    stubClass: RemotingDataStreamSenderStub,
    validateRequest: validateRemotingDataStreamSenderRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/remoting.mojom',
    fuzzMethods: {
      sendFrame: {
        params: RemotingDataStreamSender_SendFrame_Params,
      },
      cancelInFlightData: {
        params: RemotingDataStreamSender_CancelInFlightData_Params,
      },
    },
  };
  RemotingDataStreamSenderStub.prototype.validator = validateRemotingDataStreamSenderRequest;
  RemotingDataStreamSenderProxy.prototype.validator = null;
  var kRemoter_Start_Name = 1978931199;
  var kRemoter_StartDataStreams_Name = 902132579;
  var kRemoter_Stop_Name = 1713261963;
  var kRemoter_SendMessageToSink_Name = 188095499;
  var kRemoter_EstimateTransmissionCapacity_Name = 1106052443;

  function RemoterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Remoter,
                                                   handleOrPtrInfo);
  }

  function RemoterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Remoter, associatedInterfacePtrInfo);
  }

  RemoterAssociatedPtr.prototype =
      Object.create(RemoterPtr.prototype);
  RemoterAssociatedPtr.prototype.constructor =
      RemoterAssociatedPtr;

  function RemoterProxy(receiver) {
    this.receiver_ = receiver;
  }
  RemoterPtr.prototype.start = function() {
    return RemoterProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  RemoterProxy.prototype.start = function() {
    var params_ = new Remoter_Start_Params();
    var builder = new codec.MessageV0Builder(
        kRemoter_Start_Name,
        codec.align(Remoter_Start_Params.encodedSize));
    builder.encodeStruct(Remoter_Start_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemoterPtr.prototype.startDataStreams = function() {
    return RemoterProxy.prototype.startDataStreams
        .apply(this.ptr.getProxy(), arguments);
  };

  RemoterProxy.prototype.startDataStreams = function(audioPipe, videoPipe, audioSender, videoSender) {
    var params_ = new Remoter_StartDataStreams_Params();
    params_.audioPipe = audioPipe;
    params_.videoPipe = videoPipe;
    params_.audioSender = audioSender;
    params_.videoSender = videoSender;
    var builder = new codec.MessageV0Builder(
        kRemoter_StartDataStreams_Name,
        codec.align(Remoter_StartDataStreams_Params.encodedSize));
    builder.encodeStruct(Remoter_StartDataStreams_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemoterPtr.prototype.stop = function() {
    return RemoterProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  RemoterProxy.prototype.stop = function(reason) {
    var params_ = new Remoter_Stop_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kRemoter_Stop_Name,
        codec.align(Remoter_Stop_Params.encodedSize));
    builder.encodeStruct(Remoter_Stop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemoterPtr.prototype.sendMessageToSink = function() {
    return RemoterProxy.prototype.sendMessageToSink
        .apply(this.ptr.getProxy(), arguments);
  };

  RemoterProxy.prototype.sendMessageToSink = function(message) {
    var params_ = new Remoter_SendMessageToSink_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kRemoter_SendMessageToSink_Name,
        codec.align(Remoter_SendMessageToSink_Params.encodedSize));
    builder.encodeStruct(Remoter_SendMessageToSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemoterPtr.prototype.estimateTransmissionCapacity = function() {
    return RemoterProxy.prototype.estimateTransmissionCapacity
        .apply(this.ptr.getProxy(), arguments);
  };

  RemoterProxy.prototype.estimateTransmissionCapacity = function() {
    var params_ = new Remoter_EstimateTransmissionCapacity_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRemoter_EstimateTransmissionCapacity_Name,
          codec.align(Remoter_EstimateTransmissionCapacity_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Remoter_EstimateTransmissionCapacity_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Remoter_EstimateTransmissionCapacity_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function RemoterStub(delegate) {
    this.delegate_ = delegate;
  }
  RemoterStub.prototype.start = function() {
    return this.delegate_ && this.delegate_.start && this.delegate_.start();
  }
  RemoterStub.prototype.startDataStreams = function(audioPipe, videoPipe, audioSender, videoSender) {
    return this.delegate_ && this.delegate_.startDataStreams && this.delegate_.startDataStreams(audioPipe, videoPipe, audioSender, videoSender);
  }
  RemoterStub.prototype.stop = function(reason) {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop(reason);
  }
  RemoterStub.prototype.sendMessageToSink = function(message) {
    return this.delegate_ && this.delegate_.sendMessageToSink && this.delegate_.sendMessageToSink(message);
  }
  RemoterStub.prototype.estimateTransmissionCapacity = function() {
    return this.delegate_ && this.delegate_.estimateTransmissionCapacity && this.delegate_.estimateTransmissionCapacity();
  }

  RemoterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRemoter_Start_Name:
      var params = reader.decodeStruct(Remoter_Start_Params);
      this.start();
      return true;
    case kRemoter_StartDataStreams_Name:
      var params = reader.decodeStruct(Remoter_StartDataStreams_Params);
      this.startDataStreams(params.audioPipe, params.videoPipe, params.audioSender, params.videoSender);
      return true;
    case kRemoter_Stop_Name:
      var params = reader.decodeStruct(Remoter_Stop_Params);
      this.stop(params.reason);
      return true;
    case kRemoter_SendMessageToSink_Name:
      var params = reader.decodeStruct(Remoter_SendMessageToSink_Params);
      this.sendMessageToSink(params.message);
      return true;
    default:
      return false;
    }
  };

  RemoterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRemoter_EstimateTransmissionCapacity_Name:
      var params = reader.decodeStruct(Remoter_EstimateTransmissionCapacity_Params);
      this.estimateTransmissionCapacity().then(function(response) {
        var responseParams =
            new Remoter_EstimateTransmissionCapacity_ResponseParams();
        responseParams.rate = response.rate;
        var builder = new codec.MessageV1Builder(
            kRemoter_EstimateTransmissionCapacity_Name,
            codec.align(Remoter_EstimateTransmissionCapacity_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Remoter_EstimateTransmissionCapacity_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateRemoterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRemoter_Start_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Remoter_Start_Params;
      break;
      case kRemoter_StartDataStreams_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Remoter_StartDataStreams_Params;
      break;
      case kRemoter_Stop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Remoter_Stop_Params;
      break;
      case kRemoter_SendMessageToSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Remoter_SendMessageToSink_Params;
      break;
      case kRemoter_EstimateTransmissionCapacity_Name:
        if (message.expectsResponse())
          paramsClass = Remoter_EstimateTransmissionCapacity_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRemoterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRemoter_EstimateTransmissionCapacity_Name:
        if (message.isResponse())
          paramsClass = Remoter_EstimateTransmissionCapacity_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Remoter = {
    name: 'media.mojom.Remoter',
    kVersion: 0,
    ptrClass: RemoterPtr,
    proxyClass: RemoterProxy,
    stubClass: RemoterStub,
    validateRequest: validateRemoterRequest,
    validateResponse: validateRemoterResponse,
    mojomId: 'media/mojo/interfaces/remoting.mojom',
    fuzzMethods: {
      start: {
        params: Remoter_Start_Params,
      },
      startDataStreams: {
        params: Remoter_StartDataStreams_Params,
      },
      stop: {
        params: Remoter_Stop_Params,
      },
      sendMessageToSink: {
        params: Remoter_SendMessageToSink_Params,
      },
      estimateTransmissionCapacity: {
        params: Remoter_EstimateTransmissionCapacity_Params,
      },
    },
  };
  RemoterStub.prototype.validator = validateRemoterRequest;
  RemoterProxy.prototype.validator = validateRemoterResponse;
  var kRemotingSource_OnSinkAvailable_Name = 1135434350;
  var kRemotingSource_OnSinkGone_Name = 872908775;
  var kRemotingSource_OnStarted_Name = 2066516917;
  var kRemotingSource_OnStartFailed_Name = 1515455899;
  var kRemotingSource_OnMessageFromSink_Name = 307106264;
  var kRemotingSource_OnStopped_Name = 336593123;

  function RemotingSourcePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RemotingSource,
                                                   handleOrPtrInfo);
  }

  function RemotingSourceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RemotingSource, associatedInterfacePtrInfo);
  }

  RemotingSourceAssociatedPtr.prototype =
      Object.create(RemotingSourcePtr.prototype);
  RemotingSourceAssociatedPtr.prototype.constructor =
      RemotingSourceAssociatedPtr;

  function RemotingSourceProxy(receiver) {
    this.receiver_ = receiver;
  }
  RemotingSourcePtr.prototype.onSinkAvailable = function() {
    return RemotingSourceProxy.prototype.onSinkAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingSourceProxy.prototype.onSinkAvailable = function(metadata) {
    var params_ = new RemotingSource_OnSinkAvailable_Params();
    params_.metadata = metadata;
    var builder = new codec.MessageV0Builder(
        kRemotingSource_OnSinkAvailable_Name,
        codec.align(RemotingSource_OnSinkAvailable_Params.encodedSize));
    builder.encodeStruct(RemotingSource_OnSinkAvailable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemotingSourcePtr.prototype.onSinkGone = function() {
    return RemotingSourceProxy.prototype.onSinkGone
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingSourceProxy.prototype.onSinkGone = function() {
    var params_ = new RemotingSource_OnSinkGone_Params();
    var builder = new codec.MessageV0Builder(
        kRemotingSource_OnSinkGone_Name,
        codec.align(RemotingSource_OnSinkGone_Params.encodedSize));
    builder.encodeStruct(RemotingSource_OnSinkGone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemotingSourcePtr.prototype.onStarted = function() {
    return RemotingSourceProxy.prototype.onStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingSourceProxy.prototype.onStarted = function() {
    var params_ = new RemotingSource_OnStarted_Params();
    var builder = new codec.MessageV0Builder(
        kRemotingSource_OnStarted_Name,
        codec.align(RemotingSource_OnStarted_Params.encodedSize));
    builder.encodeStruct(RemotingSource_OnStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemotingSourcePtr.prototype.onStartFailed = function() {
    return RemotingSourceProxy.prototype.onStartFailed
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingSourceProxy.prototype.onStartFailed = function(reason) {
    var params_ = new RemotingSource_OnStartFailed_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kRemotingSource_OnStartFailed_Name,
        codec.align(RemotingSource_OnStartFailed_Params.encodedSize));
    builder.encodeStruct(RemotingSource_OnStartFailed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemotingSourcePtr.prototype.onMessageFromSink = function() {
    return RemotingSourceProxy.prototype.onMessageFromSink
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingSourceProxy.prototype.onMessageFromSink = function(message) {
    var params_ = new RemotingSource_OnMessageFromSink_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kRemotingSource_OnMessageFromSink_Name,
        codec.align(RemotingSource_OnMessageFromSink_Params.encodedSize));
    builder.encodeStruct(RemotingSource_OnMessageFromSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemotingSourcePtr.prototype.onStopped = function() {
    return RemotingSourceProxy.prototype.onStopped
        .apply(this.ptr.getProxy(), arguments);
  };

  RemotingSourceProxy.prototype.onStopped = function(reason) {
    var params_ = new RemotingSource_OnStopped_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kRemotingSource_OnStopped_Name,
        codec.align(RemotingSource_OnStopped_Params.encodedSize));
    builder.encodeStruct(RemotingSource_OnStopped_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RemotingSourceStub(delegate) {
    this.delegate_ = delegate;
  }
  RemotingSourceStub.prototype.onSinkAvailable = function(metadata) {
    return this.delegate_ && this.delegate_.onSinkAvailable && this.delegate_.onSinkAvailable(metadata);
  }
  RemotingSourceStub.prototype.onSinkGone = function() {
    return this.delegate_ && this.delegate_.onSinkGone && this.delegate_.onSinkGone();
  }
  RemotingSourceStub.prototype.onStarted = function() {
    return this.delegate_ && this.delegate_.onStarted && this.delegate_.onStarted();
  }
  RemotingSourceStub.prototype.onStartFailed = function(reason) {
    return this.delegate_ && this.delegate_.onStartFailed && this.delegate_.onStartFailed(reason);
  }
  RemotingSourceStub.prototype.onMessageFromSink = function(message) {
    return this.delegate_ && this.delegate_.onMessageFromSink && this.delegate_.onMessageFromSink(message);
  }
  RemotingSourceStub.prototype.onStopped = function(reason) {
    return this.delegate_ && this.delegate_.onStopped && this.delegate_.onStopped(reason);
  }

  RemotingSourceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRemotingSource_OnSinkAvailable_Name:
      var params = reader.decodeStruct(RemotingSource_OnSinkAvailable_Params);
      this.onSinkAvailable(params.metadata);
      return true;
    case kRemotingSource_OnSinkGone_Name:
      var params = reader.decodeStruct(RemotingSource_OnSinkGone_Params);
      this.onSinkGone();
      return true;
    case kRemotingSource_OnStarted_Name:
      var params = reader.decodeStruct(RemotingSource_OnStarted_Params);
      this.onStarted();
      return true;
    case kRemotingSource_OnStartFailed_Name:
      var params = reader.decodeStruct(RemotingSource_OnStartFailed_Params);
      this.onStartFailed(params.reason);
      return true;
    case kRemotingSource_OnMessageFromSink_Name:
      var params = reader.decodeStruct(RemotingSource_OnMessageFromSink_Params);
      this.onMessageFromSink(params.message);
      return true;
    case kRemotingSource_OnStopped_Name:
      var params = reader.decodeStruct(RemotingSource_OnStopped_Params);
      this.onStopped(params.reason);
      return true;
    default:
      return false;
    }
  };

  RemotingSourceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRemotingSourceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRemotingSource_OnSinkAvailable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingSource_OnSinkAvailable_Params;
      break;
      case kRemotingSource_OnSinkGone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingSource_OnSinkGone_Params;
      break;
      case kRemotingSource_OnStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingSource_OnStarted_Params;
      break;
      case kRemotingSource_OnStartFailed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingSource_OnStartFailed_Params;
      break;
      case kRemotingSource_OnMessageFromSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingSource_OnMessageFromSink_Params;
      break;
      case kRemotingSource_OnStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemotingSource_OnStopped_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRemotingSourceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RemotingSource = {
    name: 'media.mojom.RemotingSource',
    kVersion: 0,
    ptrClass: RemotingSourcePtr,
    proxyClass: RemotingSourceProxy,
    stubClass: RemotingSourceStub,
    validateRequest: validateRemotingSourceRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/remoting.mojom',
    fuzzMethods: {
      onSinkAvailable: {
        params: RemotingSource_OnSinkAvailable_Params,
      },
      onSinkGone: {
        params: RemotingSource_OnSinkGone_Params,
      },
      onStarted: {
        params: RemotingSource_OnStarted_Params,
      },
      onStartFailed: {
        params: RemotingSource_OnStartFailed_Params,
      },
      onMessageFromSink: {
        params: RemotingSource_OnMessageFromSink_Params,
      },
      onStopped: {
        params: RemotingSource_OnStopped_Params,
      },
    },
  };
  RemotingSourceStub.prototype.validator = validateRemotingSourceRequest;
  RemotingSourceProxy.prototype.validator = null;
  exports.RemoterFactory = RemoterFactory;
  exports.RemoterFactoryPtr = RemoterFactoryPtr;
  exports.RemoterFactoryAssociatedPtr = RemoterFactoryAssociatedPtr;
  exports.RemotingDataStreamSender = RemotingDataStreamSender;
  exports.RemotingDataStreamSenderPtr = RemotingDataStreamSenderPtr;
  exports.RemotingDataStreamSenderAssociatedPtr = RemotingDataStreamSenderAssociatedPtr;
  exports.Remoter = Remoter;
  exports.RemoterPtr = RemoterPtr;
  exports.RemoterAssociatedPtr = RemoterAssociatedPtr;
  exports.RemotingSource = RemotingSource;
  exports.RemotingSourcePtr = RemotingSourcePtr;
  exports.RemotingSourceAssociatedPtr = RemotingSourceAssociatedPtr;
})();