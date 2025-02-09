// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/translate/content/common/translate.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('translate.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var TranslateError = {};
  TranslateError.NONE = 0;
  TranslateError.NETWORK = TranslateError.NONE + 1;
  TranslateError.INITIALIZATION_ERROR = TranslateError.NETWORK + 1;
  TranslateError.UNKNOWN_LANGUAGE = TranslateError.INITIALIZATION_ERROR + 1;
  TranslateError.UNSUPPORTED_LANGUAGE = TranslateError.UNKNOWN_LANGUAGE + 1;
  TranslateError.IDENTICAL_LANGUAGES = TranslateError.UNSUPPORTED_LANGUAGE + 1;
  TranslateError.TRANSLATION_ERROR = TranslateError.IDENTICAL_LANGUAGES + 1;
  TranslateError.TRANSLATION_TIMEOUT = TranslateError.TRANSLATION_ERROR + 1;
  TranslateError.UNEXPECTED_SCRIPT_ERROR = TranslateError.TRANSLATION_TIMEOUT + 1;
  TranslateError.BAD_ORIGIN = TranslateError.UNEXPECTED_SCRIPT_ERROR + 1;
  TranslateError.SCRIPT_LOAD_ERROR = TranslateError.BAD_ORIGIN + 1;
  TranslateError.TRANSLATE_ERROR_MAX = TranslateError.SCRIPT_LOAD_ERROR + 1;

  TranslateError.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  TranslateError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function LanguageDetectionDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LanguageDetectionDetails.prototype.initDefaults_ = function() {
    this.time = null;
    this.url = null;
    this.contentLanguage = null;
    this.cldLanguage = null;
    this.isCldReliable = false;
    this.hasNotranslate = false;
    this.htmlRootLanguage = null;
    this.adoptedLanguage = null;
    this.contents = null;
  };
  LanguageDetectionDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LanguageDetectionDetails.generate = function(generator_) {
    var generated = new LanguageDetectionDetails;
    generated.time = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.contentLanguage = generator_.generateString(false);
    generated.cldLanguage = generator_.generateString(false);
    generated.isCldReliable = generator_.generateBool();
    generated.hasNotranslate = generator_.generateBool();
    generated.htmlRootLanguage = generator_.generateString(false);
    generated.adoptedLanguage = generator_.generateString(false);
    generated.contents = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  LanguageDetectionDetails.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contentLanguage = mutator_.mutateString(this.contentLanguage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cldLanguage = mutator_.mutateString(this.cldLanguage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isCldReliable = mutator_.mutateBool(this.isCldReliable);
    }
    if (mutator_.chooseMutateField()) {
      this.hasNotranslate = mutator_.mutateBool(this.hasNotranslate);
    }
    if (mutator_.chooseMutateField()) {
      this.htmlRootLanguage = mutator_.mutateString(this.htmlRootLanguage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.adoptedLanguage = mutator_.mutateString(this.adoptedLanguage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contents = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  LanguageDetectionDetails.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LanguageDetectionDetails.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LanguageDetectionDetails.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LanguageDetectionDetails.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LanguageDetectionDetails.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LanguageDetectionDetails.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LanguageDetectionDetails.contentLanguage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate LanguageDetectionDetails.cldLanguage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate LanguageDetectionDetails.htmlRootLanguage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate LanguageDetectionDetails.adoptedLanguage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate LanguageDetectionDetails.contents
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LanguageDetectionDetails.encodedSize = codec.kStructHeaderSize + 64;

  LanguageDetectionDetails.decode = function(decoder) {
    var packed;
    var val = new LanguageDetectionDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(time$.Time);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.contentLanguage = decoder.decodeStruct(codec.String);
    val.cldLanguage = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.isCldReliable = (packed >> 0) & 1 ? true : false;
    val.hasNotranslate = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.htmlRootLanguage = decoder.decodeStruct(codec.String);
    val.adoptedLanguage = decoder.decodeStruct(codec.String);
    val.contents = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  LanguageDetectionDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LanguageDetectionDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.time);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.contentLanguage);
    encoder.encodeStruct(codec.String, val.cldLanguage);
    packed = 0;
    packed |= (val.isCldReliable & 1) << 0
    packed |= (val.hasNotranslate & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.htmlRootLanguage);
    encoder.encodeStruct(codec.String, val.adoptedLanguage);
    encoder.encodeStructPointer(string16$.String16, val.contents);
  };
  function Page_Translate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_Translate_Params.prototype.initDefaults_ = function() {
    this.translateScript = null;
    this.sourceLang = null;
    this.targetLang = null;
  };
  Page_Translate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Page_Translate_Params.generate = function(generator_) {
    var generated = new Page_Translate_Params;
    generated.translateScript = generator_.generateString(false);
    generated.sourceLang = generator_.generateString(false);
    generated.targetLang = generator_.generateString(false);
    return generated;
  };

  Page_Translate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.translateScript = mutator_.mutateString(this.translateScript, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceLang = mutator_.mutateString(this.sourceLang, false);
    }
    if (mutator_.chooseMutateField()) {
      this.targetLang = mutator_.mutateString(this.targetLang, false);
    }
    return this;
  };
  Page_Translate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Page_Translate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Page_Translate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Page_Translate_Params.validate = function(messageValidator, offset) {
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


    // validate Page_Translate_Params.translateScript
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Page_Translate_Params.sourceLang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Page_Translate_Params.targetLang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Page_Translate_Params.encodedSize = codec.kStructHeaderSize + 24;

  Page_Translate_Params.decode = function(decoder) {
    var packed;
    var val = new Page_Translate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.translateScript = decoder.decodeStruct(codec.String);
    val.sourceLang = decoder.decodeStruct(codec.String);
    val.targetLang = decoder.decodeStruct(codec.String);
    return val;
  };

  Page_Translate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_Translate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.translateScript);
    encoder.encodeStruct(codec.String, val.sourceLang);
    encoder.encodeStruct(codec.String, val.targetLang);
  };
  function Page_Translate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_Translate_ResponseParams.prototype.initDefaults_ = function() {
    this.cancelled = false;
    this.error = 0;
    this.originalLang = null;
    this.translatedLang = null;
  };
  Page_Translate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Page_Translate_ResponseParams.generate = function(generator_) {
    var generated = new Page_Translate_ResponseParams;
    generated.cancelled = generator_.generateBool();
    generated.originalLang = generator_.generateString(false);
    generated.translatedLang = generator_.generateString(false);
    generated.error = generator_.generateEnum(0, 11);
    return generated;
  };

  Page_Translate_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cancelled = mutator_.mutateBool(this.cancelled);
    }
    if (mutator_.chooseMutateField()) {
      this.originalLang = mutator_.mutateString(this.originalLang, false);
    }
    if (mutator_.chooseMutateField()) {
      this.translatedLang = mutator_.mutateString(this.translatedLang, false);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 11);
    }
    return this;
  };
  Page_Translate_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Page_Translate_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Page_Translate_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Page_Translate_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Page_Translate_ResponseParams.originalLang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Page_Translate_ResponseParams.translatedLang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Page_Translate_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, TranslateError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Page_Translate_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  Page_Translate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Page_Translate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.cancelled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error = decoder.decodeStruct(codec.Int32);
    val.originalLang = decoder.decodeStruct(codec.String);
    val.translatedLang = decoder.decodeStruct(codec.String);
    return val;
  };

  Page_Translate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_Translate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.cancelled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.String, val.originalLang);
    encoder.encodeStruct(codec.String, val.translatedLang);
  };
  function Page_RevertTranslation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_RevertTranslation_Params.prototype.initDefaults_ = function() {
  };
  Page_RevertTranslation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Page_RevertTranslation_Params.generate = function(generator_) {
    var generated = new Page_RevertTranslation_Params;
    return generated;
  };

  Page_RevertTranslation_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Page_RevertTranslation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Page_RevertTranslation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Page_RevertTranslation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Page_RevertTranslation_Params.validate = function(messageValidator, offset) {
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

  Page_RevertTranslation_Params.encodedSize = codec.kStructHeaderSize + 0;

  Page_RevertTranslation_Params.decode = function(decoder) {
    var packed;
    var val = new Page_RevertTranslation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Page_RevertTranslation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_RevertTranslation_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ContentTranslateDriver_RegisterPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentTranslateDriver_RegisterPage_Params.prototype.initDefaults_ = function() {
    this.page = new PagePtr();
    this.details = null;
    this.pageNeedsTranslation = false;
  };
  ContentTranslateDriver_RegisterPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentTranslateDriver_RegisterPage_Params.generate = function(generator_) {
    var generated = new ContentTranslateDriver_RegisterPage_Params;
    generated.page = generator_.generateInterface("translate.mojom.Page", false);
    generated.details = generator_.generateStruct(translate.mojom.LanguageDetectionDetails, false);
    generated.pageNeedsTranslation = generator_.generateBool();
    return generated;
  };

  ContentTranslateDriver_RegisterPage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.page = mutator_.mutateInterface(this.page, "translate.mojom.Page", false);
    }
    if (mutator_.chooseMutateField()) {
      this.details = mutator_.mutateStruct(translate.mojom.LanguageDetectionDetails, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pageNeedsTranslation = mutator_.mutateBool(this.pageNeedsTranslation);
    }
    return this;
  };
  ContentTranslateDriver_RegisterPage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.page !== null) {
      Array.prototype.push.apply(handles, ["translate.mojom.PagePtr"]);
    }
    return handles;
  };

  ContentTranslateDriver_RegisterPage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentTranslateDriver_RegisterPage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.page = handles[idx++];;
    return idx;
  };

  ContentTranslateDriver_RegisterPage_Params.validate = function(messageValidator, offset) {
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


    // validate ContentTranslateDriver_RegisterPage_Params.page
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentTranslateDriver_RegisterPage_Params.details
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, LanguageDetectionDetails, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ContentTranslateDriver_RegisterPage_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentTranslateDriver_RegisterPage_Params.decode = function(decoder) {
    var packed;
    var val = new ContentTranslateDriver_RegisterPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page = decoder.decodeStruct(new codec.Interface(PagePtr));
    val.details = decoder.decodeStructPointer(LanguageDetectionDetails);
    packed = decoder.readUint8();
    val.pageNeedsTranslation = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContentTranslateDriver_RegisterPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentTranslateDriver_RegisterPage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PagePtr), val.page);
    encoder.encodeStructPointer(LanguageDetectionDetails, val.details);
    packed = 0;
    packed |= (val.pageNeedsTranslation & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPage_Translate_Name = 192042607;
  var kPage_RevertTranslation_Name = 1404621925;

  function PagePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Page,
                                                   handleOrPtrInfo);
  }

  function PageAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Page, associatedInterfacePtrInfo);
  }

  PageAssociatedPtr.prototype =
      Object.create(PagePtr.prototype);
  PageAssociatedPtr.prototype.constructor =
      PageAssociatedPtr;

  function PageProxy(receiver) {
    this.receiver_ = receiver;
  }
  PagePtr.prototype.translate = function() {
    return PageProxy.prototype.translate
        .apply(this.ptr.getProxy(), arguments);
  };

  PageProxy.prototype.translate = function(translateScript, sourceLang, targetLang) {
    var params_ = new Page_Translate_Params();
    params_.translateScript = translateScript;
    params_.sourceLang = sourceLang;
    params_.targetLang = targetLang;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPage_Translate_Name,
          codec.align(Page_Translate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Page_Translate_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Page_Translate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PagePtr.prototype.revertTranslation = function() {
    return PageProxy.prototype.revertTranslation
        .apply(this.ptr.getProxy(), arguments);
  };

  PageProxy.prototype.revertTranslation = function() {
    var params_ = new Page_RevertTranslation_Params();
    var builder = new codec.MessageV0Builder(
        kPage_RevertTranslation_Name,
        codec.align(Page_RevertTranslation_Params.encodedSize));
    builder.encodeStruct(Page_RevertTranslation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageStub(delegate) {
    this.delegate_ = delegate;
  }
  PageStub.prototype.translate = function(translateScript, sourceLang, targetLang) {
    return this.delegate_ && this.delegate_.translate && this.delegate_.translate(translateScript, sourceLang, targetLang);
  }
  PageStub.prototype.revertTranslation = function() {
    return this.delegate_ && this.delegate_.revertTranslation && this.delegate_.revertTranslation();
  }

  PageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPage_RevertTranslation_Name:
      var params = reader.decodeStruct(Page_RevertTranslation_Params);
      this.revertTranslation();
      return true;
    default:
      return false;
    }
  };

  PageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPage_Translate_Name:
      var params = reader.decodeStruct(Page_Translate_Params);
      this.translate(params.translateScript, params.sourceLang, params.targetLang).then(function(response) {
        var responseParams =
            new Page_Translate_ResponseParams();
        responseParams.cancelled = response.cancelled;
        responseParams.originalLang = response.originalLang;
        responseParams.translatedLang = response.translatedLang;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kPage_Translate_Name,
            codec.align(Page_Translate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Page_Translate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPage_Translate_Name:
        if (message.expectsResponse())
          paramsClass = Page_Translate_Params;
      break;
      case kPage_RevertTranslation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Page_RevertTranslation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPage_Translate_Name:
        if (message.isResponse())
          paramsClass = Page_Translate_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Page = {
    name: 'translate.mojom.Page',
    kVersion: 0,
    ptrClass: PagePtr,
    proxyClass: PageProxy,
    stubClass: PageStub,
    validateRequest: validatePageRequest,
    validateResponse: validatePageResponse,
    mojomId: 'components/translate/content/common/translate.mojom',
    fuzzMethods: {
      translate: {
        params: Page_Translate_Params,
      },
      revertTranslation: {
        params: Page_RevertTranslation_Params,
      },
    },
  };
  PageStub.prototype.validator = validatePageRequest;
  PageProxy.prototype.validator = validatePageResponse;
  var kContentTranslateDriver_RegisterPage_Name = 914182580;

  function ContentTranslateDriverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ContentTranslateDriver,
                                                   handleOrPtrInfo);
  }

  function ContentTranslateDriverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ContentTranslateDriver, associatedInterfacePtrInfo);
  }

  ContentTranslateDriverAssociatedPtr.prototype =
      Object.create(ContentTranslateDriverPtr.prototype);
  ContentTranslateDriverAssociatedPtr.prototype.constructor =
      ContentTranslateDriverAssociatedPtr;

  function ContentTranslateDriverProxy(receiver) {
    this.receiver_ = receiver;
  }
  ContentTranslateDriverPtr.prototype.registerPage = function() {
    return ContentTranslateDriverProxy.prototype.registerPage
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentTranslateDriverProxy.prototype.registerPage = function(page, details, pageNeedsTranslation) {
    var params_ = new ContentTranslateDriver_RegisterPage_Params();
    params_.page = page;
    params_.details = details;
    params_.pageNeedsTranslation = pageNeedsTranslation;
    var builder = new codec.MessageV0Builder(
        kContentTranslateDriver_RegisterPage_Name,
        codec.align(ContentTranslateDriver_RegisterPage_Params.encodedSize));
    builder.encodeStruct(ContentTranslateDriver_RegisterPage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ContentTranslateDriverStub(delegate) {
    this.delegate_ = delegate;
  }
  ContentTranslateDriverStub.prototype.registerPage = function(page, details, pageNeedsTranslation) {
    return this.delegate_ && this.delegate_.registerPage && this.delegate_.registerPage(page, details, pageNeedsTranslation);
  }

  ContentTranslateDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentTranslateDriver_RegisterPage_Name:
      var params = reader.decodeStruct(ContentTranslateDriver_RegisterPage_Params);
      this.registerPage(params.page, params.details, params.pageNeedsTranslation);
      return true;
    default:
      return false;
    }
  };

  ContentTranslateDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateContentTranslateDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContentTranslateDriver_RegisterPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentTranslateDriver_RegisterPage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContentTranslateDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ContentTranslateDriver = {
    name: 'translate.mojom.ContentTranslateDriver',
    kVersion: 0,
    ptrClass: ContentTranslateDriverPtr,
    proxyClass: ContentTranslateDriverProxy,
    stubClass: ContentTranslateDriverStub,
    validateRequest: validateContentTranslateDriverRequest,
    validateResponse: null,
    mojomId: 'components/translate/content/common/translate.mojom',
    fuzzMethods: {
      registerPage: {
        params: ContentTranslateDriver_RegisterPage_Params,
      },
    },
  };
  ContentTranslateDriverStub.prototype.validator = validateContentTranslateDriverRequest;
  ContentTranslateDriverProxy.prototype.validator = null;
  exports.TranslateError = TranslateError;
  exports.LanguageDetectionDetails = LanguageDetectionDetails;
  exports.Page = Page;
  exports.PagePtr = PagePtr;
  exports.PageAssociatedPtr = PageAssociatedPtr;
  exports.ContentTranslateDriver = ContentTranslateDriver;
  exports.ContentTranslateDriverPtr = ContentTranslateDriverPtr;
  exports.ContentTranslateDriverAssociatedPtr = ContentTranslateDriverAssociatedPtr;
})();