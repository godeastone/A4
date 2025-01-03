// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/appcache_info.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }


  var kAppCacheNoCacheId = 0;
  var kAppCacheNoResponseId = 0;
  var kAppCacheUnknownCacheId = -1;
  var AppCacheStatus = {};
  AppCacheStatus.APPCACHE_STATUS_UNCACHED = 0;
  AppCacheStatus.APPCACHE_STATUS_IDLE = AppCacheStatus.APPCACHE_STATUS_UNCACHED + 1;
  AppCacheStatus.APPCACHE_STATUS_CHECKING = AppCacheStatus.APPCACHE_STATUS_IDLE + 1;
  AppCacheStatus.APPCACHE_STATUS_DOWNLOADING = AppCacheStatus.APPCACHE_STATUS_CHECKING + 1;
  AppCacheStatus.APPCACHE_STATUS_UPDATE_READY = AppCacheStatus.APPCACHE_STATUS_DOWNLOADING + 1;
  AppCacheStatus.APPCACHE_STATUS_OBSOLETE = AppCacheStatus.APPCACHE_STATUS_UPDATE_READY + 1;

  AppCacheStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  AppCacheStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function AppCacheInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppCacheInfo.prototype.initDefaults_ = function() {
    this.manifestUrl = null;
    this.creationTime = null;
    this.lastUpdateTime = null;
    this.lastAccessTime = null;
    this.cacheId = 0;
    this.groupId = 0;
    this.status = 0;
    this.isComplete = false;
    this.size = 0;
  };
  AppCacheInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppCacheInfo.generate = function(generator_) {
    var generated = new AppCacheInfo;
    generated.manifestUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.creationTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.lastUpdateTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.lastAccessTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.cacheId = generator_.generateInt64();
    generated.groupId = generator_.generateInt64();
    generated.status = generator_.generateEnum(0, 5);
    generated.size = generator_.generateInt64();
    generated.isComplete = generator_.generateBool();
    return generated;
  };

  AppCacheInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.manifestUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.creationTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lastUpdateTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lastAccessTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cacheId = mutator_.mutateInt64(this.cacheId);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateInt64(this.groupId);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateInt64(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.isComplete = mutator_.mutateBool(this.isComplete);
    }
    return this;
  };
  AppCacheInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppCacheInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppCacheInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppCacheInfo.validate = function(messageValidator, offset) {
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


    // validate AppCacheInfo.manifestUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheInfo.creationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheInfo.lastUpdateTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AppCacheInfo.lastAccessTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate AppCacheInfo.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 48, AppCacheStatus);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  AppCacheInfo.encodedSize = codec.kStructHeaderSize + 64;

  AppCacheInfo.decode = function(decoder) {
    var packed;
    var val = new AppCacheInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.manifestUrl = decoder.decodeStructPointer(url$.Url);
    val.creationTime = decoder.decodeStructPointer(time$.Time);
    val.lastUpdateTime = decoder.decodeStructPointer(time$.Time);
    val.lastAccessTime = decoder.decodeStructPointer(time$.Time);
    val.cacheId = decoder.decodeStruct(codec.Int64);
    val.groupId = decoder.decodeStruct(codec.Int64);
    val.status = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isComplete = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.size = decoder.decodeStruct(codec.Int64);
    return val;
  };

  AppCacheInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppCacheInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.manifestUrl);
    encoder.encodeStructPointer(time$.Time, val.creationTime);
    encoder.encodeStructPointer(time$.Time, val.lastUpdateTime);
    encoder.encodeStructPointer(time$.Time, val.lastAccessTime);
    encoder.encodeStruct(codec.Int64, val.cacheId);
    encoder.encodeStruct(codec.Int64, val.groupId);
    encoder.encodeStruct(codec.Int32, val.status);
    packed = 0;
    packed |= (val.isComplete & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.size);
  };
  exports.kAppCacheNoCacheId = kAppCacheNoCacheId;
  exports.kAppCacheNoResponseId = kAppCacheNoResponseId;
  exports.kAppCacheUnknownCacheId = kAppCacheUnknownCacheId;
  exports.AppCacheStatus = AppCacheStatus;
  exports.AppCacheInfo = AppCacheInfo;
})();