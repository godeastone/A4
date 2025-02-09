// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/spellcheck/common/spellcheck.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('spellcheck.mojom');
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../mojo/public/mojom/base/file.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }


  var Decoration = {};
  Decoration.kSpelling = 0;
  Decoration.kGrammar = Decoration.kSpelling + 1;

  Decoration.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  Decoration.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SpellCheckBDictLanguage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellCheckBDictLanguage.prototype.initDefaults_ = function() {
    this.file = null;
    this.language = null;
  };
  SpellCheckBDictLanguage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellCheckBDictLanguage.generate = function(generator_) {
    var generated = new SpellCheckBDictLanguage;
    generated.file = generator_.generateStruct(mojoBase.mojom.File, true);
    generated.language = generator_.generateString(false);
    return generated;
  };

  SpellCheckBDictLanguage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    if (mutator_.chooseMutateField()) {
      this.language = mutator_.mutateString(this.language, false);
    }
    return this;
  };
  SpellCheckBDictLanguage.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.file !== null) {
      Array.prototype.push.apply(handles, this.file.getHandleDeps());
    }
    return handles;
  };

  SpellCheckBDictLanguage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellCheckBDictLanguage.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.file.setHandlesInternal_(handles, idx);
    return idx;
  };

  SpellCheckBDictLanguage.validate = function(messageValidator, offset) {
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


    // validate SpellCheckBDictLanguage.file
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SpellCheckBDictLanguage.language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpellCheckBDictLanguage.encodedSize = codec.kStructHeaderSize + 16;

  SpellCheckBDictLanguage.decode = function(decoder) {
    var packed;
    var val = new SpellCheckBDictLanguage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.file = decoder.decodeStructPointer(file$.File);
    val.language = decoder.decodeStruct(codec.String);
    return val;
  };

  SpellCheckBDictLanguage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellCheckBDictLanguage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.file);
    encoder.encodeStruct(codec.String, val.language);
  };
  function SpellCheckResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellCheckResult.prototype.initDefaults_ = function() {
    this.decoration = 0;
    this.location = 0;
    this.length = 0;
    this.replacements = null;
  };
  SpellCheckResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellCheckResult.generate = function(generator_) {
    var generated = new SpellCheckResult;
    generated.decoration = generator_.generateEnum(0, 1);
    generated.location = generator_.generateInt32();
    generated.length = generator_.generateInt32();
    generated.replacements = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    return generated;
  };

  SpellCheckResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.decoration = mutator_.mutateEnum(this.decoration, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.location = mutator_.mutateInt32(this.location);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateInt32(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.replacements = mutator_.mutateArray(this.replacements, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    return this;
  };
  SpellCheckResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpellCheckResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellCheckResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpellCheckResult.validate = function(messageValidator, offset) {
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


    // validate SpellCheckResult.decoration
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Decoration);
    if (err !== validator.validationError.NONE)
        return err;




    // validate SpellCheckResult.replacements
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpellCheckResult.encodedSize = codec.kStructHeaderSize + 24;

  SpellCheckResult.decode = function(decoder) {
    var packed;
    var val = new SpellCheckResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.decoration = decoder.decodeStruct(codec.Int32);
    val.location = decoder.decodeStruct(codec.Int32);
    val.length = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.replacements = decoder.decodeArrayPointer(new codec.PointerTo(string16$.String16));
    return val;
  };

  SpellCheckResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellCheckResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.decoration);
    encoder.encodeStruct(codec.Int32, val.location);
    encoder.encodeStruct(codec.Int32, val.length);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(string16$.String16), val.replacements);
  };
  function SpellChecker_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellChecker_Initialize_Params.prototype.initDefaults_ = function() {
    this.dictionaries = null;
    this.customWords = null;
    this.enable = false;
  };
  SpellChecker_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellChecker_Initialize_Params.generate = function(generator_) {
    var generated = new SpellChecker_Initialize_Params;
    generated.dictionaries = generator_.generateArray(function() {
      return generator_.generateStruct(spellcheck.mojom.SpellCheckBDictLanguage, false);
    });
    generated.customWords = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.enable = generator_.generateBool();
    return generated;
  };

  SpellChecker_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dictionaries = mutator_.mutateArray(this.dictionaries, function(val) {
        return mutator_.mutateStruct(spellcheck.mojom.SpellCheckBDictLanguage, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.customWords = mutator_.mutateArray(this.customWords, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.enable = mutator_.mutateBool(this.enable);
    }
    return this;
  };
  SpellChecker_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dictionaries !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.dictionaries.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  SpellChecker_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellChecker_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.dictionaries.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  SpellChecker_Initialize_Params.validate = function(messageValidator, offset) {
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


    // validate SpellChecker_Initialize_Params.dictionaries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(SpellCheckBDictLanguage), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SpellChecker_Initialize_Params.customWords
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SpellChecker_Initialize_Params.encodedSize = codec.kStructHeaderSize + 24;

  SpellChecker_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new SpellChecker_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dictionaries = decoder.decodeArrayPointer(new codec.PointerTo(SpellCheckBDictLanguage));
    val.customWords = decoder.decodeArrayPointer(codec.String);
    packed = decoder.readUint8();
    val.enable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SpellChecker_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellChecker_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(SpellCheckBDictLanguage), val.dictionaries);
    encoder.encodeArrayPointer(codec.String, val.customWords);
    packed = 0;
    packed |= (val.enable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SpellChecker_CustomDictionaryChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellChecker_CustomDictionaryChanged_Params.prototype.initDefaults_ = function() {
    this.wordsAdded = null;
    this.wordsRemoved = null;
  };
  SpellChecker_CustomDictionaryChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellChecker_CustomDictionaryChanged_Params.generate = function(generator_) {
    var generated = new SpellChecker_CustomDictionaryChanged_Params;
    generated.wordsAdded = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.wordsRemoved = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  SpellChecker_CustomDictionaryChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.wordsAdded = mutator_.mutateArray(this.wordsAdded, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.wordsRemoved = mutator_.mutateArray(this.wordsRemoved, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  SpellChecker_CustomDictionaryChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpellChecker_CustomDictionaryChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellChecker_CustomDictionaryChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpellChecker_CustomDictionaryChanged_Params.validate = function(messageValidator, offset) {
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


    // validate SpellChecker_CustomDictionaryChanged_Params.wordsAdded
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SpellChecker_CustomDictionaryChanged_Params.wordsRemoved
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpellChecker_CustomDictionaryChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  SpellChecker_CustomDictionaryChanged_Params.decode = function(decoder) {
    var packed;
    var val = new SpellChecker_CustomDictionaryChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.wordsAdded = decoder.decodeArrayPointer(codec.String);
    val.wordsRemoved = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  SpellChecker_CustomDictionaryChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellChecker_CustomDictionaryChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.wordsAdded);
    encoder.encodeArrayPointer(codec.String, val.wordsRemoved);
  };
  function SpellCheckHost_RequestDictionary_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellCheckHost_RequestDictionary_Params.prototype.initDefaults_ = function() {
  };
  SpellCheckHost_RequestDictionary_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellCheckHost_RequestDictionary_Params.generate = function(generator_) {
    var generated = new SpellCheckHost_RequestDictionary_Params;
    return generated;
  };

  SpellCheckHost_RequestDictionary_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SpellCheckHost_RequestDictionary_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpellCheckHost_RequestDictionary_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellCheckHost_RequestDictionary_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpellCheckHost_RequestDictionary_Params.validate = function(messageValidator, offset) {
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

  SpellCheckHost_RequestDictionary_Params.encodedSize = codec.kStructHeaderSize + 0;

  SpellCheckHost_RequestDictionary_Params.decode = function(decoder) {
    var packed;
    var val = new SpellCheckHost_RequestDictionary_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SpellCheckHost_RequestDictionary_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellCheckHost_RequestDictionary_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SpellCheckHost_NotifyChecked_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellCheckHost_NotifyChecked_Params.prototype.initDefaults_ = function() {
    this.word = null;
    this.misspelled = false;
  };
  SpellCheckHost_NotifyChecked_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellCheckHost_NotifyChecked_Params.generate = function(generator_) {
    var generated = new SpellCheckHost_NotifyChecked_Params;
    generated.word = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.misspelled = generator_.generateBool();
    return generated;
  };

  SpellCheckHost_NotifyChecked_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.word = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.misspelled = mutator_.mutateBool(this.misspelled);
    }
    return this;
  };
  SpellCheckHost_NotifyChecked_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpellCheckHost_NotifyChecked_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellCheckHost_NotifyChecked_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpellCheckHost_NotifyChecked_Params.validate = function(messageValidator, offset) {
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


    // validate SpellCheckHost_NotifyChecked_Params.word
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SpellCheckHost_NotifyChecked_Params.encodedSize = codec.kStructHeaderSize + 16;

  SpellCheckHost_NotifyChecked_Params.decode = function(decoder) {
    var packed;
    var val = new SpellCheckHost_NotifyChecked_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.word = decoder.decodeStructPointer(string16$.String16);
    packed = decoder.readUint8();
    val.misspelled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SpellCheckHost_NotifyChecked_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellCheckHost_NotifyChecked_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.word);
    packed = 0;
    packed |= (val.misspelled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SpellCheckHost_CallSpellingService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellCheckHost_CallSpellingService_Params.prototype.initDefaults_ = function() {
    this.text = null;
  };
  SpellCheckHost_CallSpellingService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellCheckHost_CallSpellingService_Params.generate = function(generator_) {
    var generated = new SpellCheckHost_CallSpellingService_Params;
    generated.text = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  SpellCheckHost_CallSpellingService_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  SpellCheckHost_CallSpellingService_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpellCheckHost_CallSpellingService_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellCheckHost_CallSpellingService_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpellCheckHost_CallSpellingService_Params.validate = function(messageValidator, offset) {
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


    // validate SpellCheckHost_CallSpellingService_Params.text
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpellCheckHost_CallSpellingService_Params.encodedSize = codec.kStructHeaderSize + 8;

  SpellCheckHost_CallSpellingService_Params.decode = function(decoder) {
    var packed;
    var val = new SpellCheckHost_CallSpellingService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  SpellCheckHost_CallSpellingService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellCheckHost_CallSpellingService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.text);
  };
  function SpellCheckHost_CallSpellingService_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SpellCheckHost_CallSpellingService_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.results = null;
  };
  SpellCheckHost_CallSpellingService_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SpellCheckHost_CallSpellingService_ResponseParams.generate = function(generator_) {
    var generated = new SpellCheckHost_CallSpellingService_ResponseParams;
    generated.success = generator_.generateBool();
    generated.results = generator_.generateArray(function() {
      return generator_.generateStruct(spellcheck.mojom.SpellCheckResult, false);
    });
    return generated;
  };

  SpellCheckHost_CallSpellingService_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateArray(this.results, function(val) {
        return mutator_.mutateStruct(spellcheck.mojom.SpellCheckResult, false);
      });
    }
    return this;
  };
  SpellCheckHost_CallSpellingService_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SpellCheckHost_CallSpellingService_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SpellCheckHost_CallSpellingService_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SpellCheckHost_CallSpellingService_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate SpellCheckHost_CallSpellingService_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(SpellCheckResult), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SpellCheckHost_CallSpellingService_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  SpellCheckHost_CallSpellingService_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SpellCheckHost_CallSpellingService_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(SpellCheckResult));
    return val;
  };

  SpellCheckHost_CallSpellingService_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SpellCheckHost_CallSpellingService_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(SpellCheckResult), val.results);
  };
  var kSpellChecker_Initialize_Name = 1517847514;
  var kSpellChecker_CustomDictionaryChanged_Name = 956619591;

  function SpellCheckerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SpellChecker,
                                                   handleOrPtrInfo);
  }

  function SpellCheckerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SpellChecker, associatedInterfacePtrInfo);
  }

  SpellCheckerAssociatedPtr.prototype =
      Object.create(SpellCheckerPtr.prototype);
  SpellCheckerAssociatedPtr.prototype.constructor =
      SpellCheckerAssociatedPtr;

  function SpellCheckerProxy(receiver) {
    this.receiver_ = receiver;
  }
  SpellCheckerPtr.prototype.initialize = function() {
    return SpellCheckerProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  SpellCheckerProxy.prototype.initialize = function(dictionaries, customWords, enable) {
    var params_ = new SpellChecker_Initialize_Params();
    params_.dictionaries = dictionaries;
    params_.customWords = customWords;
    params_.enable = enable;
    var builder = new codec.MessageV0Builder(
        kSpellChecker_Initialize_Name,
        codec.align(SpellChecker_Initialize_Params.encodedSize));
    builder.encodeStruct(SpellChecker_Initialize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpellCheckerPtr.prototype.customDictionaryChanged = function() {
    return SpellCheckerProxy.prototype.customDictionaryChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  SpellCheckerProxy.prototype.customDictionaryChanged = function(wordsAdded, wordsRemoved) {
    var params_ = new SpellChecker_CustomDictionaryChanged_Params();
    params_.wordsAdded = wordsAdded;
    params_.wordsRemoved = wordsRemoved;
    var builder = new codec.MessageV0Builder(
        kSpellChecker_CustomDictionaryChanged_Name,
        codec.align(SpellChecker_CustomDictionaryChanged_Params.encodedSize));
    builder.encodeStruct(SpellChecker_CustomDictionaryChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SpellCheckerStub(delegate) {
    this.delegate_ = delegate;
  }
  SpellCheckerStub.prototype.initialize = function(dictionaries, customWords, enable) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(dictionaries, customWords, enable);
  }
  SpellCheckerStub.prototype.customDictionaryChanged = function(wordsAdded, wordsRemoved) {
    return this.delegate_ && this.delegate_.customDictionaryChanged && this.delegate_.customDictionaryChanged(wordsAdded, wordsRemoved);
  }

  SpellCheckerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSpellChecker_Initialize_Name:
      var params = reader.decodeStruct(SpellChecker_Initialize_Params);
      this.initialize(params.dictionaries, params.customWords, params.enable);
      return true;
    case kSpellChecker_CustomDictionaryChanged_Name:
      var params = reader.decodeStruct(SpellChecker_CustomDictionaryChanged_Params);
      this.customDictionaryChanged(params.wordsAdded, params.wordsRemoved);
      return true;
    default:
      return false;
    }
  };

  SpellCheckerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSpellCheckerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSpellChecker_Initialize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpellChecker_Initialize_Params;
      break;
      case kSpellChecker_CustomDictionaryChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpellChecker_CustomDictionaryChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSpellCheckerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SpellChecker = {
    name: 'spellcheck.mojom.SpellChecker',
    kVersion: 0,
    ptrClass: SpellCheckerPtr,
    proxyClass: SpellCheckerProxy,
    stubClass: SpellCheckerStub,
    validateRequest: validateSpellCheckerRequest,
    validateResponse: null,
    mojomId: 'components/spellcheck/common/spellcheck.mojom',
    fuzzMethods: {
      initialize: {
        params: SpellChecker_Initialize_Params,
      },
      customDictionaryChanged: {
        params: SpellChecker_CustomDictionaryChanged_Params,
      },
    },
  };
  SpellCheckerStub.prototype.validator = validateSpellCheckerRequest;
  SpellCheckerProxy.prototype.validator = null;
  var kSpellCheckHost_RequestDictionary_Name = 1995038150;
  var kSpellCheckHost_NotifyChecked_Name = 1122563452;
  var kSpellCheckHost_CallSpellingService_Name = 1806535480;

  function SpellCheckHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SpellCheckHost,
                                                   handleOrPtrInfo);
  }

  function SpellCheckHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SpellCheckHost, associatedInterfacePtrInfo);
  }

  SpellCheckHostAssociatedPtr.prototype =
      Object.create(SpellCheckHostPtr.prototype);
  SpellCheckHostAssociatedPtr.prototype.constructor =
      SpellCheckHostAssociatedPtr;

  function SpellCheckHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  SpellCheckHostPtr.prototype.requestDictionary = function() {
    return SpellCheckHostProxy.prototype.requestDictionary
        .apply(this.ptr.getProxy(), arguments);
  };

  SpellCheckHostProxy.prototype.requestDictionary = function() {
    var params_ = new SpellCheckHost_RequestDictionary_Params();
    var builder = new codec.MessageV0Builder(
        kSpellCheckHost_RequestDictionary_Name,
        codec.align(SpellCheckHost_RequestDictionary_Params.encodedSize));
    builder.encodeStruct(SpellCheckHost_RequestDictionary_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpellCheckHostPtr.prototype.notifyChecked = function() {
    return SpellCheckHostProxy.prototype.notifyChecked
        .apply(this.ptr.getProxy(), arguments);
  };

  SpellCheckHostProxy.prototype.notifyChecked = function(word, misspelled) {
    var params_ = new SpellCheckHost_NotifyChecked_Params();
    params_.word = word;
    params_.misspelled = misspelled;
    var builder = new codec.MessageV0Builder(
        kSpellCheckHost_NotifyChecked_Name,
        codec.align(SpellCheckHost_NotifyChecked_Params.encodedSize));
    builder.encodeStruct(SpellCheckHost_NotifyChecked_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SpellCheckHostPtr.prototype.callSpellingService = function() {
    return SpellCheckHostProxy.prototype.callSpellingService
        .apply(this.ptr.getProxy(), arguments);
  };

  SpellCheckHostProxy.prototype.callSpellingService = function(text) {
    var params_ = new SpellCheckHost_CallSpellingService_Params();
    params_.text = text;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSpellCheckHost_CallSpellingService_Name,
          codec.align(SpellCheckHost_CallSpellingService_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SpellCheckHost_CallSpellingService_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SpellCheckHost_CallSpellingService_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SpellCheckHostStub(delegate) {
    this.delegate_ = delegate;
  }
  SpellCheckHostStub.prototype.requestDictionary = function() {
    return this.delegate_ && this.delegate_.requestDictionary && this.delegate_.requestDictionary();
  }
  SpellCheckHostStub.prototype.notifyChecked = function(word, misspelled) {
    return this.delegate_ && this.delegate_.notifyChecked && this.delegate_.notifyChecked(word, misspelled);
  }
  SpellCheckHostStub.prototype.callSpellingService = function(text) {
    return this.delegate_ && this.delegate_.callSpellingService && this.delegate_.callSpellingService(text);
  }

  SpellCheckHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSpellCheckHost_RequestDictionary_Name:
      var params = reader.decodeStruct(SpellCheckHost_RequestDictionary_Params);
      this.requestDictionary();
      return true;
    case kSpellCheckHost_NotifyChecked_Name:
      var params = reader.decodeStruct(SpellCheckHost_NotifyChecked_Params);
      this.notifyChecked(params.word, params.misspelled);
      return true;
    default:
      return false;
    }
  };

  SpellCheckHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSpellCheckHost_CallSpellingService_Name:
      var params = reader.decodeStruct(SpellCheckHost_CallSpellingService_Params);
      this.callSpellingService(params.text).then(function(response) {
        var responseParams =
            new SpellCheckHost_CallSpellingService_ResponseParams();
        responseParams.success = response.success;
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kSpellCheckHost_CallSpellingService_Name,
            codec.align(SpellCheckHost_CallSpellingService_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SpellCheckHost_CallSpellingService_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSpellCheckHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSpellCheckHost_RequestDictionary_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpellCheckHost_RequestDictionary_Params;
      break;
      case kSpellCheckHost_NotifyChecked_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SpellCheckHost_NotifyChecked_Params;
      break;
      case kSpellCheckHost_CallSpellingService_Name:
        if (message.expectsResponse())
          paramsClass = SpellCheckHost_CallSpellingService_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSpellCheckHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSpellCheckHost_CallSpellingService_Name:
        if (message.isResponse())
          paramsClass = SpellCheckHost_CallSpellingService_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SpellCheckHost = {
    name: 'spellcheck.mojom.SpellCheckHost',
    kVersion: 0,
    ptrClass: SpellCheckHostPtr,
    proxyClass: SpellCheckHostProxy,
    stubClass: SpellCheckHostStub,
    validateRequest: validateSpellCheckHostRequest,
    validateResponse: validateSpellCheckHostResponse,
    mojomId: 'components/spellcheck/common/spellcheck.mojom',
    fuzzMethods: {
      requestDictionary: {
        params: SpellCheckHost_RequestDictionary_Params,
      },
      notifyChecked: {
        params: SpellCheckHost_NotifyChecked_Params,
      },
      callSpellingService: {
        params: SpellCheckHost_CallSpellingService_Params,
      },
    },
  };
  SpellCheckHostStub.prototype.validator = validateSpellCheckHostRequest;
  SpellCheckHostProxy.prototype.validator = validateSpellCheckHostResponse;
  exports.Decoration = Decoration;
  exports.SpellCheckBDictLanguage = SpellCheckBDictLanguage;
  exports.SpellCheckResult = SpellCheckResult;
  exports.SpellChecker = SpellChecker;
  exports.SpellCheckerPtr = SpellCheckerPtr;
  exports.SpellCheckerAssociatedPtr = SpellCheckerAssociatedPtr;
  exports.SpellCheckHost = SpellCheckHost;
  exports.SpellCheckHostPtr = SpellCheckHostPtr;
  exports.SpellCheckHostAssociatedPtr = SpellCheckHostAssociatedPtr;
})();