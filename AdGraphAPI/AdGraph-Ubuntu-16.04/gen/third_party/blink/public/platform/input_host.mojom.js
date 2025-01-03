// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/input_host.mojom';
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



  function SpellCheckSuggestion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellCheckSuggestion.prototype.initDefaults_ = function() {
    this.suggestion = null;
  };
  SpellCheckSuggestion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellCheckSuggestion.generate = function(generator_) {
    var generated = new SpellCheckSuggestion;
    generated.suggestion = generator_.generateString(false);
    return generated;
  };

  SpellCheckSuggestion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.suggestion = mutator_.mutateString(this.suggestion, false);
    }
    return this;
  };
  SpellCheckSuggestion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpellCheckSuggestion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellCheckSuggestion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpellCheckSuggestion.validate = function(messageValidator, offset) {
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


    // validate SpellCheckSuggestion.suggestion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpellCheckSuggestion.encodedSize = codec.kStructHeaderSize + 8;

  SpellCheckSuggestion.decode = function(decoder) {
    var packed;
    var val = new SpellCheckSuggestion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.suggestion = decoder.decodeStruct(codec.String);
    return val;
  };

  SpellCheckSuggestion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellCheckSuggestion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.suggestion);
  };
  function TextSuggestion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestion.prototype.initDefaults_ = function() {
    this.markerTag = 0;
    this.suggestionIndex = 0;
    this.prefix = null;
    this.suggestion = null;
    this.suffix = null;
  };
  TextSuggestion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestion.generate = function(generator_) {
    var generated = new TextSuggestion;
    generated.markerTag = generator_.generateInt32();
    generated.suggestionIndex = generator_.generateInt32();
    generated.prefix = generator_.generateString(false);
    generated.suggestion = generator_.generateString(false);
    generated.suffix = generator_.generateString(false);
    return generated;
  };

  TextSuggestion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.markerTag = mutator_.mutateInt32(this.markerTag);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestionIndex = mutator_.mutateInt32(this.suggestionIndex);
    }
    if (mutator_.chooseMutateField()) {
      this.prefix = mutator_.mutateString(this.prefix, false);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestion = mutator_.mutateString(this.suggestion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.suffix = mutator_.mutateString(this.suffix, false);
    }
    return this;
  };
  TextSuggestion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestion.validate = function(messageValidator, offset) {
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




    // validate TextSuggestion.prefix
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextSuggestion.suggestion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextSuggestion.suffix
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextSuggestion.encodedSize = codec.kStructHeaderSize + 32;

  TextSuggestion.decode = function(decoder) {
    var packed;
    var val = new TextSuggestion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.markerTag = decoder.decodeStruct(codec.Int32);
    val.suggestionIndex = decoder.decodeStruct(codec.Int32);
    val.prefix = decoder.decodeStruct(codec.String);
    val.suggestion = decoder.decodeStruct(codec.String);
    val.suffix = decoder.decodeStruct(codec.String);
    return val;
  };

  TextSuggestion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.markerTag);
    encoder.encodeStruct(codec.Int32, val.suggestionIndex);
    encoder.encodeStruct(codec.String, val.prefix);
    encoder.encodeStruct(codec.String, val.suggestion);
    encoder.encodeStruct(codec.String, val.suffix);
  };
  function TextSuggestionHost_StartSuggestionMenuTimer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionHost_StartSuggestionMenuTimer_Params.prototype.initDefaults_ = function() {
  };
  TextSuggestionHost_StartSuggestionMenuTimer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionHost_StartSuggestionMenuTimer_Params.generate = function(generator_) {
    var generated = new TextSuggestionHost_StartSuggestionMenuTimer_Params;
    return generated;
  };

  TextSuggestionHost_StartSuggestionMenuTimer_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TextSuggestionHost_StartSuggestionMenuTimer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionHost_StartSuggestionMenuTimer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionHost_StartSuggestionMenuTimer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionHost_StartSuggestionMenuTimer_Params.validate = function(messageValidator, offset) {
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

  TextSuggestionHost_StartSuggestionMenuTimer_Params.encodedSize = codec.kStructHeaderSize + 0;

  TextSuggestionHost_StartSuggestionMenuTimer_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionHost_StartSuggestionMenuTimer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TextSuggestionHost_StartSuggestionMenuTimer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionHost_StartSuggestionMenuTimer_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.prototype.initDefaults_ = function() {
    this.caretX = 0;
    this.caretY = 0;
    this.markedText = null;
    this.suggestions = null;
  };
  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.generate = function(generator_) {
    var generated = new TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params;
    generated.caretX = generator_.generateDouble();
    generated.caretY = generator_.generateDouble();
    generated.markedText = generator_.generateString(false);
    generated.suggestions = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.SpellCheckSuggestion, false);
    });
    return generated;
  };

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.caretX = mutator_.mutateDouble(this.caretX);
    }
    if (mutator_.chooseMutateField()) {
      this.caretY = mutator_.mutateDouble(this.caretY);
    }
    if (mutator_.chooseMutateField()) {
      this.markedText = mutator_.mutateString(this.markedText, false);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestions = mutator_.mutateArray(this.suggestions, function(val) {
        return mutator_.mutateStruct(blink.mojom.SpellCheckSuggestion, false);
      });
    }
    return this;
  };
  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.validate = function(messageValidator, offset) {
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




    // validate TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.markedText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.suggestions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(SpellCheckSuggestion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.encodedSize = codec.kStructHeaderSize + 32;

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.caretX = decoder.decodeStruct(codec.Double);
    val.caretY = decoder.decodeStruct(codec.Double);
    val.markedText = decoder.decodeStruct(codec.String);
    val.suggestions = decoder.decodeArrayPointer(new codec.PointerTo(SpellCheckSuggestion));
    return val;
  };

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.caretX);
    encoder.encodeStruct(codec.Double, val.caretY);
    encoder.encodeStruct(codec.String, val.markedText);
    encoder.encodeArrayPointer(new codec.PointerTo(SpellCheckSuggestion), val.suggestions);
  };
  function TextSuggestionHost_ShowTextSuggestionMenu_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextSuggestionHost_ShowTextSuggestionMenu_Params.prototype.initDefaults_ = function() {
    this.caretX = 0;
    this.caretY = 0;
    this.markedText = null;
    this.suggestions = null;
  };
  TextSuggestionHost_ShowTextSuggestionMenu_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextSuggestionHost_ShowTextSuggestionMenu_Params.generate = function(generator_) {
    var generated = new TextSuggestionHost_ShowTextSuggestionMenu_Params;
    generated.caretX = generator_.generateDouble();
    generated.caretY = generator_.generateDouble();
    generated.markedText = generator_.generateString(false);
    generated.suggestions = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.TextSuggestion, false);
    });
    return generated;
  };

  TextSuggestionHost_ShowTextSuggestionMenu_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.caretX = mutator_.mutateDouble(this.caretX);
    }
    if (mutator_.chooseMutateField()) {
      this.caretY = mutator_.mutateDouble(this.caretY);
    }
    if (mutator_.chooseMutateField()) {
      this.markedText = mutator_.mutateString(this.markedText, false);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestions = mutator_.mutateArray(this.suggestions, function(val) {
        return mutator_.mutateStruct(blink.mojom.TextSuggestion, false);
      });
    }
    return this;
  };
  TextSuggestionHost_ShowTextSuggestionMenu_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextSuggestionHost_ShowTextSuggestionMenu_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextSuggestionHost_ShowTextSuggestionMenu_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextSuggestionHost_ShowTextSuggestionMenu_Params.validate = function(messageValidator, offset) {
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




    // validate TextSuggestionHost_ShowTextSuggestionMenu_Params.markedText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextSuggestionHost_ShowTextSuggestionMenu_Params.suggestions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(TextSuggestion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextSuggestionHost_ShowTextSuggestionMenu_Params.encodedSize = codec.kStructHeaderSize + 32;

  TextSuggestionHost_ShowTextSuggestionMenu_Params.decode = function(decoder) {
    var packed;
    var val = new TextSuggestionHost_ShowTextSuggestionMenu_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.caretX = decoder.decodeStruct(codec.Double);
    val.caretY = decoder.decodeStruct(codec.Double);
    val.markedText = decoder.decodeStruct(codec.String);
    val.suggestions = decoder.decodeArrayPointer(new codec.PointerTo(TextSuggestion));
    return val;
  };

  TextSuggestionHost_ShowTextSuggestionMenu_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextSuggestionHost_ShowTextSuggestionMenu_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.caretX);
    encoder.encodeStruct(codec.Double, val.caretY);
    encoder.encodeStruct(codec.String, val.markedText);
    encoder.encodeArrayPointer(new codec.PointerTo(TextSuggestion), val.suggestions);
  };
  var kTextSuggestionHost_StartSuggestionMenuTimer_Name = 600672110;
  var kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name = 1806605516;
  var kTextSuggestionHost_ShowTextSuggestionMenu_Name = 1692361128;

  function TextSuggestionHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TextSuggestionHost,
                                                   handleOrPtrInfo);
  }

  function TextSuggestionHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TextSuggestionHost, associatedInterfacePtrInfo);
  }

  TextSuggestionHostAssociatedPtr.prototype =
      Object.create(TextSuggestionHostPtr.prototype);
  TextSuggestionHostAssociatedPtr.prototype.constructor =
      TextSuggestionHostAssociatedPtr;

  function TextSuggestionHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  TextSuggestionHostPtr.prototype.startSuggestionMenuTimer = function() {
    return TextSuggestionHostProxy.prototype.startSuggestionMenuTimer
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionHostProxy.prototype.startSuggestionMenuTimer = function() {
    var params_ = new TextSuggestionHost_StartSuggestionMenuTimer_Params();
    var builder = new codec.MessageV0Builder(
        kTextSuggestionHost_StartSuggestionMenuTimer_Name,
        codec.align(TextSuggestionHost_StartSuggestionMenuTimer_Params.encodedSize));
    builder.encodeStruct(TextSuggestionHost_StartSuggestionMenuTimer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextSuggestionHostPtr.prototype.showSpellCheckSuggestionMenu = function() {
    return TextSuggestionHostProxy.prototype.showSpellCheckSuggestionMenu
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionHostProxy.prototype.showSpellCheckSuggestionMenu = function(caretX, caretY, markedText, suggestions) {
    var params_ = new TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params();
    params_.caretX = caretX;
    params_.caretY = caretY;
    params_.markedText = markedText;
    params_.suggestions = suggestions;
    var builder = new codec.MessageV0Builder(
        kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name,
        codec.align(TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params.encodedSize));
    builder.encodeStruct(TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextSuggestionHostPtr.prototype.showTextSuggestionMenu = function() {
    return TextSuggestionHostProxy.prototype.showTextSuggestionMenu
        .apply(this.ptr.getProxy(), arguments);
  };

  TextSuggestionHostProxy.prototype.showTextSuggestionMenu = function(caretX, caretY, markedText, suggestions) {
    var params_ = new TextSuggestionHost_ShowTextSuggestionMenu_Params();
    params_.caretX = caretX;
    params_.caretY = caretY;
    params_.markedText = markedText;
    params_.suggestions = suggestions;
    var builder = new codec.MessageV0Builder(
        kTextSuggestionHost_ShowTextSuggestionMenu_Name,
        codec.align(TextSuggestionHost_ShowTextSuggestionMenu_Params.encodedSize));
    builder.encodeStruct(TextSuggestionHost_ShowTextSuggestionMenu_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TextSuggestionHostStub(delegate) {
    this.delegate_ = delegate;
  }
  TextSuggestionHostStub.prototype.startSuggestionMenuTimer = function() {
    return this.delegate_ && this.delegate_.startSuggestionMenuTimer && this.delegate_.startSuggestionMenuTimer();
  }
  TextSuggestionHostStub.prototype.showSpellCheckSuggestionMenu = function(caretX, caretY, markedText, suggestions) {
    return this.delegate_ && this.delegate_.showSpellCheckSuggestionMenu && this.delegate_.showSpellCheckSuggestionMenu(caretX, caretY, markedText, suggestions);
  }
  TextSuggestionHostStub.prototype.showTextSuggestionMenu = function(caretX, caretY, markedText, suggestions) {
    return this.delegate_ && this.delegate_.showTextSuggestionMenu && this.delegate_.showTextSuggestionMenu(caretX, caretY, markedText, suggestions);
  }

  TextSuggestionHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextSuggestionHost_StartSuggestionMenuTimer_Name:
      var params = reader.decodeStruct(TextSuggestionHost_StartSuggestionMenuTimer_Params);
      this.startSuggestionMenuTimer();
      return true;
    case kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name:
      var params = reader.decodeStruct(TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params);
      this.showSpellCheckSuggestionMenu(params.caretX, params.caretY, params.markedText, params.suggestions);
      return true;
    case kTextSuggestionHost_ShowTextSuggestionMenu_Name:
      var params = reader.decodeStruct(TextSuggestionHost_ShowTextSuggestionMenu_Params);
      this.showTextSuggestionMenu(params.caretX, params.caretY, params.markedText, params.suggestions);
      return true;
    default:
      return false;
    }
  };

  TextSuggestionHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTextSuggestionHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTextSuggestionHost_StartSuggestionMenuTimer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionHost_StartSuggestionMenuTimer_Params;
      break;
      case kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params;
      break;
      case kTextSuggestionHost_ShowTextSuggestionMenu_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextSuggestionHost_ShowTextSuggestionMenu_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTextSuggestionHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TextSuggestionHost = {
    name: 'blink.mojom.TextSuggestionHost',
    kVersion: 0,
    ptrClass: TextSuggestionHostPtr,
    proxyClass: TextSuggestionHostProxy,
    stubClass: TextSuggestionHostStub,
    validateRequest: validateTextSuggestionHostRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/input_host.mojom',
    fuzzMethods: {
      startSuggestionMenuTimer: {
        params: TextSuggestionHost_StartSuggestionMenuTimer_Params,
      },
      showSpellCheckSuggestionMenu: {
        params: TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params,
      },
      showTextSuggestionMenu: {
        params: TextSuggestionHost_ShowTextSuggestionMenu_Params,
      },
    },
  };
  TextSuggestionHostStub.prototype.validator = validateTextSuggestionHostRequest;
  TextSuggestionHostProxy.prototype.validator = null;
  exports.SpellCheckSuggestion = SpellCheckSuggestion;
  exports.TextSuggestion = TextSuggestion;
  exports.TextSuggestionHost = TextSuggestionHost;
  exports.TextSuggestionHostPtr = TextSuggestionHostPtr;
  exports.TextSuggestionHostAssociatedPtr = TextSuggestionHostAssociatedPtr;
})();