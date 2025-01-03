// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/browser/ui/webui/omnibox/omnibox.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojom');



  function AutocompleteAdditionalInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutocompleteAdditionalInfo.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  AutocompleteAdditionalInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutocompleteAdditionalInfo.generate = function(generator_) {
    var generated = new AutocompleteAdditionalInfo;
    generated.key = generator_.generateString(false);
    generated.value = generator_.generateString(false);
    return generated;
  };

  AutocompleteAdditionalInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    return this;
  };
  AutocompleteAdditionalInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutocompleteAdditionalInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutocompleteAdditionalInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutocompleteAdditionalInfo.validate = function(messageValidator, offset) {
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


    // validate AutocompleteAdditionalInfo.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteAdditionalInfo.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutocompleteAdditionalInfo.encodedSize = codec.kStructHeaderSize + 16;

  AutocompleteAdditionalInfo.decode = function(decoder) {
    var packed;
    var val = new AutocompleteAdditionalInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  AutocompleteAdditionalInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutocompleteAdditionalInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeStruct(codec.String, val.value);
  };
  function AutocompleteMatch(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutocompleteMatch.prototype.initDefaults_ = function() {
    this.providerName = null;
    this.providerDone = false;
    this.deletable = false;
    this.allowedToBeDefaultMatch = false;
    this.hasTabMatch = false;
    this.starred = false;
    this.fromPrevious = false;
    this.relevance = 0;
    this.fillIntoEdit = null;
    this.inlineAutocompletion = null;
    this.destinationUrl = null;
    this.contents = null;
    this.description = null;
    this.transition = 0;
    this.duplicates = 0;
    this.type = null;
    this.associatedKeyword = null;
    this.keyword = null;
    this.additionalInfo = null;
  };
  AutocompleteMatch.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutocompleteMatch.generate = function(generator_) {
    var generated = new AutocompleteMatch;
    generated.providerName = generator_.generateString(true);
    generated.providerDone = generator_.generateBool();
    generated.relevance = generator_.generateInt32();
    generated.deletable = generator_.generateBool();
    generated.fillIntoEdit = generator_.generateString(false);
    generated.inlineAutocompletion = generator_.generateString(false);
    generated.destinationUrl = generator_.generateString(false);
    generated.contents = generator_.generateString(false);
    generated.description = generator_.generateString(false);
    generated.transition = generator_.generateInt32();
    generated.allowedToBeDefaultMatch = generator_.generateBool();
    generated.type = generator_.generateString(false);
    generated.hasTabMatch = generator_.generateBool();
    generated.associatedKeyword = generator_.generateString(true);
    generated.keyword = generator_.generateString(false);
    generated.starred = generator_.generateBool();
    generated.duplicates = generator_.generateInt32();
    generated.fromPrevious = generator_.generateBool();
    generated.additionalInfo = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.AutocompleteAdditionalInfo, false);
    });
    return generated;
  };

  AutocompleteMatch.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerName = mutator_.mutateString(this.providerName, true);
    }
    if (mutator_.chooseMutateField()) {
      this.providerDone = mutator_.mutateBool(this.providerDone);
    }
    if (mutator_.chooseMutateField()) {
      this.relevance = mutator_.mutateInt32(this.relevance);
    }
    if (mutator_.chooseMutateField()) {
      this.deletable = mutator_.mutateBool(this.deletable);
    }
    if (mutator_.chooseMutateField()) {
      this.fillIntoEdit = mutator_.mutateString(this.fillIntoEdit, false);
    }
    if (mutator_.chooseMutateField()) {
      this.inlineAutocompletion = mutator_.mutateString(this.inlineAutocompletion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.destinationUrl = mutator_.mutateString(this.destinationUrl, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contents = mutator_.mutateString(this.contents, false);
    }
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateString(this.description, false);
    }
    if (mutator_.chooseMutateField()) {
      this.transition = mutator_.mutateInt32(this.transition);
    }
    if (mutator_.chooseMutateField()) {
      this.allowedToBeDefaultMatch = mutator_.mutateBool(this.allowedToBeDefaultMatch);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateString(this.type, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hasTabMatch = mutator_.mutateBool(this.hasTabMatch);
    }
    if (mutator_.chooseMutateField()) {
      this.associatedKeyword = mutator_.mutateString(this.associatedKeyword, true);
    }
    if (mutator_.chooseMutateField()) {
      this.keyword = mutator_.mutateString(this.keyword, false);
    }
    if (mutator_.chooseMutateField()) {
      this.starred = mutator_.mutateBool(this.starred);
    }
    if (mutator_.chooseMutateField()) {
      this.duplicates = mutator_.mutateInt32(this.duplicates);
    }
    if (mutator_.chooseMutateField()) {
      this.fromPrevious = mutator_.mutateBool(this.fromPrevious);
    }
    if (mutator_.chooseMutateField()) {
      this.additionalInfo = mutator_.mutateArray(this.additionalInfo, function(val) {
        return mutator_.mutateStruct(mojom.AutocompleteAdditionalInfo, false);
      });
    }
    return this;
  };
  AutocompleteMatch.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutocompleteMatch.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutocompleteMatch.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutocompleteMatch.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 104}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteMatch.providerName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;





    // validate AutocompleteMatch.fillIntoEdit
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteMatch.inlineAutocompletion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteMatch.destinationUrl
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteMatch.contents
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteMatch.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate AutocompleteMatch.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate AutocompleteMatch.associatedKeyword
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteMatch.keyword
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;





    // validate AutocompleteMatch.additionalInfo
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 88, 8, new codec.PointerTo(AutocompleteAdditionalInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutocompleteMatch.encodedSize = codec.kStructHeaderSize + 96;

  AutocompleteMatch.decode = function(decoder) {
    var packed;
    var val = new AutocompleteMatch();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerName = decoder.decodeStruct(codec.NullableString);
    packed = decoder.readUint8();
    val.providerDone = (packed >> 0) & 1 ? true : false;
    val.deletable = (packed >> 1) & 1 ? true : false;
    val.allowedToBeDefaultMatch = (packed >> 2) & 1 ? true : false;
    val.hasTabMatch = (packed >> 3) & 1 ? true : false;
    val.starred = (packed >> 4) & 1 ? true : false;
    val.fromPrevious = (packed >> 5) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.relevance = decoder.decodeStruct(codec.Int32);
    val.fillIntoEdit = decoder.decodeStruct(codec.String);
    val.inlineAutocompletion = decoder.decodeStruct(codec.String);
    val.destinationUrl = decoder.decodeStruct(codec.String);
    val.contents = decoder.decodeStruct(codec.String);
    val.description = decoder.decodeStruct(codec.String);
    val.transition = decoder.decodeStruct(codec.Int32);
    val.duplicates = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.String);
    val.associatedKeyword = decoder.decodeStruct(codec.NullableString);
    val.keyword = decoder.decodeStruct(codec.String);
    val.additionalInfo = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteAdditionalInfo));
    return val;
  };

  AutocompleteMatch.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutocompleteMatch.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.providerName);
    packed = 0;
    packed |= (val.providerDone & 1) << 0
    packed |= (val.deletable & 1) << 1
    packed |= (val.allowedToBeDefaultMatch & 1) << 2
    packed |= (val.hasTabMatch & 1) << 3
    packed |= (val.starred & 1) << 4
    packed |= (val.fromPrevious & 1) << 5
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.relevance);
    encoder.encodeStruct(codec.String, val.fillIntoEdit);
    encoder.encodeStruct(codec.String, val.inlineAutocompletion);
    encoder.encodeStruct(codec.String, val.destinationUrl);
    encoder.encodeStruct(codec.String, val.contents);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeStruct(codec.Int32, val.transition);
    encoder.encodeStruct(codec.Int32, val.duplicates);
    encoder.encodeStruct(codec.String, val.type);
    encoder.encodeStruct(codec.NullableString, val.associatedKeyword);
    encoder.encodeStruct(codec.String, val.keyword);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteAdditionalInfo), val.additionalInfo);
  };
  function AutocompleteResultsForProvider(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutocompleteResultsForProvider.prototype.initDefaults_ = function() {
    this.providerName = null;
    this.results = null;
  };
  AutocompleteResultsForProvider.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutocompleteResultsForProvider.generate = function(generator_) {
    var generated = new AutocompleteResultsForProvider;
    generated.providerName = generator_.generateString(false);
    generated.results = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.AutocompleteMatch, false);
    });
    return generated;
  };

  AutocompleteResultsForProvider.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerName = mutator_.mutateString(this.providerName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateArray(this.results, function(val) {
        return mutator_.mutateStruct(mojom.AutocompleteMatch, false);
      });
    }
    return this;
  };
  AutocompleteResultsForProvider.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutocompleteResultsForProvider.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutocompleteResultsForProvider.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutocompleteResultsForProvider.validate = function(messageValidator, offset) {
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


    // validate AutocompleteResultsForProvider.providerName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutocompleteResultsForProvider.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(AutocompleteMatch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutocompleteResultsForProvider.encodedSize = codec.kStructHeaderSize + 16;

  AutocompleteResultsForProvider.decode = function(decoder) {
    var packed;
    var val = new AutocompleteResultsForProvider();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerName = decoder.decodeStruct(codec.String);
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteMatch));
    return val;
  };

  AutocompleteResultsForProvider.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutocompleteResultsForProvider.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.providerName);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteMatch), val.results);
  };
  function OmniboxResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxResult.prototype.initDefaults_ = function() {
    this.done = false;
    this.isTypedHost = false;
    this.timeSinceOmniboxStartedMs = 0;
    this.host = null;
    this.combinedResults = null;
    this.resultsByProvider = null;
  };
  OmniboxResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OmniboxResult.generate = function(generator_) {
    var generated = new OmniboxResult;
    generated.done = generator_.generateBool();
    generated.timeSinceOmniboxStartedMs = generator_.generateInt32();
    generated.host = generator_.generateString(false);
    generated.isTypedHost = generator_.generateBool();
    generated.combinedResults = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.AutocompleteMatch, false);
    });
    generated.resultsByProvider = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.AutocompleteResultsForProvider, false);
    });
    return generated;
  };

  OmniboxResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.done = mutator_.mutateBool(this.done);
    }
    if (mutator_.chooseMutateField()) {
      this.timeSinceOmniboxStartedMs = mutator_.mutateInt32(this.timeSinceOmniboxStartedMs);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateString(this.host, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isTypedHost = mutator_.mutateBool(this.isTypedHost);
    }
    if (mutator_.chooseMutateField()) {
      this.combinedResults = mutator_.mutateArray(this.combinedResults, function(val) {
        return mutator_.mutateStruct(mojom.AutocompleteMatch, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.resultsByProvider = mutator_.mutateArray(this.resultsByProvider, function(val) {
        return mutator_.mutateStruct(mojom.AutocompleteResultsForProvider, false);
      });
    }
    return this;
  };
  OmniboxResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OmniboxResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OmniboxResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OmniboxResult.validate = function(messageValidator, offset) {
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




    // validate OmniboxResult.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate OmniboxResult.combinedResults
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(AutocompleteMatch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate OmniboxResult.resultsByProvider
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(AutocompleteResultsForProvider), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OmniboxResult.encodedSize = codec.kStructHeaderSize + 32;

  OmniboxResult.decode = function(decoder) {
    var packed;
    var val = new OmniboxResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.done = (packed >> 0) & 1 ? true : false;
    val.isTypedHost = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeSinceOmniboxStartedMs = decoder.decodeStruct(codec.Int32);
    val.host = decoder.decodeStruct(codec.String);
    val.combinedResults = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteMatch));
    val.resultsByProvider = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteResultsForProvider));
    return val;
  };

  OmniboxResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxResult.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.done & 1) << 0
    packed |= (val.isTypedHost & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.timeSinceOmniboxStartedMs);
    encoder.encodeStruct(codec.String, val.host);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteMatch), val.combinedResults);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteResultsForProvider), val.resultsByProvider);
  };
  function OmniboxPageHandler_SetClientPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxPageHandler_SetClientPage_Params.prototype.initDefaults_ = function() {
    this.page = new OmniboxPagePtr();
  };
  OmniboxPageHandler_SetClientPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OmniboxPageHandler_SetClientPage_Params.generate = function(generator_) {
    var generated = new OmniboxPageHandler_SetClientPage_Params;
    generated.page = generator_.generateInterface("mojom.OmniboxPage", false);
    return generated;
  };

  OmniboxPageHandler_SetClientPage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.page = mutator_.mutateInterface(this.page, "mojom.OmniboxPage", false);
    }
    return this;
  };
  OmniboxPageHandler_SetClientPage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.page !== null) {
      Array.prototype.push.apply(handles, ["mojom.OmniboxPagePtr"]);
    }
    return handles;
  };

  OmniboxPageHandler_SetClientPage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OmniboxPageHandler_SetClientPage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.page = handles[idx++];;
    return idx;
  };

  OmniboxPageHandler_SetClientPage_Params.validate = function(messageValidator, offset) {
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


    // validate OmniboxPageHandler_SetClientPage_Params.page
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OmniboxPageHandler_SetClientPage_Params.encodedSize = codec.kStructHeaderSize + 8;

  OmniboxPageHandler_SetClientPage_Params.decode = function(decoder) {
    var packed;
    var val = new OmniboxPageHandler_SetClientPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page = decoder.decodeStruct(new codec.Interface(OmniboxPagePtr));
    return val;
  };

  OmniboxPageHandler_SetClientPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxPageHandler_SetClientPage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(OmniboxPagePtr), val.page);
  };
  function OmniboxPageHandler_StartOmniboxQuery_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.initDefaults_ = function() {
    this.inputString = null;
    this.cursorPosition = 0;
    this.preventInlineAutocomplete = false;
    this.preferKeyword = false;
    this.pageClassification = 0;
  };
  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OmniboxPageHandler_StartOmniboxQuery_Params.generate = function(generator_) {
    var generated = new OmniboxPageHandler_StartOmniboxQuery_Params;
    generated.inputString = generator_.generateString(false);
    generated.cursorPosition = generator_.generateInt32();
    generated.preventInlineAutocomplete = generator_.generateBool();
    generated.preferKeyword = generator_.generateBool();
    generated.pageClassification = generator_.generateInt32();
    return generated;
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputString = mutator_.mutateString(this.inputString, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cursorPosition = mutator_.mutateInt32(this.cursorPosition);
    }
    if (mutator_.chooseMutateField()) {
      this.preventInlineAutocomplete = mutator_.mutateBool(this.preventInlineAutocomplete);
    }
    if (mutator_.chooseMutateField()) {
      this.preferKeyword = mutator_.mutateBool(this.preferKeyword);
    }
    if (mutator_.chooseMutateField()) {
      this.pageClassification = mutator_.mutateInt32(this.pageClassification);
    }
    return this;
  };
  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.validate = function(messageValidator, offset) {
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


    // validate OmniboxPageHandler_StartOmniboxQuery_Params.inputString
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.encodedSize = codec.kStructHeaderSize + 24;

  OmniboxPageHandler_StartOmniboxQuery_Params.decode = function(decoder) {
    var packed;
    var val = new OmniboxPageHandler_StartOmniboxQuery_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputString = decoder.decodeStruct(codec.String);
    val.cursorPosition = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.preventInlineAutocomplete = (packed >> 0) & 1 ? true : false;
    val.preferKeyword = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pageClassification = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxPageHandler_StartOmniboxQuery_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.inputString);
    encoder.encodeStruct(codec.Int32, val.cursorPosition);
    packed = 0;
    packed |= (val.preventInlineAutocomplete & 1) << 0
    packed |= (val.preferKeyword & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.pageClassification);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OmniboxPage_HandleNewAutocompleteResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.initDefaults_ = function() {
    this.result = null;
  };
  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OmniboxPage_HandleNewAutocompleteResult_Params.generate = function(generator_) {
    var generated = new OmniboxPage_HandleNewAutocompleteResult_Params;
    generated.result = generator_.generateStruct(mojom.OmniboxResult, false);
    return generated;
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(mojom.OmniboxResult, false);
    }
    return this;
  };
  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.validate = function(messageValidator, offset) {
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


    // validate OmniboxPage_HandleNewAutocompleteResult_Params.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, OmniboxResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  OmniboxPage_HandleNewAutocompleteResult_Params.decode = function(decoder) {
    var packed;
    var val = new OmniboxPage_HandleNewAutocompleteResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(OmniboxResult);
    return val;
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxPage_HandleNewAutocompleteResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(OmniboxResult, val.result);
  };
  var kOmniboxPageHandler_SetClientPage_Name = 1114496509;
  var kOmniboxPageHandler_StartOmniboxQuery_Name = 144256550;

  function OmniboxPageHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(OmniboxPageHandler,
                                                   handleOrPtrInfo);
  }

  function OmniboxPageHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        OmniboxPageHandler, associatedInterfacePtrInfo);
  }

  OmniboxPageHandlerAssociatedPtr.prototype =
      Object.create(OmniboxPageHandlerPtr.prototype);
  OmniboxPageHandlerAssociatedPtr.prototype.constructor =
      OmniboxPageHandlerAssociatedPtr;

  function OmniboxPageHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  OmniboxPageHandlerPtr.prototype.setClientPage = function() {
    return OmniboxPageHandlerProxy.prototype.setClientPage
        .apply(this.ptr.getProxy(), arguments);
  };

  OmniboxPageHandlerProxy.prototype.setClientPage = function(page) {
    var params_ = new OmniboxPageHandler_SetClientPage_Params();
    params_.page = page;
    var builder = new codec.MessageV0Builder(
        kOmniboxPageHandler_SetClientPage_Name,
        codec.align(OmniboxPageHandler_SetClientPage_Params.encodedSize));
    builder.encodeStruct(OmniboxPageHandler_SetClientPage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  OmniboxPageHandlerPtr.prototype.startOmniboxQuery = function() {
    return OmniboxPageHandlerProxy.prototype.startOmniboxQuery
        .apply(this.ptr.getProxy(), arguments);
  };

  OmniboxPageHandlerProxy.prototype.startOmniboxQuery = function(inputString, cursorPosition, preventInlineAutocomplete, preferKeyword, pageClassification) {
    var params_ = new OmniboxPageHandler_StartOmniboxQuery_Params();
    params_.inputString = inputString;
    params_.cursorPosition = cursorPosition;
    params_.preventInlineAutocomplete = preventInlineAutocomplete;
    params_.preferKeyword = preferKeyword;
    params_.pageClassification = pageClassification;
    var builder = new codec.MessageV0Builder(
        kOmniboxPageHandler_StartOmniboxQuery_Name,
        codec.align(OmniboxPageHandler_StartOmniboxQuery_Params.encodedSize));
    builder.encodeStruct(OmniboxPageHandler_StartOmniboxQuery_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OmniboxPageHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  OmniboxPageHandlerStub.prototype.setClientPage = function(page) {
    return this.delegate_ && this.delegate_.setClientPage && this.delegate_.setClientPage(page);
  }
  OmniboxPageHandlerStub.prototype.startOmniboxQuery = function(inputString, cursorPosition, preventInlineAutocomplete, preferKeyword, pageClassification) {
    return this.delegate_ && this.delegate_.startOmniboxQuery && this.delegate_.startOmniboxQuery(inputString, cursorPosition, preventInlineAutocomplete, preferKeyword, pageClassification);
  }

  OmniboxPageHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOmniboxPageHandler_SetClientPage_Name:
      var params = reader.decodeStruct(OmniboxPageHandler_SetClientPage_Params);
      this.setClientPage(params.page);
      return true;
    case kOmniboxPageHandler_StartOmniboxQuery_Name:
      var params = reader.decodeStruct(OmniboxPageHandler_StartOmniboxQuery_Params);
      this.startOmniboxQuery(params.inputString, params.cursorPosition, params.preventInlineAutocomplete, params.preferKeyword, params.pageClassification);
      return true;
    default:
      return false;
    }
  };

  OmniboxPageHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateOmniboxPageHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOmniboxPageHandler_SetClientPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OmniboxPageHandler_SetClientPage_Params;
      break;
      case kOmniboxPageHandler_StartOmniboxQuery_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OmniboxPageHandler_StartOmniboxQuery_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOmniboxPageHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OmniboxPageHandler = {
    name: 'mojom.OmniboxPageHandler',
    kVersion: 0,
    ptrClass: OmniboxPageHandlerPtr,
    proxyClass: OmniboxPageHandlerProxy,
    stubClass: OmniboxPageHandlerStub,
    validateRequest: validateOmniboxPageHandlerRequest,
    validateResponse: null,
    mojomId: 'chrome/browser/ui/webui/omnibox/omnibox.mojom',
    fuzzMethods: {
      setClientPage: {
        params: OmniboxPageHandler_SetClientPage_Params,
      },
      startOmniboxQuery: {
        params: OmniboxPageHandler_StartOmniboxQuery_Params,
      },
    },
  };
  OmniboxPageHandlerStub.prototype.validator = validateOmniboxPageHandlerRequest;
  OmniboxPageHandlerProxy.prototype.validator = null;
  var kOmniboxPage_HandleNewAutocompleteResult_Name = 725969913;

  function OmniboxPagePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(OmniboxPage,
                                                   handleOrPtrInfo);
  }

  function OmniboxPageAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        OmniboxPage, associatedInterfacePtrInfo);
  }

  OmniboxPageAssociatedPtr.prototype =
      Object.create(OmniboxPagePtr.prototype);
  OmniboxPageAssociatedPtr.prototype.constructor =
      OmniboxPageAssociatedPtr;

  function OmniboxPageProxy(receiver) {
    this.receiver_ = receiver;
  }
  OmniboxPagePtr.prototype.handleNewAutocompleteResult = function() {
    return OmniboxPageProxy.prototype.handleNewAutocompleteResult
        .apply(this.ptr.getProxy(), arguments);
  };

  OmniboxPageProxy.prototype.handleNewAutocompleteResult = function(result) {
    var params_ = new OmniboxPage_HandleNewAutocompleteResult_Params();
    params_.result = result;
    var builder = new codec.MessageV0Builder(
        kOmniboxPage_HandleNewAutocompleteResult_Name,
        codec.align(OmniboxPage_HandleNewAutocompleteResult_Params.encodedSize));
    builder.encodeStruct(OmniboxPage_HandleNewAutocompleteResult_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OmniboxPageStub(delegate) {
    this.delegate_ = delegate;
  }
  OmniboxPageStub.prototype.handleNewAutocompleteResult = function(result) {
    return this.delegate_ && this.delegate_.handleNewAutocompleteResult && this.delegate_.handleNewAutocompleteResult(result);
  }

  OmniboxPageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOmniboxPage_HandleNewAutocompleteResult_Name:
      var params = reader.decodeStruct(OmniboxPage_HandleNewAutocompleteResult_Params);
      this.handleNewAutocompleteResult(params.result);
      return true;
    default:
      return false;
    }
  };

  OmniboxPageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateOmniboxPageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOmniboxPage_HandleNewAutocompleteResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OmniboxPage_HandleNewAutocompleteResult_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOmniboxPageResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OmniboxPage = {
    name: 'mojom.OmniboxPage',
    kVersion: 0,
    ptrClass: OmniboxPagePtr,
    proxyClass: OmniboxPageProxy,
    stubClass: OmniboxPageStub,
    validateRequest: validateOmniboxPageRequest,
    validateResponse: null,
    mojomId: 'chrome/browser/ui/webui/omnibox/omnibox.mojom',
    fuzzMethods: {
      handleNewAutocompleteResult: {
        params: OmniboxPage_HandleNewAutocompleteResult_Params,
      },
    },
  };
  OmniboxPageStub.prototype.validator = validateOmniboxPageRequest;
  OmniboxPageProxy.prototype.validator = null;
  exports.AutocompleteAdditionalInfo = AutocompleteAdditionalInfo;
  exports.AutocompleteMatch = AutocompleteMatch;
  exports.AutocompleteResultsForProvider = AutocompleteResultsForProvider;
  exports.OmniboxResult = OmniboxResult;
  exports.OmniboxPageHandler = OmniboxPageHandler;
  exports.OmniboxPageHandlerPtr = OmniboxPageHandlerPtr;
  exports.OmniboxPageHandlerAssociatedPtr = OmniboxPageHandlerAssociatedPtr;
  exports.OmniboxPage = OmniboxPage;
  exports.OmniboxPagePtr = OmniboxPagePtr;
  exports.OmniboxPageAssociatedPtr = OmniboxPageAssociatedPtr;
})();