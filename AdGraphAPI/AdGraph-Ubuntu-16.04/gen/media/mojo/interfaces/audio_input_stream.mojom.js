// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/audio_input_stream.mojom';
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



  function AudioInputStream_Record_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioInputStream_Record_Params.prototype.initDefaults_ = function() {
  };
  AudioInputStream_Record_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioInputStream_Record_Params.generate = function(generator_) {
    var generated = new AudioInputStream_Record_Params;
    return generated;
  };

  AudioInputStream_Record_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioInputStream_Record_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioInputStream_Record_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioInputStream_Record_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioInputStream_Record_Params.validate = function(messageValidator, offset) {
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

  AudioInputStream_Record_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioInputStream_Record_Params.decode = function(decoder) {
    var packed;
    var val = new AudioInputStream_Record_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioInputStream_Record_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioInputStream_Record_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioInputStream_SetVolume_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioInputStream_SetVolume_Params.prototype.initDefaults_ = function() {
    this.volume = 0;
  };
  AudioInputStream_SetVolume_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioInputStream_SetVolume_Params.generate = function(generator_) {
    var generated = new AudioInputStream_SetVolume_Params;
    generated.volume = generator_.generateDouble();
    return generated;
  };

  AudioInputStream_SetVolume_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.volume = mutator_.mutateDouble(this.volume);
    }
    return this;
  };
  AudioInputStream_SetVolume_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioInputStream_SetVolume_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioInputStream_SetVolume_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioInputStream_SetVolume_Params.validate = function(messageValidator, offset) {
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

  AudioInputStream_SetVolume_Params.encodedSize = codec.kStructHeaderSize + 8;

  AudioInputStream_SetVolume_Params.decode = function(decoder) {
    var packed;
    var val = new AudioInputStream_SetVolume_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.volume = decoder.decodeStruct(codec.Double);
    return val;
  };

  AudioInputStream_SetVolume_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioInputStream_SetVolume_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.volume);
  };
  function AudioInputStreamClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioInputStreamClient_OnError_Params.prototype.initDefaults_ = function() {
  };
  AudioInputStreamClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioInputStreamClient_OnError_Params.generate = function(generator_) {
    var generated = new AudioInputStreamClient_OnError_Params;
    return generated;
  };

  AudioInputStreamClient_OnError_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioInputStreamClient_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioInputStreamClient_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioInputStreamClient_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioInputStreamClient_OnError_Params.validate = function(messageValidator, offset) {
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

  AudioInputStreamClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioInputStreamClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new AudioInputStreamClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioInputStreamClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioInputStreamClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioInputStreamClient_OnMutedStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioInputStreamClient_OnMutedStateChanged_Params.prototype.initDefaults_ = function() {
    this.isMuted = false;
  };
  AudioInputStreamClient_OnMutedStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioInputStreamClient_OnMutedStateChanged_Params.generate = function(generator_) {
    var generated = new AudioInputStreamClient_OnMutedStateChanged_Params;
    generated.isMuted = generator_.generateBool();
    return generated;
  };

  AudioInputStreamClient_OnMutedStateChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isMuted = mutator_.mutateBool(this.isMuted);
    }
    return this;
  };
  AudioInputStreamClient_OnMutedStateChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioInputStreamClient_OnMutedStateChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioInputStreamClient_OnMutedStateChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioInputStreamClient_OnMutedStateChanged_Params.validate = function(messageValidator, offset) {
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

  AudioInputStreamClient_OnMutedStateChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  AudioInputStreamClient_OnMutedStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new AudioInputStreamClient_OnMutedStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isMuted = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AudioInputStreamClient_OnMutedStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioInputStreamClient_OnMutedStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isMuted & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AudioInputStreamObserver_DidStartRecording_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioInputStreamObserver_DidStartRecording_Params.prototype.initDefaults_ = function() {
  };
  AudioInputStreamObserver_DidStartRecording_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioInputStreamObserver_DidStartRecording_Params.generate = function(generator_) {
    var generated = new AudioInputStreamObserver_DidStartRecording_Params;
    return generated;
  };

  AudioInputStreamObserver_DidStartRecording_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioInputStreamObserver_DidStartRecording_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioInputStreamObserver_DidStartRecording_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioInputStreamObserver_DidStartRecording_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioInputStreamObserver_DidStartRecording_Params.validate = function(messageValidator, offset) {
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

  AudioInputStreamObserver_DidStartRecording_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioInputStreamObserver_DidStartRecording_Params.decode = function(decoder) {
    var packed;
    var val = new AudioInputStreamObserver_DidStartRecording_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioInputStreamObserver_DidStartRecording_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioInputStreamObserver_DidStartRecording_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kAudioInputStream_Record_Name = 1723522769;
  var kAudioInputStream_SetVolume_Name = 1139526211;

  function AudioInputStreamPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioInputStream,
                                                   handleOrPtrInfo);
  }

  function AudioInputStreamAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioInputStream, associatedInterfacePtrInfo);
  }

  AudioInputStreamAssociatedPtr.prototype =
      Object.create(AudioInputStreamPtr.prototype);
  AudioInputStreamAssociatedPtr.prototype.constructor =
      AudioInputStreamAssociatedPtr;

  function AudioInputStreamProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioInputStreamPtr.prototype.record = function() {
    return AudioInputStreamProxy.prototype.record
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioInputStreamProxy.prototype.record = function() {
    var params_ = new AudioInputStream_Record_Params();
    var builder = new codec.MessageV0Builder(
        kAudioInputStream_Record_Name,
        codec.align(AudioInputStream_Record_Params.encodedSize));
    builder.encodeStruct(AudioInputStream_Record_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioInputStreamPtr.prototype.setVolume = function() {
    return AudioInputStreamProxy.prototype.setVolume
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioInputStreamProxy.prototype.setVolume = function(volume) {
    var params_ = new AudioInputStream_SetVolume_Params();
    params_.volume = volume;
    var builder = new codec.MessageV0Builder(
        kAudioInputStream_SetVolume_Name,
        codec.align(AudioInputStream_SetVolume_Params.encodedSize));
    builder.encodeStruct(AudioInputStream_SetVolume_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioInputStreamStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioInputStreamStub.prototype.record = function() {
    return this.delegate_ && this.delegate_.record && this.delegate_.record();
  }
  AudioInputStreamStub.prototype.setVolume = function(volume) {
    return this.delegate_ && this.delegate_.setVolume && this.delegate_.setVolume(volume);
  }

  AudioInputStreamStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioInputStream_Record_Name:
      var params = reader.decodeStruct(AudioInputStream_Record_Params);
      this.record();
      return true;
    case kAudioInputStream_SetVolume_Name:
      var params = reader.decodeStruct(AudioInputStream_SetVolume_Params);
      this.setVolume(params.volume);
      return true;
    default:
      return false;
    }
  };

  AudioInputStreamStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioInputStreamRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioInputStream_Record_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioInputStream_Record_Params;
      break;
      case kAudioInputStream_SetVolume_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioInputStream_SetVolume_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioInputStreamResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioInputStream = {
    name: 'media.mojom.AudioInputStream',
    kVersion: 0,
    ptrClass: AudioInputStreamPtr,
    proxyClass: AudioInputStreamProxy,
    stubClass: AudioInputStreamStub,
    validateRequest: validateAudioInputStreamRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_input_stream.mojom',
    fuzzMethods: {
      record: {
        params: AudioInputStream_Record_Params,
      },
      setVolume: {
        params: AudioInputStream_SetVolume_Params,
      },
    },
  };
  AudioInputStreamStub.prototype.validator = validateAudioInputStreamRequest;
  AudioInputStreamProxy.prototype.validator = null;
  var kAudioInputStreamClient_OnError_Name = 1096152557;
  var kAudioInputStreamClient_OnMutedStateChanged_Name = 322752918;

  function AudioInputStreamClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioInputStreamClient,
                                                   handleOrPtrInfo);
  }

  function AudioInputStreamClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioInputStreamClient, associatedInterfacePtrInfo);
  }

  AudioInputStreamClientAssociatedPtr.prototype =
      Object.create(AudioInputStreamClientPtr.prototype);
  AudioInputStreamClientAssociatedPtr.prototype.constructor =
      AudioInputStreamClientAssociatedPtr;

  function AudioInputStreamClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioInputStreamClientPtr.prototype.onError = function() {
    return AudioInputStreamClientProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioInputStreamClientProxy.prototype.onError = function() {
    var params_ = new AudioInputStreamClient_OnError_Params();
    var builder = new codec.MessageV0Builder(
        kAudioInputStreamClient_OnError_Name,
        codec.align(AudioInputStreamClient_OnError_Params.encodedSize));
    builder.encodeStruct(AudioInputStreamClient_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioInputStreamClientPtr.prototype.onMutedStateChanged = function() {
    return AudioInputStreamClientProxy.prototype.onMutedStateChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioInputStreamClientProxy.prototype.onMutedStateChanged = function(isMuted) {
    var params_ = new AudioInputStreamClient_OnMutedStateChanged_Params();
    params_.isMuted = isMuted;
    var builder = new codec.MessageV0Builder(
        kAudioInputStreamClient_OnMutedStateChanged_Name,
        codec.align(AudioInputStreamClient_OnMutedStateChanged_Params.encodedSize));
    builder.encodeStruct(AudioInputStreamClient_OnMutedStateChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioInputStreamClientStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioInputStreamClientStub.prototype.onError = function() {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError();
  }
  AudioInputStreamClientStub.prototype.onMutedStateChanged = function(isMuted) {
    return this.delegate_ && this.delegate_.onMutedStateChanged && this.delegate_.onMutedStateChanged(isMuted);
  }

  AudioInputStreamClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioInputStreamClient_OnError_Name:
      var params = reader.decodeStruct(AudioInputStreamClient_OnError_Params);
      this.onError();
      return true;
    case kAudioInputStreamClient_OnMutedStateChanged_Name:
      var params = reader.decodeStruct(AudioInputStreamClient_OnMutedStateChanged_Params);
      this.onMutedStateChanged(params.isMuted);
      return true;
    default:
      return false;
    }
  };

  AudioInputStreamClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioInputStreamClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioInputStreamClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioInputStreamClient_OnError_Params;
      break;
      case kAudioInputStreamClient_OnMutedStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioInputStreamClient_OnMutedStateChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioInputStreamClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioInputStreamClient = {
    name: 'media.mojom.AudioInputStreamClient',
    kVersion: 0,
    ptrClass: AudioInputStreamClientPtr,
    proxyClass: AudioInputStreamClientProxy,
    stubClass: AudioInputStreamClientStub,
    validateRequest: validateAudioInputStreamClientRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_input_stream.mojom',
    fuzzMethods: {
      onError: {
        params: AudioInputStreamClient_OnError_Params,
      },
      onMutedStateChanged: {
        params: AudioInputStreamClient_OnMutedStateChanged_Params,
      },
    },
  };
  AudioInputStreamClientStub.prototype.validator = validateAudioInputStreamClientRequest;
  AudioInputStreamClientProxy.prototype.validator = null;
  var kAudioInputStreamObserver_DidStartRecording_Name = 2097739210;

  function AudioInputStreamObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioInputStreamObserver,
                                                   handleOrPtrInfo);
  }

  function AudioInputStreamObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioInputStreamObserver, associatedInterfacePtrInfo);
  }

  AudioInputStreamObserverAssociatedPtr.prototype =
      Object.create(AudioInputStreamObserverPtr.prototype);
  AudioInputStreamObserverAssociatedPtr.prototype.constructor =
      AudioInputStreamObserverAssociatedPtr;

  function AudioInputStreamObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioInputStreamObserverPtr.prototype.didStartRecording = function() {
    return AudioInputStreamObserverProxy.prototype.didStartRecording
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioInputStreamObserverProxy.prototype.didStartRecording = function() {
    var params_ = new AudioInputStreamObserver_DidStartRecording_Params();
    var builder = new codec.MessageV0Builder(
        kAudioInputStreamObserver_DidStartRecording_Name,
        codec.align(AudioInputStreamObserver_DidStartRecording_Params.encodedSize));
    builder.encodeStruct(AudioInputStreamObserver_DidStartRecording_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioInputStreamObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioInputStreamObserverStub.prototype.didStartRecording = function() {
    return this.delegate_ && this.delegate_.didStartRecording && this.delegate_.didStartRecording();
  }

  AudioInputStreamObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioInputStreamObserver_DidStartRecording_Name:
      var params = reader.decodeStruct(AudioInputStreamObserver_DidStartRecording_Params);
      this.didStartRecording();
      return true;
    default:
      return false;
    }
  };

  AudioInputStreamObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioInputStreamObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioInputStreamObserver_DidStartRecording_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioInputStreamObserver_DidStartRecording_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioInputStreamObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioInputStreamObserver = {
    name: 'media.mojom.AudioInputStreamObserver',
    kVersion: 0,
    ptrClass: AudioInputStreamObserverPtr,
    proxyClass: AudioInputStreamObserverProxy,
    stubClass: AudioInputStreamObserverStub,
    validateRequest: validateAudioInputStreamObserverRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_input_stream.mojom',
    fuzzMethods: {
      didStartRecording: {
        params: AudioInputStreamObserver_DidStartRecording_Params,
      },
    },
  };
  AudioInputStreamObserverStub.prototype.validator = validateAudioInputStreamObserverRequest;
  AudioInputStreamObserverProxy.prototype.validator = null;
  exports.AudioInputStream = AudioInputStream;
  exports.AudioInputStreamPtr = AudioInputStreamPtr;
  exports.AudioInputStreamAssociatedPtr = AudioInputStreamAssociatedPtr;
  exports.AudioInputStreamClient = AudioInputStreamClient;
  exports.AudioInputStreamClientPtr = AudioInputStreamClientPtr;
  exports.AudioInputStreamClientAssociatedPtr = AudioInputStreamClientAssociatedPtr;
  exports.AudioInputStreamObserver = AudioInputStreamObserver;
  exports.AudioInputStreamObserverPtr = AudioInputStreamObserverPtr;
  exports.AudioInputStreamObserverAssociatedPtr = AudioInputStreamObserverAssociatedPtr;
})();