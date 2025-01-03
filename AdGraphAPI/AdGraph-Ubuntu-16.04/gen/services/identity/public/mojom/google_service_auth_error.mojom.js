// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/identity/public/mojom/google_service_auth_error.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('identity.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }



  function Captcha(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Captcha.prototype.initDefaults_ = function() {
    this.token = null;
    this.audioUrl = null;
    this.imageUrl = null;
    this.unlockUrl = null;
    this.imageWidth = 0;
    this.imageHeight = 0;
  };
  Captcha.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Captcha.generate = function(generator_) {
    var generated = new Captcha;
    generated.token = generator_.generateString(false);
    generated.audioUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.imageUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.unlockUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.imageWidth = generator_.generateInt32();
    generated.imageHeight = generator_.generateInt32();
    return generated;
  };

  Captcha.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateString(this.token, false);
    }
    if (mutator_.chooseMutateField()) {
      this.audioUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.imageUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.unlockUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.imageWidth = mutator_.mutateInt32(this.imageWidth);
    }
    if (mutator_.chooseMutateField()) {
      this.imageHeight = mutator_.mutateInt32(this.imageHeight);
    }
    return this;
  };
  Captcha.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Captcha.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Captcha.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Captcha.validate = function(messageValidator, offset) {
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


    // validate Captcha.token
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Captcha.audioUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Captcha.imageUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Captcha.unlockUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Captcha.encodedSize = codec.kStructHeaderSize + 40;

  Captcha.decode = function(decoder) {
    var packed;
    var val = new Captcha();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStruct(codec.String);
    val.audioUrl = decoder.decodeStructPointer(url$.Url);
    val.imageUrl = decoder.decodeStructPointer(url$.Url);
    val.unlockUrl = decoder.decodeStructPointer(url$.Url);
    val.imageWidth = decoder.decodeStruct(codec.Int32);
    val.imageHeight = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Captcha.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Captcha.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.token);
    encoder.encodeStructPointer(url$.Url, val.audioUrl);
    encoder.encodeStructPointer(url$.Url, val.imageUrl);
    encoder.encodeStructPointer(url$.Url, val.unlockUrl);
    encoder.encodeStruct(codec.Int32, val.imageWidth);
    encoder.encodeStruct(codec.Int32, val.imageHeight);
  };
  function SecondFactor(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SecondFactor.prototype.initDefaults_ = function() {
    this.token = null;
    this.promptText = null;
    this.alternateText = null;
    this.fieldLength = 0;
  };
  SecondFactor.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SecondFactor.generate = function(generator_) {
    var generated = new SecondFactor;
    generated.token = generator_.generateString(false);
    generated.promptText = generator_.generateString(false);
    generated.alternateText = generator_.generateString(false);
    generated.fieldLength = generator_.generateInt32();
    return generated;
  };

  SecondFactor.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateString(this.token, false);
    }
    if (mutator_.chooseMutateField()) {
      this.promptText = mutator_.mutateString(this.promptText, false);
    }
    if (mutator_.chooseMutateField()) {
      this.alternateText = mutator_.mutateString(this.alternateText, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fieldLength = mutator_.mutateInt32(this.fieldLength);
    }
    return this;
  };
  SecondFactor.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SecondFactor.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SecondFactor.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SecondFactor.validate = function(messageValidator, offset) {
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


    // validate SecondFactor.token
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SecondFactor.promptText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SecondFactor.alternateText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SecondFactor.encodedSize = codec.kStructHeaderSize + 32;

  SecondFactor.decode = function(decoder) {
    var packed;
    var val = new SecondFactor();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStruct(codec.String);
    val.promptText = decoder.decodeStruct(codec.String);
    val.alternateText = decoder.decodeStruct(codec.String);
    val.fieldLength = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SecondFactor.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SecondFactor.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.token);
    encoder.encodeStruct(codec.String, val.promptText);
    encoder.encodeStruct(codec.String, val.alternateText);
    encoder.encodeStruct(codec.Int32, val.fieldLength);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GoogleServiceAuthError(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GoogleServiceAuthError.prototype.initDefaults_ = function() {
    this.state = 0;
    this.networkError = 0;
    this.captcha = null;
    this.secondFactor = null;
    this.errorMessage = null;
  };
  GoogleServiceAuthError.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GoogleServiceAuthError.generate = function(generator_) {
    var generated = new GoogleServiceAuthError;
    generated.state = generator_.generateInt32();
    generated.captcha = generator_.generateStruct(identity.mojom.Captcha, false);
    generated.secondFactor = generator_.generateStruct(identity.mojom.SecondFactor, false);
    generated.networkError = generator_.generateInt32();
    generated.errorMessage = generator_.generateString(false);
    return generated;
  };

  GoogleServiceAuthError.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateInt32(this.state);
    }
    if (mutator_.chooseMutateField()) {
      this.captcha = mutator_.mutateStruct(identity.mojom.Captcha, false);
    }
    if (mutator_.chooseMutateField()) {
      this.secondFactor = mutator_.mutateStruct(identity.mojom.SecondFactor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.networkError = mutator_.mutateInt32(this.networkError);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMessage = mutator_.mutateString(this.errorMessage, false);
    }
    return this;
  };
  GoogleServiceAuthError.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GoogleServiceAuthError.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GoogleServiceAuthError.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GoogleServiceAuthError.validate = function(messageValidator, offset) {
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



    // validate GoogleServiceAuthError.captcha
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Captcha, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GoogleServiceAuthError.secondFactor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, SecondFactor, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate GoogleServiceAuthError.errorMessage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GoogleServiceAuthError.encodedSize = codec.kStructHeaderSize + 32;

  GoogleServiceAuthError.decode = function(decoder) {
    var packed;
    var val = new GoogleServiceAuthError();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    val.networkError = decoder.decodeStruct(codec.Int32);
    val.captcha = decoder.decodeStructPointer(Captcha);
    val.secondFactor = decoder.decodeStructPointer(SecondFactor);
    val.errorMessage = decoder.decodeStruct(codec.String);
    return val;
  };

  GoogleServiceAuthError.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GoogleServiceAuthError.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.encodeStruct(codec.Int32, val.networkError);
    encoder.encodeStructPointer(Captcha, val.captcha);
    encoder.encodeStructPointer(SecondFactor, val.secondFactor);
    encoder.encodeStruct(codec.String, val.errorMessage);
  };
  exports.Captcha = Captcha;
  exports.SecondFactor = SecondFactor;
  exports.GoogleServiceAuthError = GoogleServiceAuthError;
})();