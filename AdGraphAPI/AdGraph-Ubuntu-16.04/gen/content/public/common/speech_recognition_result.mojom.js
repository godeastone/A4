// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/speech_recognition_result.mojom';
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
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }



  function SpeechRecognitionHypothesis(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionHypothesis.prototype.initDefaults_ = function() {
    this.utterance = null;
    this.confidence = 0;
  };
  SpeechRecognitionHypothesis.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionHypothesis.generate = function(generator_) {
    var generated = new SpeechRecognitionHypothesis;
    generated.utterance = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.confidence = generator_.generateDouble();
    return generated;
  };

  SpeechRecognitionHypothesis.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.utterance = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.confidence = mutator_.mutateDouble(this.confidence);
    }
    return this;
  };
  SpeechRecognitionHypothesis.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionHypothesis.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionHypothesis.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionHypothesis.validate = function(messageValidator, offset) {
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


    // validate SpeechRecognitionHypothesis.utterance
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SpeechRecognitionHypothesis.encodedSize = codec.kStructHeaderSize + 16;

  SpeechRecognitionHypothesis.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionHypothesis();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.utterance = decoder.decodeStructPointer(string16$.String16);
    val.confidence = decoder.decodeStruct(codec.Double);
    return val;
  };

  SpeechRecognitionHypothesis.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionHypothesis.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.utterance);
    encoder.encodeStruct(codec.Double, val.confidence);
  };
  function SpeechRecognitionResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionResult.prototype.initDefaults_ = function() {
    this.hypotheses = null;
    this.isProvisional = false;
  };
  SpeechRecognitionResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionResult.generate = function(generator_) {
    var generated = new SpeechRecognitionResult;
    generated.hypotheses = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.SpeechRecognitionHypothesis, false);
    });
    generated.isProvisional = generator_.generateBool();
    return generated;
  };

  SpeechRecognitionResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hypotheses = mutator_.mutateArray(this.hypotheses, function(val) {
        return mutator_.mutateStruct(content.mojom.SpeechRecognitionHypothesis, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.isProvisional = mutator_.mutateBool(this.isProvisional);
    }
    return this;
  };
  SpeechRecognitionResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionResult.validate = function(messageValidator, offset) {
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


    // validate SpeechRecognitionResult.hypotheses
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(SpeechRecognitionHypothesis), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SpeechRecognitionResult.encodedSize = codec.kStructHeaderSize + 16;

  SpeechRecognitionResult.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hypotheses = decoder.decodeArrayPointer(new codec.PointerTo(SpeechRecognitionHypothesis));
    packed = decoder.readUint8();
    val.isProvisional = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SpeechRecognitionResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(SpeechRecognitionHypothesis), val.hypotheses);
    packed = 0;
    packed |= (val.isProvisional & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.SpeechRecognitionHypothesis = SpeechRecognitionHypothesis;
  exports.SpeechRecognitionResult = SpeechRecognitionResult;
})();