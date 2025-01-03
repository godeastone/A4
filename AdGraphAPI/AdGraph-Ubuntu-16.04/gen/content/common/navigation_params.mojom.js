// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/navigation_params.mojom';
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
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../mojo/public/mojom/base/values.mojom.js');
  }
  var fetch_api_request$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom', '../../third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }


  var MixedContentContextType = {};

  MixedContentContextType.isKnownEnumValue = function(value) {
    return false;
  };

  MixedContentContextType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function BeginNavigationParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BeginNavigationParams.prototype.initDefaults_ = function() {
    this.headers = null;
    this.loadFlags = 0;
    this.skipServiceWorker = false;
    this.isFormSubmission = false;
    this.requestContextType = 0;
    this.mixedContentContextType = 0;
    this.searchableFormUrl = null;
    this.searchableFormEncoding = null;
    this.initiatorOrigin = null;
    this.clientSideRedirectUrl = null;
    this.devtoolsInitiator = null;
  };
  BeginNavigationParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BeginNavigationParams.generate = function(generator_) {
    var generated = new BeginNavigationParams;
    generated.headers = generator_.generateString(false);
    generated.loadFlags = generator_.generateInt32();
    generated.skipServiceWorker = generator_.generateBool();
    generated.requestContextType = generator_.generateEnum(0, 33);
    generated.mixedContentContextType = generator_.generateEnum();
    generated.isFormSubmission = generator_.generateBool();
    generated.searchableFormUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.searchableFormEncoding = generator_.generateString(false);
    generated.initiatorOrigin = generator_.generateStruct(url.mojom.Origin, true);
    generated.clientSideRedirectUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.devtoolsInitiator = generator_.generateStruct(mojoBase.mojom.DictionaryValue, true);
    return generated;
  };

  BeginNavigationParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.headers = mutator_.mutateString(this.headers, false);
    }
    if (mutator_.chooseMutateField()) {
      this.loadFlags = mutator_.mutateInt32(this.loadFlags);
    }
    if (mutator_.chooseMutateField()) {
      this.skipServiceWorker = mutator_.mutateBool(this.skipServiceWorker);
    }
    if (mutator_.chooseMutateField()) {
      this.requestContextType = mutator_.mutateEnum(this.requestContextType, 0, 33);
    }
    if (mutator_.chooseMutateField()) {
      this.mixedContentContextType = mutator_.mutateEnum(this.mixedContentContextType);
    }
    if (mutator_.chooseMutateField()) {
      this.isFormSubmission = mutator_.mutateBool(this.isFormSubmission);
    }
    if (mutator_.chooseMutateField()) {
      this.searchableFormUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.searchableFormEncoding = mutator_.mutateString(this.searchableFormEncoding, false);
    }
    if (mutator_.chooseMutateField()) {
      this.initiatorOrigin = mutator_.mutateStruct(url.mojom.Origin, true);
    }
    if (mutator_.chooseMutateField()) {
      this.clientSideRedirectUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsInitiator = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, true);
    }
    return this;
  };
  BeginNavigationParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BeginNavigationParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BeginNavigationParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BeginNavigationParams.validate = function(messageValidator, offset) {
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


    // validate BeginNavigationParams.headers
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate BeginNavigationParams.requestContextType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, fetch_api_request$.RequestContextType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginNavigationParams.mixedContentContextType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, MixedContentContextType);
    if (err !== validator.validationError.NONE)
        return err;



    // validate BeginNavigationParams.searchableFormUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginNavigationParams.searchableFormEncoding
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginNavigationParams.initiatorOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, origin$.Origin, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginNavigationParams.clientSideRedirectUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginNavigationParams.devtoolsInitiator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, values$.DictionaryValue, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BeginNavigationParams.encodedSize = codec.kStructHeaderSize + 64;

  BeginNavigationParams.decode = function(decoder) {
    var packed;
    var val = new BeginNavigationParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.headers = decoder.decodeStruct(codec.String);
    val.loadFlags = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.skipServiceWorker = (packed >> 0) & 1 ? true : false;
    val.isFormSubmission = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.requestContextType = decoder.decodeStruct(codec.Int32);
    val.mixedContentContextType = decoder.decodeStruct(codec.Int32);
    val.searchableFormUrl = decoder.decodeStructPointer(url$.Url);
    val.searchableFormEncoding = decoder.decodeStruct(codec.String);
    val.initiatorOrigin = decoder.decodeStructPointer(origin$.Origin);
    val.clientSideRedirectUrl = decoder.decodeStructPointer(url$.Url);
    val.devtoolsInitiator = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  BeginNavigationParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BeginNavigationParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.headers);
    encoder.encodeStruct(codec.Int32, val.loadFlags);
    packed = 0;
    packed |= (val.skipServiceWorker & 1) << 0
    packed |= (val.isFormSubmission & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.requestContextType);
    encoder.encodeStruct(codec.Int32, val.mixedContentContextType);
    encoder.encodeStructPointer(url$.Url, val.searchableFormUrl);
    encoder.encodeStruct(codec.String, val.searchableFormEncoding);
    encoder.encodeStructPointer(origin$.Origin, val.initiatorOrigin);
    encoder.encodeStructPointer(url$.Url, val.clientSideRedirectUrl);
    encoder.encodeStructPointer(values$.DictionaryValue, val.devtoolsInitiator);
  };
  exports.MixedContentContextType = MixedContentContextType;
  exports.BeginNavigationParams = BeginNavigationParams;
})();