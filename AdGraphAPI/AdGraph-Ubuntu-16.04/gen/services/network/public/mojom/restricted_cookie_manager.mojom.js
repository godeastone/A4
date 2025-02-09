// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/restricted_cookie_manager.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');
  var cookie_manager$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/cookie_manager.mojom', 'cookie_manager.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var CookieMatchType = {};
  CookieMatchType.EQUALS = 0;
  CookieMatchType.STARTS_WITH = CookieMatchType.EQUALS + 1;

  CookieMatchType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  CookieMatchType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CookieManagerGetOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManagerGetOptions.prototype.initDefaults_ = function() {
    this.name = null;
    this.matchType = 0;
  };
  CookieManagerGetOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManagerGetOptions.generate = function(generator_) {
    var generated = new CookieManagerGetOptions;
    generated.name = generator_.generateString(false);
    generated.matchType = generator_.generateEnum(0, 1);
    return generated;
  };

  CookieManagerGetOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.matchType = mutator_.mutateEnum(this.matchType, 0, 1);
    }
    return this;
  };
  CookieManagerGetOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManagerGetOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManagerGetOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManagerGetOptions.validate = function(messageValidator, offset) {
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


    // validate CookieManagerGetOptions.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieManagerGetOptions.matchType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, CookieMatchType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManagerGetOptions.encodedSize = codec.kStructHeaderSize + 16;

  CookieManagerGetOptions.decode = function(decoder) {
    var packed;
    var val = new CookieManagerGetOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.matchType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CookieManagerGetOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManagerGetOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.Int32, val.matchType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RestrictedCookieManager_GetAllForUrl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RestrictedCookieManager_GetAllForUrl_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.siteForCookies = null;
    this.options = null;
  };
  RestrictedCookieManager_GetAllForUrl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RestrictedCookieManager_GetAllForUrl_Params.generate = function(generator_) {
    var generated = new RestrictedCookieManager_GetAllForUrl_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.siteForCookies = generator_.generateStruct(url.mojom.Url, false);
    generated.options = generator_.generateStruct(network.mojom.CookieManagerGetOptions, false);
    return generated;
  };

  RestrictedCookieManager_GetAllForUrl_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.siteForCookies = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(network.mojom.CookieManagerGetOptions, false);
    }
    return this;
  };
  RestrictedCookieManager_GetAllForUrl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RestrictedCookieManager_GetAllForUrl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RestrictedCookieManager_GetAllForUrl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RestrictedCookieManager_GetAllForUrl_Params.validate = function(messageValidator, offset) {
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


    // validate RestrictedCookieManager_GetAllForUrl_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RestrictedCookieManager_GetAllForUrl_Params.siteForCookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RestrictedCookieManager_GetAllForUrl_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, CookieManagerGetOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RestrictedCookieManager_GetAllForUrl_Params.encodedSize = codec.kStructHeaderSize + 24;

  RestrictedCookieManager_GetAllForUrl_Params.decode = function(decoder) {
    var packed;
    var val = new RestrictedCookieManager_GetAllForUrl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.siteForCookies = decoder.decodeStructPointer(url$.Url);
    val.options = decoder.decodeStructPointer(CookieManagerGetOptions);
    return val;
  };

  RestrictedCookieManager_GetAllForUrl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RestrictedCookieManager_GetAllForUrl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.siteForCookies);
    encoder.encodeStructPointer(CookieManagerGetOptions, val.options);
  };
  function RestrictedCookieManager_GetAllForUrl_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RestrictedCookieManager_GetAllForUrl_ResponseParams.prototype.initDefaults_ = function() {
    this.cookies = null;
  };
  RestrictedCookieManager_GetAllForUrl_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RestrictedCookieManager_GetAllForUrl_ResponseParams.generate = function(generator_) {
    var generated = new RestrictedCookieManager_GetAllForUrl_ResponseParams;
    generated.cookies = generator_.generateArray(function() {
      return generator_.generateStruct(network.mojom.CanonicalCookie, false);
    });
    return generated;
  };

  RestrictedCookieManager_GetAllForUrl_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookies = mutator_.mutateArray(this.cookies, function(val) {
        return mutator_.mutateStruct(network.mojom.CanonicalCookie, false);
      });
    }
    return this;
  };
  RestrictedCookieManager_GetAllForUrl_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RestrictedCookieManager_GetAllForUrl_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RestrictedCookieManager_GetAllForUrl_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RestrictedCookieManager_GetAllForUrl_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate RestrictedCookieManager_GetAllForUrl_ResponseParams.cookies
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(cookie_manager$.CanonicalCookie), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RestrictedCookieManager_GetAllForUrl_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RestrictedCookieManager_GetAllForUrl_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RestrictedCookieManager_GetAllForUrl_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookies = decoder.decodeArrayPointer(new codec.PointerTo(cookie_manager$.CanonicalCookie));
    return val;
  };

  RestrictedCookieManager_GetAllForUrl_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RestrictedCookieManager_GetAllForUrl_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(cookie_manager$.CanonicalCookie), val.cookies);
  };
  function RestrictedCookieManager_SetCanonicalCookie_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RestrictedCookieManager_SetCanonicalCookie_Params.prototype.initDefaults_ = function() {
    this.cookie = null;
    this.url = null;
    this.siteForCookies = null;
  };
  RestrictedCookieManager_SetCanonicalCookie_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RestrictedCookieManager_SetCanonicalCookie_Params.generate = function(generator_) {
    var generated = new RestrictedCookieManager_SetCanonicalCookie_Params;
    generated.cookie = generator_.generateStruct(network.mojom.CanonicalCookie, false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.siteForCookies = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  RestrictedCookieManager_SetCanonicalCookie_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookie = mutator_.mutateStruct(network.mojom.CanonicalCookie, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.siteForCookies = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  RestrictedCookieManager_SetCanonicalCookie_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RestrictedCookieManager_SetCanonicalCookie_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RestrictedCookieManager_SetCanonicalCookie_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RestrictedCookieManager_SetCanonicalCookie_Params.validate = function(messageValidator, offset) {
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


    // validate RestrictedCookieManager_SetCanonicalCookie_Params.cookie
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, cookie_manager$.CanonicalCookie, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RestrictedCookieManager_SetCanonicalCookie_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RestrictedCookieManager_SetCanonicalCookie_Params.siteForCookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RestrictedCookieManager_SetCanonicalCookie_Params.encodedSize = codec.kStructHeaderSize + 24;

  RestrictedCookieManager_SetCanonicalCookie_Params.decode = function(decoder) {
    var packed;
    var val = new RestrictedCookieManager_SetCanonicalCookie_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookie = decoder.decodeStructPointer(cookie_manager$.CanonicalCookie);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.siteForCookies = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  RestrictedCookieManager_SetCanonicalCookie_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RestrictedCookieManager_SetCanonicalCookie_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(cookie_manager$.CanonicalCookie, val.cookie);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.siteForCookies);
  };
  function RestrictedCookieManager_SetCanonicalCookie_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.generate = function(generator_) {
    var generated = new RestrictedCookieManager_SetCanonicalCookie_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.validate = function(messageValidator, offset) {
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

  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RestrictedCookieManager_SetCanonicalCookie_ResponseParams();
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
    return val;
  };

  RestrictedCookieManager_SetCanonicalCookie_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RestrictedCookieManager_SetCanonicalCookie_ResponseParams.encodedSize);
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
  };
  function RestrictedCookieManager_AddChangeListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RestrictedCookieManager_AddChangeListener_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.siteForCookies = null;
    this.listener = new cookie_manager$.CookieChangeListenerPtr();
  };
  RestrictedCookieManager_AddChangeListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RestrictedCookieManager_AddChangeListener_Params.generate = function(generator_) {
    var generated = new RestrictedCookieManager_AddChangeListener_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.siteForCookies = generator_.generateStruct(url.mojom.Url, false);
    generated.listener = generator_.generateInterface("network.mojom.CookieChangeListener", false);
    return generated;
  };

  RestrictedCookieManager_AddChangeListener_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.siteForCookies = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.listener = mutator_.mutateInterface(this.listener, "network.mojom.CookieChangeListener", false);
    }
    return this;
  };
  RestrictedCookieManager_AddChangeListener_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.listener !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.CookieChangeListenerPtr"]);
    }
    return handles;
  };

  RestrictedCookieManager_AddChangeListener_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RestrictedCookieManager_AddChangeListener_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.listener = handles[idx++];;
    return idx;
  };

  RestrictedCookieManager_AddChangeListener_Params.validate = function(messageValidator, offset) {
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


    // validate RestrictedCookieManager_AddChangeListener_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RestrictedCookieManager_AddChangeListener_Params.siteForCookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RestrictedCookieManager_AddChangeListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RestrictedCookieManager_AddChangeListener_Params.encodedSize = codec.kStructHeaderSize + 24;

  RestrictedCookieManager_AddChangeListener_Params.decode = function(decoder) {
    var packed;
    var val = new RestrictedCookieManager_AddChangeListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.siteForCookies = decoder.decodeStructPointer(url$.Url);
    val.listener = decoder.decodeStruct(new codec.Interface(cookie_manager$.CookieChangeListenerPtr));
    return val;
  };

  RestrictedCookieManager_AddChangeListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RestrictedCookieManager_AddChangeListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.siteForCookies);
    encoder.encodeStruct(new codec.Interface(cookie_manager$.CookieChangeListenerPtr), val.listener);
  };
  var kRestrictedCookieManager_GetAllForUrl_Name = 1604708438;
  var kRestrictedCookieManager_SetCanonicalCookie_Name = 880289526;
  var kRestrictedCookieManager_AddChangeListener_Name = 2090508922;

  function RestrictedCookieManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RestrictedCookieManager,
                                                   handleOrPtrInfo);
  }

  function RestrictedCookieManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RestrictedCookieManager, associatedInterfacePtrInfo);
  }

  RestrictedCookieManagerAssociatedPtr.prototype =
      Object.create(RestrictedCookieManagerPtr.prototype);
  RestrictedCookieManagerAssociatedPtr.prototype.constructor =
      RestrictedCookieManagerAssociatedPtr;

  function RestrictedCookieManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  RestrictedCookieManagerPtr.prototype.getAllForUrl = function() {
    return RestrictedCookieManagerProxy.prototype.getAllForUrl
        .apply(this.ptr.getProxy(), arguments);
  };

  RestrictedCookieManagerProxy.prototype.getAllForUrl = function(url, siteForCookies, options) {
    var params_ = new RestrictedCookieManager_GetAllForUrl_Params();
    params_.url = url;
    params_.siteForCookies = siteForCookies;
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRestrictedCookieManager_GetAllForUrl_Name,
          codec.align(RestrictedCookieManager_GetAllForUrl_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RestrictedCookieManager_GetAllForUrl_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RestrictedCookieManager_GetAllForUrl_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RestrictedCookieManagerPtr.prototype.setCanonicalCookie = function() {
    return RestrictedCookieManagerProxy.prototype.setCanonicalCookie
        .apply(this.ptr.getProxy(), arguments);
  };

  RestrictedCookieManagerProxy.prototype.setCanonicalCookie = function(cookie, url, siteForCookies) {
    var params_ = new RestrictedCookieManager_SetCanonicalCookie_Params();
    params_.cookie = cookie;
    params_.url = url;
    params_.siteForCookies = siteForCookies;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRestrictedCookieManager_SetCanonicalCookie_Name,
          codec.align(RestrictedCookieManager_SetCanonicalCookie_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RestrictedCookieManager_SetCanonicalCookie_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RestrictedCookieManager_SetCanonicalCookie_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RestrictedCookieManagerPtr.prototype.addChangeListener = function() {
    return RestrictedCookieManagerProxy.prototype.addChangeListener
        .apply(this.ptr.getProxy(), arguments);
  };

  RestrictedCookieManagerProxy.prototype.addChangeListener = function(url, siteForCookies, listener) {
    var params_ = new RestrictedCookieManager_AddChangeListener_Params();
    params_.url = url;
    params_.siteForCookies = siteForCookies;
    params_.listener = listener;
    var builder = new codec.MessageV0Builder(
        kRestrictedCookieManager_AddChangeListener_Name,
        codec.align(RestrictedCookieManager_AddChangeListener_Params.encodedSize));
    builder.encodeStruct(RestrictedCookieManager_AddChangeListener_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RestrictedCookieManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  RestrictedCookieManagerStub.prototype.getAllForUrl = function(url, siteForCookies, options) {
    return this.delegate_ && this.delegate_.getAllForUrl && this.delegate_.getAllForUrl(url, siteForCookies, options);
  }
  RestrictedCookieManagerStub.prototype.setCanonicalCookie = function(cookie, url, siteForCookies) {
    return this.delegate_ && this.delegate_.setCanonicalCookie && this.delegate_.setCanonicalCookie(cookie, url, siteForCookies);
  }
  RestrictedCookieManagerStub.prototype.addChangeListener = function(url, siteForCookies, listener) {
    return this.delegate_ && this.delegate_.addChangeListener && this.delegate_.addChangeListener(url, siteForCookies, listener);
  }

  RestrictedCookieManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRestrictedCookieManager_AddChangeListener_Name:
      var params = reader.decodeStruct(RestrictedCookieManager_AddChangeListener_Params);
      this.addChangeListener(params.url, params.siteForCookies, params.listener);
      return true;
    default:
      return false;
    }
  };

  RestrictedCookieManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRestrictedCookieManager_GetAllForUrl_Name:
      var params = reader.decodeStruct(RestrictedCookieManager_GetAllForUrl_Params);
      this.getAllForUrl(params.url, params.siteForCookies, params.options).then(function(response) {
        var responseParams =
            new RestrictedCookieManager_GetAllForUrl_ResponseParams();
        responseParams.cookies = response.cookies;
        var builder = new codec.MessageV1Builder(
            kRestrictedCookieManager_GetAllForUrl_Name,
            codec.align(RestrictedCookieManager_GetAllForUrl_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RestrictedCookieManager_GetAllForUrl_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRestrictedCookieManager_SetCanonicalCookie_Name:
      var params = reader.decodeStruct(RestrictedCookieManager_SetCanonicalCookie_Params);
      this.setCanonicalCookie(params.cookie, params.url, params.siteForCookies).then(function(response) {
        var responseParams =
            new RestrictedCookieManager_SetCanonicalCookie_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kRestrictedCookieManager_SetCanonicalCookie_Name,
            codec.align(RestrictedCookieManager_SetCanonicalCookie_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RestrictedCookieManager_SetCanonicalCookie_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateRestrictedCookieManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRestrictedCookieManager_GetAllForUrl_Name:
        if (message.expectsResponse())
          paramsClass = RestrictedCookieManager_GetAllForUrl_Params;
      break;
      case kRestrictedCookieManager_SetCanonicalCookie_Name:
        if (message.expectsResponse())
          paramsClass = RestrictedCookieManager_SetCanonicalCookie_Params;
      break;
      case kRestrictedCookieManager_AddChangeListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RestrictedCookieManager_AddChangeListener_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRestrictedCookieManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRestrictedCookieManager_GetAllForUrl_Name:
        if (message.isResponse())
          paramsClass = RestrictedCookieManager_GetAllForUrl_ResponseParams;
        break;
      case kRestrictedCookieManager_SetCanonicalCookie_Name:
        if (message.isResponse())
          paramsClass = RestrictedCookieManager_SetCanonicalCookie_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var RestrictedCookieManager = {
    name: 'network.mojom.RestrictedCookieManager',
    kVersion: 0,
    ptrClass: RestrictedCookieManagerPtr,
    proxyClass: RestrictedCookieManagerProxy,
    stubClass: RestrictedCookieManagerStub,
    validateRequest: validateRestrictedCookieManagerRequest,
    validateResponse: validateRestrictedCookieManagerResponse,
    mojomId: 'services/network/public/mojom/restricted_cookie_manager.mojom',
    fuzzMethods: {
      getAllForUrl: {
        params: RestrictedCookieManager_GetAllForUrl_Params,
      },
      setCanonicalCookie: {
        params: RestrictedCookieManager_SetCanonicalCookie_Params,
      },
      addChangeListener: {
        params: RestrictedCookieManager_AddChangeListener_Params,
      },
    },
  };
  RestrictedCookieManagerStub.prototype.validator = validateRestrictedCookieManagerRequest;
  RestrictedCookieManagerProxy.prototype.validator = validateRestrictedCookieManagerResponse;
  exports.CookieMatchType = CookieMatchType;
  exports.CookieManagerGetOptions = CookieManagerGetOptions;
  exports.RestrictedCookieManager = RestrictedCookieManager;
  exports.RestrictedCookieManagerPtr = RestrictedCookieManagerPtr;
  exports.RestrictedCookieManagerAssociatedPtr = RestrictedCookieManagerAssociatedPtr;
})();