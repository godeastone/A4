// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/speech_recognizer.mojom';
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
  var speech_recognition_grammar$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/speech_recognition_grammar.mojom', '../public/common/speech_recognition_grammar.mojom.js');
  }
  var speech_recognition_result$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/speech_recognition_result.mojom', '../public/common/speech_recognition_result.mojom.js');
  }
  var speech_recognition_error$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/speech_recognition_error.mojom', '../public/common/speech_recognition_error.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../url/mojom/origin.mojom.js');
  }



  function StartSpeechRecognitionRequestParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartSpeechRecognitionRequestParams.prototype.initDefaults_ = function() {
    this.sessionRequest = new bindings.InterfaceRequest();
    this.client = new SpeechRecognitionSessionClientPtr();
    this.maxHypotheses = 0;
    this.language = null;
    this.grammars = null;
    this.origin = null;
    this.continuous = false;
    this.interimResults = false;
  };
  StartSpeechRecognitionRequestParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StartSpeechRecognitionRequestParams.generate = function(generator_) {
    var generated = new StartSpeechRecognitionRequestParams;
    generated.sessionRequest = generator_.generateInterfaceRequest("content.mojom.SpeechRecognitionSession", false);
    generated.client = generator_.generateInterface("content.mojom.SpeechRecognitionSessionClient", false);
    generated.language = generator_.generateString(false);
    generated.grammars = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.SpeechRecognitionGrammar, false);
    });
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.maxHypotheses = generator_.generateUint32();
    generated.continuous = generator_.generateBool();
    generated.interimResults = generator_.generateBool();
    return generated;
  };

  StartSpeechRecognitionRequestParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionRequest = mutator_.mutateInterfaceRequest(this.sessionRequest, "content.mojom.SpeechRecognitionSession", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "content.mojom.SpeechRecognitionSessionClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.language = mutator_.mutateString(this.language, false);
    }
    if (mutator_.chooseMutateField()) {
      this.grammars = mutator_.mutateArray(this.grammars, function(val) {
        return mutator_.mutateStruct(content.mojom.SpeechRecognitionGrammar, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxHypotheses = mutator_.mutateUint32(this.maxHypotheses);
    }
    if (mutator_.chooseMutateField()) {
      this.continuous = mutator_.mutateBool(this.continuous);
    }
    if (mutator_.chooseMutateField()) {
      this.interimResults = mutator_.mutateBool(this.interimResults);
    }
    return this;
  };
  StartSpeechRecognitionRequestParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sessionRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SpeechRecognitionSessionRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SpeechRecognitionSessionClientPtr"]);
    }
    return handles;
  };

  StartSpeechRecognitionRequestParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StartSpeechRecognitionRequestParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sessionRequest = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  StartSpeechRecognitionRequestParams.validate = function(messageValidator, offset) {
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


    // validate StartSpeechRecognitionRequestParams.sessionRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSpeechRecognitionRequestParams.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSpeechRecognitionRequestParams.language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSpeechRecognitionRequestParams.grammars
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(speech_recognition_grammar$.SpeechRecognitionGrammar), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSpeechRecognitionRequestParams.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  StartSpeechRecognitionRequestParams.encodedSize = codec.kStructHeaderSize + 48;

  StartSpeechRecognitionRequestParams.decode = function(decoder) {
    var packed;
    var val = new StartSpeechRecognitionRequestParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(SpeechRecognitionSessionClientPtr));
    val.maxHypotheses = decoder.decodeStruct(codec.Uint32);
    val.language = decoder.decodeStruct(codec.String);
    val.grammars = decoder.decodeArrayPointer(new codec.PointerTo(speech_recognition_grammar$.SpeechRecognitionGrammar));
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    packed = decoder.readUint8();
    val.continuous = (packed >> 0) & 1 ? true : false;
    val.interimResults = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  StartSpeechRecognitionRequestParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartSpeechRecognitionRequestParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.sessionRequest);
    encoder.encodeStruct(new codec.Interface(SpeechRecognitionSessionClientPtr), val.client);
    encoder.encodeStruct(codec.Uint32, val.maxHypotheses);
    encoder.encodeStruct(codec.String, val.language);
    encoder.encodeArrayPointer(new codec.PointerTo(speech_recognition_grammar$.SpeechRecognitionGrammar), val.grammars);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    packed = 0;
    packed |= (val.continuous & 1) << 0
    packed |= (val.interimResults & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SpeechRecognizer_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognizer_Start_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  SpeechRecognizer_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognizer_Start_Params.generate = function(generator_) {
    var generated = new SpeechRecognizer_Start_Params;
    generated.params = generator_.generateStruct(content.mojom.StartSpeechRecognitionRequestParams, false);
    return generated;
  };

  SpeechRecognizer_Start_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.StartSpeechRecognitionRequestParams, false);
    }
    return this;
  };
  SpeechRecognizer_Start_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  SpeechRecognizer_Start_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognizer_Start_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  SpeechRecognizer_Start_Params.validate = function(messageValidator, offset) {
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


    // validate SpeechRecognizer_Start_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, StartSpeechRecognitionRequestParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpeechRecognizer_Start_Params.encodedSize = codec.kStructHeaderSize + 8;

  SpeechRecognizer_Start_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognizer_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(StartSpeechRecognitionRequestParams);
    return val;
  };

  SpeechRecognizer_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognizer_Start_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(StartSpeechRecognitionRequestParams, val.params);
  };
  function SpeechRecognitionSession_Abort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSession_Abort_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSession_Abort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSession_Abort_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSession_Abort_Params;
    return generated;
  };

  SpeechRecognitionSession_Abort_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSession_Abort_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSession_Abort_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSession_Abort_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSession_Abort_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSession_Abort_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSession_Abort_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSession_Abort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSession_Abort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSession_Abort_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpeechRecognitionSession_StopCapture_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSession_StopCapture_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSession_StopCapture_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSession_StopCapture_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSession_StopCapture_Params;
    return generated;
  };

  SpeechRecognitionSession_StopCapture_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSession_StopCapture_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSession_StopCapture_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSession_StopCapture_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSession_StopCapture_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSession_StopCapture_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSession_StopCapture_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSession_StopCapture_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSession_StopCapture_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSession_StopCapture_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpeechRecognitionSessionClient_ResultRetrieved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_ResultRetrieved_Params.prototype.initDefaults_ = function() {
    this.results = null;
  };
  SpeechRecognitionSessionClient_ResultRetrieved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_ResultRetrieved_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_ResultRetrieved_Params;
    generated.results = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.SpeechRecognitionResult, false);
    });
    return generated;
  };

  SpeechRecognitionSessionClient_ResultRetrieved_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateArray(this.results, function(val) {
        return mutator_.mutateStruct(content.mojom.SpeechRecognitionResult, false);
      });
    }
    return this;
  };
  SpeechRecognitionSessionClient_ResultRetrieved_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_ResultRetrieved_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_ResultRetrieved_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_ResultRetrieved_Params.validate = function(messageValidator, offset) {
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


    // validate SpeechRecognitionSessionClient_ResultRetrieved_Params.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(speech_recognition_result$.SpeechRecognitionResult), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpeechRecognitionSessionClient_ResultRetrieved_Params.encodedSize = codec.kStructHeaderSize + 8;

  SpeechRecognitionSessionClient_ResultRetrieved_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_ResultRetrieved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(speech_recognition_result$.SpeechRecognitionResult));
    return val;
  };

  SpeechRecognitionSessionClient_ResultRetrieved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_ResultRetrieved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(speech_recognition_result$.SpeechRecognitionResult), val.results);
  };
  function SpeechRecognitionSessionClient_ErrorOccurred_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_ErrorOccurred_Params.prototype.initDefaults_ = function() {
    this.error = null;
  };
  SpeechRecognitionSessionClient_ErrorOccurred_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_ErrorOccurred_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_ErrorOccurred_Params;
    generated.error = generator_.generateStruct(content.mojom.SpeechRecognitionError, false);
    return generated;
  };

  SpeechRecognitionSessionClient_ErrorOccurred_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateStruct(content.mojom.SpeechRecognitionError, false);
    }
    return this;
  };
  SpeechRecognitionSessionClient_ErrorOccurred_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_ErrorOccurred_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_ErrorOccurred_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_ErrorOccurred_Params.validate = function(messageValidator, offset) {
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


    // validate SpeechRecognitionSessionClient_ErrorOccurred_Params.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, speech_recognition_error$.SpeechRecognitionError, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpeechRecognitionSessionClient_ErrorOccurred_Params.encodedSize = codec.kStructHeaderSize + 8;

  SpeechRecognitionSessionClient_ErrorOccurred_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_ErrorOccurred_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStructPointer(speech_recognition_error$.SpeechRecognitionError);
    return val;
  };

  SpeechRecognitionSessionClient_ErrorOccurred_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_ErrorOccurred_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(speech_recognition_error$.SpeechRecognitionError, val.error);
  };
  function SpeechRecognitionSessionClient_Started_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_Started_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSessionClient_Started_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_Started_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_Started_Params;
    return generated;
  };

  SpeechRecognitionSessionClient_Started_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSessionClient_Started_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_Started_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_Started_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_Started_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSessionClient_Started_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSessionClient_Started_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_Started_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSessionClient_Started_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_Started_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpeechRecognitionSessionClient_AudioStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_AudioStarted_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSessionClient_AudioStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_AudioStarted_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_AudioStarted_Params;
    return generated;
  };

  SpeechRecognitionSessionClient_AudioStarted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSessionClient_AudioStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_AudioStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_AudioStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_AudioStarted_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSessionClient_AudioStarted_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSessionClient_AudioStarted_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_AudioStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSessionClient_AudioStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_AudioStarted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpeechRecognitionSessionClient_SoundStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_SoundStarted_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSessionClient_SoundStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_SoundStarted_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_SoundStarted_Params;
    return generated;
  };

  SpeechRecognitionSessionClient_SoundStarted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSessionClient_SoundStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_SoundStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_SoundStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_SoundStarted_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSessionClient_SoundStarted_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSessionClient_SoundStarted_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_SoundStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSessionClient_SoundStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_SoundStarted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpeechRecognitionSessionClient_SoundEnded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_SoundEnded_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSessionClient_SoundEnded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_SoundEnded_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_SoundEnded_Params;
    return generated;
  };

  SpeechRecognitionSessionClient_SoundEnded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSessionClient_SoundEnded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_SoundEnded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_SoundEnded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_SoundEnded_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSessionClient_SoundEnded_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSessionClient_SoundEnded_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_SoundEnded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSessionClient_SoundEnded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_SoundEnded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpeechRecognitionSessionClient_AudioEnded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_AudioEnded_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSessionClient_AudioEnded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_AudioEnded_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_AudioEnded_Params;
    return generated;
  };

  SpeechRecognitionSessionClient_AudioEnded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSessionClient_AudioEnded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_AudioEnded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_AudioEnded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_AudioEnded_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSessionClient_AudioEnded_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSessionClient_AudioEnded_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_AudioEnded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSessionClient_AudioEnded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_AudioEnded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpeechRecognitionSessionClient_Ended_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionSessionClient_Ended_Params.prototype.initDefaults_ = function() {
  };
  SpeechRecognitionSessionClient_Ended_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionSessionClient_Ended_Params.generate = function(generator_) {
    var generated = new SpeechRecognitionSessionClient_Ended_Params;
    return generated;
  };

  SpeechRecognitionSessionClient_Ended_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpeechRecognitionSessionClient_Ended_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionSessionClient_Ended_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionSessionClient_Ended_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionSessionClient_Ended_Params.validate = function(messageValidator, offset) {
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

  SpeechRecognitionSessionClient_Ended_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpeechRecognitionSessionClient_Ended_Params.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionSessionClient_Ended_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpeechRecognitionSessionClient_Ended_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionSessionClient_Ended_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kSpeechRecognizer_Start_Name = 1112276323;

  function SpeechRecognizerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SpeechRecognizer,
                                                   handleOrPtrInfo);
  }

  function SpeechRecognizerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SpeechRecognizer, associatedInterfacePtrInfo);
  }

  SpeechRecognizerAssociatedPtr.prototype =
      Object.create(SpeechRecognizerPtr.prototype);
  SpeechRecognizerAssociatedPtr.prototype.constructor =
      SpeechRecognizerAssociatedPtr;

  function SpeechRecognizerProxy(receiver) {
    this.receiver_ = receiver;
  }
  SpeechRecognizerPtr.prototype.start = function() {
    return SpeechRecognizerProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognizerProxy.prototype.start = function(params) {
    var params_ = new SpeechRecognizer_Start_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kSpeechRecognizer_Start_Name,
        codec.align(SpeechRecognizer_Start_Params.encodedSize));
    builder.encodeStruct(SpeechRecognizer_Start_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SpeechRecognizerStub(delegate) {
    this.delegate_ = delegate;
  }
  SpeechRecognizerStub.prototype.start = function(params) {
    return this.delegate_ && this.delegate_.start && this.delegate_.start(params);
  }

  SpeechRecognizerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSpeechRecognizer_Start_Name:
      var params = reader.decodeStruct(SpeechRecognizer_Start_Params);
      this.start(params.params);
      return true;
    default:
      return false;
    }
  };

  SpeechRecognizerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSpeechRecognizerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSpeechRecognizer_Start_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognizer_Start_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSpeechRecognizerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SpeechRecognizer = {
    name: 'content.mojom.SpeechRecognizer',
    kVersion: 0,
    ptrClass: SpeechRecognizerPtr,
    proxyClass: SpeechRecognizerProxy,
    stubClass: SpeechRecognizerStub,
    validateRequest: validateSpeechRecognizerRequest,
    validateResponse: null,
    mojomId: 'content/common/speech_recognizer.mojom',
    fuzzMethods: {
      start: {
        params: SpeechRecognizer_Start_Params,
      },
    },
  };
  SpeechRecognizerStub.prototype.validator = validateSpeechRecognizerRequest;
  SpeechRecognizerProxy.prototype.validator = null;
  var kSpeechRecognitionSession_Abort_Name = 208235390;
  var kSpeechRecognitionSession_StopCapture_Name = 614695475;

  function SpeechRecognitionSessionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SpeechRecognitionSession,
                                                   handleOrPtrInfo);
  }

  function SpeechRecognitionSessionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SpeechRecognitionSession, associatedInterfacePtrInfo);
  }

  SpeechRecognitionSessionAssociatedPtr.prototype =
      Object.create(SpeechRecognitionSessionPtr.prototype);
  SpeechRecognitionSessionAssociatedPtr.prototype.constructor =
      SpeechRecognitionSessionAssociatedPtr;

  function SpeechRecognitionSessionProxy(receiver) {
    this.receiver_ = receiver;
  }
  SpeechRecognitionSessionPtr.prototype.abort = function() {
    return SpeechRecognitionSessionProxy.prototype.abort
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionProxy.prototype.abort = function() {
    var params_ = new SpeechRecognitionSession_Abort_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSession_Abort_Name,
        codec.align(SpeechRecognitionSession_Abort_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSession_Abort_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionPtr.prototype.stopCapture = function() {
    return SpeechRecognitionSessionProxy.prototype.stopCapture
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionProxy.prototype.stopCapture = function() {
    var params_ = new SpeechRecognitionSession_StopCapture_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSession_StopCapture_Name,
        codec.align(SpeechRecognitionSession_StopCapture_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSession_StopCapture_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SpeechRecognitionSessionStub(delegate) {
    this.delegate_ = delegate;
  }
  SpeechRecognitionSessionStub.prototype.abort = function() {
    return this.delegate_ && this.delegate_.abort && this.delegate_.abort();
  }
  SpeechRecognitionSessionStub.prototype.stopCapture = function() {
    return this.delegate_ && this.delegate_.stopCapture && this.delegate_.stopCapture();
  }

  SpeechRecognitionSessionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSpeechRecognitionSession_Abort_Name:
      var params = reader.decodeStruct(SpeechRecognitionSession_Abort_Params);
      this.abort();
      return true;
    case kSpeechRecognitionSession_StopCapture_Name:
      var params = reader.decodeStruct(SpeechRecognitionSession_StopCapture_Params);
      this.stopCapture();
      return true;
    default:
      return false;
    }
  };

  SpeechRecognitionSessionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSpeechRecognitionSessionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSpeechRecognitionSession_Abort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSession_Abort_Params;
      break;
      case kSpeechRecognitionSession_StopCapture_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSession_StopCapture_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSpeechRecognitionSessionResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SpeechRecognitionSession = {
    name: 'content.mojom.SpeechRecognitionSession',
    kVersion: 0,
    ptrClass: SpeechRecognitionSessionPtr,
    proxyClass: SpeechRecognitionSessionProxy,
    stubClass: SpeechRecognitionSessionStub,
    validateRequest: validateSpeechRecognitionSessionRequest,
    validateResponse: null,
    mojomId: 'content/common/speech_recognizer.mojom',
    fuzzMethods: {
      abort: {
        params: SpeechRecognitionSession_Abort_Params,
      },
      stopCapture: {
        params: SpeechRecognitionSession_StopCapture_Params,
      },
    },
  };
  SpeechRecognitionSessionStub.prototype.validator = validateSpeechRecognitionSessionRequest;
  SpeechRecognitionSessionProxy.prototype.validator = null;
  var kSpeechRecognitionSessionClient_ResultRetrieved_Name = 925058473;
  var kSpeechRecognitionSessionClient_ErrorOccurred_Name = 382565794;
  var kSpeechRecognitionSessionClient_Started_Name = 1107795139;
  var kSpeechRecognitionSessionClient_AudioStarted_Name = 1602696408;
  var kSpeechRecognitionSessionClient_SoundStarted_Name = 1999547659;
  var kSpeechRecognitionSessionClient_SoundEnded_Name = 1423694472;
  var kSpeechRecognitionSessionClient_AudioEnded_Name = 1470469694;
  var kSpeechRecognitionSessionClient_Ended_Name = 1569023186;

  function SpeechRecognitionSessionClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SpeechRecognitionSessionClient,
                                                   handleOrPtrInfo);
  }

  function SpeechRecognitionSessionClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SpeechRecognitionSessionClient, associatedInterfacePtrInfo);
  }

  SpeechRecognitionSessionClientAssociatedPtr.prototype =
      Object.create(SpeechRecognitionSessionClientPtr.prototype);
  SpeechRecognitionSessionClientAssociatedPtr.prototype.constructor =
      SpeechRecognitionSessionClientAssociatedPtr;

  function SpeechRecognitionSessionClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  SpeechRecognitionSessionClientPtr.prototype.resultRetrieved = function() {
    return SpeechRecognitionSessionClientProxy.prototype.resultRetrieved
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.resultRetrieved = function(results) {
    var params_ = new SpeechRecognitionSessionClient_ResultRetrieved_Params();
    params_.results = results;
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_ResultRetrieved_Name,
        codec.align(SpeechRecognitionSessionClient_ResultRetrieved_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_ResultRetrieved_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionClientPtr.prototype.errorOccurred = function() {
    return SpeechRecognitionSessionClientProxy.prototype.errorOccurred
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.errorOccurred = function(error) {
    var params_ = new SpeechRecognitionSessionClient_ErrorOccurred_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_ErrorOccurred_Name,
        codec.align(SpeechRecognitionSessionClient_ErrorOccurred_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_ErrorOccurred_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionClientPtr.prototype.started = function() {
    return SpeechRecognitionSessionClientProxy.prototype.started
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.started = function() {
    var params_ = new SpeechRecognitionSessionClient_Started_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_Started_Name,
        codec.align(SpeechRecognitionSessionClient_Started_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_Started_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionClientPtr.prototype.audioStarted = function() {
    return SpeechRecognitionSessionClientProxy.prototype.audioStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.audioStarted = function() {
    var params_ = new SpeechRecognitionSessionClient_AudioStarted_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_AudioStarted_Name,
        codec.align(SpeechRecognitionSessionClient_AudioStarted_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_AudioStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionClientPtr.prototype.soundStarted = function() {
    return SpeechRecognitionSessionClientProxy.prototype.soundStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.soundStarted = function() {
    var params_ = new SpeechRecognitionSessionClient_SoundStarted_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_SoundStarted_Name,
        codec.align(SpeechRecognitionSessionClient_SoundStarted_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_SoundStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionClientPtr.prototype.soundEnded = function() {
    return SpeechRecognitionSessionClientProxy.prototype.soundEnded
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.soundEnded = function() {
    var params_ = new SpeechRecognitionSessionClient_SoundEnded_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_SoundEnded_Name,
        codec.align(SpeechRecognitionSessionClient_SoundEnded_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_SoundEnded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionClientPtr.prototype.audioEnded = function() {
    return SpeechRecognitionSessionClientProxy.prototype.audioEnded
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.audioEnded = function() {
    var params_ = new SpeechRecognitionSessionClient_AudioEnded_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_AudioEnded_Name,
        codec.align(SpeechRecognitionSessionClient_AudioEnded_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_AudioEnded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpeechRecognitionSessionClientPtr.prototype.ended = function() {
    return SpeechRecognitionSessionClientProxy.prototype.ended
        .apply(this.ptr.getProxy(), arguments);
  };

  SpeechRecognitionSessionClientProxy.prototype.ended = function() {
    var params_ = new SpeechRecognitionSessionClient_Ended_Params();
    var builder = new codec.MessageV0Builder(
        kSpeechRecognitionSessionClient_Ended_Name,
        codec.align(SpeechRecognitionSessionClient_Ended_Params.encodedSize));
    builder.encodeStruct(SpeechRecognitionSessionClient_Ended_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SpeechRecognitionSessionClientStub(delegate) {
    this.delegate_ = delegate;
  }
  SpeechRecognitionSessionClientStub.prototype.resultRetrieved = function(results) {
    return this.delegate_ && this.delegate_.resultRetrieved && this.delegate_.resultRetrieved(results);
  }
  SpeechRecognitionSessionClientStub.prototype.errorOccurred = function(error) {
    return this.delegate_ && this.delegate_.errorOccurred && this.delegate_.errorOccurred(error);
  }
  SpeechRecognitionSessionClientStub.prototype.started = function() {
    return this.delegate_ && this.delegate_.started && this.delegate_.started();
  }
  SpeechRecognitionSessionClientStub.prototype.audioStarted = function() {
    return this.delegate_ && this.delegate_.audioStarted && this.delegate_.audioStarted();
  }
  SpeechRecognitionSessionClientStub.prototype.soundStarted = function() {
    return this.delegate_ && this.delegate_.soundStarted && this.delegate_.soundStarted();
  }
  SpeechRecognitionSessionClientStub.prototype.soundEnded = function() {
    return this.delegate_ && this.delegate_.soundEnded && this.delegate_.soundEnded();
  }
  SpeechRecognitionSessionClientStub.prototype.audioEnded = function() {
    return this.delegate_ && this.delegate_.audioEnded && this.delegate_.audioEnded();
  }
  SpeechRecognitionSessionClientStub.prototype.ended = function() {
    return this.delegate_ && this.delegate_.ended && this.delegate_.ended();
  }

  SpeechRecognitionSessionClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSpeechRecognitionSessionClient_ResultRetrieved_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_ResultRetrieved_Params);
      this.resultRetrieved(params.results);
      return true;
    case kSpeechRecognitionSessionClient_ErrorOccurred_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_ErrorOccurred_Params);
      this.errorOccurred(params.error);
      return true;
    case kSpeechRecognitionSessionClient_Started_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_Started_Params);
      this.started();
      return true;
    case kSpeechRecognitionSessionClient_AudioStarted_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_AudioStarted_Params);
      this.audioStarted();
      return true;
    case kSpeechRecognitionSessionClient_SoundStarted_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_SoundStarted_Params);
      this.soundStarted();
      return true;
    case kSpeechRecognitionSessionClient_SoundEnded_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_SoundEnded_Params);
      this.soundEnded();
      return true;
    case kSpeechRecognitionSessionClient_AudioEnded_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_AudioEnded_Params);
      this.audioEnded();
      return true;
    case kSpeechRecognitionSessionClient_Ended_Name:
      var params = reader.decodeStruct(SpeechRecognitionSessionClient_Ended_Params);
      this.ended();
      return true;
    default:
      return false;
    }
  };

  SpeechRecognitionSessionClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSpeechRecognitionSessionClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSpeechRecognitionSessionClient_ResultRetrieved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_ResultRetrieved_Params;
      break;
      case kSpeechRecognitionSessionClient_ErrorOccurred_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_ErrorOccurred_Params;
      break;
      case kSpeechRecognitionSessionClient_Started_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_Started_Params;
      break;
      case kSpeechRecognitionSessionClient_AudioStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_AudioStarted_Params;
      break;
      case kSpeechRecognitionSessionClient_SoundStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_SoundStarted_Params;
      break;
      case kSpeechRecognitionSessionClient_SoundEnded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_SoundEnded_Params;
      break;
      case kSpeechRecognitionSessionClient_AudioEnded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_AudioEnded_Params;
      break;
      case kSpeechRecognitionSessionClient_Ended_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpeechRecognitionSessionClient_Ended_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSpeechRecognitionSessionClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SpeechRecognitionSessionClient = {
    name: 'content.mojom.SpeechRecognitionSessionClient',
    kVersion: 0,
    ptrClass: SpeechRecognitionSessionClientPtr,
    proxyClass: SpeechRecognitionSessionClientProxy,
    stubClass: SpeechRecognitionSessionClientStub,
    validateRequest: validateSpeechRecognitionSessionClientRequest,
    validateResponse: null,
    mojomId: 'content/common/speech_recognizer.mojom',
    fuzzMethods: {
      resultRetrieved: {
        params: SpeechRecognitionSessionClient_ResultRetrieved_Params,
      },
      errorOccurred: {
        params: SpeechRecognitionSessionClient_ErrorOccurred_Params,
      },
      started: {
        params: SpeechRecognitionSessionClient_Started_Params,
      },
      audioStarted: {
        params: SpeechRecognitionSessionClient_AudioStarted_Params,
      },
      soundStarted: {
        params: SpeechRecognitionSessionClient_SoundStarted_Params,
      },
      soundEnded: {
        params: SpeechRecognitionSessionClient_SoundEnded_Params,
      },
      audioEnded: {
        params: SpeechRecognitionSessionClient_AudioEnded_Params,
      },
      ended: {
        params: SpeechRecognitionSessionClient_Ended_Params,
      },
    },
  };
  SpeechRecognitionSessionClientStub.prototype.validator = validateSpeechRecognitionSessionClientRequest;
  SpeechRecognitionSessionClientProxy.prototype.validator = null;
  exports.StartSpeechRecognitionRequestParams = StartSpeechRecognitionRequestParams;
  exports.SpeechRecognizer = SpeechRecognizer;
  exports.SpeechRecognizerPtr = SpeechRecognizerPtr;
  exports.SpeechRecognizerAssociatedPtr = SpeechRecognizerAssociatedPtr;
  exports.SpeechRecognitionSession = SpeechRecognitionSession;
  exports.SpeechRecognitionSessionPtr = SpeechRecognitionSessionPtr;
  exports.SpeechRecognitionSessionAssociatedPtr = SpeechRecognitionSessionAssociatedPtr;
  exports.SpeechRecognitionSessionClient = SpeechRecognitionSessionClient;
  exports.SpeechRecognitionSessionClientPtr = SpeechRecognitionSessionClientPtr;
  exports.SpeechRecognitionSessionClientAssociatedPtr = SpeechRecognitionSessionClientAssociatedPtr;
})();