// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/audio/public/mojom/stream_factory.mojom';
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
  var audio_data_pipe$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_data_pipe.mojom', '../../../../media/mojo/interfaces/audio_data_pipe.mojom.js');
  }
  var audio_input_stream$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_input_stream.mojom', '../../../../media/mojo/interfaces/audio_input_stream.mojom.js');
  }
  var audio_logging$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_logging.mojom', '../../../../media/mojo/interfaces/audio_logging.mojom.js');
  }
  var audio_output_stream$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_output_stream.mojom', '../../../../media/mojo/interfaces/audio_output_stream.mojom.js');
  }
  var audio_parameters$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_parameters.mojom', '../../../../media/mojo/interfaces/audio_parameters.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }



  function StreamFactory_CreateInputStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_CreateInputStream_Params.prototype.initDefaults_ = function() {
    this.stream = new bindings.InterfaceRequest();
    this.client = new audio_input_stream$.AudioInputStreamClientPtr();
    this.observer = new audio_input_stream$.AudioInputStreamObserverPtr();
    this.log = new audio_logging$.AudioLogPtr();
    this.sharedMemoryCount = 0;
    this.deviceId = null;
    this.params = null;
    this.enableAgc = false;
    this.keyPressCountBuffer = null;
  };
  StreamFactory_CreateInputStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_CreateInputStream_Params.generate = function(generator_) {
    var generated = new StreamFactory_CreateInputStream_Params;
    generated.stream = generator_.generateInterfaceRequest("media.mojom.AudioInputStream", false);
    generated.client = generator_.generateInterface("media.mojom.AudioInputStreamClient", false);
    generated.observer = generator_.generateInterface("media.mojom.AudioInputStreamObserver", true);
    generated.log = generator_.generateInterface("media.mojom.AudioLog", true);
    generated.deviceId = generator_.generateString(false);
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, false);
    generated.sharedMemoryCount = generator_.generateUint32();
    generated.enableAgc = generator_.generateBool();
    generated.keyPressCountBuffer = generator_.generateSharedBuffer(true);
    return generated;
  };

  StreamFactory_CreateInputStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateInterfaceRequest(this.stream, "media.mojom.AudioInputStream", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "media.mojom.AudioInputStreamClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "media.mojom.AudioInputStreamObserver", true);
    }
    if (mutator_.chooseMutateField()) {
      this.log = mutator_.mutateInterface(this.log, "media.mojom.AudioLog", true);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedMemoryCount = mutator_.mutateUint32(this.sharedMemoryCount);
    }
    if (mutator_.chooseMutateField()) {
      this.enableAgc = mutator_.mutateBool(this.enableAgc);
    }
    if (mutator_.chooseMutateField()) {
      this.keyPressCountBuffer = mutator_.mutateSharedBuffer(this.keyPressCountBuffer, true);
    }
    return this;
  };
  StreamFactory_CreateInputStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamClientPtr"]);
    }
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamObserverPtr"]);
    }
    if (this.log !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioLogPtr"]);
    }
    if (this.keyPressCountBuffer !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  StreamFactory_CreateInputStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_CreateInputStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    this.client = handles[idx++];;
    this.observer = handles[idx++];;
    this.log = handles[idx++];;
    this.keyPressCountBuffer = handles[idx++];;
    return idx;
  };

  StreamFactory_CreateInputStream_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateInputStream_Params.stream
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateInputStream_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateInputStream_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateInputStream_Params.log
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 20, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateInputStream_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateInputStream_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate StreamFactory_CreateInputStream_Params.keyPressCountBuffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 52, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_CreateInputStream_Params.encodedSize = codec.kStructHeaderSize + 56;

  StreamFactory_CreateInputStream_Params.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_CreateInputStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamClientPtr));
    val.observer = decoder.decodeStruct(new codec.NullableInterface(audio_input_stream$.AudioInputStreamObserverPtr));
    val.log = decoder.decodeStruct(new codec.NullableInterface(audio_logging$.AudioLogPtr));
    val.sharedMemoryCount = decoder.decodeStruct(codec.Uint32);
    val.deviceId = decoder.decodeStruct(codec.String);
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    packed = decoder.readUint8();
    val.enableAgc = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.keyPressCountBuffer = decoder.decodeStruct(codec.NullableHandle);
    return val;
  };

  StreamFactory_CreateInputStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_CreateInputStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.stream);
    encoder.encodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamClientPtr), val.client);
    encoder.encodeStruct(new codec.NullableInterface(audio_input_stream$.AudioInputStreamObserverPtr), val.observer);
    encoder.encodeStruct(new codec.NullableInterface(audio_logging$.AudioLogPtr), val.log);
    encoder.encodeStruct(codec.Uint32, val.sharedMemoryCount);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
    packed = 0;
    packed |= (val.enableAgc & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableHandle, val.keyPressCountBuffer);
  };
  function StreamFactory_CreateInputStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_CreateInputStream_ResponseParams.prototype.initDefaults_ = function() {
    this.dataPipe = null;
    this.initiallyMuted = false;
    this.streamId = null;
  };
  StreamFactory_CreateInputStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_CreateInputStream_ResponseParams.generate = function(generator_) {
    var generated = new StreamFactory_CreateInputStream_ResponseParams;
    generated.dataPipe = generator_.generateStruct(media.mojom.AudioDataPipe, true);
    generated.initiallyMuted = generator_.generateBool();
    generated.streamId = generator_.generateStruct(mojoBase.mojom.UnguessableToken, true);
    return generated;
  };

  StreamFactory_CreateInputStream_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dataPipe = mutator_.mutateStruct(media.mojom.AudioDataPipe, true);
    }
    if (mutator_.chooseMutateField()) {
      this.initiallyMuted = mutator_.mutateBool(this.initiallyMuted);
    }
    if (mutator_.chooseMutateField()) {
      this.streamId = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, true);
    }
    return this;
  };
  StreamFactory_CreateInputStream_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dataPipe !== null) {
      Array.prototype.push.apply(handles, this.dataPipe.getHandleDeps());
    }
    return handles;
  };

  StreamFactory_CreateInputStream_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_CreateInputStream_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.dataPipe.setHandlesInternal_(handles, idx);
    return idx;
  };

  StreamFactory_CreateInputStream_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate StreamFactory_CreateInputStream_ResponseParams.dataPipe
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_data_pipe$.AudioDataPipe, true);
    if (err !== validator.validationError.NONE)
        return err;



    // validate StreamFactory_CreateInputStream_ResponseParams.streamId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, unguessable_token$.UnguessableToken, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_CreateInputStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  StreamFactory_CreateInputStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_CreateInputStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dataPipe = decoder.decodeStructPointer(audio_data_pipe$.AudioDataPipe);
    packed = decoder.readUint8();
    val.initiallyMuted = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.streamId = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  StreamFactory_CreateInputStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_CreateInputStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_data_pipe$.AudioDataPipe, val.dataPipe);
    packed = 0;
    packed |= (val.initiallyMuted & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.streamId);
  };
  function StreamFactory_AssociateInputAndOutputForAec_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_AssociateInputAndOutputForAec_Params.prototype.initDefaults_ = function() {
    this.inputStreamId = null;
    this.outputDeviceId = null;
  };
  StreamFactory_AssociateInputAndOutputForAec_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_AssociateInputAndOutputForAec_Params.generate = function(generator_) {
    var generated = new StreamFactory_AssociateInputAndOutputForAec_Params;
    generated.inputStreamId = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.outputDeviceId = generator_.generateString(false);
    return generated;
  };

  StreamFactory_AssociateInputAndOutputForAec_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputStreamId = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputDeviceId = mutator_.mutateString(this.outputDeviceId, false);
    }
    return this;
  };
  StreamFactory_AssociateInputAndOutputForAec_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  StreamFactory_AssociateInputAndOutputForAec_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_AssociateInputAndOutputForAec_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  StreamFactory_AssociateInputAndOutputForAec_Params.validate = function(messageValidator, offset) {
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


    // validate StreamFactory_AssociateInputAndOutputForAec_Params.inputStreamId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_AssociateInputAndOutputForAec_Params.outputDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_AssociateInputAndOutputForAec_Params.encodedSize = codec.kStructHeaderSize + 16;

  StreamFactory_AssociateInputAndOutputForAec_Params.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_AssociateInputAndOutputForAec_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputStreamId = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.outputDeviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  StreamFactory_AssociateInputAndOutputForAec_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_AssociateInputAndOutputForAec_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.inputStreamId);
    encoder.encodeStruct(codec.String, val.outputDeviceId);
  };
  function StreamFactory_CreateOutputStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_CreateOutputStream_Params.prototype.initDefaults_ = function() {
    this.stream = new bindings.InterfaceRequest();
    this.observer = new associatedBindings.AssociatedInterfacePtrInfo();
    this.log = new audio_logging$.AudioLogPtr();
    this.deviceId = null;
    this.params = null;
    this.groupId = null;
  };
  StreamFactory_CreateOutputStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_CreateOutputStream_Params.generate = function(generator_) {
    var generated = new StreamFactory_CreateOutputStream_Params;
    generated.stream = generator_.generateInterfaceRequest("media.mojom.AudioOutputStream", false);
    generated.observer = generator_.generateAssociatedInterface("media.mojom.AudioOutputStreamObserver", false);
    generated.log = generator_.generateInterface("media.mojom.AudioLog", false);
    generated.deviceId = generator_.generateString(false);
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, false);
    generated.groupId = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  StreamFactory_CreateOutputStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateInterfaceRequest(this.stream, "media.mojom.AudioOutputStream", false);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateAssociatedInterface(this.observer, "media.mojom.AudioOutputStreamObserver", false);
    }
    if (mutator_.chooseMutateField()) {
      this.log = mutator_.mutateInterface(this.log, "media.mojom.AudioLog", false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  StreamFactory_CreateOutputStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioOutputStreamRequest"]);
    }
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioOutputStreamObserverAssociatedPtr"]);
    }
    if (this.log !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioLogPtr"]);
    }
    return handles;
  };

  StreamFactory_CreateOutputStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_CreateOutputStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    this.observer = handles[idx++];;
    this.log = handles[idx++];;
    return idx;
  };

  StreamFactory_CreateOutputStream_Params.validate = function(messageValidator, offset) {
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


    // validate StreamFactory_CreateOutputStream_Params.stream
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateOutputStream_Params.observer
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateOutputStream_Params.log
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateOutputStream_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateOutputStream_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateOutputStream_Params.groupId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_CreateOutputStream_Params.encodedSize = codec.kStructHeaderSize + 48;

  StreamFactory_CreateOutputStream_Params.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_CreateOutputStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.InterfaceRequest);
    val.observer = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.log = decoder.decodeStruct(new codec.Interface(audio_logging$.AudioLogPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.deviceId = decoder.decodeStruct(codec.String);
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    val.groupId = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  StreamFactory_CreateOutputStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_CreateOutputStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.stream);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.observer);
    encoder.encodeStruct(new codec.Interface(audio_logging$.AudioLogPtr), val.log);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.deviceId);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.groupId);
  };
  function StreamFactory_CreateOutputStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_CreateOutputStream_ResponseParams.prototype.initDefaults_ = function() {
    this.dataPipe = null;
  };
  StreamFactory_CreateOutputStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_CreateOutputStream_ResponseParams.generate = function(generator_) {
    var generated = new StreamFactory_CreateOutputStream_ResponseParams;
    generated.dataPipe = generator_.generateStruct(media.mojom.AudioDataPipe, true);
    return generated;
  };

  StreamFactory_CreateOutputStream_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dataPipe = mutator_.mutateStruct(media.mojom.AudioDataPipe, true);
    }
    return this;
  };
  StreamFactory_CreateOutputStream_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dataPipe !== null) {
      Array.prototype.push.apply(handles, this.dataPipe.getHandleDeps());
    }
    return handles;
  };

  StreamFactory_CreateOutputStream_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_CreateOutputStream_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.dataPipe.setHandlesInternal_(handles, idx);
    return idx;
  };

  StreamFactory_CreateOutputStream_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate StreamFactory_CreateOutputStream_ResponseParams.dataPipe
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_data_pipe$.AudioDataPipe, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_CreateOutputStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  StreamFactory_CreateOutputStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_CreateOutputStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dataPipe = decoder.decodeStructPointer(audio_data_pipe$.AudioDataPipe);
    return val;
  };

  StreamFactory_CreateOutputStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_CreateOutputStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_data_pipe$.AudioDataPipe, val.dataPipe);
  };
  function StreamFactory_BindMuter_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_BindMuter_Params.prototype.initDefaults_ = function() {
    this.request = new associatedBindings.AssociatedInterfaceRequest();
    this.groupId = null;
  };
  StreamFactory_BindMuter_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_BindMuter_Params.generate = function(generator_) {
    var generated = new StreamFactory_BindMuter_Params;
    generated.request = generator_.generateAssociatedInterfaceRequest("audio.mojom.LocalMuter", false);
    generated.groupId = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  StreamFactory_BindMuter_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateAssociatedInterfaceRequest(this.request, "audio.mojom.LocalMuter", false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  StreamFactory_BindMuter_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["audio.mojom.LocalMuterAssociatedRequest"]);
    }
    return handles;
  };

  StreamFactory_BindMuter_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_BindMuter_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  StreamFactory_BindMuter_Params.validate = function(messageValidator, offset) {
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


    // validate StreamFactory_BindMuter_Params.request
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_BindMuter_Params.groupId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_BindMuter_Params.encodedSize = codec.kStructHeaderSize + 16;

  StreamFactory_BindMuter_Params.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_BindMuter_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.groupId = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  StreamFactory_BindMuter_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_BindMuter_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.groupId);
  };
  function StreamFactory_CreateLoopbackStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_CreateLoopbackStream_Params.prototype.initDefaults_ = function() {
    this.stream = new bindings.InterfaceRequest();
    this.client = new audio_input_stream$.AudioInputStreamClientPtr();
    this.observer = new audio_input_stream$.AudioInputStreamObserverPtr();
    this.sharedMemoryCount = 0;
    this.params = null;
    this.groupId = null;
  };
  StreamFactory_CreateLoopbackStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_CreateLoopbackStream_Params.generate = function(generator_) {
    var generated = new StreamFactory_CreateLoopbackStream_Params;
    generated.stream = generator_.generateInterfaceRequest("media.mojom.AudioInputStream", false);
    generated.client = generator_.generateInterface("media.mojom.AudioInputStreamClient", false);
    generated.observer = generator_.generateInterface("media.mojom.AudioInputStreamObserver", false);
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, false);
    generated.sharedMemoryCount = generator_.generateUint32();
    generated.groupId = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  StreamFactory_CreateLoopbackStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateInterfaceRequest(this.stream, "media.mojom.AudioInputStream", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "media.mojom.AudioInputStreamClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "media.mojom.AudioInputStreamObserver", false);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedMemoryCount = mutator_.mutateUint32(this.sharedMemoryCount);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  StreamFactory_CreateLoopbackStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamClientPtr"]);
    }
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioInputStreamObserverPtr"]);
    }
    return handles;
  };

  StreamFactory_CreateLoopbackStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_CreateLoopbackStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    this.client = handles[idx++];;
    this.observer = handles[idx++];;
    return idx;
  };

  StreamFactory_CreateLoopbackStream_Params.validate = function(messageValidator, offset) {
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


    // validate StreamFactory_CreateLoopbackStream_Params.stream
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateLoopbackStream_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateLoopbackStream_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamFactory_CreateLoopbackStream_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate StreamFactory_CreateLoopbackStream_Params.groupId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_CreateLoopbackStream_Params.encodedSize = codec.kStructHeaderSize + 40;

  StreamFactory_CreateLoopbackStream_Params.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_CreateLoopbackStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamClientPtr));
    val.observer = decoder.decodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamObserverPtr));
    val.sharedMemoryCount = decoder.decodeStruct(codec.Uint32);
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    val.groupId = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  StreamFactory_CreateLoopbackStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_CreateLoopbackStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.stream);
    encoder.encodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamClientPtr), val.client);
    encoder.encodeStruct(new codec.Interface(audio_input_stream$.AudioInputStreamObserverPtr), val.observer);
    encoder.encodeStruct(codec.Uint32, val.sharedMemoryCount);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.groupId);
  };
  function StreamFactory_CreateLoopbackStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamFactory_CreateLoopbackStream_ResponseParams.prototype.initDefaults_ = function() {
    this.dataPipe = null;
  };
  StreamFactory_CreateLoopbackStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamFactory_CreateLoopbackStream_ResponseParams.generate = function(generator_) {
    var generated = new StreamFactory_CreateLoopbackStream_ResponseParams;
    generated.dataPipe = generator_.generateStruct(media.mojom.AudioDataPipe, true);
    return generated;
  };

  StreamFactory_CreateLoopbackStream_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dataPipe = mutator_.mutateStruct(media.mojom.AudioDataPipe, true);
    }
    return this;
  };
  StreamFactory_CreateLoopbackStream_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dataPipe !== null) {
      Array.prototype.push.apply(handles, this.dataPipe.getHandleDeps());
    }
    return handles;
  };

  StreamFactory_CreateLoopbackStream_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamFactory_CreateLoopbackStream_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.dataPipe.setHandlesInternal_(handles, idx);
    return idx;
  };

  StreamFactory_CreateLoopbackStream_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate StreamFactory_CreateLoopbackStream_ResponseParams.dataPipe
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_data_pipe$.AudioDataPipe, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamFactory_CreateLoopbackStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  StreamFactory_CreateLoopbackStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new StreamFactory_CreateLoopbackStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dataPipe = decoder.decodeStructPointer(audio_data_pipe$.AudioDataPipe);
    return val;
  };

  StreamFactory_CreateLoopbackStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamFactory_CreateLoopbackStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_data_pipe$.AudioDataPipe, val.dataPipe);
  };

  function LocalMuterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LocalMuter,
                                                   handleOrPtrInfo);
  }

  function LocalMuterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LocalMuter, associatedInterfacePtrInfo);
  }

  LocalMuterAssociatedPtr.prototype =
      Object.create(LocalMuterPtr.prototype);
  LocalMuterAssociatedPtr.prototype.constructor =
      LocalMuterAssociatedPtr;

  function LocalMuterProxy(receiver) {
    this.receiver_ = receiver;
  }

  function LocalMuterStub(delegate) {
    this.delegate_ = delegate;
  }

  LocalMuterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  LocalMuterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateLocalMuterRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateLocalMuterResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var LocalMuter = {
    name: 'audio.mojom.LocalMuter',
    kVersion: 0,
    ptrClass: LocalMuterPtr,
    proxyClass: LocalMuterProxy,
    stubClass: LocalMuterStub,
    validateRequest: validateLocalMuterRequest,
    validateResponse: null,
    mojomId: 'services/audio/public/mojom/stream_factory.mojom',
    fuzzMethods: {
    },
  };
  LocalMuterStub.prototype.validator = validateLocalMuterRequest;
  LocalMuterProxy.prototype.validator = null;
  var kStreamFactory_CreateInputStream_Name = 1262762285;
  var kStreamFactory_AssociateInputAndOutputForAec_Name = 1087535427;
  var kStreamFactory_CreateOutputStream_Name = 1357699458;
  var kStreamFactory_BindMuter_Name = 213472669;
  var kStreamFactory_CreateLoopbackStream_Name = 550563078;

  function StreamFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(StreamFactory,
                                                   handleOrPtrInfo);
  }

  function StreamFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        StreamFactory, associatedInterfacePtrInfo);
  }

  StreamFactoryAssociatedPtr.prototype =
      Object.create(StreamFactoryPtr.prototype);
  StreamFactoryAssociatedPtr.prototype.constructor =
      StreamFactoryAssociatedPtr;

  function StreamFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  StreamFactoryPtr.prototype.createInputStream = function() {
    return StreamFactoryProxy.prototype.createInputStream
        .apply(this.ptr.getProxy(), arguments);
  };

  StreamFactoryProxy.prototype.createInputStream = function(stream, client, observer, log, deviceId, params, sharedMemoryCount, enableAgc, keyPressCountBuffer) {
    var params_ = new StreamFactory_CreateInputStream_Params();
    params_.stream = stream;
    params_.client = client;
    params_.observer = observer;
    params_.log = log;
    params_.deviceId = deviceId;
    params_.params = params;
    params_.sharedMemoryCount = sharedMemoryCount;
    params_.enableAgc = enableAgc;
    params_.keyPressCountBuffer = keyPressCountBuffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kStreamFactory_CreateInputStream_Name,
          codec.align(StreamFactory_CreateInputStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(StreamFactory_CreateInputStream_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(StreamFactory_CreateInputStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  StreamFactoryPtr.prototype.associateInputAndOutputForAec = function() {
    return StreamFactoryProxy.prototype.associateInputAndOutputForAec
        .apply(this.ptr.getProxy(), arguments);
  };

  StreamFactoryProxy.prototype.associateInputAndOutputForAec = function(inputStreamId, outputDeviceId) {
    var params_ = new StreamFactory_AssociateInputAndOutputForAec_Params();
    params_.inputStreamId = inputStreamId;
    params_.outputDeviceId = outputDeviceId;
    var builder = new codec.MessageV0Builder(
        kStreamFactory_AssociateInputAndOutputForAec_Name,
        codec.align(StreamFactory_AssociateInputAndOutputForAec_Params.encodedSize));
    builder.encodeStruct(StreamFactory_AssociateInputAndOutputForAec_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StreamFactoryPtr.prototype.createOutputStream = function() {
    return StreamFactoryProxy.prototype.createOutputStream
        .apply(this.ptr.getProxy(), arguments);
  };

  StreamFactoryProxy.prototype.createOutputStream = function(stream, observer, log, deviceId, params, groupId) {
    var params_ = new StreamFactory_CreateOutputStream_Params();
    params_.stream = stream;
    params_.observer = observer;
    params_.log = log;
    params_.deviceId = deviceId;
    params_.params = params;
    params_.groupId = groupId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kStreamFactory_CreateOutputStream_Name,
          codec.align(StreamFactory_CreateOutputStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(StreamFactory_CreateOutputStream_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(StreamFactory_CreateOutputStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  StreamFactoryPtr.prototype.bindMuter = function() {
    return StreamFactoryProxy.prototype.bindMuter
        .apply(this.ptr.getProxy(), arguments);
  };

  StreamFactoryProxy.prototype.bindMuter = function(request, groupId) {
    var params_ = new StreamFactory_BindMuter_Params();
    params_.request = request;
    params_.groupId = groupId;
    var builder = new codec.MessageV2Builder(
        kStreamFactory_BindMuter_Name,
        codec.align(StreamFactory_BindMuter_Params.encodedSize));
    builder.setPayload(StreamFactory_BindMuter_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StreamFactoryPtr.prototype.createLoopbackStream = function() {
    return StreamFactoryProxy.prototype.createLoopbackStream
        .apply(this.ptr.getProxy(), arguments);
  };

  StreamFactoryProxy.prototype.createLoopbackStream = function(stream, client, observer, params, sharedMemoryCount, groupId) {
    var params_ = new StreamFactory_CreateLoopbackStream_Params();
    params_.stream = stream;
    params_.client = client;
    params_.observer = observer;
    params_.params = params;
    params_.sharedMemoryCount = sharedMemoryCount;
    params_.groupId = groupId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kStreamFactory_CreateLoopbackStream_Name,
          codec.align(StreamFactory_CreateLoopbackStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(StreamFactory_CreateLoopbackStream_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(StreamFactory_CreateLoopbackStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function StreamFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  StreamFactoryStub.prototype.createInputStream = function(stream, client, observer, log, deviceId, params, sharedMemoryCount, enableAgc, keyPressCountBuffer) {
    return this.delegate_ && this.delegate_.createInputStream && this.delegate_.createInputStream(stream, client, observer, log, deviceId, params, sharedMemoryCount, enableAgc, keyPressCountBuffer);
  }
  StreamFactoryStub.prototype.associateInputAndOutputForAec = function(inputStreamId, outputDeviceId) {
    return this.delegate_ && this.delegate_.associateInputAndOutputForAec && this.delegate_.associateInputAndOutputForAec(inputStreamId, outputDeviceId);
  }
  StreamFactoryStub.prototype.createOutputStream = function(stream, observer, log, deviceId, params, groupId) {
    return this.delegate_ && this.delegate_.createOutputStream && this.delegate_.createOutputStream(stream, observer, log, deviceId, params, groupId);
  }
  StreamFactoryStub.prototype.bindMuter = function(request, groupId) {
    return this.delegate_ && this.delegate_.bindMuter && this.delegate_.bindMuter(request, groupId);
  }
  StreamFactoryStub.prototype.createLoopbackStream = function(stream, client, observer, params, sharedMemoryCount, groupId) {
    return this.delegate_ && this.delegate_.createLoopbackStream && this.delegate_.createLoopbackStream(stream, client, observer, params, sharedMemoryCount, groupId);
  }

  StreamFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStreamFactory_AssociateInputAndOutputForAec_Name:
      var params = reader.decodeStruct(StreamFactory_AssociateInputAndOutputForAec_Params);
      this.associateInputAndOutputForAec(params.inputStreamId, params.outputDeviceId);
      return true;
    case kStreamFactory_BindMuter_Name:
      var params = reader.decodeStruct(StreamFactory_BindMuter_Params);
      this.bindMuter(params.request, params.groupId);
      return true;
    default:
      return false;
    }
  };

  StreamFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStreamFactory_CreateInputStream_Name:
      var params = reader.decodeStruct(StreamFactory_CreateInputStream_Params);
      this.createInputStream(params.stream, params.client, params.observer, params.log, params.deviceId, params.params, params.sharedMemoryCount, params.enableAgc, params.keyPressCountBuffer).then(function(response) {
        var responseParams =
            new StreamFactory_CreateInputStream_ResponseParams();
        responseParams.dataPipe = response.dataPipe;
        responseParams.initiallyMuted = response.initiallyMuted;
        responseParams.streamId = response.streamId;
        var builder = new codec.MessageV1Builder(
            kStreamFactory_CreateInputStream_Name,
            codec.align(StreamFactory_CreateInputStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(StreamFactory_CreateInputStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kStreamFactory_CreateOutputStream_Name:
      var params = reader.decodeStruct(StreamFactory_CreateOutputStream_Params);
      this.createOutputStream(params.stream, params.observer, params.log, params.deviceId, params.params, params.groupId).then(function(response) {
        var responseParams =
            new StreamFactory_CreateOutputStream_ResponseParams();
        responseParams.dataPipe = response.dataPipe;
        var builder = new codec.MessageV2Builder(
            kStreamFactory_CreateOutputStream_Name,
            codec.align(StreamFactory_CreateOutputStream_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(StreamFactory_CreateOutputStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kStreamFactory_CreateLoopbackStream_Name:
      var params = reader.decodeStruct(StreamFactory_CreateLoopbackStream_Params);
      this.createLoopbackStream(params.stream, params.client, params.observer, params.params, params.sharedMemoryCount, params.groupId).then(function(response) {
        var responseParams =
            new StreamFactory_CreateLoopbackStream_ResponseParams();
        responseParams.dataPipe = response.dataPipe;
        var builder = new codec.MessageV1Builder(
            kStreamFactory_CreateLoopbackStream_Name,
            codec.align(StreamFactory_CreateLoopbackStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(StreamFactory_CreateLoopbackStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateStreamFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kStreamFactory_CreateInputStream_Name:
        if (message.expectsResponse())
          paramsClass = StreamFactory_CreateInputStream_Params;
      break;
      case kStreamFactory_AssociateInputAndOutputForAec_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StreamFactory_AssociateInputAndOutputForAec_Params;
      break;
      case kStreamFactory_CreateOutputStream_Name:
        if (message.expectsResponse())
          paramsClass = StreamFactory_CreateOutputStream_Params;
      break;
      case kStreamFactory_BindMuter_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StreamFactory_BindMuter_Params;
      break;
      case kStreamFactory_CreateLoopbackStream_Name:
        if (message.expectsResponse())
          paramsClass = StreamFactory_CreateLoopbackStream_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateStreamFactoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kStreamFactory_CreateInputStream_Name:
        if (message.isResponse())
          paramsClass = StreamFactory_CreateInputStream_ResponseParams;
        break;
      case kStreamFactory_CreateOutputStream_Name:
        if (message.isResponse())
          paramsClass = StreamFactory_CreateOutputStream_ResponseParams;
        break;
      case kStreamFactory_CreateLoopbackStream_Name:
        if (message.isResponse())
          paramsClass = StreamFactory_CreateLoopbackStream_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var StreamFactory = {
    name: 'audio.mojom.StreamFactory',
    kVersion: 0,
    ptrClass: StreamFactoryPtr,
    proxyClass: StreamFactoryProxy,
    stubClass: StreamFactoryStub,
    validateRequest: validateStreamFactoryRequest,
    validateResponse: validateStreamFactoryResponse,
    mojomId: 'services/audio/public/mojom/stream_factory.mojom',
    fuzzMethods: {
      createInputStream: {
        params: StreamFactory_CreateInputStream_Params,
      },
      associateInputAndOutputForAec: {
        params: StreamFactory_AssociateInputAndOutputForAec_Params,
      },
      createOutputStream: {
        params: StreamFactory_CreateOutputStream_Params,
      },
      bindMuter: {
        params: StreamFactory_BindMuter_Params,
      },
      createLoopbackStream: {
        params: StreamFactory_CreateLoopbackStream_Params,
      },
    },
  };
  StreamFactoryStub.prototype.validator = validateStreamFactoryRequest;
  StreamFactoryProxy.prototype.validator = validateStreamFactoryResponse;
  exports.LocalMuter = LocalMuter;
  exports.LocalMuterPtr = LocalMuterPtr;
  exports.LocalMuterAssociatedPtr = LocalMuterAssociatedPtr;
  exports.StreamFactory = StreamFactory;
  exports.StreamFactoryPtr = StreamFactoryPtr;
  exports.StreamFactoryAssociatedPtr = StreamFactoryAssociatedPtr;
})();