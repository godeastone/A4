// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/ime/ime.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var text_direction$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/text_direction.mojom', '../../../../../mojo/public/mojom/base/text_direction.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var event$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event.mojom', '../../../../../ui/events/mojo/event.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var range$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/range/mojo/range.mojom', '../../../../../ui/gfx/range/mojo/range.mojom.js');
  }
  var text_input_state$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/platform_window/mojo/text_input_state.mojom', '../../../../../ui/platform_window/mojo/text_input_state.mojom.js');
  }


  var CandidateWindowPosition = {};
  CandidateWindowPosition.kCursor = 0;
  CandidateWindowPosition.kComposition = CandidateWindowPosition.kCursor + 1;

  CandidateWindowPosition.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  CandidateWindowPosition.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ImeTextSpanType = {};
  ImeTextSpanType.kComposition = 0;
  ImeTextSpanType.kSuggestion = ImeTextSpanType.kComposition + 1;
  ImeTextSpanType.kMisspellingSuggestion = ImeTextSpanType.kSuggestion + 1;

  ImeTextSpanType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ImeTextSpanType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ImeTextSpanThickness = {};
  ImeTextSpanThickness.kNone = 0;
  ImeTextSpanThickness.kThin = ImeTextSpanThickness.kNone + 1;
  ImeTextSpanThickness.kThick = ImeTextSpanThickness.kThin + 1;

  ImeTextSpanThickness.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ImeTextSpanThickness.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TextInputMode = {};
  TextInputMode.kDefault = 0;
  TextInputMode.kNone = TextInputMode.kDefault + 1;
  TextInputMode.kText = TextInputMode.kNone + 1;
  TextInputMode.kTel = TextInputMode.kText + 1;
  TextInputMode.kUrl = TextInputMode.kTel + 1;
  TextInputMode.kEmail = TextInputMode.kUrl + 1;
  TextInputMode.kNumeric = TextInputMode.kEmail + 1;
  TextInputMode.kDecimal = TextInputMode.kNumeric + 1;
  TextInputMode.kSearch = TextInputMode.kDecimal + 1;

  TextInputMode.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  TextInputMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CandidateWindowProperties(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CandidateWindowProperties.prototype.initDefaults_ = function() {
    this.pageSize = 0;
    this.vertical = false;
    this.auxiliaryTextVisible = false;
    this.cursorVisible = false;
    this.auxiliaryText = null;
    this.cursorPosition = 0;
    this.windowPosition = 0;
  };
  CandidateWindowProperties.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CandidateWindowProperties.generate = function(generator_) {
    var generated = new CandidateWindowProperties;
    generated.pageSize = generator_.generateInt32();
    generated.vertical = generator_.generateBool();
    generated.auxiliaryText = generator_.generateString(false);
    generated.auxiliaryTextVisible = generator_.generateBool();
    generated.cursorPosition = generator_.generateInt32();
    generated.cursorVisible = generator_.generateBool();
    generated.windowPosition = generator_.generateEnum(0, 1);
    return generated;
  };

  CandidateWindowProperties.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSize = mutator_.mutateInt32(this.pageSize);
    }
    if (mutator_.chooseMutateField()) {
      this.vertical = mutator_.mutateBool(this.vertical);
    }
    if (mutator_.chooseMutateField()) {
      this.auxiliaryText = mutator_.mutateString(this.auxiliaryText, false);
    }
    if (mutator_.chooseMutateField()) {
      this.auxiliaryTextVisible = mutator_.mutateBool(this.auxiliaryTextVisible);
    }
    if (mutator_.chooseMutateField()) {
      this.cursorPosition = mutator_.mutateInt32(this.cursorPosition);
    }
    if (mutator_.chooseMutateField()) {
      this.cursorVisible = mutator_.mutateBool(this.cursorVisible);
    }
    if (mutator_.chooseMutateField()) {
      this.windowPosition = mutator_.mutateEnum(this.windowPosition, 0, 1);
    }
    return this;
  };
  CandidateWindowProperties.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CandidateWindowProperties.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CandidateWindowProperties.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CandidateWindowProperties.validate = function(messageValidator, offset) {
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




    // validate CandidateWindowProperties.auxiliaryText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;





    // validate CandidateWindowProperties.windowPosition
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, CandidateWindowPosition);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CandidateWindowProperties.encodedSize = codec.kStructHeaderSize + 24;

  CandidateWindowProperties.decode = function(decoder) {
    var packed;
    var val = new CandidateWindowProperties();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSize = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.vertical = (packed >> 0) & 1 ? true : false;
    val.auxiliaryTextVisible = (packed >> 1) & 1 ? true : false;
    val.cursorVisible = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.auxiliaryText = decoder.decodeStruct(codec.String);
    val.cursorPosition = decoder.decodeStruct(codec.Int32);
    val.windowPosition = decoder.decodeStruct(codec.Int32);
    return val;
  };

  CandidateWindowProperties.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CandidateWindowProperties.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSize);
    packed = 0;
    packed |= (val.vertical & 1) << 0
    packed |= (val.auxiliaryTextVisible & 1) << 1
    packed |= (val.cursorVisible & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.auxiliaryText);
    encoder.encodeStruct(codec.Int32, val.cursorPosition);
    encoder.encodeStruct(codec.Int32, val.windowPosition);
  };
  function CandidateWindowEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CandidateWindowEntry.prototype.initDefaults_ = function() {
    this.value = null;
    this.label = null;
    this.annotation = null;
    this.descriptionTitle = null;
    this.descriptionBody = null;
  };
  CandidateWindowEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CandidateWindowEntry.generate = function(generator_) {
    var generated = new CandidateWindowEntry;
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.label = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.annotation = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.descriptionTitle = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.descriptionBody = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  CandidateWindowEntry.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.annotation = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.descriptionTitle = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.descriptionBody = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  CandidateWindowEntry.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CandidateWindowEntry.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CandidateWindowEntry.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CandidateWindowEntry.validate = function(messageValidator, offset) {
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


    // validate CandidateWindowEntry.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CandidateWindowEntry.label
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CandidateWindowEntry.annotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CandidateWindowEntry.descriptionTitle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CandidateWindowEntry.descriptionBody
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CandidateWindowEntry.encodedSize = codec.kStructHeaderSize + 40;

  CandidateWindowEntry.decode = function(decoder) {
    var packed;
    var val = new CandidateWindowEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(string16$.String16);
    val.label = decoder.decodeStructPointer(string16$.String16);
    val.annotation = decoder.decodeStructPointer(string16$.String16);
    val.descriptionTitle = decoder.decodeStructPointer(string16$.String16);
    val.descriptionBody = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  CandidateWindowEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CandidateWindowEntry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.value);
    encoder.encodeStructPointer(string16$.String16, val.label);
    encoder.encodeStructPointer(string16$.String16, val.annotation);
    encoder.encodeStructPointer(string16$.String16, val.descriptionTitle);
    encoder.encodeStructPointer(string16$.String16, val.descriptionBody);
  };
  function ImeTextSpan(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImeTextSpan.prototype.initDefaults_ = function() {
    this.type = 0;
    this.startOffset = 0;
    this.endOffset = 0;
    this.underlineColor = 0;
    this.thickness = 0;
    this.backgroundColor = 0;
    this.suggestionHighlightColor = 0;
    this.suggestions = null;
  };
  ImeTextSpan.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImeTextSpan.generate = function(generator_) {
    var generated = new ImeTextSpan;
    generated.type = generator_.generateEnum(0, 2);
    generated.startOffset = generator_.generateUint32();
    generated.endOffset = generator_.generateUint32();
    generated.underlineColor = generator_.generateUint32();
    generated.thickness = generator_.generateEnum(0, 2);
    generated.backgroundColor = generator_.generateUint32();
    generated.suggestionHighlightColor = generator_.generateUint32();
    generated.suggestions = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  ImeTextSpan.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.startOffset = mutator_.mutateUint32(this.startOffset);
    }
    if (mutator_.chooseMutateField()) {
      this.endOffset = mutator_.mutateUint32(this.endOffset);
    }
    if (mutator_.chooseMutateField()) {
      this.underlineColor = mutator_.mutateUint32(this.underlineColor);
    }
    if (mutator_.chooseMutateField()) {
      this.thickness = mutator_.mutateEnum(this.thickness, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.backgroundColor = mutator_.mutateUint32(this.backgroundColor);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestionHighlightColor = mutator_.mutateUint32(this.suggestionHighlightColor);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestions = mutator_.mutateArray(this.suggestions, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  ImeTextSpan.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImeTextSpan.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImeTextSpan.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImeTextSpan.validate = function(messageValidator, offset) {
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


    // validate ImeTextSpan.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ImeTextSpanType);
    if (err !== validator.validationError.NONE)
        return err;





    // validate ImeTextSpan.thickness
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, ImeTextSpanThickness);
    if (err !== validator.validationError.NONE)
        return err;




    // validate ImeTextSpan.suggestions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImeTextSpan.encodedSize = codec.kStructHeaderSize + 40;

  ImeTextSpan.decode = function(decoder) {
    var packed;
    var val = new ImeTextSpan();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.startOffset = decoder.decodeStruct(codec.Uint32);
    val.endOffset = decoder.decodeStruct(codec.Uint32);
    val.underlineColor = decoder.decodeStruct(codec.Uint32);
    val.thickness = decoder.decodeStruct(codec.Int32);
    val.backgroundColor = decoder.decodeStruct(codec.Uint32);
    val.suggestionHighlightColor = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.suggestions = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ImeTextSpan.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImeTextSpan.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Uint32, val.startOffset);
    encoder.encodeStruct(codec.Uint32, val.endOffset);
    encoder.encodeStruct(codec.Uint32, val.underlineColor);
    encoder.encodeStruct(codec.Int32, val.thickness);
    encoder.encodeStruct(codec.Uint32, val.backgroundColor);
    encoder.encodeStruct(codec.Uint32, val.suggestionHighlightColor);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.String, val.suggestions);
  };
  function CompositionText(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CompositionText.prototype.initDefaults_ = function() {
    this.text = null;
    this.imeTextSpans = null;
    this.selection = null;
  };
  CompositionText.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CompositionText.generate = function(generator_) {
    var generated = new CompositionText;
    generated.text = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.imeTextSpans = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.ImeTextSpan, false);
    });
    generated.selection = generator_.generateStruct(gfx.mojom.Range, false);
    return generated;
  };

  CompositionText.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.imeTextSpans = mutator_.mutateArray(this.imeTextSpans, function(val) {
        return mutator_.mutateStruct(ui.mojom.ImeTextSpan, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.selection = mutator_.mutateStruct(gfx.mojom.Range, false);
    }
    return this;
  };
  CompositionText.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CompositionText.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CompositionText.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CompositionText.validate = function(messageValidator, offset) {
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


    // validate CompositionText.text
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CompositionText.imeTextSpans
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(ImeTextSpan), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CompositionText.selection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, range$.Range, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CompositionText.encodedSize = codec.kStructHeaderSize + 24;

  CompositionText.decode = function(decoder) {
    var packed;
    var val = new CompositionText();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStructPointer(string16$.String16);
    val.imeTextSpans = decoder.decodeArrayPointer(new codec.PointerTo(ImeTextSpan));
    val.selection = decoder.decodeStructPointer(range$.Range);
    return val;
  };

  CompositionText.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CompositionText.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.text);
    encoder.encodeArrayPointer(new codec.PointerTo(ImeTextSpan), val.imeTextSpans);
    encoder.encodeStructPointer(range$.Range, val.selection);
  };
  function StartSessionDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartSessionDetails.prototype.initDefaults_ = function() {
    this.client = new TextInputClientPtr();
    this.inputMethodRequest = new bindings.InterfaceRequest();
    this.textInputType = 0;
    this.textInputMode = 0;
    this.textDirection = 0;
    this.textInputFlags = 0;
    this.caretBounds = null;
  };
  StartSessionDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StartSessionDetails.generate = function(generator_) {
    var generated = new StartSessionDetails;
    generated.client = generator_.generateInterface("ui.mojom.TextInputClient", false);
    generated.inputMethodRequest = generator_.generateInterfaceRequest("ui.mojom.InputMethod", false);
    generated.textInputType = generator_.generateEnum(0, 16);
    generated.textInputMode = generator_.generateEnum(0, 8);
    generated.textDirection = generator_.generateEnum(0, 2);
    generated.textInputFlags = generator_.generateInt32();
    generated.caretBounds = generator_.generateStruct(gfx.mojom.Rect, false);
    return generated;
  };

  StartSessionDetails.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "ui.mojom.TextInputClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.inputMethodRequest = mutator_.mutateInterfaceRequest(this.inputMethodRequest, "ui.mojom.InputMethod", false);
    }
    if (mutator_.chooseMutateField()) {
      this.textInputType = mutator_.mutateEnum(this.textInputType, 0, 16);
    }
    if (mutator_.chooseMutateField()) {
      this.textInputMode = mutator_.mutateEnum(this.textInputMode, 0, 8);
    }
    if (mutator_.chooseMutateField()) {
      this.textDirection = mutator_.mutateEnum(this.textDirection, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.textInputFlags = mutator_.mutateInt32(this.textInputFlags);
    }
    if (mutator_.chooseMutateField()) {
      this.caretBounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    return this;
  };
  StartSessionDetails.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.TextInputClientPtr"]);
    }
    if (this.inputMethodRequest !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.InputMethodRequest"]);
    }
    return handles;
  };

  StartSessionDetails.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StartSessionDetails.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    this.inputMethodRequest = handles[idx++];;
    return idx;
  };

  StartSessionDetails.validate = function(messageValidator, offset) {
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


    // validate StartSessionDetails.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSessionDetails.inputMethodRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSessionDetails.textInputType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, text_input_state$.TextInputType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSessionDetails.textInputMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, TextInputMode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StartSessionDetails.textDirection
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, text_direction$.TextDirection);
    if (err !== validator.validationError.NONE)
        return err;



    // validate StartSessionDetails.caretBounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StartSessionDetails.encodedSize = codec.kStructHeaderSize + 40;

  StartSessionDetails.decode = function(decoder) {
    var packed;
    var val = new StartSessionDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(TextInputClientPtr));
    val.inputMethodRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.textInputType = decoder.decodeStruct(codec.Int32);
    val.textInputMode = decoder.decodeStruct(codec.Int32);
    val.textDirection = decoder.decodeStruct(codec.Int32);
    val.textInputFlags = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.caretBounds = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  StartSessionDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartSessionDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(TextInputClientPtr), val.client);
    encoder.encodeStruct(codec.InterfaceRequest, val.inputMethodRequest);
    encoder.encodeStruct(codec.Int32, val.textInputType);
    encoder.encodeStruct(codec.Int32, val.textInputMode);
    encoder.encodeStruct(codec.Int32, val.textDirection);
    encoder.encodeStruct(codec.Int32, val.textInputFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Rect, val.caretBounds);
  };
  function IMEDriver_StartSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IMEDriver_StartSession_Params.prototype.initDefaults_ = function() {
    this.details = null;
  };
  IMEDriver_StartSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IMEDriver_StartSession_Params.generate = function(generator_) {
    var generated = new IMEDriver_StartSession_Params;
    generated.details = generator_.generateStruct(ui.mojom.StartSessionDetails, false);
    return generated;
  };

  IMEDriver_StartSession_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.details = mutator_.mutateStruct(ui.mojom.StartSessionDetails, false);
    }
    return this;
  };
  IMEDriver_StartSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.details !== null) {
      Array.prototype.push.apply(handles, this.details.getHandleDeps());
    }
    return handles;
  };

  IMEDriver_StartSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IMEDriver_StartSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.details.setHandlesInternal_(handles, idx);
    return idx;
  };

  IMEDriver_StartSession_Params.validate = function(messageValidator, offset) {
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


    // validate IMEDriver_StartSession_Params.details
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, StartSessionDetails, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IMEDriver_StartSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  IMEDriver_StartSession_Params.decode = function(decoder) {
    var packed;
    var val = new IMEDriver_StartSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.details = decoder.decodeStructPointer(StartSessionDetails);
    return val;
  };

  IMEDriver_StartSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IMEDriver_StartSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(StartSessionDetails, val.details);
  };
  function IMERegistrar_RegisterDriver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IMERegistrar_RegisterDriver_Params.prototype.initDefaults_ = function() {
    this.driver = new IMEDriverPtr();
  };
  IMERegistrar_RegisterDriver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IMERegistrar_RegisterDriver_Params.generate = function(generator_) {
    var generated = new IMERegistrar_RegisterDriver_Params;
    generated.driver = generator_.generateInterface("ui.mojom.IMEDriver", false);
    return generated;
  };

  IMERegistrar_RegisterDriver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.driver = mutator_.mutateInterface(this.driver, "ui.mojom.IMEDriver", false);
    }
    return this;
  };
  IMERegistrar_RegisterDriver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.driver !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.IMEDriverPtr"]);
    }
    return handles;
  };

  IMERegistrar_RegisterDriver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IMERegistrar_RegisterDriver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.driver = handles[idx++];;
    return idx;
  };

  IMERegistrar_RegisterDriver_Params.validate = function(messageValidator, offset) {
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


    // validate IMERegistrar_RegisterDriver_Params.driver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IMERegistrar_RegisterDriver_Params.encodedSize = codec.kStructHeaderSize + 8;

  IMERegistrar_RegisterDriver_Params.decode = function(decoder) {
    var packed;
    var val = new IMERegistrar_RegisterDriver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.driver = decoder.decodeStruct(new codec.Interface(IMEDriverPtr));
    return val;
  };

  IMERegistrar_RegisterDriver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IMERegistrar_RegisterDriver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(IMEDriverPtr), val.driver);
  };
  function InputMethod_OnTextInputTypeChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_OnTextInputTypeChanged_Params.prototype.initDefaults_ = function() {
    this.textInputType = 0;
  };
  InputMethod_OnTextInputTypeChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputMethod_OnTextInputTypeChanged_Params.generate = function(generator_) {
    var generated = new InputMethod_OnTextInputTypeChanged_Params;
    generated.textInputType = generator_.generateEnum(0, 16);
    return generated;
  };

  InputMethod_OnTextInputTypeChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.textInputType = mutator_.mutateEnum(this.textInputType, 0, 16);
    }
    return this;
  };
  InputMethod_OnTextInputTypeChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputMethod_OnTextInputTypeChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputMethod_OnTextInputTypeChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputMethod_OnTextInputTypeChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InputMethod_OnTextInputTypeChanged_Params.textInputType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, text_input_state$.TextInputType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputMethod_OnTextInputTypeChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_OnTextInputTypeChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_OnTextInputTypeChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.textInputType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputMethod_OnTextInputTypeChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_OnTextInputTypeChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.textInputType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputMethod_OnCaretBoundsChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_OnCaretBoundsChanged_Params.prototype.initDefaults_ = function() {
    this.caretBounds = null;
  };
  InputMethod_OnCaretBoundsChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputMethod_OnCaretBoundsChanged_Params.generate = function(generator_) {
    var generated = new InputMethod_OnCaretBoundsChanged_Params;
    generated.caretBounds = generator_.generateStruct(gfx.mojom.Rect, false);
    return generated;
  };

  InputMethod_OnCaretBoundsChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.caretBounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    return this;
  };
  InputMethod_OnCaretBoundsChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputMethod_OnCaretBoundsChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputMethod_OnCaretBoundsChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputMethod_OnCaretBoundsChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InputMethod_OnCaretBoundsChanged_Params.caretBounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputMethod_OnCaretBoundsChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_OnCaretBoundsChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_OnCaretBoundsChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.caretBounds = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  InputMethod_OnCaretBoundsChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_OnCaretBoundsChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.caretBounds);
  };
  function InputMethod_ProcessKeyEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_ProcessKeyEvent_Params.prototype.initDefaults_ = function() {
    this.keyEvent = null;
  };
  InputMethod_ProcessKeyEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputMethod_ProcessKeyEvent_Params.generate = function(generator_) {
    var generated = new InputMethod_ProcessKeyEvent_Params;
    generated.keyEvent = generator_.generateStruct(ui.mojom.Event, false);
    return generated;
  };

  InputMethod_ProcessKeyEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyEvent = mutator_.mutateStruct(ui.mojom.Event, false);
    }
    return this;
  };
  InputMethod_ProcessKeyEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputMethod_ProcessKeyEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputMethod_ProcessKeyEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputMethod_ProcessKeyEvent_Params.validate = function(messageValidator, offset) {
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


    // validate InputMethod_ProcessKeyEvent_Params.keyEvent
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputMethod_ProcessKeyEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_ProcessKeyEvent_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_ProcessKeyEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyEvent = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  InputMethod_ProcessKeyEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_ProcessKeyEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(event$.Event, val.keyEvent);
  };
  function InputMethod_ProcessKeyEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_ProcessKeyEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.handled = false;
  };
  InputMethod_ProcessKeyEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputMethod_ProcessKeyEvent_ResponseParams.generate = function(generator_) {
    var generated = new InputMethod_ProcessKeyEvent_ResponseParams;
    generated.handled = generator_.generateBool();
    return generated;
  };

  InputMethod_ProcessKeyEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.handled = mutator_.mutateBool(this.handled);
    }
    return this;
  };
  InputMethod_ProcessKeyEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputMethod_ProcessKeyEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputMethod_ProcessKeyEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputMethod_ProcessKeyEvent_ResponseParams.validate = function(messageValidator, offset) {
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

  InputMethod_ProcessKeyEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_ProcessKeyEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputMethod_ProcessKeyEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.handled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputMethod_ProcessKeyEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_ProcessKeyEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.handled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputMethod_CancelComposition_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_CancelComposition_Params.prototype.initDefaults_ = function() {
  };
  InputMethod_CancelComposition_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputMethod_CancelComposition_Params.generate = function(generator_) {
    var generated = new InputMethod_CancelComposition_Params;
    return generated;
  };

  InputMethod_CancelComposition_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InputMethod_CancelComposition_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputMethod_CancelComposition_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputMethod_CancelComposition_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputMethod_CancelComposition_Params.validate = function(messageValidator, offset) {
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

  InputMethod_CancelComposition_Params.encodedSize = codec.kStructHeaderSize + 0;

  InputMethod_CancelComposition_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_CancelComposition_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputMethod_CancelComposition_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_CancelComposition_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TextInputClient_SetCompositionText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_SetCompositionText_Params.prototype.initDefaults_ = function() {
    this.composition = null;
  };
  TextInputClient_SetCompositionText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputClient_SetCompositionText_Params.generate = function(generator_) {
    var generated = new TextInputClient_SetCompositionText_Params;
    generated.composition = generator_.generateStruct(ui.mojom.CompositionText, false);
    return generated;
  };

  TextInputClient_SetCompositionText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.composition = mutator_.mutateStruct(ui.mojom.CompositionText, false);
    }
    return this;
  };
  TextInputClient_SetCompositionText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputClient_SetCompositionText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputClient_SetCompositionText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputClient_SetCompositionText_Params.validate = function(messageValidator, offset) {
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


    // validate TextInputClient_SetCompositionText_Params.composition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CompositionText, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextInputClient_SetCompositionText_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextInputClient_SetCompositionText_Params.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_SetCompositionText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.composition = decoder.decodeStructPointer(CompositionText);
    return val;
  };

  TextInputClient_SetCompositionText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_SetCompositionText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CompositionText, val.composition);
  };
  function TextInputClient_ConfirmCompositionText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_ConfirmCompositionText_Params.prototype.initDefaults_ = function() {
  };
  TextInputClient_ConfirmCompositionText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputClient_ConfirmCompositionText_Params.generate = function(generator_) {
    var generated = new TextInputClient_ConfirmCompositionText_Params;
    return generated;
  };

  TextInputClient_ConfirmCompositionText_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TextInputClient_ConfirmCompositionText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputClient_ConfirmCompositionText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputClient_ConfirmCompositionText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputClient_ConfirmCompositionText_Params.validate = function(messageValidator, offset) {
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

  TextInputClient_ConfirmCompositionText_Params.encodedSize = codec.kStructHeaderSize + 0;

  TextInputClient_ConfirmCompositionText_Params.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_ConfirmCompositionText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TextInputClient_ConfirmCompositionText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_ConfirmCompositionText_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TextInputClient_ClearCompositionText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_ClearCompositionText_Params.prototype.initDefaults_ = function() {
  };
  TextInputClient_ClearCompositionText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputClient_ClearCompositionText_Params.generate = function(generator_) {
    var generated = new TextInputClient_ClearCompositionText_Params;
    return generated;
  };

  TextInputClient_ClearCompositionText_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TextInputClient_ClearCompositionText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputClient_ClearCompositionText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputClient_ClearCompositionText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputClient_ClearCompositionText_Params.validate = function(messageValidator, offset) {
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

  TextInputClient_ClearCompositionText_Params.encodedSize = codec.kStructHeaderSize + 0;

  TextInputClient_ClearCompositionText_Params.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_ClearCompositionText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TextInputClient_ClearCompositionText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_ClearCompositionText_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TextInputClient_InsertText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_InsertText_Params.prototype.initDefaults_ = function() {
    this.text = null;
  };
  TextInputClient_InsertText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputClient_InsertText_Params.generate = function(generator_) {
    var generated = new TextInputClient_InsertText_Params;
    generated.text = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  TextInputClient_InsertText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  TextInputClient_InsertText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputClient_InsertText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputClient_InsertText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputClient_InsertText_Params.validate = function(messageValidator, offset) {
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


    // validate TextInputClient_InsertText_Params.text
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextInputClient_InsertText_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextInputClient_InsertText_Params.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_InsertText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  TextInputClient_InsertText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_InsertText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.text);
  };
  function TextInputClient_InsertChar_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_InsertChar_Params.prototype.initDefaults_ = function() {
    this.event = null;
  };
  TextInputClient_InsertChar_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputClient_InsertChar_Params.generate = function(generator_) {
    var generated = new TextInputClient_InsertChar_Params;
    generated.event = generator_.generateStruct(ui.mojom.Event, false);
    return generated;
  };

  TextInputClient_InsertChar_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(ui.mojom.Event, false);
    }
    return this;
  };
  TextInputClient_InsertChar_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputClient_InsertChar_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputClient_InsertChar_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputClient_InsertChar_Params.validate = function(messageValidator, offset) {
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


    // validate TextInputClient_InsertChar_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextInputClient_InsertChar_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextInputClient_InsertChar_Params.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_InsertChar_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  TextInputClient_InsertChar_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_InsertChar_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(event$.Event, val.event);
  };
  function TextInputClient_DispatchKeyEventPostIME_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_DispatchKeyEventPostIME_Params.prototype.initDefaults_ = function() {
    this.event = null;
  };
  TextInputClient_DispatchKeyEventPostIME_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputClient_DispatchKeyEventPostIME_Params.generate = function(generator_) {
    var generated = new TextInputClient_DispatchKeyEventPostIME_Params;
    generated.event = generator_.generateStruct(ui.mojom.Event, false);
    return generated;
  };

  TextInputClient_DispatchKeyEventPostIME_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(ui.mojom.Event, false);
    }
    return this;
  };
  TextInputClient_DispatchKeyEventPostIME_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputClient_DispatchKeyEventPostIME_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputClient_DispatchKeyEventPostIME_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputClient_DispatchKeyEventPostIME_Params.validate = function(messageValidator, offset) {
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


    // validate TextInputClient_DispatchKeyEventPostIME_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextInputClient_DispatchKeyEventPostIME_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextInputClient_DispatchKeyEventPostIME_Params.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_DispatchKeyEventPostIME_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  TextInputClient_DispatchKeyEventPostIME_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_DispatchKeyEventPostIME_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(event$.Event, val.event);
  };
  function TextInputClient_DispatchKeyEventPostIME_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_DispatchKeyEventPostIME_ResponseParams.prototype.initDefaults_ = function() {
    this.stoppedPropagation = false;
  };
  TextInputClient_DispatchKeyEventPostIME_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputClient_DispatchKeyEventPostIME_ResponseParams.generate = function(generator_) {
    var generated = new TextInputClient_DispatchKeyEventPostIME_ResponseParams;
    generated.stoppedPropagation = generator_.generateBool();
    return generated;
  };

  TextInputClient_DispatchKeyEventPostIME_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stoppedPropagation = mutator_.mutateBool(this.stoppedPropagation);
    }
    return this;
  };
  TextInputClient_DispatchKeyEventPostIME_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputClient_DispatchKeyEventPostIME_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputClient_DispatchKeyEventPostIME_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputClient_DispatchKeyEventPostIME_ResponseParams.validate = function(messageValidator, offset) {
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

  TextInputClient_DispatchKeyEventPostIME_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  TextInputClient_DispatchKeyEventPostIME_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_DispatchKeyEventPostIME_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.stoppedPropagation = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TextInputClient_DispatchKeyEventPostIME_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_DispatchKeyEventPostIME_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.stoppedPropagation & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kIMEDriver_StartSession_Name = 820628653;

  function IMEDriverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(IMEDriver,
                                                   handleOrPtrInfo);
  }

  function IMEDriverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        IMEDriver, associatedInterfacePtrInfo);
  }

  IMEDriverAssociatedPtr.prototype =
      Object.create(IMEDriverPtr.prototype);
  IMEDriverAssociatedPtr.prototype.constructor =
      IMEDriverAssociatedPtr;

  function IMEDriverProxy(receiver) {
    this.receiver_ = receiver;
  }
  IMEDriverPtr.prototype.startSession = function() {
    return IMEDriverProxy.prototype.startSession
        .apply(this.ptr.getProxy(), arguments);
  };

  IMEDriverProxy.prototype.startSession = function(details) {
    var params_ = new IMEDriver_StartSession_Params();
    params_.details = details;
    var builder = new codec.MessageV0Builder(
        kIMEDriver_StartSession_Name,
        codec.align(IMEDriver_StartSession_Params.encodedSize));
    builder.encodeStruct(IMEDriver_StartSession_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function IMEDriverStub(delegate) {
    this.delegate_ = delegate;
  }
  IMEDriverStub.prototype.startSession = function(details) {
    return this.delegate_ && this.delegate_.startSession && this.delegate_.startSession(details);
  }

  IMEDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIMEDriver_StartSession_Name:
      var params = reader.decodeStruct(IMEDriver_StartSession_Params);
      this.startSession(params.details);
      return true;
    default:
      return false;
    }
  };

  IMEDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateIMEDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIMEDriver_StartSession_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IMEDriver_StartSession_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIMEDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var IMEDriver = {
    name: 'ui.mojom.IMEDriver',
    kVersion: 0,
    ptrClass: IMEDriverPtr,
    proxyClass: IMEDriverProxy,
    stubClass: IMEDriverStub,
    validateRequest: validateIMEDriverRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/ime/ime.mojom',
    fuzzMethods: {
      startSession: {
        params: IMEDriver_StartSession_Params,
      },
    },
  };
  IMEDriverStub.prototype.validator = validateIMEDriverRequest;
  IMEDriverProxy.prototype.validator = null;
  var kIMERegistrar_RegisterDriver_Name = 2059786430;

  function IMERegistrarPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(IMERegistrar,
                                                   handleOrPtrInfo);
  }

  function IMERegistrarAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        IMERegistrar, associatedInterfacePtrInfo);
  }

  IMERegistrarAssociatedPtr.prototype =
      Object.create(IMERegistrarPtr.prototype);
  IMERegistrarAssociatedPtr.prototype.constructor =
      IMERegistrarAssociatedPtr;

  function IMERegistrarProxy(receiver) {
    this.receiver_ = receiver;
  }
  IMERegistrarPtr.prototype.registerDriver = function() {
    return IMERegistrarProxy.prototype.registerDriver
        .apply(this.ptr.getProxy(), arguments);
  };

  IMERegistrarProxy.prototype.registerDriver = function(driver) {
    var params_ = new IMERegistrar_RegisterDriver_Params();
    params_.driver = driver;
    var builder = new codec.MessageV0Builder(
        kIMERegistrar_RegisterDriver_Name,
        codec.align(IMERegistrar_RegisterDriver_Params.encodedSize));
    builder.encodeStruct(IMERegistrar_RegisterDriver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function IMERegistrarStub(delegate) {
    this.delegate_ = delegate;
  }
  IMERegistrarStub.prototype.registerDriver = function(driver) {
    return this.delegate_ && this.delegate_.registerDriver && this.delegate_.registerDriver(driver);
  }

  IMERegistrarStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIMERegistrar_RegisterDriver_Name:
      var params = reader.decodeStruct(IMERegistrar_RegisterDriver_Params);
      this.registerDriver(params.driver);
      return true;
    default:
      return false;
    }
  };

  IMERegistrarStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateIMERegistrarRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIMERegistrar_RegisterDriver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IMERegistrar_RegisterDriver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIMERegistrarResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var IMERegistrar = {
    name: 'ui.mojom.IMERegistrar',
    kVersion: 0,
    ptrClass: IMERegistrarPtr,
    proxyClass: IMERegistrarProxy,
    stubClass: IMERegistrarStub,
    validateRequest: validateIMERegistrarRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/ime/ime.mojom',
    fuzzMethods: {
      registerDriver: {
        params: IMERegistrar_RegisterDriver_Params,
      },
    },
  };
  IMERegistrarStub.prototype.validator = validateIMERegistrarRequest;
  IMERegistrarProxy.prototype.validator = null;
  var kInputMethod_OnTextInputTypeChanged_Name = 2043150462;
  var kInputMethod_OnCaretBoundsChanged_Name = 1871743963;
  var kInputMethod_ProcessKeyEvent_Name = 1063667768;
  var kInputMethod_CancelComposition_Name = 2109300827;

  function InputMethodPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InputMethod,
                                                   handleOrPtrInfo);
  }

  function InputMethodAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InputMethod, associatedInterfacePtrInfo);
  }

  InputMethodAssociatedPtr.prototype =
      Object.create(InputMethodPtr.prototype);
  InputMethodAssociatedPtr.prototype.constructor =
      InputMethodAssociatedPtr;

  function InputMethodProxy(receiver) {
    this.receiver_ = receiver;
  }
  InputMethodPtr.prototype.onTextInputTypeChanged = function() {
    return InputMethodProxy.prototype.onTextInputTypeChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InputMethodProxy.prototype.onTextInputTypeChanged = function(textInputType) {
    var params_ = new InputMethod_OnTextInputTypeChanged_Params();
    params_.textInputType = textInputType;
    var builder = new codec.MessageV0Builder(
        kInputMethod_OnTextInputTypeChanged_Name,
        codec.align(InputMethod_OnTextInputTypeChanged_Params.encodedSize));
    builder.encodeStruct(InputMethod_OnTextInputTypeChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputMethodPtr.prototype.onCaretBoundsChanged = function() {
    return InputMethodProxy.prototype.onCaretBoundsChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InputMethodProxy.prototype.onCaretBoundsChanged = function(caretBounds) {
    var params_ = new InputMethod_OnCaretBoundsChanged_Params();
    params_.caretBounds = caretBounds;
    var builder = new codec.MessageV0Builder(
        kInputMethod_OnCaretBoundsChanged_Name,
        codec.align(InputMethod_OnCaretBoundsChanged_Params.encodedSize));
    builder.encodeStruct(InputMethod_OnCaretBoundsChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputMethodPtr.prototype.processKeyEvent = function() {
    return InputMethodProxy.prototype.processKeyEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  InputMethodProxy.prototype.processKeyEvent = function(keyEvent) {
    var params_ = new InputMethod_ProcessKeyEvent_Params();
    params_.keyEvent = keyEvent;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputMethod_ProcessKeyEvent_Name,
          codec.align(InputMethod_ProcessKeyEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputMethod_ProcessKeyEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputMethod_ProcessKeyEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InputMethodPtr.prototype.cancelComposition = function() {
    return InputMethodProxy.prototype.cancelComposition
        .apply(this.ptr.getProxy(), arguments);
  };

  InputMethodProxy.prototype.cancelComposition = function() {
    var params_ = new InputMethod_CancelComposition_Params();
    var builder = new codec.MessageV0Builder(
        kInputMethod_CancelComposition_Name,
        codec.align(InputMethod_CancelComposition_Params.encodedSize));
    builder.encodeStruct(InputMethod_CancelComposition_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InputMethodStub(delegate) {
    this.delegate_ = delegate;
  }
  InputMethodStub.prototype.onTextInputTypeChanged = function(textInputType) {
    return this.delegate_ && this.delegate_.onTextInputTypeChanged && this.delegate_.onTextInputTypeChanged(textInputType);
  }
  InputMethodStub.prototype.onCaretBoundsChanged = function(caretBounds) {
    return this.delegate_ && this.delegate_.onCaretBoundsChanged && this.delegate_.onCaretBoundsChanged(caretBounds);
  }
  InputMethodStub.prototype.processKeyEvent = function(keyEvent) {
    return this.delegate_ && this.delegate_.processKeyEvent && this.delegate_.processKeyEvent(keyEvent);
  }
  InputMethodStub.prototype.cancelComposition = function() {
    return this.delegate_ && this.delegate_.cancelComposition && this.delegate_.cancelComposition();
  }

  InputMethodStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputMethod_OnTextInputTypeChanged_Name:
      var params = reader.decodeStruct(InputMethod_OnTextInputTypeChanged_Params);
      this.onTextInputTypeChanged(params.textInputType);
      return true;
    case kInputMethod_OnCaretBoundsChanged_Name:
      var params = reader.decodeStruct(InputMethod_OnCaretBoundsChanged_Params);
      this.onCaretBoundsChanged(params.caretBounds);
      return true;
    case kInputMethod_CancelComposition_Name:
      var params = reader.decodeStruct(InputMethod_CancelComposition_Params);
      this.cancelComposition();
      return true;
    default:
      return false;
    }
  };

  InputMethodStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputMethod_ProcessKeyEvent_Name:
      var params = reader.decodeStruct(InputMethod_ProcessKeyEvent_Params);
      this.processKeyEvent(params.keyEvent).then(function(response) {
        var responseParams =
            new InputMethod_ProcessKeyEvent_ResponseParams();
        responseParams.handled = response.handled;
        var builder = new codec.MessageV1Builder(
            kInputMethod_ProcessKeyEvent_Name,
            codec.align(InputMethod_ProcessKeyEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputMethod_ProcessKeyEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateInputMethodRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputMethod_OnTextInputTypeChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_OnTextInputTypeChanged_Params;
      break;
      case kInputMethod_OnCaretBoundsChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_OnCaretBoundsChanged_Params;
      break;
      case kInputMethod_ProcessKeyEvent_Name:
        if (message.expectsResponse())
          paramsClass = InputMethod_ProcessKeyEvent_Params;
      break;
      case kInputMethod_CancelComposition_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_CancelComposition_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputMethodResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kInputMethod_ProcessKeyEvent_Name:
        if (message.isResponse())
          paramsClass = InputMethod_ProcessKeyEvent_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var InputMethod = {
    name: 'ui.mojom.InputMethod',
    kVersion: 0,
    ptrClass: InputMethodPtr,
    proxyClass: InputMethodProxy,
    stubClass: InputMethodStub,
    validateRequest: validateInputMethodRequest,
    validateResponse: validateInputMethodResponse,
    mojomId: 'services/ui/public/interfaces/ime/ime.mojom',
    fuzzMethods: {
      onTextInputTypeChanged: {
        params: InputMethod_OnTextInputTypeChanged_Params,
      },
      onCaretBoundsChanged: {
        params: InputMethod_OnCaretBoundsChanged_Params,
      },
      processKeyEvent: {
        params: InputMethod_ProcessKeyEvent_Params,
      },
      cancelComposition: {
        params: InputMethod_CancelComposition_Params,
      },
    },
  };
  InputMethodStub.prototype.validator = validateInputMethodRequest;
  InputMethodProxy.prototype.validator = validateInputMethodResponse;
  var kTextInputClient_SetCompositionText_Name = 1651856425;
  var kTextInputClient_ConfirmCompositionText_Name = 794663523;
  var kTextInputClient_ClearCompositionText_Name = 1752588358;
  var kTextInputClient_InsertText_Name = 1246417677;
  var kTextInputClient_InsertChar_Name = 1381415469;
  var kTextInputClient_DispatchKeyEventPostIME_Name = 1285170492;

  function TextInputClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TextInputClient,
                                                   handleOrPtrInfo);
  }

  function TextInputClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TextInputClient, associatedInterfacePtrInfo);
  }

  TextInputClientAssociatedPtr.prototype =
      Object.create(TextInputClientPtr.prototype);
  TextInputClientAssociatedPtr.prototype.constructor =
      TextInputClientAssociatedPtr;

  function TextInputClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  TextInputClientPtr.prototype.setCompositionText = function() {
    return TextInputClientProxy.prototype.setCompositionText
        .apply(this.ptr.getProxy(), arguments);
  };

  TextInputClientProxy.prototype.setCompositionText = function(composition) {
    var params_ = new TextInputClient_SetCompositionText_Params();
    params_.composition = composition;
    var builder = new codec.MessageV0Builder(
        kTextInputClient_SetCompositionText_Name,
        codec.align(TextInputClient_SetCompositionText_Params.encodedSize));
    builder.encodeStruct(TextInputClient_SetCompositionText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextInputClientPtr.prototype.confirmCompositionText = function() {
    return TextInputClientProxy.prototype.confirmCompositionText
        .apply(this.ptr.getProxy(), arguments);
  };

  TextInputClientProxy.prototype.confirmCompositionText = function() {
    var params_ = new TextInputClient_ConfirmCompositionText_Params();
    var builder = new codec.MessageV0Builder(
        kTextInputClient_ConfirmCompositionText_Name,
        codec.align(TextInputClient_ConfirmCompositionText_Params.encodedSize));
    builder.encodeStruct(TextInputClient_ConfirmCompositionText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextInputClientPtr.prototype.clearCompositionText = function() {
    return TextInputClientProxy.prototype.clearCompositionText
        .apply(this.ptr.getProxy(), arguments);
  };

  TextInputClientProxy.prototype.clearCompositionText = function() {
    var params_ = new TextInputClient_ClearCompositionText_Params();
    var builder = new codec.MessageV0Builder(
        kTextInputClient_ClearCompositionText_Name,
        codec.align(TextInputClient_ClearCompositionText_Params.encodedSize));
    builder.encodeStruct(TextInputClient_ClearCompositionText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextInputClientPtr.prototype.insertText = function() {
    return TextInputClientProxy.prototype.insertText
        .apply(this.ptr.getProxy(), arguments);
  };

  TextInputClientProxy.prototype.insertText = function(text) {
    var params_ = new TextInputClient_InsertText_Params();
    params_.text = text;
    var builder = new codec.MessageV0Builder(
        kTextInputClient_InsertText_Name,
        codec.align(TextInputClient_InsertText_Params.encodedSize));
    builder.encodeStruct(TextInputClient_InsertText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextInputClientPtr.prototype.insertChar = function() {
    return TextInputClientProxy.prototype.insertChar
        .apply(this.ptr.getProxy(), arguments);
  };

  TextInputClientProxy.prototype.insertChar = function(event) {
    var params_ = new TextInputClient_InsertChar_Params();
    params_.event = event;
    var builder = new codec.MessageV0Builder(
        kTextInputClient_InsertChar_Name,
        codec.align(TextInputClient_InsertChar_Params.encodedSize));
    builder.encodeStruct(TextInputClient_InsertChar_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextInputClientPtr.prototype.dispatchKeyEventPostIME = function() {
    return TextInputClientProxy.prototype.dispatchKeyEventPostIME
        .apply(this.ptr.getProxy(), arguments);
  };

  TextInputClientProxy.prototype.dispatchKeyEventPostIME = function(event) {
    var params_ = new TextInputClient_DispatchKeyEventPostIME_Params();
    params_.event = event;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kTextInputClient_DispatchKeyEventPostIME_Name,
          codec.align(TextInputClient_DispatchKeyEventPostIME_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TextInputClient_DispatchKeyEventPostIME_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TextInputClient_DispatchKeyEventPostIME_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TextInputClientStub(delegate) {
    this.delegate_ = delegate;
  }
  TextInputClientStub.prototype.setCompositionText = function(composition) {
    return this.delegate_ && this.delegate_.setCompositionText && this.delegate_.setCompositionText(composition);
  }
  TextInputClientStub.prototype.confirmCompositionText = function() {
    return this.delegate_ && this.delegate_.confirmCompositionText && this.delegate_.confirmCompositionText();
  }
  TextInputClientStub.prototype.clearCompositionText = function() {
    return this.delegate_ && this.delegate_.clearCompositionText && this.delegate_.clearCompositionText();
  }
  TextInputClientStub.prototype.insertText = function(text) {
    return this.delegate_ && this.delegate_.insertText && this.delegate_.insertText(text);
  }
  TextInputClientStub.prototype.insertChar = function(event) {
    return this.delegate_ && this.delegate_.insertChar && this.delegate_.insertChar(event);
  }
  TextInputClientStub.prototype.dispatchKeyEventPostIME = function(event) {
    return this.delegate_ && this.delegate_.dispatchKeyEventPostIME && this.delegate_.dispatchKeyEventPostIME(event);
  }

  TextInputClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextInputClient_SetCompositionText_Name:
      var params = reader.decodeStruct(TextInputClient_SetCompositionText_Params);
      this.setCompositionText(params.composition);
      return true;
    case kTextInputClient_ConfirmCompositionText_Name:
      var params = reader.decodeStruct(TextInputClient_ConfirmCompositionText_Params);
      this.confirmCompositionText();
      return true;
    case kTextInputClient_ClearCompositionText_Name:
      var params = reader.decodeStruct(TextInputClient_ClearCompositionText_Params);
      this.clearCompositionText();
      return true;
    case kTextInputClient_InsertText_Name:
      var params = reader.decodeStruct(TextInputClient_InsertText_Params);
      this.insertText(params.text);
      return true;
    case kTextInputClient_InsertChar_Name:
      var params = reader.decodeStruct(TextInputClient_InsertChar_Params);
      this.insertChar(params.event);
      return true;
    default:
      return false;
    }
  };

  TextInputClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextInputClient_DispatchKeyEventPostIME_Name:
      var params = reader.decodeStruct(TextInputClient_DispatchKeyEventPostIME_Params);
      this.dispatchKeyEventPostIME(params.event).then(function(response) {
        var responseParams =
            new TextInputClient_DispatchKeyEventPostIME_ResponseParams();
        responseParams.stoppedPropagation = response.stoppedPropagation;
        var builder = new codec.MessageV1Builder(
            kTextInputClient_DispatchKeyEventPostIME_Name,
            codec.align(TextInputClient_DispatchKeyEventPostIME_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TextInputClient_DispatchKeyEventPostIME_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateTextInputClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTextInputClient_SetCompositionText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextInputClient_SetCompositionText_Params;
      break;
      case kTextInputClient_ConfirmCompositionText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextInputClient_ConfirmCompositionText_Params;
      break;
      case kTextInputClient_ClearCompositionText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextInputClient_ClearCompositionText_Params;
      break;
      case kTextInputClient_InsertText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextInputClient_InsertText_Params;
      break;
      case kTextInputClient_InsertChar_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextInputClient_InsertChar_Params;
      break;
      case kTextInputClient_DispatchKeyEventPostIME_Name:
        if (message.expectsResponse())
          paramsClass = TextInputClient_DispatchKeyEventPostIME_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTextInputClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTextInputClient_DispatchKeyEventPostIME_Name:
        if (message.isResponse())
          paramsClass = TextInputClient_DispatchKeyEventPostIME_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TextInputClient = {
    name: 'ui.mojom.TextInputClient',
    kVersion: 0,
    ptrClass: TextInputClientPtr,
    proxyClass: TextInputClientProxy,
    stubClass: TextInputClientStub,
    validateRequest: validateTextInputClientRequest,
    validateResponse: validateTextInputClientResponse,
    mojomId: 'services/ui/public/interfaces/ime/ime.mojom',
    fuzzMethods: {
      setCompositionText: {
        params: TextInputClient_SetCompositionText_Params,
      },
      confirmCompositionText: {
        params: TextInputClient_ConfirmCompositionText_Params,
      },
      clearCompositionText: {
        params: TextInputClient_ClearCompositionText_Params,
      },
      insertText: {
        params: TextInputClient_InsertText_Params,
      },
      insertChar: {
        params: TextInputClient_InsertChar_Params,
      },
      dispatchKeyEventPostIME: {
        params: TextInputClient_DispatchKeyEventPostIME_Params,
      },
    },
  };
  TextInputClientStub.prototype.validator = validateTextInputClientRequest;
  TextInputClientProxy.prototype.validator = validateTextInputClientResponse;
  exports.CandidateWindowPosition = CandidateWindowPosition;
  exports.ImeTextSpanType = ImeTextSpanType;
  exports.ImeTextSpanThickness = ImeTextSpanThickness;
  exports.TextInputMode = TextInputMode;
  exports.CandidateWindowProperties = CandidateWindowProperties;
  exports.CandidateWindowEntry = CandidateWindowEntry;
  exports.ImeTextSpan = ImeTextSpan;
  exports.CompositionText = CompositionText;
  exports.StartSessionDetails = StartSessionDetails;
  exports.IMEDriver = IMEDriver;
  exports.IMEDriverPtr = IMEDriverPtr;
  exports.IMEDriverAssociatedPtr = IMEDriverAssociatedPtr;
  exports.IMERegistrar = IMERegistrar;
  exports.IMERegistrarPtr = IMERegistrarPtr;
  exports.IMERegistrarAssociatedPtr = IMERegistrarAssociatedPtr;
  exports.InputMethod = InputMethod;
  exports.InputMethodPtr = InputMethodPtr;
  exports.InputMethodAssociatedPtr = InputMethodAssociatedPtr;
  exports.TextInputClient = TextInputClient;
  exports.TextInputClientPtr = TextInputClientPtr;
  exports.TextInputClientAssociatedPtr = TextInputClientAssociatedPtr;
})();