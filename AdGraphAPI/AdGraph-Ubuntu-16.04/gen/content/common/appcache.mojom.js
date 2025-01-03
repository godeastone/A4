// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/appcache.mojom';
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
  var appcache_info$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/appcache_info.mojom', '../public/common/appcache_info.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', '../../services/network/public/mojom/url_loader_factory.mojom.js');
  }


  var AppCacheEventID = {};
  AppCacheEventID.APPCACHE_CHECKING_EVENT = 0;
  AppCacheEventID.APPCACHE_ERROR_EVENT = AppCacheEventID.APPCACHE_CHECKING_EVENT + 1;
  AppCacheEventID.APPCACHE_NO_UPDATE_EVENT = AppCacheEventID.APPCACHE_ERROR_EVENT + 1;
  AppCacheEventID.APPCACHE_DOWNLOADING_EVENT = AppCacheEventID.APPCACHE_NO_UPDATE_EVENT + 1;
  AppCacheEventID.APPCACHE_PROGRESS_EVENT = AppCacheEventID.APPCACHE_DOWNLOADING_EVENT + 1;
  AppCacheEventID.APPCACHE_UPDATE_READY_EVENT = AppCacheEventID.APPCACHE_PROGRESS_EVENT + 1;
  AppCacheEventID.APPCACHE_CACHED_EVENT = AppCacheEventID.APPCACHE_UPDATE_READY_EVENT + 1;
  AppCacheEventID.APPCACHE_OBSOLETE_EVENT = AppCacheEventID.APPCACHE_CACHED_EVENT + 1;

  AppCacheEventID.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  AppCacheEventID.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AppCacheErrorReason = {};
  AppCacheErrorReason.APPCACHE_MANIFEST_ERROR = 0;
  AppCacheErrorReason.APPCACHE_SIGNATURE_ERROR = AppCacheErrorReason.APPCACHE_MANIFEST_ERROR + 1;
  AppCacheErrorReason.APPCACHE_RESOURCE_ERROR = AppCacheErrorReason.APPCACHE_SIGNATURE_ERROR + 1;
  AppCacheErrorReason.APPCACHE_CHANGED_ERROR = AppCacheErrorReason.APPCACHE_RESOURCE_ERROR + 1;
  AppCacheErrorReason.APPCACHE_ABORT_ERROR = AppCacheErrorReason.APPCACHE_CHANGED_ERROR + 1;
  AppCacheErrorReason.APPCACHE_QUOTA_ERROR = AppCacheErrorReason.APPCACHE_ABORT_ERROR + 1;
  AppCacheErrorReason.APPCACHE_POLICY_ERROR = AppCacheErrorReason.APPCACHE_QUOTA_ERROR + 1;
  AppCacheErrorReason.APPCACHE_UNKNOWN_ERROR = AppCacheErrorReason.APPCACHE_POLICY_ERROR + 1;

  AppCacheErrorReason.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  AppCacheErrorReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function AppCacheResourceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheResourceInfo.prototype.initDefaults_ = function() {
    this.url = null;
    this.size = 0;
    this.isMaster = false;
    this.isManifest = false;
    this.isIntercept = false;
    this.isFallback = false;
    this.isForeign = false;
    this.isExplicit = false;
    this.responseId = 0;
  };
  AppCacheResourceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheResourceInfo.generate = function(generator_) {
    var generated = new AppCacheResourceInfo;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.size = generator_.generateInt64();
    generated.isMaster = generator_.generateBool();
    generated.isManifest = generator_.generateBool();
    generated.isIntercept = generator_.generateBool();
    generated.isFallback = generator_.generateBool();
    generated.isForeign = generator_.generateBool();
    generated.isExplicit = generator_.generateBool();
    generated.responseId = generator_.generateInt64();
    return generated;
  };

  AppCacheResourceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateInt64(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.isMaster = mutator_.mutateBool(this.isMaster);
    }
    if (mutator_.chooseMutateField()) {
      this.isManifest = mutator_.mutateBool(this.isManifest);
    }
    if (mutator_.chooseMutateField()) {
      this.isIntercept = mutator_.mutateBool(this.isIntercept);
    }
    if (mutator_.chooseMutateField()) {
      this.isFallback = mutator_.mutateBool(this.isFallback);
    }
    if (mutator_.chooseMutateField()) {
      this.isForeign = mutator_.mutateBool(this.isForeign);
    }
    if (mutator_.chooseMutateField()) {
      this.isExplicit = mutator_.mutateBool(this.isExplicit);
    }
    if (mutator_.chooseMutateField()) {
      this.responseId = mutator_.mutateInt64(this.responseId);
    }
    return this;
  };
  AppCacheResourceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheResourceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheResourceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheResourceInfo.validate = function(messageValidator, offset) {
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


    // validate AppCacheResourceInfo.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;









    return validator.validationError.NONE;
  };

  AppCacheResourceInfo.encodedSize = codec.kStructHeaderSize + 32;

  AppCacheResourceInfo.decode = function(decoder) {
    var packed;
    var val = new AppCacheResourceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.size = decoder.decodeStruct(codec.Int64);
    packed = decoder.readUint8();
    val.isMaster = (packed >> 0) & 1 ? true : false;
    val.isManifest = (packed >> 1) & 1 ? true : false;
    val.isIntercept = (packed >> 2) & 1 ? true : false;
    val.isFallback = (packed >> 3) & 1 ? true : false;
    val.isForeign = (packed >> 4) & 1 ? true : false;
    val.isExplicit = (packed >> 5) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.responseId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  AppCacheResourceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheResourceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int64, val.size);
    packed = 0;
    packed |= (val.isMaster & 1) << 0
    packed |= (val.isManifest & 1) << 1
    packed |= (val.isIntercept & 1) << 2
    packed |= (val.isFallback & 1) << 3
    packed |= (val.isForeign & 1) << 4
    packed |= (val.isExplicit & 1) << 5
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.responseId);
  };
  function AppCacheErrorDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheErrorDetails.prototype.initDefaults_ = function() {
    this.message = null;
    this.reason = AppCacheErrorReason.APPCACHE_UNKNOWN_ERROR;
    this.status = 0;
    this.url = null;
    this.isCrossOrigin = false;
  };
  AppCacheErrorDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheErrorDetails.generate = function(generator_) {
    var generated = new AppCacheErrorDetails;
    generated.message = generator_.generateString(false);
    generated.reason = generator_.generateEnum(0, 7);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.status = generator_.generateInt32();
    generated.isCrossOrigin = generator_.generateBool();
    return generated;
  };

  AppCacheErrorDetails.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateInt32(this.status);
    }
    if (mutator_.chooseMutateField()) {
      this.isCrossOrigin = mutator_.mutateBool(this.isCrossOrigin);
    }
    return this;
  };
  AppCacheErrorDetails.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheErrorDetails.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheErrorDetails.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheErrorDetails.validate = function(messageValidator, offset) {
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


    // validate AppCacheErrorDetails.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheErrorDetails.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, AppCacheErrorReason);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheErrorDetails.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  AppCacheErrorDetails.encodedSize = codec.kStructHeaderSize + 32;

  AppCacheErrorDetails.decode = function(decoder) {
    var packed;
    var val = new AppCacheErrorDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    val.reason = decoder.decodeStruct(codec.Int32);
    val.status = decoder.decodeStruct(codec.Int32);
    val.url = decoder.decodeStructPointer(url$.Url);
    packed = decoder.readUint8();
    val.isCrossOrigin = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheErrorDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheErrorDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeStructPointer(url$.Url, val.url);
    packed = 0;
    packed |= (val.isCrossOrigin & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_RegisterHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_RegisterHost_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
  };
  AppCacheBackend_RegisterHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_RegisterHost_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_RegisterHost_Params;
    generated.hostId = generator_.generateInt32();
    return generated;
  };

  AppCacheBackend_RegisterHost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    return this;
  };
  AppCacheBackend_RegisterHost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_RegisterHost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_RegisterHost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_RegisterHost_Params.validate = function(messageValidator, offset) {
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

  AppCacheBackend_RegisterHost_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_RegisterHost_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_RegisterHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheBackend_RegisterHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_RegisterHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_UnregisterHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_UnregisterHost_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
  };
  AppCacheBackend_UnregisterHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_UnregisterHost_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_UnregisterHost_Params;
    generated.hostId = generator_.generateInt32();
    return generated;
  };

  AppCacheBackend_UnregisterHost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    return this;
  };
  AppCacheBackend_UnregisterHost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_UnregisterHost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_UnregisterHost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_UnregisterHost_Params.validate = function(messageValidator, offset) {
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

  AppCacheBackend_UnregisterHost_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_UnregisterHost_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_UnregisterHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheBackend_UnregisterHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_UnregisterHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_SetSpawningHostId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_SetSpawningHostId_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.spawningHostId = 0;
  };
  AppCacheBackend_SetSpawningHostId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_SetSpawningHostId_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_SetSpawningHostId_Params;
    generated.hostId = generator_.generateInt32();
    generated.spawningHostId = generator_.generateInt32();
    return generated;
  };

  AppCacheBackend_SetSpawningHostId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.spawningHostId = mutator_.mutateInt32(this.spawningHostId);
    }
    return this;
  };
  AppCacheBackend_SetSpawningHostId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_SetSpawningHostId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_SetSpawningHostId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_SetSpawningHostId_Params.validate = function(messageValidator, offset) {
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

  AppCacheBackend_SetSpawningHostId_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_SetSpawningHostId_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_SetSpawningHostId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    val.spawningHostId = decoder.decodeStruct(codec.Int32);
    return val;
  };

  AppCacheBackend_SetSpawningHostId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_SetSpawningHostId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.encodeStruct(codec.Int32, val.spawningHostId);
  };
  function AppCacheBackend_SelectCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_SelectCache_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.documentUrl = null;
    this.appcacheDocumentWasLoadedFrom = 0;
    this.optManifestUrl = null;
  };
  AppCacheBackend_SelectCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_SelectCache_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_SelectCache_Params;
    generated.hostId = generator_.generateInt32();
    generated.documentUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.appcacheDocumentWasLoadedFrom = generator_.generateInt64();
    generated.optManifestUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  AppCacheBackend_SelectCache_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.documentUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.appcacheDocumentWasLoadedFrom = mutator_.mutateInt64(this.appcacheDocumentWasLoadedFrom);
    }
    if (mutator_.chooseMutateField()) {
      this.optManifestUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  AppCacheBackend_SelectCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_SelectCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_SelectCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_SelectCache_Params.validate = function(messageValidator, offset) {
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



    // validate AppCacheBackend_SelectCache_Params.documentUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate AppCacheBackend_SelectCache_Params.optManifestUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheBackend_SelectCache_Params.encodedSize = codec.kStructHeaderSize + 32;

  AppCacheBackend_SelectCache_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_SelectCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.documentUrl = decoder.decodeStructPointer(url$.Url);
    val.appcacheDocumentWasLoadedFrom = decoder.decodeStruct(codec.Int64);
    val.optManifestUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  AppCacheBackend_SelectCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_SelectCache_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.documentUrl);
    encoder.encodeStruct(codec.Int64, val.appcacheDocumentWasLoadedFrom);
    encoder.encodeStructPointer(url$.Url, val.optManifestUrl);
  };
  function AppCacheBackend_SelectCacheForSharedWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_SelectCacheForSharedWorker_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.appcacheId = 0;
  };
  AppCacheBackend_SelectCacheForSharedWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_SelectCacheForSharedWorker_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_SelectCacheForSharedWorker_Params;
    generated.hostId = generator_.generateInt32();
    generated.appcacheId = generator_.generateInt64();
    return generated;
  };

  AppCacheBackend_SelectCacheForSharedWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.appcacheId = mutator_.mutateInt64(this.appcacheId);
    }
    return this;
  };
  AppCacheBackend_SelectCacheForSharedWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_SelectCacheForSharedWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_SelectCacheForSharedWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_SelectCacheForSharedWorker_Params.validate = function(messageValidator, offset) {
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



    return validator.validationError.NONE;
  };

  AppCacheBackend_SelectCacheForSharedWorker_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheBackend_SelectCacheForSharedWorker_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_SelectCacheForSharedWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.appcacheId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  AppCacheBackend_SelectCacheForSharedWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_SelectCacheForSharedWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.appcacheId);
  };
  function AppCacheBackend_MarkAsForeignEntry_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_MarkAsForeignEntry_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.documentUrl = null;
    this.appcacheDocumentWasLoadedFrom = 0;
  };
  AppCacheBackend_MarkAsForeignEntry_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_MarkAsForeignEntry_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_MarkAsForeignEntry_Params;
    generated.hostId = generator_.generateInt32();
    generated.documentUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.appcacheDocumentWasLoadedFrom = generator_.generateInt64();
    return generated;
  };

  AppCacheBackend_MarkAsForeignEntry_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.documentUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.appcacheDocumentWasLoadedFrom = mutator_.mutateInt64(this.appcacheDocumentWasLoadedFrom);
    }
    return this;
  };
  AppCacheBackend_MarkAsForeignEntry_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_MarkAsForeignEntry_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_MarkAsForeignEntry_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_MarkAsForeignEntry_Params.validate = function(messageValidator, offset) {
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



    // validate AppCacheBackend_MarkAsForeignEntry_Params.documentUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AppCacheBackend_MarkAsForeignEntry_Params.encodedSize = codec.kStructHeaderSize + 24;

  AppCacheBackend_MarkAsForeignEntry_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_MarkAsForeignEntry_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.documentUrl = decoder.decodeStructPointer(url$.Url);
    val.appcacheDocumentWasLoadedFrom = decoder.decodeStruct(codec.Int64);
    return val;
  };

  AppCacheBackend_MarkAsForeignEntry_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_MarkAsForeignEntry_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.documentUrl);
    encoder.encodeStruct(codec.Int64, val.appcacheDocumentWasLoadedFrom);
  };
  function AppCacheBackend_GetStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_GetStatus_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
  };
  AppCacheBackend_GetStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_GetStatus_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_GetStatus_Params;
    generated.hostId = generator_.generateInt32();
    return generated;
  };

  AppCacheBackend_GetStatus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    return this;
  };
  AppCacheBackend_GetStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_GetStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_GetStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_GetStatus_Params.validate = function(messageValidator, offset) {
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

  AppCacheBackend_GetStatus_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_GetStatus_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_GetStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheBackend_GetStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_GetStatus_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_GetStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_GetStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  AppCacheBackend_GetStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_GetStatus_ResponseParams.generate = function(generator_) {
    var generated = new AppCacheBackend_GetStatus_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  AppCacheBackend_GetStatus_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  AppCacheBackend_GetStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_GetStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_GetStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_GetStatus_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate AppCacheBackend_GetStatus_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, appcache_info$.AppCacheStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheBackend_GetStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_GetStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_GetStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheBackend_GetStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_GetStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_StartUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_StartUpdate_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
  };
  AppCacheBackend_StartUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_StartUpdate_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_StartUpdate_Params;
    generated.hostId = generator_.generateInt32();
    return generated;
  };

  AppCacheBackend_StartUpdate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    return this;
  };
  AppCacheBackend_StartUpdate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_StartUpdate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_StartUpdate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_StartUpdate_Params.validate = function(messageValidator, offset) {
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

  AppCacheBackend_StartUpdate_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_StartUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_StartUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheBackend_StartUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_StartUpdate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_StartUpdate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_StartUpdate_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  AppCacheBackend_StartUpdate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_StartUpdate_ResponseParams.generate = function(generator_) {
    var generated = new AppCacheBackend_StartUpdate_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  AppCacheBackend_StartUpdate_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  AppCacheBackend_StartUpdate_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_StartUpdate_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_StartUpdate_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_StartUpdate_ResponseParams.validate = function(messageValidator, offset) {
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

  AppCacheBackend_StartUpdate_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_StartUpdate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_StartUpdate_ResponseParams();
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

  AppCacheBackend_StartUpdate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_StartUpdate_ResponseParams.encodedSize);
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
  function AppCacheBackend_SwapCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_SwapCache_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
  };
  AppCacheBackend_SwapCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_SwapCache_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_SwapCache_Params;
    generated.hostId = generator_.generateInt32();
    return generated;
  };

  AppCacheBackend_SwapCache_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    return this;
  };
  AppCacheBackend_SwapCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_SwapCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_SwapCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_SwapCache_Params.validate = function(messageValidator, offset) {
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

  AppCacheBackend_SwapCache_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_SwapCache_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_SwapCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheBackend_SwapCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_SwapCache_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_SwapCache_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_SwapCache_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  AppCacheBackend_SwapCache_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_SwapCache_ResponseParams.generate = function(generator_) {
    var generated = new AppCacheBackend_SwapCache_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  AppCacheBackend_SwapCache_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  AppCacheBackend_SwapCache_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_SwapCache_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_SwapCache_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_SwapCache_ResponseParams.validate = function(messageValidator, offset) {
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

  AppCacheBackend_SwapCache_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_SwapCache_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_SwapCache_ResponseParams();
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

  AppCacheBackend_SwapCache_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_SwapCache_ResponseParams.encodedSize);
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
  function AppCacheBackend_GetResourceList_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_GetResourceList_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
  };
  AppCacheBackend_GetResourceList_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_GetResourceList_Params.generate = function(generator_) {
    var generated = new AppCacheBackend_GetResourceList_Params;
    generated.hostId = generator_.generateInt32();
    return generated;
  };

  AppCacheBackend_GetResourceList_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    return this;
  };
  AppCacheBackend_GetResourceList_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_GetResourceList_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_GetResourceList_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_GetResourceList_Params.validate = function(messageValidator, offset) {
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

  AppCacheBackend_GetResourceList_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_GetResourceList_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_GetResourceList_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheBackend_GetResourceList_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_GetResourceList_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheBackend_GetResourceList_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheBackend_GetResourceList_ResponseParams.prototype.initDefaults_ = function() {
    this.resources = null;
  };
  AppCacheBackend_GetResourceList_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheBackend_GetResourceList_ResponseParams.generate = function(generator_) {
    var generated = new AppCacheBackend_GetResourceList_ResponseParams;
    generated.resources = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.AppCacheResourceInfo, false);
    });
    return generated;
  };

  AppCacheBackend_GetResourceList_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.resources = mutator_.mutateArray(this.resources, function(val) {
        return mutator_.mutateStruct(content.mojom.AppCacheResourceInfo, false);
      });
    }
    return this;
  };
  AppCacheBackend_GetResourceList_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheBackend_GetResourceList_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheBackend_GetResourceList_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheBackend_GetResourceList_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate AppCacheBackend_GetResourceList_ResponseParams.resources
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(AppCacheResourceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheBackend_GetResourceList_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  AppCacheBackend_GetResourceList_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new AppCacheBackend_GetResourceList_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resources = decoder.decodeArrayPointer(new codec.PointerTo(AppCacheResourceInfo));
    return val;
  };

  AppCacheBackend_GetResourceList_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheBackend_GetResourceList_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(AppCacheResourceInfo), val.resources);
  };
  function AppCacheFrontend_CacheSelected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_CacheSelected_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.info = null;
  };
  AppCacheFrontend_CacheSelected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_CacheSelected_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_CacheSelected_Params;
    generated.hostId = generator_.generateInt32();
    generated.info = generator_.generateStruct(content.mojom.AppCacheInfo, false);
    return generated;
  };

  AppCacheFrontend_CacheSelected_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(content.mojom.AppCacheInfo, false);
    }
    return this;
  };
  AppCacheFrontend_CacheSelected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheFrontend_CacheSelected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_CacheSelected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheFrontend_CacheSelected_Params.validate = function(messageValidator, offset) {
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



    // validate AppCacheFrontend_CacheSelected_Params.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, appcache_info$.AppCacheInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheFrontend_CacheSelected_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheFrontend_CacheSelected_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_CacheSelected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.info = decoder.decodeStructPointer(appcache_info$.AppCacheInfo);
    return val;
  };

  AppCacheFrontend_CacheSelected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_CacheSelected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(appcache_info$.AppCacheInfo, val.info);
  };
  function AppCacheFrontend_StatusChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_StatusChanged_Params.prototype.initDefaults_ = function() {
    this.hostIds = null;
    this.status = 0;
  };
  AppCacheFrontend_StatusChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_StatusChanged_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_StatusChanged_Params;
    generated.hostIds = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  AppCacheFrontend_StatusChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostIds = mutator_.mutateArray(this.hostIds, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  AppCacheFrontend_StatusChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheFrontend_StatusChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_StatusChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheFrontend_StatusChanged_Params.validate = function(messageValidator, offset) {
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


    // validate AppCacheFrontend_StatusChanged_Params.hostIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheFrontend_StatusChanged_Params.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, appcache_info$.AppCacheStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheFrontend_StatusChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheFrontend_StatusChanged_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_StatusChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostIds = decoder.decodeArrayPointer(codec.Int32);
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheFrontend_StatusChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_StatusChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int32, val.hostIds);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheFrontend_EventRaised_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_EventRaised_Params.prototype.initDefaults_ = function() {
    this.hostIds = null;
    this.eventId = 0;
  };
  AppCacheFrontend_EventRaised_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_EventRaised_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_EventRaised_Params;
    generated.hostIds = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    generated.eventId = generator_.generateEnum(0, 7);
    return generated;
  };

  AppCacheFrontend_EventRaised_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostIds = mutator_.mutateArray(this.hostIds, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.eventId = mutator_.mutateEnum(this.eventId, 0, 7);
    }
    return this;
  };
  AppCacheFrontend_EventRaised_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheFrontend_EventRaised_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_EventRaised_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheFrontend_EventRaised_Params.validate = function(messageValidator, offset) {
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


    // validate AppCacheFrontend_EventRaised_Params.hostIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheFrontend_EventRaised_Params.eventId
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, AppCacheEventID);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheFrontend_EventRaised_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheFrontend_EventRaised_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_EventRaised_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostIds = decoder.decodeArrayPointer(codec.Int32);
    val.eventId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheFrontend_EventRaised_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_EventRaised_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int32, val.hostIds);
    encoder.encodeStruct(codec.Int32, val.eventId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AppCacheFrontend_ProgressEventRaised_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_ProgressEventRaised_Params.prototype.initDefaults_ = function() {
    this.hostIds = null;
    this.url = null;
    this.total = 0;
    this.complete = 0;
  };
  AppCacheFrontend_ProgressEventRaised_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_ProgressEventRaised_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_ProgressEventRaised_Params;
    generated.hostIds = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.total = generator_.generateInt32();
    generated.complete = generator_.generateInt32();
    return generated;
  };

  AppCacheFrontend_ProgressEventRaised_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostIds = mutator_.mutateArray(this.hostIds, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.total = mutator_.mutateInt32(this.total);
    }
    if (mutator_.chooseMutateField()) {
      this.complete = mutator_.mutateInt32(this.complete);
    }
    return this;
  };
  AppCacheFrontend_ProgressEventRaised_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheFrontend_ProgressEventRaised_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_ProgressEventRaised_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheFrontend_ProgressEventRaised_Params.validate = function(messageValidator, offset) {
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


    // validate AppCacheFrontend_ProgressEventRaised_Params.hostIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheFrontend_ProgressEventRaised_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  AppCacheFrontend_ProgressEventRaised_Params.encodedSize = codec.kStructHeaderSize + 24;

  AppCacheFrontend_ProgressEventRaised_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_ProgressEventRaised_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostIds = decoder.decodeArrayPointer(codec.Int32);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.total = decoder.decodeStruct(codec.Int32);
    val.complete = decoder.decodeStruct(codec.Int32);
    return val;
  };

  AppCacheFrontend_ProgressEventRaised_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_ProgressEventRaised_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int32, val.hostIds);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int32, val.total);
    encoder.encodeStruct(codec.Int32, val.complete);
  };
  function AppCacheFrontend_ErrorEventRaised_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_ErrorEventRaised_Params.prototype.initDefaults_ = function() {
    this.hostIds = null;
    this.errorDetails = null;
  };
  AppCacheFrontend_ErrorEventRaised_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_ErrorEventRaised_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_ErrorEventRaised_Params;
    generated.hostIds = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    generated.errorDetails = generator_.generateStruct(content.mojom.AppCacheErrorDetails, false);
    return generated;
  };

  AppCacheFrontend_ErrorEventRaised_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostIds = mutator_.mutateArray(this.hostIds, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.errorDetails = mutator_.mutateStruct(content.mojom.AppCacheErrorDetails, false);
    }
    return this;
  };
  AppCacheFrontend_ErrorEventRaised_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheFrontend_ErrorEventRaised_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_ErrorEventRaised_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheFrontend_ErrorEventRaised_Params.validate = function(messageValidator, offset) {
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


    // validate AppCacheFrontend_ErrorEventRaised_Params.hostIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheFrontend_ErrorEventRaised_Params.errorDetails
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, AppCacheErrorDetails, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheFrontend_ErrorEventRaised_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheFrontend_ErrorEventRaised_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_ErrorEventRaised_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostIds = decoder.decodeArrayPointer(codec.Int32);
    val.errorDetails = decoder.decodeStructPointer(AppCacheErrorDetails);
    return val;
  };

  AppCacheFrontend_ErrorEventRaised_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_ErrorEventRaised_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int32, val.hostIds);
    encoder.encodeStructPointer(AppCacheErrorDetails, val.errorDetails);
  };
  function AppCacheFrontend_LogMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_LogMessage_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.logLevel = 0;
    this.message = null;
  };
  AppCacheFrontend_LogMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_LogMessage_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_LogMessage_Params;
    generated.hostId = generator_.generateInt32();
    generated.logLevel = generator_.generateInt32();
    generated.message = generator_.generateString(false);
    return generated;
  };

  AppCacheFrontend_LogMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.logLevel = mutator_.mutateInt32(this.logLevel);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  AppCacheFrontend_LogMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheFrontend_LogMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_LogMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheFrontend_LogMessage_Params.validate = function(messageValidator, offset) {
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




    // validate AppCacheFrontend_LogMessage_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheFrontend_LogMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheFrontend_LogMessage_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_LogMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    val.logLevel = decoder.decodeStruct(codec.Int32);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  AppCacheFrontend_LogMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_LogMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.encodeStruct(codec.Int32, val.logLevel);
    encoder.encodeStruct(codec.String, val.message);
  };
  function AppCacheFrontend_ContentBlocked_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_ContentBlocked_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.manifestUrl = null;
  };
  AppCacheFrontend_ContentBlocked_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_ContentBlocked_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_ContentBlocked_Params;
    generated.hostId = generator_.generateInt32();
    generated.manifestUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  AppCacheFrontend_ContentBlocked_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.manifestUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  AppCacheFrontend_ContentBlocked_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheFrontend_ContentBlocked_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_ContentBlocked_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheFrontend_ContentBlocked_Params.validate = function(messageValidator, offset) {
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



    // validate AppCacheFrontend_ContentBlocked_Params.manifestUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheFrontend_ContentBlocked_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheFrontend_ContentBlocked_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_ContentBlocked_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.manifestUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  AppCacheFrontend_ContentBlocked_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_ContentBlocked_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.manifestUrl);
  };
  function AppCacheFrontend_SetSubresourceFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheFrontend_SetSubresourceFactory_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.urlLoaderFactory = new url_loader_factory$.URLLoaderFactoryPtr();
  };
  AppCacheFrontend_SetSubresourceFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheFrontend_SetSubresourceFactory_Params.generate = function(generator_) {
    var generated = new AppCacheFrontend_SetSubresourceFactory_Params;
    generated.hostId = generator_.generateInt32();
    generated.urlLoaderFactory = generator_.generateInterface("network.mojom.URLLoaderFactory", false);
    return generated;
  };

  AppCacheFrontend_SetSubresourceFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.urlLoaderFactory = mutator_.mutateInterface(this.urlLoaderFactory, "network.mojom.URLLoaderFactory", false);
    }
    return this;
  };
  AppCacheFrontend_SetSubresourceFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.urlLoaderFactory !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryPtr"]);
    }
    return handles;
  };

  AppCacheFrontend_SetSubresourceFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheFrontend_SetSubresourceFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.urlLoaderFactory = handles[idx++];;
    return idx;
  };

  AppCacheFrontend_SetSubresourceFactory_Params.validate = function(messageValidator, offset) {
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



    // validate AppCacheFrontend_SetSubresourceFactory_Params.urlLoaderFactory
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AppCacheFrontend_SetSubresourceFactory_Params.encodedSize = codec.kStructHeaderSize + 16;

  AppCacheFrontend_SetSubresourceFactory_Params.decode = function(decoder) {
    var packed;
    var val = new AppCacheFrontend_SetSubresourceFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    val.urlLoaderFactory = decoder.decodeStruct(new codec.Interface(url_loader_factory$.URLLoaderFactoryPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppCacheFrontend_SetSubresourceFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheFrontend_SetSubresourceFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.encodeStruct(new codec.Interface(url_loader_factory$.URLLoaderFactoryPtr), val.urlLoaderFactory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kAppCacheBackend_RegisterHost_Name = 1428139441;
  var kAppCacheBackend_UnregisterHost_Name = 144193815;
  var kAppCacheBackend_SetSpawningHostId_Name = 1933959;
  var kAppCacheBackend_SelectCache_Name = 1791027772;
  var kAppCacheBackend_SelectCacheForSharedWorker_Name = 219084143;
  var kAppCacheBackend_MarkAsForeignEntry_Name = 385785124;
  var kAppCacheBackend_GetStatus_Name = 1239291770;
  var kAppCacheBackend_StartUpdate_Name = 1372409373;
  var kAppCacheBackend_SwapCache_Name = 1955430586;
  var kAppCacheBackend_GetResourceList_Name = 76364060;

  function AppCacheBackendPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AppCacheBackend,
                                                   handleOrPtrInfo);
  }

  function AppCacheBackendAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AppCacheBackend, associatedInterfacePtrInfo);
  }

  AppCacheBackendAssociatedPtr.prototype =
      Object.create(AppCacheBackendPtr.prototype);
  AppCacheBackendAssociatedPtr.prototype.constructor =
      AppCacheBackendAssociatedPtr;

  function AppCacheBackendProxy(receiver) {
    this.receiver_ = receiver;
  }
  AppCacheBackendPtr.prototype.registerHost = function() {
    return AppCacheBackendProxy.prototype.registerHost
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.registerHost = function(hostId) {
    var params_ = new AppCacheBackend_RegisterHost_Params();
    params_.hostId = hostId;
    var builder = new codec.MessageV0Builder(
        kAppCacheBackend_RegisterHost_Name,
        codec.align(AppCacheBackend_RegisterHost_Params.encodedSize));
    builder.encodeStruct(AppCacheBackend_RegisterHost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheBackendPtr.prototype.unregisterHost = function() {
    return AppCacheBackendProxy.prototype.unregisterHost
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.unregisterHost = function(hostId) {
    var params_ = new AppCacheBackend_UnregisterHost_Params();
    params_.hostId = hostId;
    var builder = new codec.MessageV0Builder(
        kAppCacheBackend_UnregisterHost_Name,
        codec.align(AppCacheBackend_UnregisterHost_Params.encodedSize));
    builder.encodeStruct(AppCacheBackend_UnregisterHost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheBackendPtr.prototype.setSpawningHostId = function() {
    return AppCacheBackendProxy.prototype.setSpawningHostId
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.setSpawningHostId = function(hostId, spawningHostId) {
    var params_ = new AppCacheBackend_SetSpawningHostId_Params();
    params_.hostId = hostId;
    params_.spawningHostId = spawningHostId;
    var builder = new codec.MessageV0Builder(
        kAppCacheBackend_SetSpawningHostId_Name,
        codec.align(AppCacheBackend_SetSpawningHostId_Params.encodedSize));
    builder.encodeStruct(AppCacheBackend_SetSpawningHostId_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheBackendPtr.prototype.selectCache = function() {
    return AppCacheBackendProxy.prototype.selectCache
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.selectCache = function(hostId, documentUrl, appcacheDocumentWasLoadedFrom, optManifestUrl) {
    var params_ = new AppCacheBackend_SelectCache_Params();
    params_.hostId = hostId;
    params_.documentUrl = documentUrl;
    params_.appcacheDocumentWasLoadedFrom = appcacheDocumentWasLoadedFrom;
    params_.optManifestUrl = optManifestUrl;
    var builder = new codec.MessageV0Builder(
        kAppCacheBackend_SelectCache_Name,
        codec.align(AppCacheBackend_SelectCache_Params.encodedSize));
    builder.encodeStruct(AppCacheBackend_SelectCache_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheBackendPtr.prototype.selectCacheForSharedWorker = function() {
    return AppCacheBackendProxy.prototype.selectCacheForSharedWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.selectCacheForSharedWorker = function(hostId, appcacheId) {
    var params_ = new AppCacheBackend_SelectCacheForSharedWorker_Params();
    params_.hostId = hostId;
    params_.appcacheId = appcacheId;
    var builder = new codec.MessageV0Builder(
        kAppCacheBackend_SelectCacheForSharedWorker_Name,
        codec.align(AppCacheBackend_SelectCacheForSharedWorker_Params.encodedSize));
    builder.encodeStruct(AppCacheBackend_SelectCacheForSharedWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheBackendPtr.prototype.markAsForeignEntry = function() {
    return AppCacheBackendProxy.prototype.markAsForeignEntry
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.markAsForeignEntry = function(hostId, documentUrl, appcacheDocumentWasLoadedFrom) {
    var params_ = new AppCacheBackend_MarkAsForeignEntry_Params();
    params_.hostId = hostId;
    params_.documentUrl = documentUrl;
    params_.appcacheDocumentWasLoadedFrom = appcacheDocumentWasLoadedFrom;
    var builder = new codec.MessageV0Builder(
        kAppCacheBackend_MarkAsForeignEntry_Name,
        codec.align(AppCacheBackend_MarkAsForeignEntry_Params.encodedSize));
    builder.encodeStruct(AppCacheBackend_MarkAsForeignEntry_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheBackendPtr.prototype.getStatus = function() {
    return AppCacheBackendProxy.prototype.getStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.getStatus = function(hostId) {
    var params_ = new AppCacheBackend_GetStatus_Params();
    params_.hostId = hostId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAppCacheBackend_GetStatus_Name,
          codec.align(AppCacheBackend_GetStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(AppCacheBackend_GetStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(AppCacheBackend_GetStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AppCacheBackendPtr.prototype.startUpdate = function() {
    return AppCacheBackendProxy.prototype.startUpdate
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.startUpdate = function(hostId) {
    var params_ = new AppCacheBackend_StartUpdate_Params();
    params_.hostId = hostId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAppCacheBackend_StartUpdate_Name,
          codec.align(AppCacheBackend_StartUpdate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(AppCacheBackend_StartUpdate_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(AppCacheBackend_StartUpdate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AppCacheBackendPtr.prototype.swapCache = function() {
    return AppCacheBackendProxy.prototype.swapCache
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.swapCache = function(hostId) {
    var params_ = new AppCacheBackend_SwapCache_Params();
    params_.hostId = hostId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAppCacheBackend_SwapCache_Name,
          codec.align(AppCacheBackend_SwapCache_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(AppCacheBackend_SwapCache_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(AppCacheBackend_SwapCache_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AppCacheBackendPtr.prototype.getResourceList = function() {
    return AppCacheBackendProxy.prototype.getResourceList
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheBackendProxy.prototype.getResourceList = function(hostId) {
    var params_ = new AppCacheBackend_GetResourceList_Params();
    params_.hostId = hostId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAppCacheBackend_GetResourceList_Name,
          codec.align(AppCacheBackend_GetResourceList_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(AppCacheBackend_GetResourceList_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(AppCacheBackend_GetResourceList_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function AppCacheBackendStub(delegate) {
    this.delegate_ = delegate;
  }
  AppCacheBackendStub.prototype.registerHost = function(hostId) {
    return this.delegate_ && this.delegate_.registerHost && this.delegate_.registerHost(hostId);
  }
  AppCacheBackendStub.prototype.unregisterHost = function(hostId) {
    return this.delegate_ && this.delegate_.unregisterHost && this.delegate_.unregisterHost(hostId);
  }
  AppCacheBackendStub.prototype.setSpawningHostId = function(hostId, spawningHostId) {
    return this.delegate_ && this.delegate_.setSpawningHostId && this.delegate_.setSpawningHostId(hostId, spawningHostId);
  }
  AppCacheBackendStub.prototype.selectCache = function(hostId, documentUrl, appcacheDocumentWasLoadedFrom, optManifestUrl) {
    return this.delegate_ && this.delegate_.selectCache && this.delegate_.selectCache(hostId, documentUrl, appcacheDocumentWasLoadedFrom, optManifestUrl);
  }
  AppCacheBackendStub.prototype.selectCacheForSharedWorker = function(hostId, appcacheId) {
    return this.delegate_ && this.delegate_.selectCacheForSharedWorker && this.delegate_.selectCacheForSharedWorker(hostId, appcacheId);
  }
  AppCacheBackendStub.prototype.markAsForeignEntry = function(hostId, documentUrl, appcacheDocumentWasLoadedFrom) {
    return this.delegate_ && this.delegate_.markAsForeignEntry && this.delegate_.markAsForeignEntry(hostId, documentUrl, appcacheDocumentWasLoadedFrom);
  }
  AppCacheBackendStub.prototype.getStatus = function(hostId) {
    return this.delegate_ && this.delegate_.getStatus && this.delegate_.getStatus(hostId);
  }
  AppCacheBackendStub.prototype.startUpdate = function(hostId) {
    return this.delegate_ && this.delegate_.startUpdate && this.delegate_.startUpdate(hostId);
  }
  AppCacheBackendStub.prototype.swapCache = function(hostId) {
    return this.delegate_ && this.delegate_.swapCache && this.delegate_.swapCache(hostId);
  }
  AppCacheBackendStub.prototype.getResourceList = function(hostId) {
    return this.delegate_ && this.delegate_.getResourceList && this.delegate_.getResourceList(hostId);
  }

  AppCacheBackendStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAppCacheBackend_RegisterHost_Name:
      var params = reader.decodeStruct(AppCacheBackend_RegisterHost_Params);
      this.registerHost(params.hostId);
      return true;
    case kAppCacheBackend_UnregisterHost_Name:
      var params = reader.decodeStruct(AppCacheBackend_UnregisterHost_Params);
      this.unregisterHost(params.hostId);
      return true;
    case kAppCacheBackend_SetSpawningHostId_Name:
      var params = reader.decodeStruct(AppCacheBackend_SetSpawningHostId_Params);
      this.setSpawningHostId(params.hostId, params.spawningHostId);
      return true;
    case kAppCacheBackend_SelectCache_Name:
      var params = reader.decodeStruct(AppCacheBackend_SelectCache_Params);
      this.selectCache(params.hostId, params.documentUrl, params.appcacheDocumentWasLoadedFrom, params.optManifestUrl);
      return true;
    case kAppCacheBackend_SelectCacheForSharedWorker_Name:
      var params = reader.decodeStruct(AppCacheBackend_SelectCacheForSharedWorker_Params);
      this.selectCacheForSharedWorker(params.hostId, params.appcacheId);
      return true;
    case kAppCacheBackend_MarkAsForeignEntry_Name:
      var params = reader.decodeStruct(AppCacheBackend_MarkAsForeignEntry_Params);
      this.markAsForeignEntry(params.hostId, params.documentUrl, params.appcacheDocumentWasLoadedFrom);
      return true;
    default:
      return false;
    }
  };

  AppCacheBackendStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAppCacheBackend_GetStatus_Name:
      var params = reader.decodeStruct(AppCacheBackend_GetStatus_Params);
      this.getStatus(params.hostId).then(function(response) {
        var responseParams =
            new AppCacheBackend_GetStatus_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kAppCacheBackend_GetStatus_Name,
            codec.align(AppCacheBackend_GetStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(AppCacheBackend_GetStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAppCacheBackend_StartUpdate_Name:
      var params = reader.decodeStruct(AppCacheBackend_StartUpdate_Params);
      this.startUpdate(params.hostId).then(function(response) {
        var responseParams =
            new AppCacheBackend_StartUpdate_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kAppCacheBackend_StartUpdate_Name,
            codec.align(AppCacheBackend_StartUpdate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(AppCacheBackend_StartUpdate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAppCacheBackend_SwapCache_Name:
      var params = reader.decodeStruct(AppCacheBackend_SwapCache_Params);
      this.swapCache(params.hostId).then(function(response) {
        var responseParams =
            new AppCacheBackend_SwapCache_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kAppCacheBackend_SwapCache_Name,
            codec.align(AppCacheBackend_SwapCache_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(AppCacheBackend_SwapCache_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAppCacheBackend_GetResourceList_Name:
      var params = reader.decodeStruct(AppCacheBackend_GetResourceList_Params);
      this.getResourceList(params.hostId).then(function(response) {
        var responseParams =
            new AppCacheBackend_GetResourceList_ResponseParams();
        responseParams.resources = response.resources;
        var builder = new codec.MessageV1Builder(
            kAppCacheBackend_GetResourceList_Name,
            codec.align(AppCacheBackend_GetResourceList_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(AppCacheBackend_GetResourceList_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateAppCacheBackendRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAppCacheBackend_RegisterHost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheBackend_RegisterHost_Params;
      break;
      case kAppCacheBackend_UnregisterHost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheBackend_UnregisterHost_Params;
      break;
      case kAppCacheBackend_SetSpawningHostId_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheBackend_SetSpawningHostId_Params;
      break;
      case kAppCacheBackend_SelectCache_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheBackend_SelectCache_Params;
      break;
      case kAppCacheBackend_SelectCacheForSharedWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheBackend_SelectCacheForSharedWorker_Params;
      break;
      case kAppCacheBackend_MarkAsForeignEntry_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheBackend_MarkAsForeignEntry_Params;
      break;
      case kAppCacheBackend_GetStatus_Name:
        if (message.expectsResponse())
          paramsClass = AppCacheBackend_GetStatus_Params;
      break;
      case kAppCacheBackend_StartUpdate_Name:
        if (message.expectsResponse())
          paramsClass = AppCacheBackend_StartUpdate_Params;
      break;
      case kAppCacheBackend_SwapCache_Name:
        if (message.expectsResponse())
          paramsClass = AppCacheBackend_SwapCache_Params;
      break;
      case kAppCacheBackend_GetResourceList_Name:
        if (message.expectsResponse())
          paramsClass = AppCacheBackend_GetResourceList_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAppCacheBackendResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kAppCacheBackend_GetStatus_Name:
        if (message.isResponse())
          paramsClass = AppCacheBackend_GetStatus_ResponseParams;
        break;
      case kAppCacheBackend_StartUpdate_Name:
        if (message.isResponse())
          paramsClass = AppCacheBackend_StartUpdate_ResponseParams;
        break;
      case kAppCacheBackend_SwapCache_Name:
        if (message.isResponse())
          paramsClass = AppCacheBackend_SwapCache_ResponseParams;
        break;
      case kAppCacheBackend_GetResourceList_Name:
        if (message.isResponse())
          paramsClass = AppCacheBackend_GetResourceList_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var AppCacheBackend = {
    name: 'content.mojom.AppCacheBackend',
    kVersion: 0,
    ptrClass: AppCacheBackendPtr,
    proxyClass: AppCacheBackendProxy,
    stubClass: AppCacheBackendStub,
    validateRequest: validateAppCacheBackendRequest,
    validateResponse: validateAppCacheBackendResponse,
    mojomId: 'content/common/appcache.mojom',
    fuzzMethods: {
      registerHost: {
        params: AppCacheBackend_RegisterHost_Params,
      },
      unregisterHost: {
        params: AppCacheBackend_UnregisterHost_Params,
      },
      setSpawningHostId: {
        params: AppCacheBackend_SetSpawningHostId_Params,
      },
      selectCache: {
        params: AppCacheBackend_SelectCache_Params,
      },
      selectCacheForSharedWorker: {
        params: AppCacheBackend_SelectCacheForSharedWorker_Params,
      },
      markAsForeignEntry: {
        params: AppCacheBackend_MarkAsForeignEntry_Params,
      },
      getStatus: {
        params: AppCacheBackend_GetStatus_Params,
      },
      startUpdate: {
        params: AppCacheBackend_StartUpdate_Params,
      },
      swapCache: {
        params: AppCacheBackend_SwapCache_Params,
      },
      getResourceList: {
        params: AppCacheBackend_GetResourceList_Params,
      },
    },
  };
  AppCacheBackendStub.prototype.validator = validateAppCacheBackendRequest;
  AppCacheBackendProxy.prototype.validator = validateAppCacheBackendResponse;
  var kAppCacheFrontend_CacheSelected_Name = 1191479826;
  var kAppCacheFrontend_StatusChanged_Name = 1670419799;
  var kAppCacheFrontend_EventRaised_Name = 1743046301;
  var kAppCacheFrontend_ProgressEventRaised_Name = 552104520;
  var kAppCacheFrontend_ErrorEventRaised_Name = 1778985184;
  var kAppCacheFrontend_LogMessage_Name = 148560429;
  var kAppCacheFrontend_ContentBlocked_Name = 381891975;
  var kAppCacheFrontend_SetSubresourceFactory_Name = 494902240;

  function AppCacheFrontendPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AppCacheFrontend,
                                                   handleOrPtrInfo);
  }

  function AppCacheFrontendAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AppCacheFrontend, associatedInterfacePtrInfo);
  }

  AppCacheFrontendAssociatedPtr.prototype =
      Object.create(AppCacheFrontendPtr.prototype);
  AppCacheFrontendAssociatedPtr.prototype.constructor =
      AppCacheFrontendAssociatedPtr;

  function AppCacheFrontendProxy(receiver) {
    this.receiver_ = receiver;
  }
  AppCacheFrontendPtr.prototype.cacheSelected = function() {
    return AppCacheFrontendProxy.prototype.cacheSelected
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.cacheSelected = function(hostId, info) {
    var params_ = new AppCacheFrontend_CacheSelected_Params();
    params_.hostId = hostId;
    params_.info = info;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_CacheSelected_Name,
        codec.align(AppCacheFrontend_CacheSelected_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_CacheSelected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheFrontendPtr.prototype.statusChanged = function() {
    return AppCacheFrontendProxy.prototype.statusChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.statusChanged = function(hostIds, status) {
    var params_ = new AppCacheFrontend_StatusChanged_Params();
    params_.hostIds = hostIds;
    params_.status = status;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_StatusChanged_Name,
        codec.align(AppCacheFrontend_StatusChanged_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_StatusChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheFrontendPtr.prototype.eventRaised = function() {
    return AppCacheFrontendProxy.prototype.eventRaised
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.eventRaised = function(hostIds, eventId) {
    var params_ = new AppCacheFrontend_EventRaised_Params();
    params_.hostIds = hostIds;
    params_.eventId = eventId;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_EventRaised_Name,
        codec.align(AppCacheFrontend_EventRaised_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_EventRaised_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheFrontendPtr.prototype.progressEventRaised = function() {
    return AppCacheFrontendProxy.prototype.progressEventRaised
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.progressEventRaised = function(hostIds, url, total, complete) {
    var params_ = new AppCacheFrontend_ProgressEventRaised_Params();
    params_.hostIds = hostIds;
    params_.url = url;
    params_.total = total;
    params_.complete = complete;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_ProgressEventRaised_Name,
        codec.align(AppCacheFrontend_ProgressEventRaised_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_ProgressEventRaised_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheFrontendPtr.prototype.errorEventRaised = function() {
    return AppCacheFrontendProxy.prototype.errorEventRaised
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.errorEventRaised = function(hostIds, errorDetails) {
    var params_ = new AppCacheFrontend_ErrorEventRaised_Params();
    params_.hostIds = hostIds;
    params_.errorDetails = errorDetails;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_ErrorEventRaised_Name,
        codec.align(AppCacheFrontend_ErrorEventRaised_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_ErrorEventRaised_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheFrontendPtr.prototype.logMessage = function() {
    return AppCacheFrontendProxy.prototype.logMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.logMessage = function(hostId, logLevel, message) {
    var params_ = new AppCacheFrontend_LogMessage_Params();
    params_.hostId = hostId;
    params_.logLevel = logLevel;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_LogMessage_Name,
        codec.align(AppCacheFrontend_LogMessage_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_LogMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheFrontendPtr.prototype.contentBlocked = function() {
    return AppCacheFrontendProxy.prototype.contentBlocked
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.contentBlocked = function(hostId, manifestUrl) {
    var params_ = new AppCacheFrontend_ContentBlocked_Params();
    params_.hostId = hostId;
    params_.manifestUrl = manifestUrl;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_ContentBlocked_Name,
        codec.align(AppCacheFrontend_ContentBlocked_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_ContentBlocked_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AppCacheFrontendPtr.prototype.setSubresourceFactory = function() {
    return AppCacheFrontendProxy.prototype.setSubresourceFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  AppCacheFrontendProxy.prototype.setSubresourceFactory = function(hostId, urlLoaderFactory) {
    var params_ = new AppCacheFrontend_SetSubresourceFactory_Params();
    params_.hostId = hostId;
    params_.urlLoaderFactory = urlLoaderFactory;
    var builder = new codec.MessageV0Builder(
        kAppCacheFrontend_SetSubresourceFactory_Name,
        codec.align(AppCacheFrontend_SetSubresourceFactory_Params.encodedSize));
    builder.encodeStruct(AppCacheFrontend_SetSubresourceFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AppCacheFrontendStub(delegate) {
    this.delegate_ = delegate;
  }
  AppCacheFrontendStub.prototype.cacheSelected = function(hostId, info) {
    return this.delegate_ && this.delegate_.cacheSelected && this.delegate_.cacheSelected(hostId, info);
  }
  AppCacheFrontendStub.prototype.statusChanged = function(hostIds, status) {
    return this.delegate_ && this.delegate_.statusChanged && this.delegate_.statusChanged(hostIds, status);
  }
  AppCacheFrontendStub.prototype.eventRaised = function(hostIds, eventId) {
    return this.delegate_ && this.delegate_.eventRaised && this.delegate_.eventRaised(hostIds, eventId);
  }
  AppCacheFrontendStub.prototype.progressEventRaised = function(hostIds, url, total, complete) {
    return this.delegate_ && this.delegate_.progressEventRaised && this.delegate_.progressEventRaised(hostIds, url, total, complete);
  }
  AppCacheFrontendStub.prototype.errorEventRaised = function(hostIds, errorDetails) {
    return this.delegate_ && this.delegate_.errorEventRaised && this.delegate_.errorEventRaised(hostIds, errorDetails);
  }
  AppCacheFrontendStub.prototype.logMessage = function(hostId, logLevel, message) {
    return this.delegate_ && this.delegate_.logMessage && this.delegate_.logMessage(hostId, logLevel, message);
  }
  AppCacheFrontendStub.prototype.contentBlocked = function(hostId, manifestUrl) {
    return this.delegate_ && this.delegate_.contentBlocked && this.delegate_.contentBlocked(hostId, manifestUrl);
  }
  AppCacheFrontendStub.prototype.setSubresourceFactory = function(hostId, urlLoaderFactory) {
    return this.delegate_ && this.delegate_.setSubresourceFactory && this.delegate_.setSubresourceFactory(hostId, urlLoaderFactory);
  }

  AppCacheFrontendStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAppCacheFrontend_CacheSelected_Name:
      var params = reader.decodeStruct(AppCacheFrontend_CacheSelected_Params);
      this.cacheSelected(params.hostId, params.info);
      return true;
    case kAppCacheFrontend_StatusChanged_Name:
      var params = reader.decodeStruct(AppCacheFrontend_StatusChanged_Params);
      this.statusChanged(params.hostIds, params.status);
      return true;
    case kAppCacheFrontend_EventRaised_Name:
      var params = reader.decodeStruct(AppCacheFrontend_EventRaised_Params);
      this.eventRaised(params.hostIds, params.eventId);
      return true;
    case kAppCacheFrontend_ProgressEventRaised_Name:
      var params = reader.decodeStruct(AppCacheFrontend_ProgressEventRaised_Params);
      this.progressEventRaised(params.hostIds, params.url, params.total, params.complete);
      return true;
    case kAppCacheFrontend_ErrorEventRaised_Name:
      var params = reader.decodeStruct(AppCacheFrontend_ErrorEventRaised_Params);
      this.errorEventRaised(params.hostIds, params.errorDetails);
      return true;
    case kAppCacheFrontend_LogMessage_Name:
      var params = reader.decodeStruct(AppCacheFrontend_LogMessage_Params);
      this.logMessage(params.hostId, params.logLevel, params.message);
      return true;
    case kAppCacheFrontend_ContentBlocked_Name:
      var params = reader.decodeStruct(AppCacheFrontend_ContentBlocked_Params);
      this.contentBlocked(params.hostId, params.manifestUrl);
      return true;
    case kAppCacheFrontend_SetSubresourceFactory_Name:
      var params = reader.decodeStruct(AppCacheFrontend_SetSubresourceFactory_Params);
      this.setSubresourceFactory(params.hostId, params.urlLoaderFactory);
      return true;
    default:
      return false;
    }
  };

  AppCacheFrontendStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAppCacheFrontendRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAppCacheFrontend_CacheSelected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_CacheSelected_Params;
      break;
      case kAppCacheFrontend_StatusChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_StatusChanged_Params;
      break;
      case kAppCacheFrontend_EventRaised_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_EventRaised_Params;
      break;
      case kAppCacheFrontend_ProgressEventRaised_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_ProgressEventRaised_Params;
      break;
      case kAppCacheFrontend_ErrorEventRaised_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_ErrorEventRaised_Params;
      break;
      case kAppCacheFrontend_LogMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_LogMessage_Params;
      break;
      case kAppCacheFrontend_ContentBlocked_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_ContentBlocked_Params;
      break;
      case kAppCacheFrontend_SetSubresourceFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppCacheFrontend_SetSubresourceFactory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAppCacheFrontendResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AppCacheFrontend = {
    name: 'content.mojom.AppCacheFrontend',
    kVersion: 0,
    ptrClass: AppCacheFrontendPtr,
    proxyClass: AppCacheFrontendProxy,
    stubClass: AppCacheFrontendStub,
    validateRequest: validateAppCacheFrontendRequest,
    validateResponse: null,
    mojomId: 'content/common/appcache.mojom',
    fuzzMethods: {
      cacheSelected: {
        params: AppCacheFrontend_CacheSelected_Params,
      },
      statusChanged: {
        params: AppCacheFrontend_StatusChanged_Params,
      },
      eventRaised: {
        params: AppCacheFrontend_EventRaised_Params,
      },
      progressEventRaised: {
        params: AppCacheFrontend_ProgressEventRaised_Params,
      },
      errorEventRaised: {
        params: AppCacheFrontend_ErrorEventRaised_Params,
      },
      logMessage: {
        params: AppCacheFrontend_LogMessage_Params,
      },
      contentBlocked: {
        params: AppCacheFrontend_ContentBlocked_Params,
      },
      setSubresourceFactory: {
        params: AppCacheFrontend_SetSubresourceFactory_Params,
      },
    },
  };
  AppCacheFrontendStub.prototype.validator = validateAppCacheFrontendRequest;
  AppCacheFrontendProxy.prototype.validator = null;
  exports.AppCacheEventID = AppCacheEventID;
  exports.AppCacheErrorReason = AppCacheErrorReason;
  exports.AppCacheResourceInfo = AppCacheResourceInfo;
  exports.AppCacheErrorDetails = AppCacheErrorDetails;
  exports.AppCacheBackend = AppCacheBackend;
  exports.AppCacheBackendPtr = AppCacheBackendPtr;
  exports.AppCacheBackendAssociatedPtr = AppCacheBackendAssociatedPtr;
  exports.AppCacheFrontend = AppCacheFrontend;
  exports.AppCacheFrontendPtr = AppCacheFrontendPtr;
  exports.AppCacheFrontendAssociatedPtr = AppCacheFrontendAssociatedPtr;
})();