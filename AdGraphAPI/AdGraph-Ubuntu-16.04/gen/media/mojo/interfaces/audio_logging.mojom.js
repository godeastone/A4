// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/audio_logging.mojom';
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



  function AudioLog_OnCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioLog_OnCreated_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.deviceId = null;
  };
  AudioLog_OnCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioLog_OnCreated_Params.generate = function(generator_) {
    var generated = new AudioLog_OnCreated_Params;
    generated.params = generator_.generateStruct(media.mojom.AudioParameters, false);
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  AudioLog_OnCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  AudioLog_OnCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioLog_OnCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioLog_OnCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioLog_OnCreated_Params.validate = function(messageValidator, offset) {
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


    // validate AudioLog_OnCreated_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioLog_OnCreated_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioLog_OnCreated_Params.encodedSize = codec.kStructHeaderSize + 16;

  AudioLog_OnCreated_Params.decode = function(decoder) {
    var packed;
    var val = new AudioLog_OnCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  AudioLog_OnCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioLog_OnCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.params);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function AudioLog_OnStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioLog_OnStarted_Params.prototype.initDefaults_ = function() {
  };
  AudioLog_OnStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioLog_OnStarted_Params.generate = function(generator_) {
    var generated = new AudioLog_OnStarted_Params;
    return generated;
  };

  AudioLog_OnStarted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioLog_OnStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioLog_OnStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioLog_OnStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioLog_OnStarted_Params.validate = function(messageValidator, offset) {
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

  AudioLog_OnStarted_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioLog_OnStarted_Params.decode = function(decoder) {
    var packed;
    var val = new AudioLog_OnStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioLog_OnStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioLog_OnStarted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioLog_OnStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioLog_OnStopped_Params.prototype.initDefaults_ = function() {
  };
  AudioLog_OnStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioLog_OnStopped_Params.generate = function(generator_) {
    var generated = new AudioLog_OnStopped_Params;
    return generated;
  };

  AudioLog_OnStopped_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioLog_OnStopped_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioLog_OnStopped_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioLog_OnStopped_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioLog_OnStopped_Params.validate = function(messageValidator, offset) {
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

  AudioLog_OnStopped_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioLog_OnStopped_Params.decode = function(decoder) {
    var packed;
    var val = new AudioLog_OnStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioLog_OnStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioLog_OnStopped_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioLog_OnClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioLog_OnClosed_Params.prototype.initDefaults_ = function() {
  };
  AudioLog_OnClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioLog_OnClosed_Params.generate = function(generator_) {
    var generated = new AudioLog_OnClosed_Params;
    return generated;
  };

  AudioLog_OnClosed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioLog_OnClosed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioLog_OnClosed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioLog_OnClosed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioLog_OnClosed_Params.validate = function(messageValidator, offset) {
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

  AudioLog_OnClosed_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioLog_OnClosed_Params.decode = function(decoder) {
    var packed;
    var val = new AudioLog_OnClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioLog_OnClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioLog_OnClosed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioLog_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioLog_OnError_Params.prototype.initDefaults_ = function() {
  };
  AudioLog_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioLog_OnError_Params.generate = function(generator_) {
    var generated = new AudioLog_OnError_Params;
    return generated;
  };

  AudioLog_OnError_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioLog_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioLog_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioLog_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioLog_OnError_Params.validate = function(messageValidator, offset) {
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

  AudioLog_OnError_Params.encodedSize = codec.kStructHeaderSize + 0;

  AudioLog_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new AudioLog_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioLog_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioLog_OnError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AudioLog_OnSetVolume_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioLog_OnSetVolume_Params.prototype.initDefaults_ = function() {
    this.volume = 0;
  };
  AudioLog_OnSetVolume_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioLog_OnSetVolume_Params.generate = function(generator_) {
    var generated = new AudioLog_OnSetVolume_Params;
    generated.volume = generator_.generateDouble();
    return generated;
  };

  AudioLog_OnSetVolume_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.volume = mutator_.mutateDouble(this.volume);
    }
    return this;
  };
  AudioLog_OnSetVolume_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioLog_OnSetVolume_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioLog_OnSetVolume_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioLog_OnSetVolume_Params.validate = function(messageValidator, offset) {
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

  AudioLog_OnSetVolume_Params.encodedSize = codec.kStructHeaderSize + 8;

  AudioLog_OnSetVolume_Params.decode = function(decoder) {
    var packed;
    var val = new AudioLog_OnSetVolume_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.volume = decoder.decodeStruct(codec.Double);
    return val;
  };

  AudioLog_OnSetVolume_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioLog_OnSetVolume_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.volume);
  };
  function AudioLog_OnLogMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioLog_OnLogMessage_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  AudioLog_OnLogMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioLog_OnLogMessage_Params.generate = function(generator_) {
    var generated = new AudioLog_OnLogMessage_Params;
    generated.message = generator_.generateString(false);
    return generated;
  };

  AudioLog_OnLogMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  AudioLog_OnLogMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioLog_OnLogMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioLog_OnLogMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioLog_OnLogMessage_Params.validate = function(messageValidator, offset) {
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


    // validate AudioLog_OnLogMessage_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioLog_OnLogMessage_Params.encodedSize = codec.kStructHeaderSize + 8;

  AudioLog_OnLogMessage_Params.decode = function(decoder) {
    var packed;
    var val = new AudioLog_OnLogMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  AudioLog_OnLogMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioLog_OnLogMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
  };
  var kAudioLog_OnCreated_Name = 163423368;
  var kAudioLog_OnStarted_Name = 763481454;
  var kAudioLog_OnStopped_Name = 1189307856;
  var kAudioLog_OnClosed_Name = 1368237997;
  var kAudioLog_OnError_Name = 1389821388;
  var kAudioLog_OnSetVolume_Name = 977495358;
  var kAudioLog_OnLogMessage_Name = 292270535;

  function AudioLogPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AudioLog,
                                                   handleOrPtrInfo);
  }

  function AudioLogAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AudioLog, associatedInterfacePtrInfo);
  }

  AudioLogAssociatedPtr.prototype =
      Object.create(AudioLogPtr.prototype);
  AudioLogAssociatedPtr.prototype.constructor =
      AudioLogAssociatedPtr;

  function AudioLogProxy(receiver) {
    this.receiver_ = receiver;
  }
  AudioLogPtr.prototype.onCreated = function() {
    return AudioLogProxy.prototype.onCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioLogProxy.prototype.onCreated = function(params, deviceId) {
    var params_ = new AudioLog_OnCreated_Params();
    params_.params = params;
    params_.deviceId = deviceId;
    var builder = new codec.MessageV0Builder(
        kAudioLog_OnCreated_Name,
        codec.align(AudioLog_OnCreated_Params.encodedSize));
    builder.encodeStruct(AudioLog_OnCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioLogPtr.prototype.onStarted = function() {
    return AudioLogProxy.prototype.onStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioLogProxy.prototype.onStarted = function() {
    var params_ = new AudioLog_OnStarted_Params();
    var builder = new codec.MessageV0Builder(
        kAudioLog_OnStarted_Name,
        codec.align(AudioLog_OnStarted_Params.encodedSize));
    builder.encodeStruct(AudioLog_OnStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioLogPtr.prototype.onStopped = function() {
    return AudioLogProxy.prototype.onStopped
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioLogProxy.prototype.onStopped = function() {
    var params_ = new AudioLog_OnStopped_Params();
    var builder = new codec.MessageV0Builder(
        kAudioLog_OnStopped_Name,
        codec.align(AudioLog_OnStopped_Params.encodedSize));
    builder.encodeStruct(AudioLog_OnStopped_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioLogPtr.prototype.onClosed = function() {
    return AudioLogProxy.prototype.onClosed
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioLogProxy.prototype.onClosed = function() {
    var params_ = new AudioLog_OnClosed_Params();
    var builder = new codec.MessageV0Builder(
        kAudioLog_OnClosed_Name,
        codec.align(AudioLog_OnClosed_Params.encodedSize));
    builder.encodeStruct(AudioLog_OnClosed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioLogPtr.prototype.onError = function() {
    return AudioLogProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioLogProxy.prototype.onError = function() {
    var params_ = new AudioLog_OnError_Params();
    var builder = new codec.MessageV0Builder(
        kAudioLog_OnError_Name,
        codec.align(AudioLog_OnError_Params.encodedSize));
    builder.encodeStruct(AudioLog_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioLogPtr.prototype.onSetVolume = function() {
    return AudioLogProxy.prototype.onSetVolume
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioLogProxy.prototype.onSetVolume = function(volume) {
    var params_ = new AudioLog_OnSetVolume_Params();
    params_.volume = volume;
    var builder = new codec.MessageV0Builder(
        kAudioLog_OnSetVolume_Name,
        codec.align(AudioLog_OnSetVolume_Params.encodedSize));
    builder.encodeStruct(AudioLog_OnSetVolume_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AudioLogPtr.prototype.onLogMessage = function() {
    return AudioLogProxy.prototype.onLogMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  AudioLogProxy.prototype.onLogMessage = function(message) {
    var params_ = new AudioLog_OnLogMessage_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kAudioLog_OnLogMessage_Name,
        codec.align(AudioLog_OnLogMessage_Params.encodedSize));
    builder.encodeStruct(AudioLog_OnLogMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AudioLogStub(delegate) {
    this.delegate_ = delegate;
  }
  AudioLogStub.prototype.onCreated = function(params, deviceId) {
    return this.delegate_ && this.delegate_.onCreated && this.delegate_.onCreated(params, deviceId);
  }
  AudioLogStub.prototype.onStarted = function() {
    return this.delegate_ && this.delegate_.onStarted && this.delegate_.onStarted();
  }
  AudioLogStub.prototype.onStopped = function() {
    return this.delegate_ && this.delegate_.onStopped && this.delegate_.onStopped();
  }
  AudioLogStub.prototype.onClosed = function() {
    return this.delegate_ && this.delegate_.onClosed && this.delegate_.onClosed();
  }
  AudioLogStub.prototype.onError = function() {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError();
  }
  AudioLogStub.prototype.onSetVolume = function(volume) {
    return this.delegate_ && this.delegate_.onSetVolume && this.delegate_.onSetVolume(volume);
  }
  AudioLogStub.prototype.onLogMessage = function(message) {
    return this.delegate_ && this.delegate_.onLogMessage && this.delegate_.onLogMessage(message);
  }

  AudioLogStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAudioLog_OnCreated_Name:
      var params = reader.decodeStruct(AudioLog_OnCreated_Params);
      this.onCreated(params.params, params.deviceId);
      return true;
    case kAudioLog_OnStarted_Name:
      var params = reader.decodeStruct(AudioLog_OnStarted_Params);
      this.onStarted();
      return true;
    case kAudioLog_OnStopped_Name:
      var params = reader.decodeStruct(AudioLog_OnStopped_Params);
      this.onStopped();
      return true;
    case kAudioLog_OnClosed_Name:
      var params = reader.decodeStruct(AudioLog_OnClosed_Params);
      this.onClosed();
      return true;
    case kAudioLog_OnError_Name:
      var params = reader.decodeStruct(AudioLog_OnError_Params);
      this.onError();
      return true;
    case kAudioLog_OnSetVolume_Name:
      var params = reader.decodeStruct(AudioLog_OnSetVolume_Params);
      this.onSetVolume(params.volume);
      return true;
    case kAudioLog_OnLogMessage_Name:
      var params = reader.decodeStruct(AudioLog_OnLogMessage_Params);
      this.onLogMessage(params.message);
      return true;
    default:
      return false;
    }
  };

  AudioLogStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAudioLogRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAudioLog_OnCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioLog_OnCreated_Params;
      break;
      case kAudioLog_OnStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioLog_OnStarted_Params;
      break;
      case kAudioLog_OnStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioLog_OnStopped_Params;
      break;
      case kAudioLog_OnClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioLog_OnClosed_Params;
      break;
      case kAudioLog_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioLog_OnError_Params;
      break;
      case kAudioLog_OnSetVolume_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioLog_OnSetVolume_Params;
      break;
      case kAudioLog_OnLogMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AudioLog_OnLogMessage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAudioLogResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AudioLog = {
    name: 'media.mojom.AudioLog',
    kVersion: 0,
    ptrClass: AudioLogPtr,
    proxyClass: AudioLogProxy,
    stubClass: AudioLogStub,
    validateRequest: validateAudioLogRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/audio_logging.mojom',
    fuzzMethods: {
      onCreated: {
        params: AudioLog_OnCreated_Params,
      },
      onStarted: {
        params: AudioLog_OnStarted_Params,
      },
      onStopped: {
        params: AudioLog_OnStopped_Params,
      },
      onClosed: {
        params: AudioLog_OnClosed_Params,
      },
      onError: {
        params: AudioLog_OnError_Params,
      },
      onSetVolume: {
        params: AudioLog_OnSetVolume_Params,
      },
      onLogMessage: {
        params: AudioLog_OnLogMessage_Params,
      },
    },
  };
  AudioLogStub.prototype.validator = validateAudioLogRequest;
  AudioLogProxy.prototype.validator = null;
  exports.AudioLog = AudioLog;
  exports.AudioLogPtr = AudioLogPtr;
  exports.AudioLogAssociatedPtr = AudioLogAssociatedPtr;
})();