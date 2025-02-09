// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/speech_recognition_error.mojom';
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


  var SpeechRecognitionErrorCode = {};
  SpeechRecognitionErrorCode.kNone = 0;
  SpeechRecognitionErrorCode.kNoSpeech = SpeechRecognitionErrorCode.kNone + 1;
  SpeechRecognitionErrorCode.kAborted = SpeechRecognitionErrorCode.kNoSpeech + 1;
  SpeechRecognitionErrorCode.kAudioCapture = SpeechRecognitionErrorCode.kAborted + 1;
  SpeechRecognitionErrorCode.kNetwork = SpeechRecognitionErrorCode.kAudioCapture + 1;
  SpeechRecognitionErrorCode.kNotAllowed = SpeechRecognitionErrorCode.kNetwork + 1;
  SpeechRecognitionErrorCode.kServiceNotAllowed = SpeechRecognitionErrorCode.kNotAllowed + 1;
  SpeechRecognitionErrorCode.kBadGrammar = SpeechRecognitionErrorCode.kServiceNotAllowed + 1;
  SpeechRecognitionErrorCode.kLanguageNotSupported = SpeechRecognitionErrorCode.kBadGrammar + 1;
  SpeechRecognitionErrorCode.kNoMatch = SpeechRecognitionErrorCode.kLanguageNotSupported + 1;

  SpeechRecognitionErrorCode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    }
    return false;
  };

  SpeechRecognitionErrorCode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SpeechAudioErrorDetails = {};
  SpeechAudioErrorDetails.kNone = 0;
  SpeechAudioErrorDetails.kNoMic = SpeechAudioErrorDetails.kNone + 1;

  SpeechAudioErrorDetails.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  SpeechAudioErrorDetails.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SpeechRecognitionError(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpeechRecognitionError.prototype.initDefaults_ = function() {
    this.code = 0;
    this.details = 0;
  };
  SpeechRecognitionError.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpeechRecognitionError.generate = function(generator_) {
    var generated = new SpeechRecognitionError;
    generated.code = generator_.generateEnum(0, 9);
    generated.details = generator_.generateEnum(0, 1);
    return generated;
  };

  SpeechRecognitionError.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.code = mutator_.mutateEnum(this.code, 0, 9);
    }
    if (mutator_.chooseMutateField()) {
      this.details = mutator_.mutateEnum(this.details, 0, 1);
    }
    return this;
  };
  SpeechRecognitionError.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpeechRecognitionError.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpeechRecognitionError.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpeechRecognitionError.validate = function(messageValidator, offset) {
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


    // validate SpeechRecognitionError.code
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, SpeechRecognitionErrorCode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SpeechRecognitionError.details
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, SpeechAudioErrorDetails);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpeechRecognitionError.encodedSize = codec.kStructHeaderSize + 8;

  SpeechRecognitionError.decode = function(decoder) {
    var packed;
    var val = new SpeechRecognitionError();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.code = decoder.decodeStruct(codec.Int32);
    val.details = decoder.decodeStruct(codec.Int32);
    return val;
  };

  SpeechRecognitionError.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpeechRecognitionError.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.code);
    encoder.encodeStruct(codec.Int32, val.details);
  };
  exports.SpeechRecognitionErrorCode = SpeechRecognitionErrorCode;
  exports.SpeechAudioErrorDetails = SpeechAudioErrorDetails;
  exports.SpeechRecognitionError = SpeechRecognitionError;
})();