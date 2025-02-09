// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/navigation_corrector.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chrome.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }



  function NavigationCorrector_SetNavigationCorrectionInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NavigationCorrector_SetNavigationCorrectionInfo_Params.prototype.initDefaults_ = function() {
    this.navigationCorrectionUrl = null;
    this.language = null;
    this.countryCode = null;
    this.apiKey = null;
    this.searchUrl = null;
  };
  NavigationCorrector_SetNavigationCorrectionInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NavigationCorrector_SetNavigationCorrectionInfo_Params.generate = function(generator_) {
    var generated = new NavigationCorrector_SetNavigationCorrectionInfo_Params;
    generated.navigationCorrectionUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.language = generator_.generateString(false);
    generated.countryCode = generator_.generateString(false);
    generated.apiKey = generator_.generateString(false);
    generated.searchUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  NavigationCorrector_SetNavigationCorrectionInfo_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.navigationCorrectionUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.language = mutator_.mutateString(this.language, false);
    }
    if (mutator_.chooseMutateField()) {
      this.countryCode = mutator_.mutateString(this.countryCode, false);
    }
    if (mutator_.chooseMutateField()) {
      this.apiKey = mutator_.mutateString(this.apiKey, false);
    }
    if (mutator_.chooseMutateField()) {
      this.searchUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  NavigationCorrector_SetNavigationCorrectionInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NavigationCorrector_SetNavigationCorrectionInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NavigationCorrector_SetNavigationCorrectionInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NavigationCorrector_SetNavigationCorrectionInfo_Params.validate = function(messageValidator, offset) {
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


    // validate NavigationCorrector_SetNavigationCorrectionInfo_Params.navigationCorrectionUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NavigationCorrector_SetNavigationCorrectionInfo_Params.language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NavigationCorrector_SetNavigationCorrectionInfo_Params.countryCode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NavigationCorrector_SetNavigationCorrectionInfo_Params.apiKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NavigationCorrector_SetNavigationCorrectionInfo_Params.searchUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NavigationCorrector_SetNavigationCorrectionInfo_Params.encodedSize = codec.kStructHeaderSize + 40;

  NavigationCorrector_SetNavigationCorrectionInfo_Params.decode = function(decoder) {
    var packed;
    var val = new NavigationCorrector_SetNavigationCorrectionInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.navigationCorrectionUrl = decoder.decodeStructPointer(url$.Url);
    val.language = decoder.decodeStruct(codec.String);
    val.countryCode = decoder.decodeStruct(codec.String);
    val.apiKey = decoder.decodeStruct(codec.String);
    val.searchUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  NavigationCorrector_SetNavigationCorrectionInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NavigationCorrector_SetNavigationCorrectionInfo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.navigationCorrectionUrl);
    encoder.encodeStruct(codec.String, val.language);
    encoder.encodeStruct(codec.String, val.countryCode);
    encoder.encodeStruct(codec.String, val.apiKey);
    encoder.encodeStructPointer(url$.Url, val.searchUrl);
  };
  var kNavigationCorrector_SetNavigationCorrectionInfo_Name = 367442456;

  function NavigationCorrectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NavigationCorrector,
                                                   handleOrPtrInfo);
  }

  function NavigationCorrectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NavigationCorrector, associatedInterfacePtrInfo);
  }

  NavigationCorrectorAssociatedPtr.prototype =
      Object.create(NavigationCorrectorPtr.prototype);
  NavigationCorrectorAssociatedPtr.prototype.constructor =
      NavigationCorrectorAssociatedPtr;

  function NavigationCorrectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  NavigationCorrectorPtr.prototype.setNavigationCorrectionInfo = function() {
    return NavigationCorrectorProxy.prototype.setNavigationCorrectionInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  NavigationCorrectorProxy.prototype.setNavigationCorrectionInfo = function(navigationCorrectionUrl, language, countryCode, apiKey, searchUrl) {
    var params_ = new NavigationCorrector_SetNavigationCorrectionInfo_Params();
    params_.navigationCorrectionUrl = navigationCorrectionUrl;
    params_.language = language;
    params_.countryCode = countryCode;
    params_.apiKey = apiKey;
    params_.searchUrl = searchUrl;
    var builder = new codec.MessageV0Builder(
        kNavigationCorrector_SetNavigationCorrectionInfo_Name,
        codec.align(NavigationCorrector_SetNavigationCorrectionInfo_Params.encodedSize));
    builder.encodeStruct(NavigationCorrector_SetNavigationCorrectionInfo_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NavigationCorrectorStub(delegate) {
    this.delegate_ = delegate;
  }
  NavigationCorrectorStub.prototype.setNavigationCorrectionInfo = function(navigationCorrectionUrl, language, countryCode, apiKey, searchUrl) {
    return this.delegate_ && this.delegate_.setNavigationCorrectionInfo && this.delegate_.setNavigationCorrectionInfo(navigationCorrectionUrl, language, countryCode, apiKey, searchUrl);
  }

  NavigationCorrectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNavigationCorrector_SetNavigationCorrectionInfo_Name:
      var params = reader.decodeStruct(NavigationCorrector_SetNavigationCorrectionInfo_Params);
      this.setNavigationCorrectionInfo(params.navigationCorrectionUrl, params.language, params.countryCode, params.apiKey, params.searchUrl);
      return true;
    default:
      return false;
    }
  };

  NavigationCorrectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNavigationCorrectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNavigationCorrector_SetNavigationCorrectionInfo_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NavigationCorrector_SetNavigationCorrectionInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNavigationCorrectorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NavigationCorrector = {
    name: 'chrome.mojom.NavigationCorrector',
    kVersion: 0,
    ptrClass: NavigationCorrectorPtr,
    proxyClass: NavigationCorrectorProxy,
    stubClass: NavigationCorrectorStub,
    validateRequest: validateNavigationCorrectorRequest,
    validateResponse: null,
    mojomId: 'chrome/common/navigation_corrector.mojom',
    fuzzMethods: {
      setNavigationCorrectionInfo: {
        params: NavigationCorrector_SetNavigationCorrectionInfo_Params,
      },
    },
  };
  NavigationCorrectorStub.prototype.validator = validateNavigationCorrectorRequest;
  NavigationCorrectorProxy.prototype.validator = null;
  exports.NavigationCorrector = NavigationCorrector;
  exports.NavigationCorrectorPtr = NavigationCorrectorPtr;
  exports.NavigationCorrectorAssociatedPtr = NavigationCorrectorAssociatedPtr;
})();