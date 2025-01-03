// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/audio_output_stream.mojom';
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
  var audio_data_pipe$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_data_pipe.mojom', 'audio_data_pipe.mojom.js');
  }
  var audio_parameters$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_parameters.mojom', 'audio_parameters.mojom.js');
  }
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', 'media_types.mojom.js');
  }



  function AudioOutputStream_Play_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStream_Play_Params.prototype.initDefaults_ = function() {
  };
  AudioOutputStream_Play_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStream_Play_Params.generate = function(generator_) {
    var generated = new AudioOutputStream_Play_Params;
    return generated;
  };

  AudioOutputStream_Play_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioOutputStream_Play_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioOutputStream_Play_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStream_Play_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioOutputStream_Play_Params.validate = function(messageValidator, offset) {
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

  AudioOutputStream_Play_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioOutputStream_Play_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStream_Play_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioOutputStream_Play_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStream_Play_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioOutputStream_Pause_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStream_Pause_Params.prototype.initDefaults_ = function() {
  };
  AudioOutputStream_Pause_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStream_Pause_Params.generate = function(generator_) {
    var generated = new AudioOutputStream_Pause_Params;
    return generated;
  };

  AudioOutputStream_Pause_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioOutputStream_Pause_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioOutputStream_Pause_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStream_Pause_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioOutputStream_Pause_Params.validate = function(messageValidator, offset) {
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

  AudioOutputStream_Pause_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioOutputStream_Pause_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStream_Pause_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioOutputStream_Pause_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStream_Pause_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioOutputStream_SetVolume_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStream_SetVolume_Params.prototype.initDefaults_ = function() {
    this.volume = 0;
  };
  AudioOutputStream_SetVolume_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStream_SetVolume_Params.generate = function(generator_) {
    var generated = new AudioOutputStream_SetVolume_Params;
    generated.volume = generator_.generateDouble();
    return generated;
  };

  AudioOutputStream_SetVolume_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.volume = mutator_.mutateDouble(this.volume);
    }
    return this;
  };
  AudioOutputStream_SetVolume_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioOutputStream_SetVolume_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStream_SetVolume_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioOutputStream_SetVolume_Params.validate = function(messageValidator, offset) {
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

  AudioOutputStream_SetVolume_Params.encodedSize = codec.kStructHeaderSize + 8;

  AudioOutputStream_SetVolume_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStream_SetVolume_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.volume = decoder.decodeStruct(codec.Double);
    return val;
  };

  AudioOutputStream_SetVolume_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStream_SetVolume_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.volume);
  };
  function AudioOutputStreamObserver_DidStartPlaying_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStreamObserver_DidStartPlaying_Params.prototype.initDefaults_ = function() {
  };
  AudioOutputStreamObserver_DidStartPlaying_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStreamObserver_DidStartPlaying_Params.generate = function(generator_) {
    var generated = new AudioOutputStreamObserver_DidStartPlaying_Params;
    return generated;
  };

  AudioOutputStreamObserver_DidStartPlaying_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioOutputStreamObserver_DidStartPlaying_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioOutputStreamObserver_DidStartPlaying_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStreamObserver_DidStartPlaying_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioOutputStreamObserver_DidStartPlaying_Params.validate = function(messageValidator, offset) {
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

  AudioOutputStreamObserver_DidStartPlaying_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioOutputStreamObserver_DidStartPlaying_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStreamObserver_DidStartPlaying_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioOutputStreamObserver_DidStartPlaying_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStreamObserver_DidStartPlaying_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioOutputStreamObserver_DidStopPlaying_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStreamObserver_DidStopPlaying_Params.prototype.initDefaults_ = function() {
  };
  AudioOutputStreamObserver_DidStopPlaying_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStreamObserver_DidStopPlaying_Params.generate = function(generator_) {
    var generated = new AudioOutputStreamObserver_DidStopPlaying_Params;
    return generated;
  };

  AudioOutputStreamObserver_DidStopPlaying_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioOutputStreamObserver_DidStopPlaying_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioOutputStreamObserver_DidStopPlaying_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStreamObserver_DidStopPlaying_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioOutputStreamObserver_DidStopPlaying_Params.validate = function(messageValidator, offset) {
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

  AudioOutputStreamObserver_DidStopPlaying_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioOutputStreamObserver_DidStopPlaying_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStreamObserver_DidStopPlaying_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioOutputStreamObserver_DidStopPlaying_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStreamObserver_DidStopPlaying_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioOutputStreamObserver_DidChangeAudibleState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStreamObserver_DidChangeAudibleState_Params.prototype.initDefaults_ = function() {
    this.isAudible = false;
  };
  AudioOutputStreamObserver_DidChangeAudibleState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStreamObserver_DidChangeAudibleState_Params.generate = function(generator_) {
    var generated = new AudioOutputStreamObserver_DidChangeAudibleState_Params;
    generated.isAudible = generator_.generateBool();
    return generated;
  };

  AudioOutputStreamObserver_DidChangeAudibleState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isAudible = mutator_.mutateBool(this.isAudible);
    }
    return this;
  };
  AudioOutputStreamObserver_DidChangeAudibleState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioOutputStreamObserver_DidChangeAudibleState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStreamObserver_DidChangeAudibleState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioOutputStreamObserver_DidChangeAudibleState_Params.validate = function(messageValidator, offset) {
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

  AudioOutputStreamObserver_DidChangeAudibleState_Params.encodedSize = codec.kStructHeaderSize + 8;

  AudioOutputStreamObserver_DidChangeAudibleState_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStreamObserver_DidChangeAudibleState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isAudible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AudioOutputStreamObserver_DidChangeAudibleState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStreamObserver_DidChangeAudibleState_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isAudible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AudioOutputStreamProvider_Acquire_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStreamProvider_Acquire_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.client = new AudioOutputStreamProviderClientPtr();
  };
  AudioOutputStreamProvider_Acquire_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStreamProvider_Acquire_Params.generate = function(generator_) {
    var generated = new AudioOutputStreamProvider_Acquire_Params;
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, false);
    generated.client = generator_.generateInterface("media.mojom.AudioOutputStreamProviderClient", false);
    return generated;
  };

  AudioOutputStreamProvider_Acquire_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "media.mojom.AudioOutputStreamProviderClient", false);
    }
    return this;
  };
  AudioOutputStreamProvider_Acquire_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioOutputStreamProviderClientPtr"]);
    }
    return handles;
  };

  AudioOutputStreamProvider_Acquire_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStreamProvider_Acquire_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  AudioOutputStreamProvider_Acquire_Params.validate = function(messageValidator, offset) {
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


    // validate AudioOutputStreamProvider_Acquire_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioOutputStreamProvider_Acquire_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioOutputStreamProvider_Acquire_Params.encodedSize = codec.kStructHeaderSize + 16;

  AudioOutputStreamProvider_Acquire_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStreamProvider_Acquire_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    val.client = decoder.decodeStruct(new codec.Interface(AudioOutputStreamProviderClientPtr));
    return val;
  };

  AudioOutputStreamProvider_Acquire_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStreamProvider_Acquire_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
    encoder.encodeStruct(new codec.Interface(AudioOutputStreamProviderClientPtr), val.client);
  };
  function AudioOutputStreamProviderClient_Created_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioOutputStreamProviderClient_Created_Params.prototype.initDefaults_ = function() {
    this.stream = new AudioOutputStreamPtr();
    this.dataPipe = null;
  };
  AudioOutputStreamProviderClient_Created_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioOutputStreamProviderClient_Created_Params.generate = function(generator_) {
    var generated = new AudioOutputStreamProviderClient_Created_Params;
    generated.stream = generator_.generateInterface("media.mojom.AudioOutputStream", false);
    generated.dataPipe = generator_.generateStruct(media.mojom.AudioDataPipe, false);
    return generated;
  };

  AudioOutputStreamProviderClient_Created_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateInterface(this.stream, "media.mojom.AudioOutputStream", false);
    }
    if (mutator_.chooseMutateField()) {
      this.dataPipe = mutator_.mutateStruct(media.mojom.AudioDataPipe, false);
    }
    return this;
  };
  AudioOutputStreamProviderClient_Created_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioOutputStreamPtr"]);
    }
    if (this.dataPipe !== null) {
      Array.prototype.push.apply(handles, this.dataPipe.getHandleDeps());
    }
    return handles;
  };

  AudioOutputStreamProviderClient_Created_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioOutputStreamProviderClient_Created_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    idx = this.dataPipe.setHandlesInternal_(handles, idx);
    return idx;
  };

  AudioOutputStreamProviderClient_Created_Params.validate = function(messageValidator, offset) {
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


    // validate AudioOutputStreamProviderClient_Created_Params.stream
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioOutputStreamProviderClient_Created_Params.dataPipe
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, audio_data_pipe$.AudioDataPipe, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioOutputStreamProviderClient_Created_Params.encodedSize = codec.kStructHeaderSize + 16;

  AudioOutputStreamProviderClient_Created_Params.decode = function(decoder) {
    var packed;
    var val = new AudioOutputStreamProviderClient_Created_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(new codec.Interface(AudioOutputStreamPtr));
    val.dataPipe = decoder.decodeStructPointer(audio_data_pipe$.AudioDataPipe);
    return val;
  };

  AudioOutputStreamProviderClient_Created_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioOutputStreamProviderClient_Created_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(AudioOutputStreamPtr), val.stream);
    encoder.encodeStructPointer(audio_data_pipe$.AudioDataPipe, val.dataPipe);
  };
  var kAudioOutputStream_Play_Name = 437081419;
  var kAudioOutputStream_Pause_Name = 933913288;
  var kAudioOutputStream_SetVolume_Name = 1793760978;

  function AudioOutputStreamPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioOutputStream,
                                                   handleOrPtrInfo);
  }

  function AudioOutputStreamAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioOutputStream, associatedInterfacePtrInfo);
  }

  AudioOutputStreamAssociatedPtr.prototype =
      Object.create(AudioOutputStreamPtr.prototype);
  AudioOutputStreamAssociatedPtr.prototype.constructor =
      AudioOutputStreamAssociatedPtr;

  function AudioOutputStreamProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioOutputStreamPtr.prototype.play = function() {
    return AudioOutputStreamProxy.prototype.play
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamProxy.prototype.play = function() {
    var params_ = new AudioOutputStream_Play_Params();
    var builder = new codec.MessageV0Builder(
        kAudioOutputStream_Play_Name,
        codec.align(AudioOutputStream_Play_Params.encodedSize));
    builder.encodeStruct(AudioOutputStream_Play_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioOutputStreamPtr.prototype.pause = function() {
    return AudioOutputStreamProxy.prototype.pause
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamProxy.prototype.pause = function() {
    var params_ = new AudioOutputStream_Pause_Params();
    var builder = new codec.MessageV0Builder(
        kAudioOutputStream_Pause_Name,
        codec.align(AudioOutputStream_Pause_Params.encodedSize));
    builder.encodeStruct(AudioOutputStream_Pause_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioOutputStreamPtr.prototype.setVolume = function() {
    return AudioOutputStreamProxy.prototype.setVolume
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamProxy.prototype.setVolume = function(volume) {
    var params_ = new AudioOutputStream_SetVolume_Params();
    params_.volume = volume;
    var builder = new codec.MessageV0Builder(
        kAudioOutputStream_SetVolume_Name,
        codec.align(AudioOutputStream_SetVolume_Params.encodedSize));
    builder.encodeStruct(AudioOutputStream_SetVolume_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioOutputStreamStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioOutputStreamStub.prototype.play = function() {
    return this.delegate_ && this.delegate_.play && this.delegate_.play();
  }
  AudioOutputStreamStub.prototype.pause = function() {
    return this.delegate_ && this.delegate_.pause && this.delegate_.pause();
  }
  AudioOutputStreamStub.prototype.setVolume = function(volume) {
    return this.delegate_ && this.delegate_.setVolume && this.delegate_.setVolume(volume);
  }

  AudioOutputStreamStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioOutputStream_Play_Name:
      var params = reader.decodeStruct(AudioOutputStream_Play_Params);
      this.play();
      return true;
    case kAudioOutputStream_Pause_Name:
      var params = reader.decodeStruct(AudioOutputStream_Pause_Params);
      this.pause();
      return true;
    case kAudioOutputStream_SetVolume_Name:
      var params = reader.decodeStruct(AudioOutputStream_SetVolume_Params);
      this.setVolume(params.volume);
      return true;
    default:
      return false;
    }
  };

  AudioOutputStreamStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioOutputStreamRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioOutputStream_Play_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStream_Play_Params;
      break;
      case kAudioOutputStream_Pause_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStream_Pause_Params;
      break;
      case kAudioOutputStream_SetVolume_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStream_SetVolume_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioOutputStreamResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioOutputStream = {
    name: 'media.mojom.AudioOutputStream',
    kVersion: 0,
    ptrClass: AudioOutputStreamPtr,
    proxyClass: AudioOutputStreamProxy,
    stubClass: AudioOutputStreamStub,
    validateRequest: validateAudioOutputStreamRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_output_stream.mojom',
    fuzzMethods: {
      play: {
        params: AudioOutputStream_Play_Params,
      },
      pause: {
        params: AudioOutputStream_Pause_Params,
      },
      setVolume: {
        params: AudioOutputStream_SetVolume_Params,
      },
    },
  };
  AudioOutputStreamStub.prototype.validator = validateAudioOutputStreamRequest;
  AudioOutputStreamProxy.prototype.validator = null;
  var kAudioOutputStreamObserver_DidStartPlaying_Name = 454246092;
  var kAudioOutputStreamObserver_DidStopPlaying_Name = 1986165841;
  var kAudioOutputStreamObserver_DidChangeAudibleState_Name = 1956798209;

  function AudioOutputStreamObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioOutputStreamObserver,
                                                   handleOrPtrInfo);
  }

  function AudioOutputStreamObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioOutputStreamObserver, associatedInterfacePtrInfo);
  }

  AudioOutputStreamObserverAssociatedPtr.prototype =
      Object.create(AudioOutputStreamObserverPtr.prototype);
  AudioOutputStreamObserverAssociatedPtr.prototype.constructor =
      AudioOutputStreamObserverAssociatedPtr;

  function AudioOutputStreamObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioOutputStreamObserverPtr.prototype.didStartPlaying = function() {
    return AudioOutputStreamObserverProxy.prototype.didStartPlaying
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamObserverProxy.prototype.didStartPlaying = function() {
    var params_ = new AudioOutputStreamObserver_DidStartPlaying_Params();
    var builder = new codec.MessageV0Builder(
        kAudioOutputStreamObserver_DidStartPlaying_Name,
        codec.align(AudioOutputStreamObserver_DidStartPlaying_Params.encodedSize));
    builder.encodeStruct(AudioOutputStreamObserver_DidStartPlaying_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioOutputStreamObserverPtr.prototype.didStopPlaying = function() {
    return AudioOutputStreamObserverProxy.prototype.didStopPlaying
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamObserverProxy.prototype.didStopPlaying = function() {
    var params_ = new AudioOutputStreamObserver_DidStopPlaying_Params();
    var builder = new codec.MessageV0Builder(
        kAudioOutputStreamObserver_DidStopPlaying_Name,
        codec.align(AudioOutputStreamObserver_DidStopPlaying_Params.encodedSize));
    builder.encodeStruct(AudioOutputStreamObserver_DidStopPlaying_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioOutputStreamObserverPtr.prototype.didChangeAudibleState = function() {
    return AudioOutputStreamObserverProxy.prototype.didChangeAudibleState
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamObserverProxy.prototype.didChangeAudibleState = function(isAudible) {
    var params_ = new AudioOutputStreamObserver_DidChangeAudibleState_Params();
    params_.isAudible = isAudible;
    var builder = new codec.MessageV0Builder(
        kAudioOutputStreamObserver_DidChangeAudibleState_Name,
        codec.align(AudioOutputStreamObserver_DidChangeAudibleState_Params.encodedSize));
    builder.encodeStruct(AudioOutputStreamObserver_DidChangeAudibleState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioOutputStreamObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioOutputStreamObserverStub.prototype.didStartPlaying = function() {
    return this.delegate_ && this.delegate_.didStartPlaying && this.delegate_.didStartPlaying();
  }
  AudioOutputStreamObserverStub.prototype.didStopPlaying = function() {
    return this.delegate_ && this.delegate_.didStopPlaying && this.delegate_.didStopPlaying();
  }
  AudioOutputStreamObserverStub.prototype.didChangeAudibleState = function(isAudible) {
    return this.delegate_ && this.delegate_.didChangeAudibleState && this.delegate_.didChangeAudibleState(isAudible);
  }

  AudioOutputStreamObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioOutputStreamObserver_DidStartPlaying_Name:
      var params = reader.decodeStruct(AudioOutputStreamObserver_DidStartPlaying_Params);
      this.didStartPlaying();
      return true;
    case kAudioOutputStreamObserver_DidStopPlaying_Name:
      var params = reader.decodeStruct(AudioOutputStreamObserver_DidStopPlaying_Params);
      this.didStopPlaying();
      return true;
    case kAudioOutputStreamObserver_DidChangeAudibleState_Name:
      var params = reader.decodeStruct(AudioOutputStreamObserver_DidChangeAudibleState_Params);
      this.didChangeAudibleState(params.isAudible);
      return true;
    default:
      return false;
    }
  };

  AudioOutputStreamObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioOutputStreamObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioOutputStreamObserver_DidStartPlaying_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStreamObserver_DidStartPlaying_Params;
      break;
      case kAudioOutputStreamObserver_DidStopPlaying_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStreamObserver_DidStopPlaying_Params;
      break;
      case kAudioOutputStreamObserver_DidChangeAudibleState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStreamObserver_DidChangeAudibleState_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioOutputStreamObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioOutputStreamObserver = {
    name: 'media.mojom.AudioOutputStreamObserver',
    kVersion: 0,
    ptrClass: AudioOutputStreamObserverPtr,
    proxyClass: AudioOutputStreamObserverProxy,
    stubClass: AudioOutputStreamObserverStub,
    validateRequest: validateAudioOutputStreamObserverRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_output_stream.mojom',
    fuzzMethods: {
      didStartPlaying: {
        params: AudioOutputStreamObserver_DidStartPlaying_Params,
      },
      didStopPlaying: {
        params: AudioOutputStreamObserver_DidStopPlaying_Params,
      },
      didChangeAudibleState: {
        params: AudioOutputStreamObserver_DidChangeAudibleState_Params,
      },
    },
  };
  AudioOutputStreamObserver.kPlatformErrorDisconnectReason = 1,
  AudioOutputStreamObserverStub.prototype.validator = validateAudioOutputStreamObserverRequest;
  AudioOutputStreamObserverProxy.prototype.validator = null;
  var kAudioOutputStreamProvider_Acquire_Name = 1597961543;

  function AudioOutputStreamProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioOutputStreamProvider,
                                                   handleOrPtrInfo);
  }

  function AudioOutputStreamProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioOutputStreamProvider, associatedInterfacePtrInfo);
  }

  AudioOutputStreamProviderAssociatedPtr.prototype =
      Object.create(AudioOutputStreamProviderPtr.prototype);
  AudioOutputStreamProviderAssociatedPtr.prototype.constructor =
      AudioOutputStreamProviderAssociatedPtr;

  function AudioOutputStreamProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioOutputStreamProviderPtr.prototype.acquire = function() {
    return AudioOutputStreamProviderProxy.prototype.acquire
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamProviderProxy.prototype.acquire = function(params, client) {
    var params_ = new AudioOutputStreamProvider_Acquire_Params();
    params_.params = params;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kAudioOutputStreamProvider_Acquire_Name,
        codec.align(AudioOutputStreamProvider_Acquire_Params.encodedSize));
    builder.encodeStruct(AudioOutputStreamProvider_Acquire_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioOutputStreamProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioOutputStreamProviderStub.prototype.acquire = function(params, client) {
    return this.delegate_ && this.delegate_.acquire && this.delegate_.acquire(params, client);
  }

  AudioOutputStreamProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioOutputStreamProvider_Acquire_Name:
      var params = reader.decodeStruct(AudioOutputStreamProvider_Acquire_Params);
      this.acquire(params.params, params.client);
      return true;
    default:
      return false;
    }
  };

  AudioOutputStreamProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioOutputStreamProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioOutputStreamProvider_Acquire_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStreamProvider_Acquire_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioOutputStreamProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioOutputStreamProvider = {
    name: 'media.mojom.AudioOutputStreamProvider',
    kVersion: 0,
    ptrClass: AudioOutputStreamProviderPtr,
    proxyClass: AudioOutputStreamProviderProxy,
    stubClass: AudioOutputStreamProviderStub,
    validateRequest: validateAudioOutputStreamProviderRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_output_stream.mojom',
    fuzzMethods: {
      acquire: {
        params: AudioOutputStreamProvider_Acquire_Params,
      },
    },
  };
  AudioOutputStreamProviderStub.prototype.validator = validateAudioOutputStreamProviderRequest;
  AudioOutputStreamProviderProxy.prototype.validator = null;
  var kAudioOutputStreamProviderClient_Created_Name = 760488798;

  function AudioOutputStreamProviderClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioOutputStreamProviderClient,
                                                   handleOrPtrInfo);
  }

  function AudioOutputStreamProviderClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioOutputStreamProviderClient, associatedInterfacePtrInfo);
  }

  AudioOutputStreamProviderClientAssociatedPtr.prototype =
      Object.create(AudioOutputStreamProviderClientPtr.prototype);
  AudioOutputStreamProviderClientAssociatedPtr.prototype.constructor =
      AudioOutputStreamProviderClientAssociatedPtr;

  function AudioOutputStreamProviderClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioOutputStreamProviderClientPtr.prototype.created = function() {
    return AudioOutputStreamProviderClientProxy.prototype.created
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioOutputStreamProviderClientProxy.prototype.created = function(stream, dataPipe) {
    var params_ = new AudioOutputStreamProviderClient_Created_Params();
    params_.stream = stream;
    params_.dataPipe = dataPipe;
    var builder = new codec.MessageV0Builder(
        kAudioOutputStreamProviderClient_Created_Name,
        codec.align(AudioOutputStreamProviderClient_Created_Params.encodedSize));
    builder.encodeStruct(AudioOutputStreamProviderClient_Created_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioOutputStreamProviderClientStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioOutputStreamProviderClientStub.prototype.created = function(stream, dataPipe) {
    return this.delegate_ && this.delegate_.created && this.delegate_.created(stream, dataPipe);
  }

  AudioOutputStreamProviderClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioOutputStreamProviderClient_Created_Name:
      var params = reader.decodeStruct(AudioOutputStreamProviderClient_Created_Params);
      this.created(params.stream, params.dataPipe);
      return true;
    default:
      return false;
    }
  };

  AudioOutputStreamProviderClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioOutputStreamProviderClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioOutputStreamProviderClient_Created_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioOutputStreamProviderClient_Created_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioOutputStreamProviderClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioOutputStreamProviderClient = {
    name: 'media.mojom.AudioOutputStreamProviderClient',
    kVersion: 0,
    ptrClass: AudioOutputStreamProviderClientPtr,
    proxyClass: AudioOutputStreamProviderClientProxy,
    stubClass: AudioOutputStreamProviderClientStub,
    validateRequest: validateAudioOutputStreamProviderClientRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_output_stream.mojom',
    fuzzMethods: {
      created: {
        params: AudioOutputStreamProviderClient_Created_Params,
      },
    },
  };
  AudioOutputStreamProviderClient.kPlatformErrorDisconnectReason = 1,
  AudioOutputStreamProviderClientStub.prototype.validator = validateAudioOutputStreamProviderClientRequest;
  AudioOutputStreamProviderClientProxy.prototype.validator = null;
  exports.AudioOutputStream = AudioOutputStream;
  exports.AudioOutputStreamPtr = AudioOutputStreamPtr;
  exports.AudioOutputStreamAssociatedPtr = AudioOutputStreamAssociatedPtr;
  exports.AudioOutputStreamObserver = AudioOutputStreamObserver;
  exports.AudioOutputStreamObserverPtr = AudioOutputStreamObserverPtr;
  exports.AudioOutputStreamObserverAssociatedPtr = AudioOutputStreamObserverAssociatedPtr;
  exports.AudioOutputStreamProvider = AudioOutputStreamProvider;
  exports.AudioOutputStreamProviderPtr = AudioOutputStreamProviderPtr;
  exports.AudioOutputStreamProviderAssociatedPtr = AudioOutputStreamProviderAssociatedPtr;
  exports.AudioOutputStreamProviderClient = AudioOutputStreamProviderClient;
  exports.AudioOutputStreamProviderClientPtr = AudioOutputStreamProviderClientPtr;
  exports.AudioOutputStreamProviderClientAssociatedPtr = AudioOutputStreamProviderClientAssociatedPtr;
})();