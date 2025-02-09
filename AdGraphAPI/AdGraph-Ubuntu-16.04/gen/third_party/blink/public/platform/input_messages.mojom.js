// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/input_messages.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');



  function TextSuggestionBackend_ApplySpellCheckSuggestion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.prototype.initDefaults_ = function() {
    this.suggestion = null;
  };
  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.generate = function(generator_) {
    var generated = new TextSuggestionBackend_ApplySpellCheckSuggestion_Params;
    generated.suggestion = generator_.generateString(false);
    return generated;
  };

  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.suggestion = mutator_.mutateString(this.suggestion, false);
    }
    return this;
  };
  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.validate = function(messageValidator, offset) {
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


    // validate TextSuggestionBackend_ApplySpellCheckSuggestion_Params.suggestion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionBackend_ApplySpellCheckSuggestion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.suggestion = decoder.decodeStruct(codec.String);
    return val;
  };

  TextSuggestionBackend_ApplySpellCheckSuggestion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionBackend_ApplySpellCheckSuggestion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.suggestion);
  };
  function TextSuggestionBackend_ApplyTextSuggestion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionBackend_ApplyTextSuggestion_Params.prototype.initDefaults_ = function() {
    this.markerTag = 0;
    this.suggestionIndex = 0;
  };
  TextSuggestionBackend_ApplyTextSuggestion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionBackend_ApplyTextSuggestion_Params.generate = function(generator_) {
    var generated = new TextSuggestionBackend_ApplyTextSuggestion_Params;
    generated.markerTag = generator_.generateInt32();
    generated.suggestionIndex = generator_.generateInt32();
    return generated;
  };

  TextSuggestionBackend_ApplyTextSuggestion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.markerTag = mutator_.mutateInt32(this.markerTag);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestionIndex = mutator_.mutateInt32(this.suggestionIndex);
    }
    return this;
  };
  TextSuggestionBackend_ApplyTextSuggestion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionBackend_ApplyTextSuggestion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionBackend_ApplyTextSuggestion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionBackend_ApplyTextSuggestion_Params.validate = function(messageValidator, offset) {
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

  TextSuggestionBackend_ApplyTextSuggestion_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextSuggestionBackend_ApplyTextSuggestion_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionBackend_ApplyTextSuggestion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.markerTag = decoder.decodeStruct(codec.Int32);
    val.suggestionIndex = decoder.decodeStruct(codec.Int32);
    return val;
  };

  TextSuggestionBackend_ApplyTextSuggestion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionBackend_ApplyTextSuggestion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.markerTag);
    encoder.encodeStruct(codec.Int32, val.suggestionIndex);
  };
  function TextSuggestionBackend_DeleteActiveSuggestionRange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.prototype.initDefaults_ = function() {
  };
  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.generate = function(generator_) {
    var generated = new TextSuggestionBackend_DeleteActiveSuggestionRange_Params;
    return generated;
  };

  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.validate = function(messageValidator, offset) {
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

  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.encodedSize = codec.kStructHeaderSize + 0;

  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionBackend_DeleteActiveSuggestionRange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TextSuggestionBackend_DeleteActiveSuggestionRange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionBackend_DeleteActiveSuggestionRange_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TextSuggestionBackend_OnNewWordAddedToDictionary_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.prototype.initDefaults_ = function() {
    this.suggestion = null;
  };
  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.generate = function(generator_) {
    var generated = new TextSuggestionBackend_OnNewWordAddedToDictionary_Params;
    generated.suggestion = generator_.generateString(false);
    return generated;
  };

  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.suggestion = mutator_.mutateString(this.suggestion, false);
    }
    return this;
  };
  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.validate = function(messageValidator, offset) {
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


    // validate TextSuggestionBackend_OnNewWordAddedToDictionary_Params.suggestion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionBackend_OnNewWordAddedToDictionary_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.suggestion = decoder.decodeStruct(codec.String);
    return val;
  };

  TextSuggestionBackend_OnNewWordAddedToDictionary_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionBackend_OnNewWordAddedToDictionary_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.suggestion);
  };
  function TextSuggestionBackend_OnSuggestionMenuClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionBackend_OnSuggestionMenuClosed_Params.prototype.initDefaults_ = function() {
  };
  TextSuggestionBackend_OnSuggestionMenuClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionBackend_OnSuggestionMenuClosed_Params.generate = function(generator_) {
    var generated = new TextSuggestionBackend_OnSuggestionMenuClosed_Params;
    return generated;
  };

  TextSuggestionBackend_OnSuggestionMenuClosed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TextSuggestionBackend_OnSuggestionMenuClosed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionBackend_OnSuggestionMenuClosed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionBackend_OnSuggestionMenuClosed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionBackend_OnSuggestionMenuClosed_Params.validate = function(messageValidator, offset) {
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

  TextSuggestionBackend_OnSuggestionMenuClosed_Params.encodedSize = codec.kStructHeaderSize + 0;

  TextSuggestionBackend_OnSuggestionMenuClosed_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionBackend_OnSuggestionMenuClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TextSuggestionBackend_OnSuggestionMenuClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionBackend_OnSuggestionMenuClosed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.prototype.initDefaults_ = function() {
    this.maxNumberOfSuggestions = 0;
  };
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.generate = function(generator_) {
    var generated = new TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params;
    generated.maxNumberOfSuggestions = generator_.generateInt32();
    return generated;
  };

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.maxNumberOfSuggestions = mutator_.mutateInt32(this.maxNumberOfSuggestions);
    }
    return this;
  };
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.validate = function(messageValidator, offset) {
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

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.maxNumberOfSuggestions = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.maxNumberOfSuggestions);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kTextSuggestionBackend_ApplySpellCheckSuggestion_Name = 23722445;
  var kTextSuggestionBackend_ApplyTextSuggestion_Name = 1403303429;
  var kTextSuggestionBackend_DeleteActiveSuggestionRange_Name = 930667482;
  var kTextSuggestionBackend_OnNewWordAddedToDictionary_Name = 110163821;
  var kTextSuggestionBackend_OnSuggestionMenuClosed_Name = 1227316587;
  var kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name = 87375026;

  function TextSuggestionBackendPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TextSuggestionBackend,
                                                   handleOrPtrInfo);
  }

  function TextSuggestionBackendAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TextSuggestionBackend, associatedInterfacePtrInfo);
  }

  TextSuggestionBackendAssociatedPtr.prototype =
      Object.create(TextSuggestionBackendPtr.prototype);
  TextSuggestionBackendAssociatedPtr.prototype.constructor =
      TextSuggestionBackendAssociatedPtr;

  function TextSuggestionBackendProxy(receiver) {
    this.receiver_ = receiver;
  }
  TextSuggestionBackendPtr.prototype.applySpellCheckSuggestion = function() {
    return TextSuggestionBackendProxy.prototype.applySpellCheckSuggestion
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionBackendProxy.prototype.applySpellCheckSuggestion = function(suggestion) {
    var params_ = new TextSuggestionBackend_ApplySpellCheckSuggestion_Params();
    params_.suggestion = suggestion;
    var builder = new codec.MessageV0Builder(
        kTextSuggestionBackend_ApplySpellCheckSuggestion_Name,
        codec.align(TextSuggestionBackend_ApplySpellCheckSuggestion_Params.encodedSize));
    builder.encodeStruct(TextSuggestionBackend_ApplySpellCheckSuggestion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextSuggestionBackendPtr.prototype.applyTextSuggestion = function() {
    return TextSuggestionBackendProxy.prototype.applyTextSuggestion
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionBackendProxy.prototype.applyTextSuggestion = function(markerTag, suggestionIndex) {
    var params_ = new TextSuggestionBackend_ApplyTextSuggestion_Params();
    params_.markerTag = markerTag;
    params_.suggestionIndex = suggestionIndex;
    var builder = new codec.MessageV0Builder(
        kTextSuggestionBackend_ApplyTextSuggestion_Name,
        codec.align(TextSuggestionBackend_ApplyTextSuggestion_Params.encodedSize));
    builder.encodeStruct(TextSuggestionBackend_ApplyTextSuggestion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextSuggestionBackendPtr.prototype.deleteActiveSuggestionRange = function() {
    return TextSuggestionBackendProxy.prototype.deleteActiveSuggestionRange
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionBackendProxy.prototype.deleteActiveSuggestionRange = function() {
    var params_ = new TextSuggestionBackend_DeleteActiveSuggestionRange_Params();
    var builder = new codec.MessageV0Builder(
        kTextSuggestionBackend_DeleteActiveSuggestionRange_Name,
        codec.align(TextSuggestionBackend_DeleteActiveSuggestionRange_Params.encodedSize));
    builder.encodeStruct(TextSuggestionBackend_DeleteActiveSuggestionRange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextSuggestionBackendPtr.prototype.onNewWordAddedToDictionary = function() {
    return TextSuggestionBackendProxy.prototype.onNewWordAddedToDictionary
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionBackendProxy.prototype.onNewWordAddedToDictionary = function(suggestion) {
    var params_ = new TextSuggestionBackend_OnNewWordAddedToDictionary_Params();
    params_.suggestion = suggestion;
    var builder = new codec.MessageV0Builder(
        kTextSuggestionBackend_OnNewWordAddedToDictionary_Name,
        codec.align(TextSuggestionBackend_OnNewWordAddedToDictionary_Params.encodedSize));
    builder.encodeStruct(TextSuggestionBackend_OnNewWordAddedToDictionary_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextSuggestionBackendPtr.prototype.onSuggestionMenuClosed = function() {
    return TextSuggestionBackendProxy.prototype.onSuggestionMenuClosed
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionBackendProxy.prototype.onSuggestionMenuClosed = function() {
    var params_ = new TextSuggestionBackend_OnSuggestionMenuClosed_Params();
    var builder = new codec.MessageV0Builder(
        kTextSuggestionBackend_OnSuggestionMenuClosed_Name,
        codec.align(TextSuggestionBackend_OnSuggestionMenuClosed_Params.encodedSize));
    builder.encodeStruct(TextSuggestionBackend_OnSuggestionMenuClosed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextSuggestionBackendPtr.prototype.suggestionMenuTimeoutCallback = function() {
    return TextSuggestionBackendProxy.prototype.suggestionMenuTimeoutCallback
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionBackendProxy.prototype.suggestionMenuTimeoutCallback = function(maxNumberOfSuggestions) {
    var params_ = new TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params();
    params_.maxNumberOfSuggestions = maxNumberOfSuggestions;
    var builder = new codec.MessageV0Builder(
        kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name,
        codec.align(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params.encodedSize));
    builder.encodeStruct(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TextSuggestionBackendStub(delegate) {
    this.delegate_ = delegate;
  }
  TextSuggestionBackendStub.prototype.applySpellCheckSuggestion = function(suggestion) {
    return this.delegate_ && this.delegate_.applySpellCheckSuggestion && this.delegate_.applySpellCheckSuggestion(suggestion);
  }
  TextSuggestionBackendStub.prototype.applyTextSuggestion = function(markerTag, suggestionIndex) {
    return this.delegate_ && this.delegate_.applyTextSuggestion && this.delegate_.applyTextSuggestion(markerTag, suggestionIndex);
  }
  TextSuggestionBackendStub.prototype.deleteActiveSuggestionRange = function() {
    return this.delegate_ && this.delegate_.deleteActiveSuggestionRange && this.delegate_.deleteActiveSuggestionRange();
  }
  TextSuggestionBackendStub.prototype.onNewWordAddedToDictionary = function(suggestion) {
    return this.delegate_ && this.delegate_.onNewWordAddedToDictionary && this.delegate_.onNewWordAddedToDictionary(suggestion);
  }
  TextSuggestionBackendStub.prototype.onSuggestionMenuClosed = function() {
    return this.delegate_ && this.delegate_.onSuggestionMenuClosed && this.delegate_.onSuggestionMenuClosed();
  }
  TextSuggestionBackendStub.prototype.suggestionMenuTimeoutCallback = function(maxNumberOfSuggestions) {
    return this.delegate_ && this.delegate_.suggestionMenuTimeoutCallback && this.delegate_.suggestionMenuTimeoutCallback(maxNumberOfSuggestions);
  }

  TextSuggestionBackendStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextSuggestionBackend_ApplySpellCheckSuggestion_Name:
      var params = reader.decodeStruct(TextSuggestionBackend_ApplySpellCheckSuggestion_Params);
      this.applySpellCheckSuggestion(params.suggestion);
      return true;
    case kTextSuggestionBackend_ApplyTextSuggestion_Name:
      var params = reader.decodeStruct(TextSuggestionBackend_ApplyTextSuggestion_Params);
      this.applyTextSuggestion(params.markerTag, params.suggestionIndex);
      return true;
    case kTextSuggestionBackend_DeleteActiveSuggestionRange_Name:
      var params = reader.decodeStruct(TextSuggestionBackend_DeleteActiveSuggestionRange_Params);
      this.deleteActiveSuggestionRange();
      return true;
    case kTextSuggestionBackend_OnNewWordAddedToDictionary_Name:
      var params = reader.decodeStruct(TextSuggestionBackend_OnNewWordAddedToDictionary_Params);
      this.onNewWordAddedToDictionary(params.suggestion);
      return true;
    case kTextSuggestionBackend_OnSuggestionMenuClosed_Name:
      var params = reader.decodeStruct(TextSuggestionBackend_OnSuggestionMenuClosed_Params);
      this.onSuggestionMenuClosed();
      return true;
    case kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name:
      var params = reader.decodeStruct(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params);
      this.suggestionMenuTimeoutCallback(params.maxNumberOfSuggestions);
      return true;
    default:
      return false;
    }
  };

  TextSuggestionBackendStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTextSuggestionBackendRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTextSuggestionBackend_ApplySpellCheckSuggestion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionBackend_ApplySpellCheckSuggestion_Params;
      break;
      case kTextSuggestionBackend_ApplyTextSuggestion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionBackend_ApplyTextSuggestion_Params;
      break;
      case kTextSuggestionBackend_DeleteActiveSuggestionRange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionBackend_DeleteActiveSuggestionRange_Params;
      break;
      case kTextSuggestionBackend_OnNewWordAddedToDictionary_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionBackend_OnNewWordAddedToDictionary_Params;
      break;
      case kTextSuggestionBackend_OnSuggestionMenuClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionBackend_OnSuggestionMenuClosed_Params;
      break;
      case kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTextSuggestionBackendResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TextSuggestionBackend = {
    name: 'blink.mojom.TextSuggestionBackend',
    kVersion: 0,
    ptrClass: TextSuggestionBackendPtr,
    proxyClass: TextSuggestionBackendProxy,
    stubClass: TextSuggestionBackendStub,
    validateRequest: validateTextSuggestionBackendRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/input_messages.mojom',
    fuzzMethods: {
      applySpellCheckSuggestion: {
        params: TextSuggestionBackend_ApplySpellCheckSuggestion_Params,
      },
      applyTextSuggestion: {
        params: TextSuggestionBackend_ApplyTextSuggestion_Params,
      },
      deleteActiveSuggestionRange: {
        params: TextSuggestionBackend_DeleteActiveSuggestionRange_Params,
      },
      onNewWordAddedToDictionary: {
        params: TextSuggestionBackend_OnNewWordAddedToDictionary_Params,
      },
      onSuggestionMenuClosed: {
        params: TextSuggestionBackend_OnSuggestionMenuClosed_Params,
      },
      suggestionMenuTimeoutCallback: {
        params: TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params,
      },
    },
  };
  TextSuggestionBackendStub.prototype.validator = validateTextSuggestionBackendRequest;
  TextSuggestionBackendProxy.prototype.validator = null;
  exports.TextSuggestionBackend = TextSuggestionBackend;
  exports.TextSuggestionBackendPtr = TextSuggestionBackendPtr;
  exports.TextSuggestionBackendAssociatedPtr = TextSuggestionBackendAssociatedPtr;
})();