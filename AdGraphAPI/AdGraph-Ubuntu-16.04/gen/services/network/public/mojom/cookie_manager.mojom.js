// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/cookie_manager.mojom';
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


  var CookiePriority = {};
  CookiePriority.LOW = 0;
  CookiePriority.MEDIUM = CookiePriority.LOW + 1;
  CookiePriority.HIGH = CookiePriority.MEDIUM + 1;

  CookiePriority.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CookiePriority.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CookieSameSite = {};
  CookieSameSite.NO_RESTRICTION = 0;
  CookieSameSite.LAX_MODE = CookieSameSite.NO_RESTRICTION + 1;
  CookieSameSite.STRICT_MODE = CookieSameSite.LAX_MODE + 1;

  CookieSameSite.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CookieSameSite.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CookieSameSiteFilter = {};
  CookieSameSiteFilter.INCLUDE_STRICT_AND_LAX = 0;
  CookieSameSiteFilter.INCLUDE_LAX = CookieSameSiteFilter.INCLUDE_STRICT_AND_LAX + 1;
  CookieSameSiteFilter.DO_NOT_INCLUDE = CookieSameSiteFilter.INCLUDE_LAX + 1;

  CookieSameSiteFilter.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CookieSameSiteFilter.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CookieChangeCause = {};
  CookieChangeCause.INSERTED = 0;
  CookieChangeCause.EXPLICIT = CookieChangeCause.INSERTED + 1;
  CookieChangeCause.UNKNOWN_DELETION = CookieChangeCause.EXPLICIT + 1;
  CookieChangeCause.OVERWRITE = CookieChangeCause.UNKNOWN_DELETION + 1;
  CookieChangeCause.EXPIRED = CookieChangeCause.OVERWRITE + 1;
  CookieChangeCause.EVICTED = CookieChangeCause.EXPIRED + 1;
  CookieChangeCause.EXPIRED_OVERWRITE = CookieChangeCause.EVICTED + 1;

  CookieChangeCause.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  CookieChangeCause.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CookieDeletionSessionControl = {};
  CookieDeletionSessionControl.IGNORE_CONTROL = 0;
  CookieDeletionSessionControl.SESSION_COOKIES = CookieDeletionSessionControl.IGNORE_CONTROL + 1;
  CookieDeletionSessionControl.PERSISTENT_COOKIES = CookieDeletionSessionControl.SESSION_COOKIES + 1;

  CookieDeletionSessionControl.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CookieDeletionSessionControl.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CookieOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieOptions.prototype.initDefaults_ = function() {
    this.excludeHttponly = true;
    this.updateAccessTime = true;
    this.cookieSameSiteFilter = CookieSameSiteFilter.DO_NOT_INCLUDE;
    this.serverTime = null;
  };
  CookieOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieOptions.generate = function(generator_) {
    var generated = new CookieOptions;
    generated.excludeHttponly = generator_.generateBool();
    generated.cookieSameSiteFilter = generator_.generateEnum(0, 2);
    generated.updateAccessTime = generator_.generateBool();
    generated.serverTime = generator_.generateStruct(mojoBase.mojom.Time, true);
    return generated;
  };

  CookieOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.excludeHttponly = mutator_.mutateBool(this.excludeHttponly);
    }
    if (mutator_.chooseMutateField()) {
      this.cookieSameSiteFilter = mutator_.mutateEnum(this.cookieSameSiteFilter, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.updateAccessTime = mutator_.mutateBool(this.updateAccessTime);
    }
    if (mutator_.chooseMutateField()) {
      this.serverTime = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    return this;
  };
  CookieOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieOptions.validate = function(messageValidator, offset) {
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



    // validate CookieOptions.cookieSameSiteFilter
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, CookieSameSiteFilter);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CookieOptions.serverTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieOptions.encodedSize = codec.kStructHeaderSize + 16;

  CookieOptions.decode = function(decoder) {
    var packed;
    var val = new CookieOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.excludeHttponly = (packed >> 0) & 1 ? true : false;
    val.updateAccessTime = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.cookieSameSiteFilter = decoder.decodeStruct(codec.Int32);
    val.serverTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  CookieOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieOptions.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.excludeHttponly & 1) << 0
    packed |= (val.updateAccessTime & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.cookieSameSiteFilter);
    encoder.encodeStructPointer(time$.Time, val.serverTime);
  };
  function CanonicalCookie(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CanonicalCookie.prototype.initDefaults_ = function() {
    this.name = null;
    this.value = null;
    this.domain = null;
    this.path = null;
    this.creation = null;
    this.expiry = null;
    this.lastAccess = null;
    this.secure = false;
    this.httponly = false;
    this.siteRestrictions = CookieSameSite.NO_RESTRICTION;
    this.priority = CookiePriority.MEDIUM;
  };
  CanonicalCookie.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CanonicalCookie.generate = function(generator_) {
    var generated = new CanonicalCookie;
    generated.name = generator_.generateString(false);
    generated.value = generator_.generateString(false);
    generated.domain = generator_.generateString(false);
    generated.path = generator_.generateString(false);
    generated.creation = generator_.generateStruct(mojoBase.mojom.Time, true);
    generated.expiry = generator_.generateStruct(mojoBase.mojom.Time, true);
    generated.lastAccess = generator_.generateStruct(mojoBase.mojom.Time, true);
    generated.secure = generator_.generateBool();
    generated.httponly = generator_.generateBool();
    generated.siteRestrictions = generator_.generateEnum(0, 2);
    generated.priority = generator_.generateEnum(0, 2);
    return generated;
  };

  CanonicalCookie.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    if (mutator_.chooseMutateField()) {
      this.domain = mutator_.mutateString(this.domain, false);
    }
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.creation = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    if (mutator_.chooseMutateField()) {
      this.expiry = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    if (mutator_.chooseMutateField()) {
      this.lastAccess = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    if (mutator_.chooseMutateField()) {
      this.secure = mutator_.mutateBool(this.secure);
    }
    if (mutator_.chooseMutateField()) {
      this.httponly = mutator_.mutateBool(this.httponly);
    }
    if (mutator_.chooseMutateField()) {
      this.siteRestrictions = mutator_.mutateEnum(this.siteRestrictions, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.priority = mutator_.mutateEnum(this.priority, 0, 2);
    }
    return this;
  };
  CanonicalCookie.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CanonicalCookie.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CanonicalCookie.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CanonicalCookie.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 80}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.domain
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.creation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.expiry
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.lastAccess
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;




    // validate CanonicalCookie.siteRestrictions
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 60, CookieSameSite);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanonicalCookie.priority
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 64, CookiePriority);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CanonicalCookie.encodedSize = codec.kStructHeaderSize + 72;

  CanonicalCookie.decode = function(decoder) {
    var packed;
    var val = new CanonicalCookie();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    val.domain = decoder.decodeStruct(codec.String);
    val.path = decoder.decodeStruct(codec.String);
    val.creation = decoder.decodeStructPointer(time$.Time);
    val.expiry = decoder.decodeStructPointer(time$.Time);
    val.lastAccess = decoder.decodeStructPointer(time$.Time);
    packed = decoder.readUint8();
    val.secure = (packed >> 0) & 1 ? true : false;
    val.httponly = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.siteRestrictions = decoder.decodeStruct(codec.Int32);
    val.priority = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CanonicalCookie.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CanonicalCookie.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.value);
    encoder.encodeStruct(codec.String, val.domain);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStructPointer(time$.Time, val.creation);
    encoder.encodeStructPointer(time$.Time, val.expiry);
    encoder.encodeStructPointer(time$.Time, val.lastAccess);
    packed = 0;
    packed |= (val.secure & 1) << 0
    packed |= (val.httponly & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.siteRestrictions);
    encoder.encodeStruct(codec.Int32, val.priority);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CookieDeletionFilter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieDeletionFilter.prototype.initDefaults_ = function() {
    this.createdAfterTime = null;
    this.createdBeforeTime = null;
    this.excludingDomains = null;
    this.includingDomains = null;
    this.cookieName = null;
    this.hostName = null;
    this.url = null;
    this.sessionControl = CookieDeletionSessionControl.IGNORE_CONTROL;
  };
  CookieDeletionFilter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieDeletionFilter.generate = function(generator_) {
    var generated = new CookieDeletionFilter;
    generated.createdAfterTime = generator_.generateStruct(mojoBase.mojom.Time, true);
    generated.createdBeforeTime = generator_.generateStruct(mojoBase.mojom.Time, true);
    generated.excludingDomains = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.includingDomains = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.cookieName = generator_.generateString(true);
    generated.hostName = generator_.generateString(true);
    generated.url = generator_.generateStruct(url.mojom.Url, true);
    generated.sessionControl = generator_.generateEnum(0, 2);
    return generated;
  };

  CookieDeletionFilter.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.createdAfterTime = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    if (mutator_.chooseMutateField()) {
      this.createdBeforeTime = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    if (mutator_.chooseMutateField()) {
      this.excludingDomains = mutator_.mutateArray(this.excludingDomains, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.includingDomains = mutator_.mutateArray(this.includingDomains, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.cookieName = mutator_.mutateString(this.cookieName, true);
    }
    if (mutator_.chooseMutateField()) {
      this.hostName = mutator_.mutateString(this.hostName, true);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, true);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionControl = mutator_.mutateEnum(this.sessionControl, 0, 2);
    }
    return this;
  };
  CookieDeletionFilter.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieDeletionFilter.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieDeletionFilter.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieDeletionFilter.validate = function(messageValidator, offset) {
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


    // validate CookieDeletionFilter.createdAfterTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieDeletionFilter.createdBeforeTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieDeletionFilter.excludingDomains
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, codec.String, true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieDeletionFilter.includingDomains
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, codec.String, true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieDeletionFilter.cookieName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieDeletionFilter.hostName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieDeletionFilter.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieDeletionFilter.sessionControl
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 56, CookieDeletionSessionControl);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieDeletionFilter.encodedSize = codec.kStructHeaderSize + 64;

  CookieDeletionFilter.decode = function(decoder) {
    var packed;
    var val = new CookieDeletionFilter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.createdAfterTime = decoder.decodeStructPointer(time$.Time);
    val.createdBeforeTime = decoder.decodeStructPointer(time$.Time);
    val.excludingDomains = decoder.decodeArrayPointer(codec.String);
    val.includingDomains = decoder.decodeArrayPointer(codec.String);
    val.cookieName = decoder.decodeStruct(codec.NullableString);
    val.hostName = decoder.decodeStruct(codec.NullableString);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.sessionControl = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CookieDeletionFilter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieDeletionFilter.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.createdAfterTime);
    encoder.encodeStructPointer(time$.Time, val.createdBeforeTime);
    encoder.encodeArrayPointer(codec.String, val.excludingDomains);
    encoder.encodeArrayPointer(codec.String, val.includingDomains);
    encoder.encodeStruct(codec.NullableString, val.cookieName);
    encoder.encodeStruct(codec.NullableString, val.hostName);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int32, val.sessionControl);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CookieChangeListener_OnCookieChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieChangeListener_OnCookieChange_Params.prototype.initDefaults_ = function() {
    this.cookie = null;
    this.cause = 0;
  };
  CookieChangeListener_OnCookieChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieChangeListener_OnCookieChange_Params.generate = function(generator_) {
    var generated = new CookieChangeListener_OnCookieChange_Params;
    generated.cookie = generator_.generateStruct(network.mojom.CanonicalCookie, false);
    generated.cause = generator_.generateEnum(0, 6);
    return generated;
  };

  CookieChangeListener_OnCookieChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookie = mutator_.mutateStruct(network.mojom.CanonicalCookie, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cause = mutator_.mutateEnum(this.cause, 0, 6);
    }
    return this;
  };
  CookieChangeListener_OnCookieChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieChangeListener_OnCookieChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieChangeListener_OnCookieChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieChangeListener_OnCookieChange_Params.validate = function(messageValidator, offset) {
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


    // validate CookieChangeListener_OnCookieChange_Params.cookie
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CanonicalCookie, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieChangeListener_OnCookieChange_Params.cause
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, CookieChangeCause);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieChangeListener_OnCookieChange_Params.encodedSize = codec.kStructHeaderSize + 16;

  CookieChangeListener_OnCookieChange_Params.decode = function(decoder) {
    var packed;
    var val = new CookieChangeListener_OnCookieChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookie = decoder.decodeStructPointer(CanonicalCookie);
    val.cause = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CookieChangeListener_OnCookieChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieChangeListener_OnCookieChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CanonicalCookie, val.cookie);
    encoder.encodeStruct(codec.Int32, val.cause);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CookieManager_GetAllCookies_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_GetAllCookies_Params.prototype.initDefaults_ = function() {
  };
  CookieManager_GetAllCookies_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_GetAllCookies_Params.generate = function(generator_) {
    var generated = new CookieManager_GetAllCookies_Params;
    return generated;
  };

  CookieManager_GetAllCookies_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CookieManager_GetAllCookies_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_GetAllCookies_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_GetAllCookies_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_GetAllCookies_Params.validate = function(messageValidator, offset) {
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

  CookieManager_GetAllCookies_Params.encodedSize = codec.kStructHeaderSize + 0;

  CookieManager_GetAllCookies_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_GetAllCookies_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CookieManager_GetAllCookies_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_GetAllCookies_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CookieManager_GetAllCookies_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_GetAllCookies_ResponseParams.prototype.initDefaults_ = function() {
    this.cookies = null;
  };
  CookieManager_GetAllCookies_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_GetAllCookies_ResponseParams.generate = function(generator_) {
    var generated = new CookieManager_GetAllCookies_ResponseParams;
    generated.cookies = generator_.generateArray(function() {
      return generator_.generateStruct(network.mojom.CanonicalCookie, false);
    });
    return generated;
  };

  CookieManager_GetAllCookies_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookies = mutator_.mutateArray(this.cookies, function(val) {
        return mutator_.mutateStruct(network.mojom.CanonicalCookie, false);
      });
    }
    return this;
  };
  CookieManager_GetAllCookies_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_GetAllCookies_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_GetAllCookies_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_GetAllCookies_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CookieManager_GetAllCookies_ResponseParams.cookies
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(CanonicalCookie), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManager_GetAllCookies_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CookieManager_GetAllCookies_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieManager_GetAllCookies_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookies = decoder.decodeArrayPointer(new codec.PointerTo(CanonicalCookie));
    return val;
  };

  CookieManager_GetAllCookies_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_GetAllCookies_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(CanonicalCookie), val.cookies);
  };
  function CookieManager_GetCookieList_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_GetCookieList_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.cookieOptions = null;
  };
  CookieManager_GetCookieList_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_GetCookieList_Params.generate = function(generator_) {
    var generated = new CookieManager_GetCookieList_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.cookieOptions = generator_.generateStruct(network.mojom.CookieOptions, false);
    return generated;
  };

  CookieManager_GetCookieList_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cookieOptions = mutator_.mutateStruct(network.mojom.CookieOptions, false);
    }
    return this;
  };
  CookieManager_GetCookieList_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_GetCookieList_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_GetCookieList_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_GetCookieList_Params.validate = function(messageValidator, offset) {
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


    // validate CookieManager_GetCookieList_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieManager_GetCookieList_Params.cookieOptions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, CookieOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManager_GetCookieList_Params.encodedSize = codec.kStructHeaderSize + 16;

  CookieManager_GetCookieList_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_GetCookieList_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.cookieOptions = decoder.decodeStructPointer(CookieOptions);
    return val;
  };

  CookieManager_GetCookieList_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_GetCookieList_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(CookieOptions, val.cookieOptions);
  };
  function CookieManager_GetCookieList_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_GetCookieList_ResponseParams.prototype.initDefaults_ = function() {
    this.cookies = null;
  };
  CookieManager_GetCookieList_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_GetCookieList_ResponseParams.generate = function(generator_) {
    var generated = new CookieManager_GetCookieList_ResponseParams;
    generated.cookies = generator_.generateArray(function() {
      return generator_.generateStruct(network.mojom.CanonicalCookie, false);
    });
    return generated;
  };

  CookieManager_GetCookieList_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookies = mutator_.mutateArray(this.cookies, function(val) {
        return mutator_.mutateStruct(network.mojom.CanonicalCookie, false);
      });
    }
    return this;
  };
  CookieManager_GetCookieList_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_GetCookieList_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_GetCookieList_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_GetCookieList_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CookieManager_GetCookieList_ResponseParams.cookies
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(CanonicalCookie), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManager_GetCookieList_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CookieManager_GetCookieList_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieManager_GetCookieList_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookies = decoder.decodeArrayPointer(new codec.PointerTo(CanonicalCookie));
    return val;
  };

  CookieManager_GetCookieList_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_GetCookieList_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(CanonicalCookie), val.cookies);
  };
  function CookieManager_SetCanonicalCookie_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_SetCanonicalCookie_Params.prototype.initDefaults_ = function() {
    this.cookie = null;
    this.secureSource = false;
    this.modifyHttpOnly = false;
  };
  CookieManager_SetCanonicalCookie_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_SetCanonicalCookie_Params.generate = function(generator_) {
    var generated = new CookieManager_SetCanonicalCookie_Params;
    generated.cookie = generator_.generateStruct(network.mojom.CanonicalCookie, false);
    generated.secureSource = generator_.generateBool();
    generated.modifyHttpOnly = generator_.generateBool();
    return generated;
  };

  CookieManager_SetCanonicalCookie_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookie = mutator_.mutateStruct(network.mojom.CanonicalCookie, false);
    }
    if (mutator_.chooseMutateField()) {
      this.secureSource = mutator_.mutateBool(this.secureSource);
    }
    if (mutator_.chooseMutateField()) {
      this.modifyHttpOnly = mutator_.mutateBool(this.modifyHttpOnly);
    }
    return this;
  };
  CookieManager_SetCanonicalCookie_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_SetCanonicalCookie_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_SetCanonicalCookie_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_SetCanonicalCookie_Params.validate = function(messageValidator, offset) {
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


    // validate CookieManager_SetCanonicalCookie_Params.cookie
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CanonicalCookie, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  CookieManager_SetCanonicalCookie_Params.encodedSize = codec.kStructHeaderSize + 16;

  CookieManager_SetCanonicalCookie_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_SetCanonicalCookie_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookie = decoder.decodeStructPointer(CanonicalCookie);
    packed = decoder.readUint8();
    val.secureSource = (packed >> 0) & 1 ? true : false;
    val.modifyHttpOnly = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CookieManager_SetCanonicalCookie_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_SetCanonicalCookie_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CanonicalCookie, val.cookie);
    packed = 0;
    packed |= (val.secureSource & 1) << 0
    packed |= (val.modifyHttpOnly & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CookieManager_SetCanonicalCookie_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_SetCanonicalCookie_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  CookieManager_SetCanonicalCookie_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_SetCanonicalCookie_ResponseParams.generate = function(generator_) {
    var generated = new CookieManager_SetCanonicalCookie_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  CookieManager_SetCanonicalCookie_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  CookieManager_SetCanonicalCookie_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_SetCanonicalCookie_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_SetCanonicalCookie_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_SetCanonicalCookie_ResponseParams.validate = function(messageValidator, offset) {
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

  CookieManager_SetCanonicalCookie_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CookieManager_SetCanonicalCookie_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieManager_SetCanonicalCookie_ResponseParams();
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

  CookieManager_SetCanonicalCookie_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_SetCanonicalCookie_ResponseParams.encodedSize);
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
  function CookieManager_DeleteCookies_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_DeleteCookies_Params.prototype.initDefaults_ = function() {
    this.filter = null;
  };
  CookieManager_DeleteCookies_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_DeleteCookies_Params.generate = function(generator_) {
    var generated = new CookieManager_DeleteCookies_Params;
    generated.filter = generator_.generateStruct(network.mojom.CookieDeletionFilter, false);
    return generated;
  };

  CookieManager_DeleteCookies_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateStruct(network.mojom.CookieDeletionFilter, false);
    }
    return this;
  };
  CookieManager_DeleteCookies_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_DeleteCookies_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_DeleteCookies_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_DeleteCookies_Params.validate = function(messageValidator, offset) {
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


    // validate CookieManager_DeleteCookies_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CookieDeletionFilter, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManager_DeleteCookies_Params.encodedSize = codec.kStructHeaderSize + 8;

  CookieManager_DeleteCookies_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_DeleteCookies_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filter = decoder.decodeStructPointer(CookieDeletionFilter);
    return val;
  };

  CookieManager_DeleteCookies_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_DeleteCookies_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CookieDeletionFilter, val.filter);
  };
  function CookieManager_DeleteCookies_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_DeleteCookies_ResponseParams.prototype.initDefaults_ = function() {
    this.numDeleted = 0;
  };
  CookieManager_DeleteCookies_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_DeleteCookies_ResponseParams.generate = function(generator_) {
    var generated = new CookieManager_DeleteCookies_ResponseParams;
    generated.numDeleted = generator_.generateUint32();
    return generated;
  };

  CookieManager_DeleteCookies_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.numDeleted = mutator_.mutateUint32(this.numDeleted);
    }
    return this;
  };
  CookieManager_DeleteCookies_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_DeleteCookies_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_DeleteCookies_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_DeleteCookies_ResponseParams.validate = function(messageValidator, offset) {
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

  CookieManager_DeleteCookies_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CookieManager_DeleteCookies_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieManager_DeleteCookies_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numDeleted = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CookieManager_DeleteCookies_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_DeleteCookies_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.numDeleted);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CookieManager_AddCookieChangeListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_AddCookieChangeListener_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.name = null;
    this.listener = new CookieChangeListenerPtr();
  };
  CookieManager_AddCookieChangeListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_AddCookieChangeListener_Params.generate = function(generator_) {
    var generated = new CookieManager_AddCookieChangeListener_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.name = generator_.generateString(false);
    generated.listener = generator_.generateInterface("network.mojom.CookieChangeListener", false);
    return generated;
  };

  CookieManager_AddCookieChangeListener_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.listener = mutator_.mutateInterface(this.listener, "network.mojom.CookieChangeListener", false);
    }
    return this;
  };
  CookieManager_AddCookieChangeListener_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.listener !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.CookieChangeListenerPtr"]);
    }
    return handles;
  };

  CookieManager_AddCookieChangeListener_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_AddCookieChangeListener_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.listener = handles[idx++];;
    return idx;
  };

  CookieManager_AddCookieChangeListener_Params.validate = function(messageValidator, offset) {
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


    // validate CookieManager_AddCookieChangeListener_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieManager_AddCookieChangeListener_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieManager_AddCookieChangeListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManager_AddCookieChangeListener_Params.encodedSize = codec.kStructHeaderSize + 24;

  CookieManager_AddCookieChangeListener_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_AddCookieChangeListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.name = decoder.decodeStruct(codec.String);
    val.listener = decoder.decodeStruct(new codec.Interface(CookieChangeListenerPtr));
    return val;
  };

  CookieManager_AddCookieChangeListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_AddCookieChangeListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(new codec.Interface(CookieChangeListenerPtr), val.listener);
  };
  function CookieManager_AddGlobalChangeListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_AddGlobalChangeListener_Params.prototype.initDefaults_ = function() {
    this.notificationPointer = new CookieChangeListenerPtr();
  };
  CookieManager_AddGlobalChangeListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_AddGlobalChangeListener_Params.generate = function(generator_) {
    var generated = new CookieManager_AddGlobalChangeListener_Params;
    generated.notificationPointer = generator_.generateInterface("network.mojom.CookieChangeListener", false);
    return generated;
  };

  CookieManager_AddGlobalChangeListener_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.notificationPointer = mutator_.mutateInterface(this.notificationPointer, "network.mojom.CookieChangeListener", false);
    }
    return this;
  };
  CookieManager_AddGlobalChangeListener_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.notificationPointer !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.CookieChangeListenerPtr"]);
    }
    return handles;
  };

  CookieManager_AddGlobalChangeListener_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_AddGlobalChangeListener_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.notificationPointer = handles[idx++];;
    return idx;
  };

  CookieManager_AddGlobalChangeListener_Params.validate = function(messageValidator, offset) {
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


    // validate CookieManager_AddGlobalChangeListener_Params.notificationPointer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManager_AddGlobalChangeListener_Params.encodedSize = codec.kStructHeaderSize + 8;

  CookieManager_AddGlobalChangeListener_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_AddGlobalChangeListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.notificationPointer = decoder.decodeStruct(new codec.Interface(CookieChangeListenerPtr));
    return val;
  };

  CookieManager_AddGlobalChangeListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_AddGlobalChangeListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(CookieChangeListenerPtr), val.notificationPointer);
  };
  function CookieManager_CloneInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_CloneInterface_Params.prototype.initDefaults_ = function() {
    this.newInterface = new bindings.InterfaceRequest();
  };
  CookieManager_CloneInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_CloneInterface_Params.generate = function(generator_) {
    var generated = new CookieManager_CloneInterface_Params;
    generated.newInterface = generator_.generateInterfaceRequest("network.mojom.CookieManager", false);
    return generated;
  };

  CookieManager_CloneInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.newInterface = mutator_.mutateInterfaceRequest(this.newInterface, "network.mojom.CookieManager", false);
    }
    return this;
  };
  CookieManager_CloneInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.newInterface !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.CookieManagerRequest"]);
    }
    return handles;
  };

  CookieManager_CloneInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_CloneInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.newInterface = handles[idx++];;
    return idx;
  };

  CookieManager_CloneInterface_Params.validate = function(messageValidator, offset) {
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


    // validate CookieManager_CloneInterface_Params.newInterface
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieManager_CloneInterface_Params.encodedSize = codec.kStructHeaderSize + 8;

  CookieManager_CloneInterface_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_CloneInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.newInterface = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CookieManager_CloneInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_CloneInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.newInterface);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CookieManager_FlushCookieStore_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_FlushCookieStore_Params.prototype.initDefaults_ = function() {
  };
  CookieManager_FlushCookieStore_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_FlushCookieStore_Params.generate = function(generator_) {
    var generated = new CookieManager_FlushCookieStore_Params;
    return generated;
  };

  CookieManager_FlushCookieStore_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CookieManager_FlushCookieStore_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_FlushCookieStore_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_FlushCookieStore_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_FlushCookieStore_Params.validate = function(messageValidator, offset) {
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

  CookieManager_FlushCookieStore_Params.encodedSize = codec.kStructHeaderSize + 0;

  CookieManager_FlushCookieStore_Params.decode = function(decoder) {
    var packed;
    var val = new CookieManager_FlushCookieStore_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CookieManager_FlushCookieStore_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_FlushCookieStore_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CookieManager_FlushCookieStore_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieManager_FlushCookieStore_ResponseParams.prototype.initDefaults_ = function() {
  };
  CookieManager_FlushCookieStore_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieManager_FlushCookieStore_ResponseParams.generate = function(generator_) {
    var generated = new CookieManager_FlushCookieStore_ResponseParams;
    return generated;
  };

  CookieManager_FlushCookieStore_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  CookieManager_FlushCookieStore_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieManager_FlushCookieStore_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieManager_FlushCookieStore_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieManager_FlushCookieStore_ResponseParams.validate = function(messageValidator, offset) {
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

  CookieManager_FlushCookieStore_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  CookieManager_FlushCookieStore_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieManager_FlushCookieStore_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CookieManager_FlushCookieStore_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieManager_FlushCookieStore_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kCookieChangeListener_OnCookieChange_Name = 1629058545;

  function CookieChangeListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CookieChangeListener,
                                                   handleOrPtrInfo);
  }

  function CookieChangeListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CookieChangeListener, associatedInterfacePtrInfo);
  }

  CookieChangeListenerAssociatedPtr.prototype =
      Object.create(CookieChangeListenerPtr.prototype);
  CookieChangeListenerAssociatedPtr.prototype.constructor =
      CookieChangeListenerAssociatedPtr;

  function CookieChangeListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  CookieChangeListenerPtr.prototype.onCookieChange = function() {
    return CookieChangeListenerProxy.prototype.onCookieChange
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieChangeListenerProxy.prototype.onCookieChange = function(cookie, cause) {
    var params_ = new CookieChangeListener_OnCookieChange_Params();
    params_.cookie = cookie;
    params_.cause = cause;
    var builder = new codec.MessageV0Builder(
        kCookieChangeListener_OnCookieChange_Name,
        codec.align(CookieChangeListener_OnCookieChange_Params.encodedSize));
    builder.encodeStruct(CookieChangeListener_OnCookieChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CookieChangeListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  CookieChangeListenerStub.prototype.onCookieChange = function(cookie, cause) {
    return this.delegate_ && this.delegate_.onCookieChange && this.delegate_.onCookieChange(cookie, cause);
  }

  CookieChangeListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCookieChangeListener_OnCookieChange_Name:
      var params = reader.decodeStruct(CookieChangeListener_OnCookieChange_Params);
      this.onCookieChange(params.cookie, params.cause);
      return true;
    default:
      return false;
    }
  };

  CookieChangeListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCookieChangeListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCookieChangeListener_OnCookieChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CookieChangeListener_OnCookieChange_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCookieChangeListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CookieChangeListener = {
    name: 'network.mojom.CookieChangeListener',
    kVersion: 0,
    ptrClass: CookieChangeListenerPtr,
    proxyClass: CookieChangeListenerProxy,
    stubClass: CookieChangeListenerStub,
    validateRequest: validateCookieChangeListenerRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/cookie_manager.mojom',
    fuzzMethods: {
      onCookieChange: {
        params: CookieChangeListener_OnCookieChange_Params,
      },
    },
  };
  CookieChangeListenerStub.prototype.validator = validateCookieChangeListenerRequest;
  CookieChangeListenerProxy.prototype.validator = null;
  var kCookieManager_GetAllCookies_Name = 1659563453;
  var kCookieManager_GetCookieList_Name = 641823728;
  var kCookieManager_SetCanonicalCookie_Name = 1149816449;
  var kCookieManager_DeleteCookies_Name = 1949521559;
  var kCookieManager_AddCookieChangeListener_Name = 1694432380;
  var kCookieManager_AddGlobalChangeListener_Name = 1018926856;
  var kCookieManager_CloneInterface_Name = 41920164;
  var kCookieManager_FlushCookieStore_Name = 569856254;

  function CookieManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CookieManager,
                                                   handleOrPtrInfo);
  }

  function CookieManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CookieManager, associatedInterfacePtrInfo);
  }

  CookieManagerAssociatedPtr.prototype =
      Object.create(CookieManagerPtr.prototype);
  CookieManagerAssociatedPtr.prototype.constructor =
      CookieManagerAssociatedPtr;

  function CookieManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  CookieManagerPtr.prototype.getAllCookies = function() {
    return CookieManagerProxy.prototype.getAllCookies
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.getAllCookies = function() {
    var params_ = new CookieManager_GetAllCookies_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCookieManager_GetAllCookies_Name,
          codec.align(CookieManager_GetAllCookies_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieManager_GetAllCookies_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieManager_GetAllCookies_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CookieManagerPtr.prototype.getCookieList = function() {
    return CookieManagerProxy.prototype.getCookieList
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.getCookieList = function(url, cookieOptions) {
    var params_ = new CookieManager_GetCookieList_Params();
    params_.url = url;
    params_.cookieOptions = cookieOptions;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCookieManager_GetCookieList_Name,
          codec.align(CookieManager_GetCookieList_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieManager_GetCookieList_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieManager_GetCookieList_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CookieManagerPtr.prototype.setCanonicalCookie = function() {
    return CookieManagerProxy.prototype.setCanonicalCookie
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.setCanonicalCookie = function(cookie, secureSource, modifyHttpOnly) {
    var params_ = new CookieManager_SetCanonicalCookie_Params();
    params_.cookie = cookie;
    params_.secureSource = secureSource;
    params_.modifyHttpOnly = modifyHttpOnly;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCookieManager_SetCanonicalCookie_Name,
          codec.align(CookieManager_SetCanonicalCookie_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieManager_SetCanonicalCookie_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieManager_SetCanonicalCookie_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CookieManagerPtr.prototype.deleteCookies = function() {
    return CookieManagerProxy.prototype.deleteCookies
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.deleteCookies = function(filter) {
    var params_ = new CookieManager_DeleteCookies_Params();
    params_.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCookieManager_DeleteCookies_Name,
          codec.align(CookieManager_DeleteCookies_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieManager_DeleteCookies_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieManager_DeleteCookies_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CookieManagerPtr.prototype.addCookieChangeListener = function() {
    return CookieManagerProxy.prototype.addCookieChangeListener
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.addCookieChangeListener = function(url, name, listener) {
    var params_ = new CookieManager_AddCookieChangeListener_Params();
    params_.url = url;
    params_.name = name;
    params_.listener = listener;
    var builder = new codec.MessageV0Builder(
        kCookieManager_AddCookieChangeListener_Name,
        codec.align(CookieManager_AddCookieChangeListener_Params.encodedSize));
    builder.encodeStruct(CookieManager_AddCookieChangeListener_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CookieManagerPtr.prototype.addGlobalChangeListener = function() {
    return CookieManagerProxy.prototype.addGlobalChangeListener
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.addGlobalChangeListener = function(notificationPointer) {
    var params_ = new CookieManager_AddGlobalChangeListener_Params();
    params_.notificationPointer = notificationPointer;
    var builder = new codec.MessageV0Builder(
        kCookieManager_AddGlobalChangeListener_Name,
        codec.align(CookieManager_AddGlobalChangeListener_Params.encodedSize));
    builder.encodeStruct(CookieManager_AddGlobalChangeListener_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CookieManagerPtr.prototype.cloneInterface = function() {
    return CookieManagerProxy.prototype.cloneInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.cloneInterface = function(newInterface) {
    var params_ = new CookieManager_CloneInterface_Params();
    params_.newInterface = newInterface;
    var builder = new codec.MessageV0Builder(
        kCookieManager_CloneInterface_Name,
        codec.align(CookieManager_CloneInterface_Params.encodedSize));
    builder.encodeStruct(CookieManager_CloneInterface_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CookieManagerPtr.prototype.flushCookieStore = function() {
    return CookieManagerProxy.prototype.flushCookieStore
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieManagerProxy.prototype.flushCookieStore = function() {
    var params_ = new CookieManager_FlushCookieStore_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCookieManager_FlushCookieStore_Name,
          codec.align(CookieManager_FlushCookieStore_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieManager_FlushCookieStore_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieManager_FlushCookieStore_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CookieManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  CookieManagerStub.prototype.getAllCookies = function() {
    return this.delegate_ && this.delegate_.getAllCookies && this.delegate_.getAllCookies();
  }
  CookieManagerStub.prototype.getCookieList = function(url, cookieOptions) {
    return this.delegate_ && this.delegate_.getCookieList && this.delegate_.getCookieList(url, cookieOptions);
  }
  CookieManagerStub.prototype.setCanonicalCookie = function(cookie, secureSource, modifyHttpOnly) {
    return this.delegate_ && this.delegate_.setCanonicalCookie && this.delegate_.setCanonicalCookie(cookie, secureSource, modifyHttpOnly);
  }
  CookieManagerStub.prototype.deleteCookies = function(filter) {
    return this.delegate_ && this.delegate_.deleteCookies && this.delegate_.deleteCookies(filter);
  }
  CookieManagerStub.prototype.addCookieChangeListener = function(url, name, listener) {
    return this.delegate_ && this.delegate_.addCookieChangeListener && this.delegate_.addCookieChangeListener(url, name, listener);
  }
  CookieManagerStub.prototype.addGlobalChangeListener = function(notificationPointer) {
    return this.delegate_ && this.delegate_.addGlobalChangeListener && this.delegate_.addGlobalChangeListener(notificationPointer);
  }
  CookieManagerStub.prototype.cloneInterface = function(newInterface) {
    return this.delegate_ && this.delegate_.cloneInterface && this.delegate_.cloneInterface(newInterface);
  }
  CookieManagerStub.prototype.flushCookieStore = function() {
    return this.delegate_ && this.delegate_.flushCookieStore && this.delegate_.flushCookieStore();
  }

  CookieManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCookieManager_AddCookieChangeListener_Name:
      var params = reader.decodeStruct(CookieManager_AddCookieChangeListener_Params);
      this.addCookieChangeListener(params.url, params.name, params.listener);
      return true;
    case kCookieManager_AddGlobalChangeListener_Name:
      var params = reader.decodeStruct(CookieManager_AddGlobalChangeListener_Params);
      this.addGlobalChangeListener(params.notificationPointer);
      return true;
    case kCookieManager_CloneInterface_Name:
      var params = reader.decodeStruct(CookieManager_CloneInterface_Params);
      this.cloneInterface(params.newInterface);
      return true;
    default:
      return false;
    }
  };

  CookieManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCookieManager_GetAllCookies_Name:
      var params = reader.decodeStruct(CookieManager_GetAllCookies_Params);
      this.getAllCookies().then(function(response) {
        var responseParams =
            new CookieManager_GetAllCookies_ResponseParams();
        responseParams.cookies = response.cookies;
        var builder = new codec.MessageV1Builder(
            kCookieManager_GetAllCookies_Name,
            codec.align(CookieManager_GetAllCookies_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieManager_GetAllCookies_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCookieManager_GetCookieList_Name:
      var params = reader.decodeStruct(CookieManager_GetCookieList_Params);
      this.getCookieList(params.url, params.cookieOptions).then(function(response) {
        var responseParams =
            new CookieManager_GetCookieList_ResponseParams();
        responseParams.cookies = response.cookies;
        var builder = new codec.MessageV1Builder(
            kCookieManager_GetCookieList_Name,
            codec.align(CookieManager_GetCookieList_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieManager_GetCookieList_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCookieManager_SetCanonicalCookie_Name:
      var params = reader.decodeStruct(CookieManager_SetCanonicalCookie_Params);
      this.setCanonicalCookie(params.cookie, params.secureSource, params.modifyHttpOnly).then(function(response) {
        var responseParams =
            new CookieManager_SetCanonicalCookie_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kCookieManager_SetCanonicalCookie_Name,
            codec.align(CookieManager_SetCanonicalCookie_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieManager_SetCanonicalCookie_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCookieManager_DeleteCookies_Name:
      var params = reader.decodeStruct(CookieManager_DeleteCookies_Params);
      this.deleteCookies(params.filter).then(function(response) {
        var responseParams =
            new CookieManager_DeleteCookies_ResponseParams();
        responseParams.numDeleted = response.numDeleted;
        var builder = new codec.MessageV1Builder(
            kCookieManager_DeleteCookies_Name,
            codec.align(CookieManager_DeleteCookies_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieManager_DeleteCookies_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCookieManager_FlushCookieStore_Name:
      var params = reader.decodeStruct(CookieManager_FlushCookieStore_Params);
      this.flushCookieStore().then(function(response) {
        var responseParams =
            new CookieManager_FlushCookieStore_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kCookieManager_FlushCookieStore_Name,
            codec.align(CookieManager_FlushCookieStore_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieManager_FlushCookieStore_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCookieManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCookieManager_GetAllCookies_Name:
        if (message.expectsResponse())
          paramsClass = CookieManager_GetAllCookies_Params;
      break;
      case kCookieManager_GetCookieList_Name:
        if (message.expectsResponse())
          paramsClass = CookieManager_GetCookieList_Params;
      break;
      case kCookieManager_SetCanonicalCookie_Name:
        if (message.expectsResponse())
          paramsClass = CookieManager_SetCanonicalCookie_Params;
      break;
      case kCookieManager_DeleteCookies_Name:
        if (message.expectsResponse())
          paramsClass = CookieManager_DeleteCookies_Params;
      break;
      case kCookieManager_AddCookieChangeListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CookieManager_AddCookieChangeListener_Params;
      break;
      case kCookieManager_AddGlobalChangeListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CookieManager_AddGlobalChangeListener_Params;
      break;
      case kCookieManager_CloneInterface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CookieManager_CloneInterface_Params;
      break;
      case kCookieManager_FlushCookieStore_Name:
        if (message.expectsResponse())
          paramsClass = CookieManager_FlushCookieStore_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCookieManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCookieManager_GetAllCookies_Name:
        if (message.isResponse())
          paramsClass = CookieManager_GetAllCookies_ResponseParams;
        break;
      case kCookieManager_GetCookieList_Name:
        if (message.isResponse())
          paramsClass = CookieManager_GetCookieList_ResponseParams;
        break;
      case kCookieManager_SetCanonicalCookie_Name:
        if (message.isResponse())
          paramsClass = CookieManager_SetCanonicalCookie_ResponseParams;
        break;
      case kCookieManager_DeleteCookies_Name:
        if (message.isResponse())
          paramsClass = CookieManager_DeleteCookies_ResponseParams;
        break;
      case kCookieManager_FlushCookieStore_Name:
        if (message.isResponse())
          paramsClass = CookieManager_FlushCookieStore_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CookieManager = {
    name: 'network.mojom.CookieManager',
    kVersion: 0,
    ptrClass: CookieManagerPtr,
    proxyClass: CookieManagerProxy,
    stubClass: CookieManagerStub,
    validateRequest: validateCookieManagerRequest,
    validateResponse: validateCookieManagerResponse,
    mojomId: 'services/network/public/mojom/cookie_manager.mojom',
    fuzzMethods: {
      getAllCookies: {
        params: CookieManager_GetAllCookies_Params,
      },
      getCookieList: {
        params: CookieManager_GetCookieList_Params,
      },
      setCanonicalCookie: {
        params: CookieManager_SetCanonicalCookie_Params,
      },
      deleteCookies: {
        params: CookieManager_DeleteCookies_Params,
      },
      addCookieChangeListener: {
        params: CookieManager_AddCookieChangeListener_Params,
      },
      addGlobalChangeListener: {
        params: CookieManager_AddGlobalChangeListener_Params,
      },
      cloneInterface: {
        params: CookieManager_CloneInterface_Params,
      },
      flushCookieStore: {
        params: CookieManager_FlushCookieStore_Params,
      },
    },
  };
  CookieManagerStub.prototype.validator = validateCookieManagerRequest;
  CookieManagerProxy.prototype.validator = validateCookieManagerResponse;
  exports.CookiePriority = CookiePriority;
  exports.CookieSameSite = CookieSameSite;
  exports.CookieSameSiteFilter = CookieSameSiteFilter;
  exports.CookieChangeCause = CookieChangeCause;
  exports.CookieDeletionSessionControl = CookieDeletionSessionControl;
  exports.CookieOptions = CookieOptions;
  exports.CanonicalCookie = CanonicalCookie;
  exports.CookieDeletionFilter = CookieDeletionFilter;
  exports.CookieChangeListener = CookieChangeListener;
  exports.CookieChangeListenerPtr = CookieChangeListenerPtr;
  exports.CookieChangeListenerAssociatedPtr = CookieChangeListenerAssociatedPtr;
  exports.CookieManager = CookieManager;
  exports.CookieManagerPtr = CookieManagerPtr;
  exports.CookieManagerAssociatedPtr = CookieManagerAssociatedPtr;
})();