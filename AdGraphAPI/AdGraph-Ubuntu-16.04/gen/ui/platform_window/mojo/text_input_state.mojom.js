// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/platform_window/mojo/text_input_state.mojom';
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


  var TextInputType = {};
  TextInputType.NONE = 0;
  TextInputType.TEXT = TextInputType.NONE + 1;
  TextInputType.PASSWORD = TextInputType.TEXT + 1;
  TextInputType.SEARCH = TextInputType.PASSWORD + 1;
  TextInputType.EMAIL = TextInputType.SEARCH + 1;
  TextInputType.NUMBER = TextInputType.EMAIL + 1;
  TextInputType.TELEPHONE = TextInputType.NUMBER + 1;
  TextInputType.URL = TextInputType.TELEPHONE + 1;
  TextInputType.DATE = TextInputType.URL + 1;
  TextInputType.DATE_TIME = TextInputType.DATE + 1;
  TextInputType.DATE_TIME_LOCAL = TextInputType.DATE_TIME + 1;
  TextInputType.MONTH = TextInputType.DATE_TIME_LOCAL + 1;
  TextInputType.TIME = TextInputType.MONTH + 1;
  TextInputType.WEEK = TextInputType.TIME + 1;
  TextInputType.TEXT_AREA = TextInputType.WEEK + 1;
  TextInputType.CONTENT_EDITABLE = TextInputType.TEXT_AREA + 1;
  TextInputType.DATE_TIME_FIELD = TextInputType.CONTENT_EDITABLE + 1;
  TextInputType.MAX = TextInputType.DATE_TIME_FIELD;

  TextInputType.isKnownEnumValue = function(value) {
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
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      return true;
    }
    return false;
  };

  TextInputType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TextInputFlag = {};
  TextInputFlag.NONE = 0;
  TextInputFlag.AUTOCOMPLETE_ON = 0x001;
  TextInputFlag.AUTOCOMPLETE_OFF = 0x002;
  TextInputFlag.AUTOCORRECT_ON = 0x004;
  TextInputFlag.AUTOCORRECT_OFF = 0x008;
  TextInputFlag.SPELLCHECK_ON = 0x010;
  TextInputFlag.SPELLCHECK_OFF = 0x020;
  TextInputFlag.AUTOCAPITALIZE_NONE = 0x040;
  TextInputFlag.AUTOCAPITALIZE_CHARACTERS = 0x080;
  TextInputFlag.AUTOCAPITALIZE_WORDS = 0x100;
  TextInputFlag.AUTOCAPITALIZE_SENTENCES = 0x200;
  TextInputFlag.ALL = 0x3FF;

  TextInputFlag.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
    case 128:
    case 256:
    case 512:
    case 1023:
      return true;
    }
    return false;
  };

  TextInputFlag.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function TextInputState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputState.prototype.initDefaults_ = function() {
    this.type = 0;
    this.flags = 0;
    this.text = null;
    this.selectionStart = 0;
    this.selectionEnd = 0;
    this.compositionStart = 0;
    this.compositionEnd = 0;
    this.canComposeInline = false;
  };
  TextInputState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextInputState.generate = function(generator_) {
    var generated = new TextInputState;
    generated.type = generator_.generateEnum(0, 16);
    generated.flags = generator_.generateInt32();
    generated.text = generator_.generateString(true);
    generated.selectionStart = generator_.generateInt32();
    generated.selectionEnd = generator_.generateInt32();
    generated.compositionStart = generator_.generateInt32();
    generated.compositionEnd = generator_.generateInt32();
    generated.canComposeInline = generator_.generateBool();
    return generated;
  };

  TextInputState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 16);
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateInt32(this.flags);
    }
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateString(this.text, true);
    }
    if (mutator_.chooseMutateField()) {
      this.selectionStart = mutator_.mutateInt32(this.selectionStart);
    }
    if (mutator_.chooseMutateField()) {
      this.selectionEnd = mutator_.mutateInt32(this.selectionEnd);
    }
    if (mutator_.chooseMutateField()) {
      this.compositionStart = mutator_.mutateInt32(this.compositionStart);
    }
    if (mutator_.chooseMutateField()) {
      this.compositionEnd = mutator_.mutateInt32(this.compositionEnd);
    }
    if (mutator_.chooseMutateField()) {
      this.canComposeInline = mutator_.mutateBool(this.canComposeInline);
    }
    return this;
  };
  TextInputState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextInputState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextInputState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextInputState.validate = function(messageValidator, offset) {
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


    // validate TextInputState.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, TextInputType);
    if (err !== validator.validationError.NONE)
        return err;



    // validate TextInputState.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;






    return validator.validationError.NONE;
  };

  TextInputState.encodedSize = codec.kStructHeaderSize + 40;

  TextInputState.decode = function(decoder) {
    var packed;
    var val = new TextInputState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.flags = decoder.decodeStruct(codec.Int32);
    val.text = decoder.decodeStruct(codec.NullableString);
    val.selectionStart = decoder.decodeStruct(codec.Int32);
    val.selectionEnd = decoder.decodeStruct(codec.Int32);
    val.compositionStart = decoder.decodeStruct(codec.Int32);
    val.compositionEnd = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.canComposeInline = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TextInputState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Int32, val.flags);
    encoder.encodeStruct(codec.NullableString, val.text);
    encoder.encodeStruct(codec.Int32, val.selectionStart);
    encoder.encodeStruct(codec.Int32, val.selectionEnd);
    encoder.encodeStruct(codec.Int32, val.compositionStart);
    encoder.encodeStruct(codec.Int32, val.compositionEnd);
    packed = 0;
    packed |= (val.canComposeInline & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.TextInputType = TextInputType;
  exports.TextInputFlag = TextInputFlag;
  exports.TextInputState = TextInputState;
})();