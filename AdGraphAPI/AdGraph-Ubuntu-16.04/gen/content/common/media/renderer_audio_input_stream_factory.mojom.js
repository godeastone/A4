// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/media/renderer_audio_input_stream_factory.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var audio_data_pipe$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_data_pipe.mojom', '../../../media/mojo/interfaces/audio_data_pipe.mojom.js');
  }
  var audio_input_stream$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_input_stream.mojom', '../../../media/mojo/interfaces/audio_input_stream.mojom.js');
  }
  var audio_parameters$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_parameters.mojom', '../../../media/mojo/interfaces/audio_parameters.mojom.js');
  }
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', '../../../media/mojo/interfaces/media_types.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }



  function RendererAudioInputStreamFactory_CreateStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererAudioInputStreamFactory_CreateStream_Params.prototype.initDefaults_ = function() {
    this.client = new RendererAudioInputStreamFactoryClientPtr();
    this.sessionId = 0;
    this.automaticGainControl = false;
    this.params = null;
    this.sharedMemoryCount = 0;
  };
  RendererAudioInputStreamFactory_CreateStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererAudioInputStreamFactory_CreateStream_Params.generate = function(generator_) {
    var generated = new RendererAudioInputStreamFactory_CreateStream_Params;
    generated.client = generator_.generateInterface("content.mojom.RendererAudioInputStreamFactoryClient", false);
    generated.sessionId = generator_.generateInt32();
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, false);
    generated.automaticGainControl = generator_.generateBool();
    generated.sharedMemoryCount = generator_.generateUint32();
    return generated;
  };

  RendererAudioInputStreamFactory_CreateStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "content.mojom.RendererAudioInputStreamFactoryClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateInt32(this.sessionId);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    if (mutator_.chooseMutateField()) {
      this.automaticGainControl = mutator_.mutateBool(this.automaticGainControl);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedMemoryCount = mutator_.mutateUint32(this.sharedMemoryCount);
    }
    return this;
  };
  RendererAudioInputStreamFactory_CreateStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.RendererAudioInputStreamFactoryClientPtr"]);
    }
    return handles;
  };

  RendererAudioInputStreamFactory_CreateStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererAudioInputStreamFactory_CreateStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  RendererAudioInputStreamFactory_CreateStream_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererAudioInputStreamFactory_CreateStream_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RendererAudioInputStreamFactory_CreateStream_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  RendererAudioInputStreamFactory_CreateStream_Params.encodedSize = codec.kStructHeaderSize + 32;

  RendererAudioInputStreamFactory_CreateStream_Params.decode = function(decoder) {
    var packed;
    var val = new RendererAudioInputStreamFactory_CreateStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(RendererAudioInputStreamFactoryClientPtr));
    val.sessionId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.automaticGainControl = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    val.sharedMemoryCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererAudioInputStreamFactory_CreateStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererAudioInputStreamFactory_CreateStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(RendererAudioInputStreamFactoryClientPtr), val.client);
    encoder.encodeStruct(codec.Int32, val.sessionId);
    packed = 0;
    packed |= (val.automaticGainControl & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
    encoder.encodeStruct(codec.Uint32, val.sharedMemoryCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.prototype.initDefaults_ = function() {
    this.inputStreamId = null;
    this.outputDeviceId = null;
  };
  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.generate = function(generator_) {
    var generated = new RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params;
    generated.inputStreamId = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.outputDeviceId = generator_.generateString(false);
    return generated;
  };

  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputStreamId = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputDeviceId = mutator_.mutateString(this.outputDeviceId, false);
    }
    return this;
  };
  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.validate = function(messageValidator, offset) {
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


    // validate RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.inputStreamId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.outputDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.encodedSize = codec.kStructHeaderSize + 16;

  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.decode = function(decoder) {
    var packed;
    var val = new RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputStreamId = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.outputDeviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.inputStreamId);
    encoder.encodeStruct(codec.String, val.outputDeviceId);
  };
  function RendererAudioInputStreamFactoryClient_StreamCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererAudioInputStreamFactoryClient_StreamCreated_Params.prototype.initDefaults_ = function() {
    this.stream = new audio_input_stream$.AudioInputStreamPtr();
    this.clientRequest = new bindings.InterfaceRequest();
    this.initiallyMuted = false;
    this.dataPipe = null;
    this.streamId = null;
  };
  RendererAudioInputStreamFactoryClient_StreamCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererAudioInputStreamFactoryClient_StreamCreated_Params.generate = function(generator_) {
    var generated = new RendererAudioInputStreamFactoryClient_StreamCreated_Params;
    generated.stream = generator_.generateInterface("media.mojom.AudioInputStream", false);
    generated.clientRequest = generator_.generateInterfaceRequest("media.mojom.AudioInputStreamClient", false);
    generated.dataPipe = generator_.generateStruct(media.mojom.AudioDataPipe, false);
    generated.initiallyMuted = generator_.generateBool();
    generated.streamId = generator_.generateStruct(mojoBase.mojom.UnguessableToken, true);
    return generated;
  };

  RendererAudioInputStreamFactoryClient_StreamCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateInterface(this.stream, "media.mojom.AudioInputStream", false);
    }
    if (mutator_.chooseMutateField()) {
      this.clientRequest = mutator_.mutateInterfaceRequest(this.clientRequest, "media.mojom.AudioInputStreamClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.dataPipe = mutator_.mutateStruct(media.mojom.AudioDataPipe, false);
    }
    if (mutator_.chooseMutateField()) {
      this.initiallyMuted = mutator_.mutateBool(this.initiallyMuted);
    }
    if (mutator_.chooseMutateField()) {
      this.streamId = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, true);
    }
    return this;
  };
  RendererAudioInputStreamFactoryClient_StreamCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamPtr"]);
    }
    if (this.clientRequest !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamClientRequest"]);
    }
    if (this.dataPipe !== null) {
      Array.prototype.push.apply(handles, this.dataPipe.getHandleDeps());
    }
    return handles;
  };

  RendererAudioInputStreamFactoryClient_StreamCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererAudioInputStreamFactoryClient_StreamCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    this.clientRequest = handles[idx++];;
    idx = this.dataPipe.setHandlesInternal_(handles, idx);
    return idx;
  };

  RendererAudioInputStreamFactoryClient_StreamCreated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererAudioInputStreamFactoryClient_StreamCreated_Params.stream
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererAudioInputStreamFactoryClient_StreamCreated_Params.clientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererAudioInputStreamFactoryClient_StreamCreated_Params.dataPipe
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, audio_data_pipe$.AudioDataPipe, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RendererAudioInputStreamFactoryClient_StreamCreated_Params.streamId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, unguessable_token$.UnguessableToken, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererAudioInputStreamFactoryClient_StreamCreated_Params.encodedSize = codec.kStructHeaderSize + 32;

  RendererAudioInputStreamFactoryClient_StreamCreated_Params.decode = function(decoder) {
    var packed;
    var val = new RendererAudioInputStreamFactoryClient_StreamCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamPtr));
    val.clientRequest = decoder.decodeStruct(codec.InterfaceRequest);
    packed = decoder.readUint8();
    val.initiallyMuted = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dataPipe = decoder.decodeStructPointer(audio_data_pipe$.AudioDataPipe);
    val.streamId = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  RendererAudioInputStreamFactoryClient_StreamCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererAudioInputStreamFactoryClient_StreamCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamPtr), val.stream);
    encoder.encodeStruct(codec.InterfaceRequest, val.clientRequest);
    packed = 0;
    packed |= (val.initiallyMuted & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(audio_data_pipe$.AudioDataPipe, val.dataPipe);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.streamId);
  };
  var kRendererAudioInputStreamFactory_CreateStream_Name = 2121011958;
  var kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name = 582699031;

  function RendererAudioInputStreamFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RendererAudioInputStreamFactory,
                                                   handleOrPtrInfo);
  }

  function RendererAudioInputStreamFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RendererAudioInputStreamFactory, associatedInterfacePtrInfo);
  }

  RendererAudioInputStreamFactoryAssociatedPtr.prototype =
      Object.create(RendererAudioInputStreamFactoryPtr.prototype);
  RendererAudioInputStreamFactoryAssociatedPtr.prototype.constructor =
      RendererAudioInputStreamFactoryAssociatedPtr;

  function RendererAudioInputStreamFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererAudioInputStreamFactoryPtr.prototype.createStream = function() {
    return RendererAudioInputStreamFactoryProxy.prototype.createStream
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererAudioInputStreamFactoryProxy.prototype.createStream = function(client, sessionId, params, automaticGainControl, sharedMemoryCount) {
    var params_ = new RendererAudioInputStreamFactory_CreateStream_Params();
    params_.client = client;
    params_.sessionId = sessionId;
    params_.params = params;
    params_.automaticGainControl = automaticGainControl;
    params_.sharedMemoryCount = sharedMemoryCount;
    var builder = new codec.MessageV0Builder(
        kRendererAudioInputStreamFactory_CreateStream_Name,
        codec.align(RendererAudioInputStreamFactory_CreateStream_Params.encodedSize));
    builder.encodeStruct(RendererAudioInputStreamFactory_CreateStream_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererAudioInputStreamFactoryPtr.prototype.associateInputAndOutputForAec = function() {
    return RendererAudioInputStreamFactoryProxy.prototype.associateInputAndOutputForAec
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererAudioInputStreamFactoryProxy.prototype.associateInputAndOutputForAec = function(inputStreamId, outputDeviceId) {
    var params_ = new RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params();
    params_.inputStreamId = inputStreamId;
    params_.outputDeviceId = outputDeviceId;
    var builder = new codec.MessageV0Builder(
        kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name,
        codec.align(RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params.encodedSize));
    builder.encodeStruct(RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RendererAudioInputStreamFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererAudioInputStreamFactoryStub.prototype.createStream = function(client, sessionId, params, automaticGainControl, sharedMemoryCount) {
    return this.delegate_ && this.delegate_.createStream && this.delegate_.createStream(client, sessionId, params, automaticGainControl, sharedMemoryCount);
  }
  RendererAudioInputStreamFactoryStub.prototype.associateInputAndOutputForAec = function(inputStreamId, outputDeviceId) {
    return this.delegate_ && this.delegate_.associateInputAndOutputForAec && this.delegate_.associateInputAndOutputForAec(inputStreamId, outputDeviceId);
  }

  RendererAudioInputStreamFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererAudioInputStreamFactory_CreateStream_Name:
      var params = reader.decodeStruct(RendererAudioInputStreamFactory_CreateStream_Params);
      this.createStream(params.client, params.sessionId, params.params, params.automaticGainControl, params.sharedMemoryCount);
      return true;
    case kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name:
      var params = reader.decodeStruct(RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params);
      this.associateInputAndOutputForAec(params.inputStreamId, params.outputDeviceId);
      return true;
    default:
      return false;
    }
  };

  RendererAudioInputStreamFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRendererAudioInputStreamFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRendererAudioInputStreamFactory_CreateStream_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererAudioInputStreamFactory_CreateStream_Params;
      break;
      case kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererAudioInputStreamFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RendererAudioInputStreamFactory = {
    name: 'content.mojom.RendererAudioInputStreamFactory',
    kVersion: 0,
    ptrClass: RendererAudioInputStreamFactoryPtr,
    proxyClass: RendererAudioInputStreamFactoryProxy,
    stubClass: RendererAudioInputStreamFactoryStub,
    validateRequest: validateRendererAudioInputStreamFactoryRequest,
    validateResponse: null,
    mojomId: 'content/common/media/renderer_audio_input_stream_factory.mojom',
    fuzzMethods: {
      createStream: {
        params: RendererAudioInputStreamFactory_CreateStream_Params,
      },
      associateInputAndOutputForAec: {
        params: RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params,
      },
    },
  };
  RendererAudioInputStreamFactoryStub.prototype.validator = validateRendererAudioInputStreamFactoryRequest;
  RendererAudioInputStreamFactoryProxy.prototype.validator = null;
  var kRendererAudioInputStreamFactoryClient_StreamCreated_Name = 1796223778;

  function RendererAudioInputStreamFactoryClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RendererAudioInputStreamFactoryClient,
                                                   handleOrPtrInfo);
  }

  function RendererAudioInputStreamFactoryClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RendererAudioInputStreamFactoryClient, associatedInterfacePtrInfo);
  }

  RendererAudioInputStreamFactoryClientAssociatedPtr.prototype =
      Object.create(RendererAudioInputStreamFactoryClientPtr.prototype);
  RendererAudioInputStreamFactoryClientAssociatedPtr.prototype.constructor =
      RendererAudioInputStreamFactoryClientAssociatedPtr;

  function RendererAudioInputStreamFactoryClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererAudioInputStreamFactoryClientPtr.prototype.streamCreated = function() {
    return RendererAudioInputStreamFactoryClientProxy.prototype.streamCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererAudioInputStreamFactoryClientProxy.prototype.streamCreated = function(stream, clientRequest, dataPipe, initiallyMuted, streamId) {
    var params_ = new RendererAudioInputStreamFactoryClient_StreamCreated_Params();
    params_.stream = stream;
    params_.clientRequest = clientRequest;
    params_.dataPipe = dataPipe;
    params_.initiallyMuted = initiallyMuted;
    params_.streamId = streamId;
    var builder = new codec.MessageV0Builder(
        kRendererAudioInputStreamFactoryClient_StreamCreated_Name,
        codec.align(RendererAudioInputStreamFactoryClient_StreamCreated_Params.encodedSize));
    builder.encodeStruct(RendererAudioInputStreamFactoryClient_StreamCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RendererAudioInputStreamFactoryClientStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererAudioInputStreamFactoryClientStub.prototype.streamCreated = function(stream, clientRequest, dataPipe, initiallyMuted, streamId) {
    return this.delegate_ && this.delegate_.streamCreated && this.delegate_.streamCreated(stream, clientRequest, dataPipe, initiallyMuted, streamId);
  }

  RendererAudioInputStreamFactoryClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererAudioInputStreamFactoryClient_StreamCreated_Name:
      var params = reader.decodeStruct(RendererAudioInputStreamFactoryClient_StreamCreated_Params);
      this.streamCreated(params.stream, params.clientRequest, params.dataPipe, params.initiallyMuted, params.streamId);
      return true;
    default:
      return false;
    }
  };

  RendererAudioInputStreamFactoryClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRendererAudioInputStreamFactoryClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRendererAudioInputStreamFactoryClient_StreamCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererAudioInputStreamFactoryClient_StreamCreated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererAudioInputStreamFactoryClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RendererAudioInputStreamFactoryClient = {
    name: 'content.mojom.RendererAudioInputStreamFactoryClient',
    kVersion: 0,
    ptrClass: RendererAudioInputStreamFactoryClientPtr,
    proxyClass: RendererAudioInputStreamFactoryClientProxy,
    stubClass: RendererAudioInputStreamFactoryClientStub,
    validateRequest: validateRendererAudioInputStreamFactoryClientRequest,
    validateResponse: null,
    mojomId: 'content/common/media/renderer_audio_input_stream_factory.mojom',
    fuzzMethods: {
      streamCreated: {
        params: RendererAudioInputStreamFactoryClient_StreamCreated_Params,
      },
    },
  };
  RendererAudioInputStreamFactoryClientStub.prototype.validator = validateRendererAudioInputStreamFactoryClientRequest;
  RendererAudioInputStreamFactoryClientProxy.prototype.validator = null;
  exports.RendererAudioInputStreamFactory = RendererAudioInputStreamFactory;
  exports.RendererAudioInputStreamFactoryPtr = RendererAudioInputStreamFactoryPtr;
  exports.RendererAudioInputStreamFactoryAssociatedPtr = RendererAudioInputStreamFactoryAssociatedPtr;
  exports.RendererAudioInputStreamFactoryClient = RendererAudioInputStreamFactoryClient;
  exports.RendererAudioInputStreamFactoryClientPtr = RendererAudioInputStreamFactoryClientPtr;
  exports.RendererAudioInputStreamFactoryClientAssociatedPtr = RendererAudioInputStreamFactoryClientAssociatedPtr;
})();