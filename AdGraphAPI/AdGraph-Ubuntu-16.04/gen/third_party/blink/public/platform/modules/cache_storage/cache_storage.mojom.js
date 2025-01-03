// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var fetch_api_request$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom', '../fetch/fetch_api_request.mojom.js');
  }
  var fetch_api_response$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/fetch/fetch_api_response.mojom', '../fetch/fetch_api_response.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../../mojo/public/mojom/base/string16.mojom.js');
  }


  var CacheStorageError = {};
  CacheStorageError.kSuccess = 0;
  CacheStorageError.kErrorExists = 1;
  CacheStorageError.kErrorStorage = 2;
  CacheStorageError.kErrorNotFound = 3;
  CacheStorageError.kErrorQuotaExceeded = 4;
  CacheStorageError.kErrorCacheNameNotFound = 5;
  CacheStorageError.kErrorQueryTooLarge = 6;
  CacheStorageError.kErrorNotImplemented = 7;

  CacheStorageError.isKnownEnumValue = function(value) {
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

  CacheStorageError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var OperationType = {};
  OperationType.kUndefined = 0;
  OperationType.kPut = OperationType.kUndefined + 1;
  OperationType.kDelete = OperationType.kPut + 1;

  OperationType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  OperationType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function QueryParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  QueryParams.prototype.initDefaults_ = function() {
    this.ignoreSearch = false;
    this.ignoreMethod = false;
    this.ignoreVary = false;
    this.cacheName = null;
  };
  QueryParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  QueryParams.generate = function(generator_) {
    var generated = new QueryParams;
    generated.ignoreSearch = generator_.generateBool();
    generated.ignoreMethod = generator_.generateBool();
    generated.ignoreVary = generator_.generateBool();
    generated.cacheName = generator_.generateStruct(mojoBase.mojom.String16, true);
    return generated;
  };

  QueryParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ignoreSearch = mutator_.mutateBool(this.ignoreSearch);
    }
    if (mutator_.chooseMutateField()) {
      this.ignoreMethod = mutator_.mutateBool(this.ignoreMethod);
    }
    if (mutator_.chooseMutateField()) {
      this.ignoreVary = mutator_.mutateBool(this.ignoreVary);
    }
    if (mutator_.chooseMutateField()) {
      this.cacheName = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    return this;
  };
  QueryParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  QueryParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  QueryParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  QueryParams.validate = function(messageValidator, offset) {
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





    // validate QueryParams.cacheName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  QueryParams.encodedSize = codec.kStructHeaderSize + 16;

  QueryParams.decode = function(decoder) {
    var packed;
    var val = new QueryParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.ignoreSearch = (packed >> 0) & 1 ? true : false;
    val.ignoreMethod = (packed >> 1) & 1 ? true : false;
    val.ignoreVary = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.cacheName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  QueryParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(QueryParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.ignoreSearch & 1) << 0
    packed |= (val.ignoreMethod & 1) << 1
    packed |= (val.ignoreVary & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.cacheName);
  };
  function BatchOperation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BatchOperation.prototype.initDefaults_ = function() {
    this.operationType = 0;
    this.request = null;
    this.response = null;
    this.matchParams = null;
  };
  BatchOperation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BatchOperation.generate = function(generator_) {
    var generated = new BatchOperation;
    generated.operationType = generator_.generateEnum(0, 2);
    generated.request = generator_.generateStruct(blink.mojom.FetchAPIRequest, false);
    generated.response = generator_.generateStruct(blink.mojom.FetchAPIResponse, true);
    generated.matchParams = generator_.generateStruct(blink.mojom.QueryParams, true);
    return generated;
  };

  BatchOperation.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.operationType = mutator_.mutateEnum(this.operationType, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(blink.mojom.FetchAPIRequest, false);
    }
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(blink.mojom.FetchAPIResponse, true);
    }
    if (mutator_.chooseMutateField()) {
      this.matchParams = mutator_.mutateStruct(blink.mojom.QueryParams, true);
    }
    return this;
  };
  BatchOperation.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, this.request.getHandleDeps());
    }
    if (this.response !== null) {
      Array.prototype.push.apply(handles, this.response.getHandleDeps());
    }
    return handles;
  };

  BatchOperation.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BatchOperation.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.request.setHandlesInternal_(handles, idx);
    idx = this.response.setHandlesInternal_(handles, idx);
    return idx;
  };

  BatchOperation.validate = function(messageValidator, offset) {
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


    // validate BatchOperation.operationType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, OperationType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BatchOperation.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, fetch_api_request$.FetchAPIRequest, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BatchOperation.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, fetch_api_response$.FetchAPIResponse, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BatchOperation.matchParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, QueryParams, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BatchOperation.encodedSize = codec.kStructHeaderSize + 32;

  BatchOperation.decode = function(decoder) {
    var packed;
    var val = new BatchOperation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.operationType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.request = decoder.decodeStructPointer(fetch_api_request$.FetchAPIRequest);
    val.response = decoder.decodeStructPointer(fetch_api_response$.FetchAPIResponse);
    val.matchParams = decoder.decodeStructPointer(QueryParams);
    return val;
  };

  BatchOperation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BatchOperation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.operationType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(fetch_api_request$.FetchAPIRequest, val.request);
    encoder.encodeStructPointer(fetch_api_response$.FetchAPIResponse, val.response);
    encoder.encodeStructPointer(QueryParams, val.matchParams);
  };
  function CacheStorageCache_Match_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_Match_Params.prototype.initDefaults_ = function() {
    this.request = null;
    this.queryParams = null;
  };
  CacheStorageCache_Match_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_Match_Params.generate = function(generator_) {
    var generated = new CacheStorageCache_Match_Params;
    generated.request = generator_.generateStruct(blink.mojom.FetchAPIRequest, false);
    generated.queryParams = generator_.generateStruct(blink.mojom.QueryParams, false);
    return generated;
  };

  CacheStorageCache_Match_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(blink.mojom.FetchAPIRequest, false);
    }
    if (mutator_.chooseMutateField()) {
      this.queryParams = mutator_.mutateStruct(blink.mojom.QueryParams, false);
    }
    return this;
  };
  CacheStorageCache_Match_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, this.request.getHandleDeps());
    }
    return handles;
  };

  CacheStorageCache_Match_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_Match_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.request.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorageCache_Match_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_Match_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, fetch_api_request$.FetchAPIRequest, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CacheStorageCache_Match_Params.queryParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, QueryParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_Match_Params.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorageCache_Match_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_Match_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(fetch_api_request$.FetchAPIRequest);
    val.queryParams = decoder.decodeStructPointer(QueryParams);
    return val;
  };

  CacheStorageCache_Match_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_Match_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(fetch_api_request$.FetchAPIRequest, val.request);
    encoder.encodeStructPointer(QueryParams, val.queryParams);
  };
  function CacheStorageCache_Match_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_Match_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  CacheStorageCache_Match_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_Match_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorageCache_Match_ResponseParams;
    generated.result = generator_.generateUnion(blink.mojom.MatchResult, false);
    return generated;
  };

  CacheStorageCache_Match_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateUnion(blink.mojom.MatchResult, false);
    }
    return this;
  };
  CacheStorageCache_Match_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  CacheStorageCache_Match_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_Match_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorageCache_Match_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_Match_ResponseParams.result
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, MatchResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_Match_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorageCache_Match_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_Match_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(MatchResult);
    return val;
  };

  CacheStorageCache_Match_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_Match_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(MatchResult, val.result);
  };
  function CacheStorageCache_MatchAll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_MatchAll_Params.prototype.initDefaults_ = function() {
    this.request = null;
    this.queryParams = null;
  };
  CacheStorageCache_MatchAll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_MatchAll_Params.generate = function(generator_) {
    var generated = new CacheStorageCache_MatchAll_Params;
    generated.request = generator_.generateStruct(blink.mojom.FetchAPIRequest, true);
    generated.queryParams = generator_.generateStruct(blink.mojom.QueryParams, false);
    return generated;
  };

  CacheStorageCache_MatchAll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(blink.mojom.FetchAPIRequest, true);
    }
    if (mutator_.chooseMutateField()) {
      this.queryParams = mutator_.mutateStruct(blink.mojom.QueryParams, false);
    }
    return this;
  };
  CacheStorageCache_MatchAll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, this.request.getHandleDeps());
    }
    return handles;
  };

  CacheStorageCache_MatchAll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_MatchAll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.request.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorageCache_MatchAll_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_MatchAll_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, fetch_api_request$.FetchAPIRequest, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CacheStorageCache_MatchAll_Params.queryParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, QueryParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_MatchAll_Params.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorageCache_MatchAll_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_MatchAll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(fetch_api_request$.FetchAPIRequest);
    val.queryParams = decoder.decodeStructPointer(QueryParams);
    return val;
  };

  CacheStorageCache_MatchAll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_MatchAll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(fetch_api_request$.FetchAPIRequest, val.request);
    encoder.encodeStructPointer(QueryParams, val.queryParams);
  };
  function CacheStorageCache_MatchAll_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_MatchAll_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  CacheStorageCache_MatchAll_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_MatchAll_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorageCache_MatchAll_ResponseParams;
    generated.result = generator_.generateUnion(blink.mojom.MatchAllResult, false);
    return generated;
  };

  CacheStorageCache_MatchAll_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateUnion(blink.mojom.MatchAllResult, false);
    }
    return this;
  };
  CacheStorageCache_MatchAll_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  CacheStorageCache_MatchAll_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_MatchAll_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorageCache_MatchAll_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_MatchAll_ResponseParams.result
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, MatchAllResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_MatchAll_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorageCache_MatchAll_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_MatchAll_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(MatchAllResult);
    return val;
  };

  CacheStorageCache_MatchAll_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_MatchAll_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(MatchAllResult, val.result);
  };
  function CacheStorageCache_Keys_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_Keys_Params.prototype.initDefaults_ = function() {
    this.request = null;
    this.queryParams = null;
  };
  CacheStorageCache_Keys_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_Keys_Params.generate = function(generator_) {
    var generated = new CacheStorageCache_Keys_Params;
    generated.request = generator_.generateStruct(blink.mojom.FetchAPIRequest, true);
    generated.queryParams = generator_.generateStruct(blink.mojom.QueryParams, false);
    return generated;
  };

  CacheStorageCache_Keys_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(blink.mojom.FetchAPIRequest, true);
    }
    if (mutator_.chooseMutateField()) {
      this.queryParams = mutator_.mutateStruct(blink.mojom.QueryParams, false);
    }
    return this;
  };
  CacheStorageCache_Keys_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, this.request.getHandleDeps());
    }
    return handles;
  };

  CacheStorageCache_Keys_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_Keys_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.request.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorageCache_Keys_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_Keys_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, fetch_api_request$.FetchAPIRequest, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CacheStorageCache_Keys_Params.queryParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, QueryParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_Keys_Params.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorageCache_Keys_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_Keys_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(fetch_api_request$.FetchAPIRequest);
    val.queryParams = decoder.decodeStructPointer(QueryParams);
    return val;
  };

  CacheStorageCache_Keys_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_Keys_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(fetch_api_request$.FetchAPIRequest, val.request);
    encoder.encodeStructPointer(QueryParams, val.queryParams);
  };
  function CacheStorageCache_Keys_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_Keys_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  CacheStorageCache_Keys_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_Keys_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorageCache_Keys_ResponseParams;
    generated.result = generator_.generateUnion(blink.mojom.CacheKeysResult, false);
    return generated;
  };

  CacheStorageCache_Keys_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateUnion(blink.mojom.CacheKeysResult, false);
    }
    return this;
  };
  CacheStorageCache_Keys_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  CacheStorageCache_Keys_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_Keys_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorageCache_Keys_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_Keys_ResponseParams.result
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, CacheKeysResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_Keys_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorageCache_Keys_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_Keys_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(CacheKeysResult);
    return val;
  };

  CacheStorageCache_Keys_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_Keys_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(CacheKeysResult, val.result);
  };
  function CacheStorageCache_Batch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_Batch_Params.prototype.initDefaults_ = function() {
    this.batchOperations = null;
  };
  CacheStorageCache_Batch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_Batch_Params.generate = function(generator_) {
    var generated = new CacheStorageCache_Batch_Params;
    generated.batchOperations = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.BatchOperation, false);
    });
    return generated;
  };

  CacheStorageCache_Batch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.batchOperations = mutator_.mutateArray(this.batchOperations, function(val) {
        return mutator_.mutateStruct(blink.mojom.BatchOperation, false);
      });
    }
    return this;
  };
  CacheStorageCache_Batch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.batchOperations !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.batchOperations.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  CacheStorageCache_Batch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_Batch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.batchOperations.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  CacheStorageCache_Batch_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_Batch_Params.batchOperations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(BatchOperation), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_Batch_Params.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorageCache_Batch_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_Batch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.batchOperations = decoder.decodeArrayPointer(new codec.PointerTo(BatchOperation));
    return val;
  };

  CacheStorageCache_Batch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_Batch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(BatchOperation), val.batchOperations);
  };
  function CacheStorageCache_Batch_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorageCache_Batch_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  CacheStorageCache_Batch_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorageCache_Batch_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorageCache_Batch_ResponseParams;
    generated.result = generator_.generateEnum(0, 7);
    return generated;
  };

  CacheStorageCache_Batch_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 7);
    }
    return this;
  };
  CacheStorageCache_Batch_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorageCache_Batch_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorageCache_Batch_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorageCache_Batch_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorageCache_Batch_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CacheStorageError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorageCache_Batch_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorageCache_Batch_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorageCache_Batch_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CacheStorageCache_Batch_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorageCache_Batch_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CacheStorage_Has_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Has_Params.prototype.initDefaults_ = function() {
    this.cacheName = null;
  };
  CacheStorage_Has_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Has_Params.generate = function(generator_) {
    var generated = new CacheStorage_Has_Params;
    generated.cacheName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  CacheStorage_Has_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cacheName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  CacheStorage_Has_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorage_Has_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Has_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorage_Has_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Has_Params.cacheName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Has_Params.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorage_Has_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Has_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cacheName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  CacheStorage_Has_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Has_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.cacheName);
  };
  function CacheStorage_Has_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Has_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  CacheStorage_Has_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Has_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorage_Has_ResponseParams;
    generated.result = generator_.generateEnum(0, 7);
    return generated;
  };

  CacheStorage_Has_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 7);
    }
    return this;
  };
  CacheStorage_Has_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorage_Has_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Has_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorage_Has_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Has_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CacheStorageError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Has_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorage_Has_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Has_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CacheStorage_Has_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Has_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CacheStorage_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Delete_Params.prototype.initDefaults_ = function() {
    this.cacheName = null;
  };
  CacheStorage_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Delete_Params.generate = function(generator_) {
    var generated = new CacheStorage_Delete_Params;
    generated.cacheName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  CacheStorage_Delete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cacheName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  CacheStorage_Delete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorage_Delete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Delete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorage_Delete_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Delete_Params.cacheName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Delete_Params.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorage_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cacheName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  CacheStorage_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Delete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.cacheName);
  };
  function CacheStorage_Delete_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Delete_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  CacheStorage_Delete_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Delete_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorage_Delete_ResponseParams;
    generated.result = generator_.generateEnum(0, 7);
    return generated;
  };

  CacheStorage_Delete_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 7);
    }
    return this;
  };
  CacheStorage_Delete_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorage_Delete_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Delete_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorage_Delete_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Delete_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CacheStorageError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Delete_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorage_Delete_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Delete_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CacheStorage_Delete_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Delete_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CacheStorage_Keys_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Keys_Params.prototype.initDefaults_ = function() {
  };
  CacheStorage_Keys_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Keys_Params.generate = function(generator_) {
    var generated = new CacheStorage_Keys_Params;
    return generated;
  };

  CacheStorage_Keys_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CacheStorage_Keys_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorage_Keys_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Keys_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorage_Keys_Params.validate = function(messageValidator, offset) {
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

  CacheStorage_Keys_Params.encodedSize = codec.kStructHeaderSize + 0;

  CacheStorage_Keys_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Keys_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CacheStorage_Keys_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Keys_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CacheStorage_Keys_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Keys_ResponseParams.prototype.initDefaults_ = function() {
    this.keys = null;
  };
  CacheStorage_Keys_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Keys_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorage_Keys_ResponseParams;
    generated.keys = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    return generated;
  };

  CacheStorage_Keys_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keys = mutator_.mutateArray(this.keys, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    return this;
  };
  CacheStorage_Keys_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorage_Keys_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Keys_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorage_Keys_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Keys_ResponseParams.keys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Keys_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorage_Keys_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Keys_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keys = decoder.decodeArrayPointer(new codec.PointerTo(string16$.String16));
    return val;
  };

  CacheStorage_Keys_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Keys_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(string16$.String16), val.keys);
  };
  function CacheStorage_Match_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Match_Params.prototype.initDefaults_ = function() {
    this.request = null;
    this.matchParams = null;
  };
  CacheStorage_Match_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Match_Params.generate = function(generator_) {
    var generated = new CacheStorage_Match_Params;
    generated.request = generator_.generateStruct(blink.mojom.FetchAPIRequest, false);
    generated.matchParams = generator_.generateStruct(blink.mojom.QueryParams, false);
    return generated;
  };

  CacheStorage_Match_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(blink.mojom.FetchAPIRequest, false);
    }
    if (mutator_.chooseMutateField()) {
      this.matchParams = mutator_.mutateStruct(blink.mojom.QueryParams, false);
    }
    return this;
  };
  CacheStorage_Match_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, this.request.getHandleDeps());
    }
    return handles;
  };

  CacheStorage_Match_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Match_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.request.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorage_Match_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Match_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, fetch_api_request$.FetchAPIRequest, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CacheStorage_Match_Params.matchParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, QueryParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Match_Params.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorage_Match_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Match_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(fetch_api_request$.FetchAPIRequest);
    val.matchParams = decoder.decodeStructPointer(QueryParams);
    return val;
  };

  CacheStorage_Match_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Match_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(fetch_api_request$.FetchAPIRequest, val.request);
    encoder.encodeStructPointer(QueryParams, val.matchParams);
  };
  function CacheStorage_Match_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Match_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  CacheStorage_Match_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Match_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorage_Match_ResponseParams;
    generated.result = generator_.generateUnion(blink.mojom.MatchResult, false);
    return generated;
  };

  CacheStorage_Match_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateUnion(blink.mojom.MatchResult, false);
    }
    return this;
  };
  CacheStorage_Match_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  CacheStorage_Match_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Match_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorage_Match_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Match_ResponseParams.result
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, MatchResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Match_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorage_Match_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Match_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(MatchResult);
    return val;
  };

  CacheStorage_Match_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Match_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(MatchResult, val.result);
  };
  function CacheStorage_Open_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Open_Params.prototype.initDefaults_ = function() {
    this.cacheName = null;
  };
  CacheStorage_Open_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Open_Params.generate = function(generator_) {
    var generated = new CacheStorage_Open_Params;
    generated.cacheName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  CacheStorage_Open_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cacheName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  CacheStorage_Open_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStorage_Open_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Open_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStorage_Open_Params.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Open_Params.cacheName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Open_Params.encodedSize = codec.kStructHeaderSize + 8;

  CacheStorage_Open_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Open_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cacheName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  CacheStorage_Open_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Open_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.cacheName);
  };
  function CacheStorage_Open_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStorage_Open_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  CacheStorage_Open_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStorage_Open_ResponseParams.generate = function(generator_) {
    var generated = new CacheStorage_Open_ResponseParams;
    generated.result = generator_.generateUnion(blink.mojom.OpenResult, false);
    return generated;
  };

  CacheStorage_Open_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateUnion(blink.mojom.OpenResult, false);
    }
    return this;
  };
  CacheStorage_Open_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  CacheStorage_Open_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStorage_Open_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  CacheStorage_Open_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CacheStorage_Open_ResponseParams.result
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, OpenResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CacheStorage_Open_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CacheStorage_Open_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CacheStorage_Open_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(OpenResult);
    return val;
  };

  CacheStorage_Open_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStorage_Open_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(OpenResult, val.result);
  };

  function OpenResult(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  OpenResult.Tags = {
    status: 0,
    cache: 1,
  };

  OpenResult.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  OpenResult.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "status",
        "cache",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a OpenResult member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  OpenResult.generate = function(generator_) {
    var generated = new OpenResult;
    var generators = [
      {
        field: "status",

        generator: function() { return generator_.generateEnum(0, 7); },
      },
      {
        field: "cache",

        generator: function() { return generator_.generateAssociatedInterface("blink.mojom.CacheStorageCache", false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  OpenResult.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "status",

        mutator: function() { return mutator_.mutateEnum(this.status, 0, 7); },
      },
      {
        field: "cache",

        mutator: function() { return mutator_.mutateAssociatedInterface(this.cache, "blink.mojom.CacheStorageCache", false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  OpenResult.prototype.getHandleDeps = function() {
    if (this.$tag == OpenResult.Tags.cache) {
      return ["blink.mojom.CacheStorageCacheAssociatedPtr"];
    }
    return [];
  }
  OpenResult.prototype.setHandles = function() {
    if (this.$tag == OpenResult.Tags.cache) {
      return this.cache = handles[idx++];;
    }
    return [];
  }
  Object.defineProperty(OpenResult.prototype, "status", {
    get: function() {
      if (this.$tag != OpenResult.Tags.status) {
        throw new ReferenceError(
            "OpenResult.status is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = OpenResult.Tags.status;
      this.$data = value;
    }
  });
  Object.defineProperty(OpenResult.prototype, "cache", {
    get: function() {
      if (this.$tag != OpenResult.Tags.cache) {
        throw new ReferenceError(
            "OpenResult.cache is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = OpenResult.Tags.cache;
      this.$data = value;
    }
  });


    OpenResult.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case OpenResult.Tags.status:
          encoder.encodeStruct(codec.Int32, val.status);
          break;
        case OpenResult.Tags.cache:
          encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.cache);
          break;
      }
      encoder.align();
    };


    OpenResult.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new OpenResult();
      var tag = decoder.readUint32();
      switch (tag) {
        case OpenResult.Tags.status:
          result.status = decoder.decodeStruct(codec.Int32);
          break;
        case OpenResult.Tags.cache:
          result.cache = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
          break;
      }
      decoder.align();

      return result;
    };


    OpenResult.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case OpenResult.Tags.status:
          

    // validate OpenResult.status
    err = messageValidator.validateEnum(data_offset, CacheStorageError);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case OpenResult.Tags.cache:
          

    // validate OpenResult.cache
    err = messageValidator.validateAssociatedInterface(data_offset, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  OpenResult.encodedSize = 16;

  function MatchResult(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  MatchResult.Tags = {
    status: 0,
    response: 1,
  };

  MatchResult.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  MatchResult.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "status",
        "response",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a MatchResult member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  MatchResult.generate = function(generator_) {
    var generated = new MatchResult;
    var generators = [
      {
        field: "status",

        generator: function() { return generator_.generateEnum(0, 7); },
      },
      {
        field: "response",

        generator: function() { return generator_.generateStruct(blink.mojom.FetchAPIResponse, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  MatchResult.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "status",

        mutator: function() { return mutator_.mutateEnum(this.status, 0, 7); },
      },
      {
        field: "response",

        mutator: function() { return mutator_.mutateStruct(blink.mojom.FetchAPIResponse, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  MatchResult.prototype.getHandleDeps = function() {
    if (this.$tag == MatchResult.Tags.response) {
      return this.response.getHandleDeps();
    }
    return [];
  }
  MatchResult.prototype.setHandles = function() {
    if (this.$tag == MatchResult.Tags.response) {
      return idx = this.response.setHandlesInternal_(handles, idx);
    }
    return [];
  }
  Object.defineProperty(MatchResult.prototype, "status", {
    get: function() {
      if (this.$tag != MatchResult.Tags.status) {
        throw new ReferenceError(
            "MatchResult.status is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = MatchResult.Tags.status;
      this.$data = value;
    }
  });
  Object.defineProperty(MatchResult.prototype, "response", {
    get: function() {
      if (this.$tag != MatchResult.Tags.response) {
        throw new ReferenceError(
            "MatchResult.response is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = MatchResult.Tags.response;
      this.$data = value;
    }
  });


    MatchResult.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case MatchResult.Tags.status:
          encoder.encodeStruct(codec.Int32, val.status);
          break;
        case MatchResult.Tags.response:
          encoder.encodeStructPointer(fetch_api_response$.FetchAPIResponse, val.response);
          break;
      }
      encoder.align();
    };


    MatchResult.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new MatchResult();
      var tag = decoder.readUint32();
      switch (tag) {
        case MatchResult.Tags.status:
          result.status = decoder.decodeStruct(codec.Int32);
          break;
        case MatchResult.Tags.response:
          result.response = decoder.decodeStructPointer(fetch_api_response$.FetchAPIResponse);
          break;
      }
      decoder.align();

      return result;
    };


    MatchResult.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case MatchResult.Tags.status:
          

    // validate MatchResult.status
    err = messageValidator.validateEnum(data_offset, CacheStorageError);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case MatchResult.Tags.response:
          

    // validate MatchResult.response
    err = messageValidator.validateStructPointer(data_offset, fetch_api_response$.FetchAPIResponse, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  MatchResult.encodedSize = 16;

  function MatchAllResult(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  MatchAllResult.Tags = {
    status: 0,
    responses: 1,
  };

  MatchAllResult.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  MatchAllResult.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "status",
        "responses",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a MatchAllResult member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  MatchAllResult.generate = function(generator_) {
    var generated = new MatchAllResult;
    var generators = [
      {
        field: "status",

        generator: function() { return generator_.generateEnum(0, 7); },
      },
      {
        field: "responses",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateStruct(blink.mojom.FetchAPIResponse, false);
        }); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  MatchAllResult.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "status",

        mutator: function() { return mutator_.mutateEnum(this.status, 0, 7); },
      },
      {
        field: "responses",

        mutator: function() { return mutator_.mutateArray(this.responses, function(val) {
          return mutator_.mutateStruct(blink.mojom.FetchAPIResponse, false);
        }); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  MatchAllResult.prototype.getHandleDeps = function() {
    if (this.$tag == MatchAllResult.Tags.responses) {
      return [].concat.apply([], this.responses.map(function(val) {
    if (val) {
      return val.getHandleDeps();
    }
    return [];
  }));
    }
    return [];
  }
  MatchAllResult.prototype.setHandles = function() {
    if (this.$tag == MatchAllResult.Tags.responses) {
      return this.responses.forEach(function(val) {
    idx = val.setHandlesInternal_(handles, idx);
  });
    }
    return [];
  }
  Object.defineProperty(MatchAllResult.prototype, "status", {
    get: function() {
      if (this.$tag != MatchAllResult.Tags.status) {
        throw new ReferenceError(
            "MatchAllResult.status is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = MatchAllResult.Tags.status;
      this.$data = value;
    }
  });
  Object.defineProperty(MatchAllResult.prototype, "responses", {
    get: function() {
      if (this.$tag != MatchAllResult.Tags.responses) {
        throw new ReferenceError(
            "MatchAllResult.responses is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = MatchAllResult.Tags.responses;
      this.$data = value;
    }
  });


    MatchAllResult.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case MatchAllResult.Tags.status:
          encoder.encodeStruct(codec.Int32, val.status);
          break;
        case MatchAllResult.Tags.responses:
          encoder.encodeArrayPointer(new codec.PointerTo(fetch_api_response$.FetchAPIResponse), val.responses);
          break;
      }
      encoder.align();
    };


    MatchAllResult.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new MatchAllResult();
      var tag = decoder.readUint32();
      switch (tag) {
        case MatchAllResult.Tags.status:
          result.status = decoder.decodeStruct(codec.Int32);
          break;
        case MatchAllResult.Tags.responses:
          result.responses = decoder.decodeArrayPointer(new codec.PointerTo(fetch_api_response$.FetchAPIResponse));
          break;
      }
      decoder.align();

      return result;
    };


    MatchAllResult.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case MatchAllResult.Tags.status:
          

    // validate MatchAllResult.status
    err = messageValidator.validateEnum(data_offset, CacheStorageError);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case MatchAllResult.Tags.responses:
          

    // validate MatchAllResult.responses
    err = messageValidator.validateArrayPointer(data_offset, 8, new codec.PointerTo(fetch_api_response$.FetchAPIResponse), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  MatchAllResult.encodedSize = 16;

  function CacheKeysResult(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  CacheKeysResult.Tags = {
    status: 0,
    keys: 1,
  };

  CacheKeysResult.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  CacheKeysResult.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "status",
        "keys",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a CacheKeysResult member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  CacheKeysResult.generate = function(generator_) {
    var generated = new CacheKeysResult;
    var generators = [
      {
        field: "status",

        generator: function() { return generator_.generateEnum(0, 7); },
      },
      {
        field: "keys",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateStruct(blink.mojom.FetchAPIRequest, false);
        }); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  CacheKeysResult.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "status",

        mutator: function() { return mutator_.mutateEnum(this.status, 0, 7); },
      },
      {
        field: "keys",

        mutator: function() { return mutator_.mutateArray(this.keys, function(val) {
          return mutator_.mutateStruct(blink.mojom.FetchAPIRequest, false);
        }); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  CacheKeysResult.prototype.getHandleDeps = function() {
    if (this.$tag == CacheKeysResult.Tags.keys) {
      return [].concat.apply([], this.keys.map(function(val) {
    if (val) {
      return val.getHandleDeps();
    }
    return [];
  }));
    }
    return [];
  }
  CacheKeysResult.prototype.setHandles = function() {
    if (this.$tag == CacheKeysResult.Tags.keys) {
      return this.keys.forEach(function(val) {
    idx = val.setHandlesInternal_(handles, idx);
  });
    }
    return [];
  }
  Object.defineProperty(CacheKeysResult.prototype, "status", {
    get: function() {
      if (this.$tag != CacheKeysResult.Tags.status) {
        throw new ReferenceError(
            "CacheKeysResult.status is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = CacheKeysResult.Tags.status;
      this.$data = value;
    }
  });
  Object.defineProperty(CacheKeysResult.prototype, "keys", {
    get: function() {
      if (this.$tag != CacheKeysResult.Tags.keys) {
        throw new ReferenceError(
            "CacheKeysResult.keys is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = CacheKeysResult.Tags.keys;
      this.$data = value;
    }
  });


    CacheKeysResult.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case CacheKeysResult.Tags.status:
          encoder.encodeStruct(codec.Int32, val.status);
          break;
        case CacheKeysResult.Tags.keys:
          encoder.encodeArrayPointer(new codec.PointerTo(fetch_api_request$.FetchAPIRequest), val.keys);
          break;
      }
      encoder.align();
    };


    CacheKeysResult.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new CacheKeysResult();
      var tag = decoder.readUint32();
      switch (tag) {
        case CacheKeysResult.Tags.status:
          result.status = decoder.decodeStruct(codec.Int32);
          break;
        case CacheKeysResult.Tags.keys:
          result.keys = decoder.decodeArrayPointer(new codec.PointerTo(fetch_api_request$.FetchAPIRequest));
          break;
      }
      decoder.align();

      return result;
    };


    CacheKeysResult.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case CacheKeysResult.Tags.status:
          

    // validate CacheKeysResult.status
    err = messageValidator.validateEnum(data_offset, CacheStorageError);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case CacheKeysResult.Tags.keys:
          

    // validate CacheKeysResult.keys
    err = messageValidator.validateArrayPointer(data_offset, 8, new codec.PointerTo(fetch_api_request$.FetchAPIRequest), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  CacheKeysResult.encodedSize = 16;
  var kCacheStorageCache_Match_Name = 909556426;
  var kCacheStorageCache_MatchAll_Name = 1919577747;
  var kCacheStorageCache_Keys_Name = 387873664;
  var kCacheStorageCache_Batch_Name = 384368206;

  function CacheStorageCachePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CacheStorageCache,
                                                   handleOrPtrInfo);
  }

  function CacheStorageCacheAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CacheStorageCache, associatedInterfacePtrInfo);
  }

  CacheStorageCacheAssociatedPtr.prototype =
      Object.create(CacheStorageCachePtr.prototype);
  CacheStorageCacheAssociatedPtr.prototype.constructor =
      CacheStorageCacheAssociatedPtr;

  function CacheStorageCacheProxy(receiver) {
    this.receiver_ = receiver;
  }
  CacheStorageCachePtr.prototype.match = function() {
    return CacheStorageCacheProxy.prototype.match
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageCacheProxy.prototype.match = function(request, queryParams) {
    var params_ = new CacheStorageCache_Match_Params();
    params_.request = request;
    params_.queryParams = queryParams;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorageCache_Match_Name,
          codec.align(CacheStorageCache_Match_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorageCache_Match_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorageCache_Match_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CacheStorageCachePtr.prototype.matchAll = function() {
    return CacheStorageCacheProxy.prototype.matchAll
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageCacheProxy.prototype.matchAll = function(request, queryParams) {
    var params_ = new CacheStorageCache_MatchAll_Params();
    params_.request = request;
    params_.queryParams = queryParams;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorageCache_MatchAll_Name,
          codec.align(CacheStorageCache_MatchAll_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorageCache_MatchAll_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorageCache_MatchAll_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CacheStorageCachePtr.prototype.keys = function() {
    return CacheStorageCacheProxy.prototype.keys
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageCacheProxy.prototype.keys = function(request, queryParams) {
    var params_ = new CacheStorageCache_Keys_Params();
    params_.request = request;
    params_.queryParams = queryParams;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorageCache_Keys_Name,
          codec.align(CacheStorageCache_Keys_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorageCache_Keys_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorageCache_Keys_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CacheStorageCachePtr.prototype.batch = function() {
    return CacheStorageCacheProxy.prototype.batch
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageCacheProxy.prototype.batch = function(batchOperations) {
    var params_ = new CacheStorageCache_Batch_Params();
    params_.batchOperations = batchOperations;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorageCache_Batch_Name,
          codec.align(CacheStorageCache_Batch_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorageCache_Batch_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorageCache_Batch_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CacheStorageCacheStub(delegate) {
    this.delegate_ = delegate;
  }
  CacheStorageCacheStub.prototype.match = function(request, queryParams) {
    return this.delegate_ && this.delegate_.match && this.delegate_.match(request, queryParams);
  }
  CacheStorageCacheStub.prototype.matchAll = function(request, queryParams) {
    return this.delegate_ && this.delegate_.matchAll && this.delegate_.matchAll(request, queryParams);
  }
  CacheStorageCacheStub.prototype.keys = function(request, queryParams) {
    return this.delegate_ && this.delegate_.keys && this.delegate_.keys(request, queryParams);
  }
  CacheStorageCacheStub.prototype.batch = function(batchOperations) {
    return this.delegate_ && this.delegate_.batch && this.delegate_.batch(batchOperations);
  }

  CacheStorageCacheStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CacheStorageCacheStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCacheStorageCache_Match_Name:
      var params = reader.decodeStruct(CacheStorageCache_Match_Params);
      this.match(params.request, params.queryParams).then(function(response) {
        var responseParams =
            new CacheStorageCache_Match_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kCacheStorageCache_Match_Name,
            codec.align(CacheStorageCache_Match_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorageCache_Match_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCacheStorageCache_MatchAll_Name:
      var params = reader.decodeStruct(CacheStorageCache_MatchAll_Params);
      this.matchAll(params.request, params.queryParams).then(function(response) {
        var responseParams =
            new CacheStorageCache_MatchAll_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kCacheStorageCache_MatchAll_Name,
            codec.align(CacheStorageCache_MatchAll_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorageCache_MatchAll_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCacheStorageCache_Keys_Name:
      var params = reader.decodeStruct(CacheStorageCache_Keys_Params);
      this.keys(params.request, params.queryParams).then(function(response) {
        var responseParams =
            new CacheStorageCache_Keys_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kCacheStorageCache_Keys_Name,
            codec.align(CacheStorageCache_Keys_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorageCache_Keys_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCacheStorageCache_Batch_Name:
      var params = reader.decodeStruct(CacheStorageCache_Batch_Params);
      this.batch(params.batchOperations).then(function(response) {
        var responseParams =
            new CacheStorageCache_Batch_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kCacheStorageCache_Batch_Name,
            codec.align(CacheStorageCache_Batch_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorageCache_Batch_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCacheStorageCacheRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCacheStorageCache_Match_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorageCache_Match_Params;
      break;
      case kCacheStorageCache_MatchAll_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorageCache_MatchAll_Params;
      break;
      case kCacheStorageCache_Keys_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorageCache_Keys_Params;
      break;
      case kCacheStorageCache_Batch_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorageCache_Batch_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCacheStorageCacheResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCacheStorageCache_Match_Name:
        if (message.isResponse())
          paramsClass = CacheStorageCache_Match_ResponseParams;
        break;
      case kCacheStorageCache_MatchAll_Name:
        if (message.isResponse())
          paramsClass = CacheStorageCache_MatchAll_ResponseParams;
        break;
      case kCacheStorageCache_Keys_Name:
        if (message.isResponse())
          paramsClass = CacheStorageCache_Keys_ResponseParams;
        break;
      case kCacheStorageCache_Batch_Name:
        if (message.isResponse())
          paramsClass = CacheStorageCache_Batch_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CacheStorageCache = {
    name: 'blink.mojom.CacheStorageCache',
    kVersion: 0,
    ptrClass: CacheStorageCachePtr,
    proxyClass: CacheStorageCacheProxy,
    stubClass: CacheStorageCacheStub,
    validateRequest: validateCacheStorageCacheRequest,
    validateResponse: validateCacheStorageCacheResponse,
    mojomId: 'third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom',
    fuzzMethods: {
      match: {
        params: CacheStorageCache_Match_Params,
      },
      matchAll: {
        params: CacheStorageCache_MatchAll_Params,
      },
      keys: {
        params: CacheStorageCache_Keys_Params,
      },
      batch: {
        params: CacheStorageCache_Batch_Params,
      },
    },
  };
  CacheStorageCacheStub.prototype.validator = validateCacheStorageCacheRequest;
  CacheStorageCacheProxy.prototype.validator = validateCacheStorageCacheResponse;
  var kCacheStorage_Has_Name = 796694802;
  var kCacheStorage_Delete_Name = 146205632;
  var kCacheStorage_Keys_Name = 1509486074;
  var kCacheStorage_Match_Name = 1424668048;
  var kCacheStorage_Open_Name = 1015391685;

  function CacheStoragePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CacheStorage,
                                                   handleOrPtrInfo);
  }

  function CacheStorageAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CacheStorage, associatedInterfacePtrInfo);
  }

  CacheStorageAssociatedPtr.prototype =
      Object.create(CacheStoragePtr.prototype);
  CacheStorageAssociatedPtr.prototype.constructor =
      CacheStorageAssociatedPtr;

  function CacheStorageProxy(receiver) {
    this.receiver_ = receiver;
  }
  CacheStoragePtr.prototype.has = function() {
    return CacheStorageProxy.prototype.has
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageProxy.prototype.has = function(cacheName) {
    var params_ = new CacheStorage_Has_Params();
    params_.cacheName = cacheName;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorage_Has_Name,
          codec.align(CacheStorage_Has_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorage_Has_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorage_Has_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CacheStoragePtr.prototype.delete = function() {
    return CacheStorageProxy.prototype.delete
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageProxy.prototype.delete = function(cacheName) {
    var params_ = new CacheStorage_Delete_Params();
    params_.cacheName = cacheName;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorage_Delete_Name,
          codec.align(CacheStorage_Delete_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorage_Delete_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorage_Delete_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CacheStoragePtr.prototype.keys = function() {
    return CacheStorageProxy.prototype.keys
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageProxy.prototype.keys = function() {
    var params_ = new CacheStorage_Keys_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorage_Keys_Name,
          codec.align(CacheStorage_Keys_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorage_Keys_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorage_Keys_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CacheStoragePtr.prototype.match = function() {
    return CacheStorageProxy.prototype.match
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageProxy.prototype.match = function(request, matchParams) {
    var params_ = new CacheStorage_Match_Params();
    params_.request = request;
    params_.matchParams = matchParams;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCacheStorage_Match_Name,
          codec.align(CacheStorage_Match_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CacheStorage_Match_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorage_Match_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CacheStoragePtr.prototype.open = function() {
    return CacheStorageProxy.prototype.open
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStorageProxy.prototype.open = function(cacheName) {
    var params_ = new CacheStorage_Open_Params();
    params_.cacheName = cacheName;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kCacheStorage_Open_Name,
          codec.align(CacheStorage_Open_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(CacheStorage_Open_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CacheStorage_Open_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CacheStorageStub(delegate) {
    this.delegate_ = delegate;
  }
  CacheStorageStub.prototype.has = function(cacheName) {
    return this.delegate_ && this.delegate_.has && this.delegate_.has(cacheName);
  }
  CacheStorageStub.prototype.delete = function(cacheName) {
    return this.delegate_ && this.delegate_.delete && this.delegate_.delete(cacheName);
  }
  CacheStorageStub.prototype.keys = function() {
    return this.delegate_ && this.delegate_.keys && this.delegate_.keys();
  }
  CacheStorageStub.prototype.match = function(request, matchParams) {
    return this.delegate_ && this.delegate_.match && this.delegate_.match(request, matchParams);
  }
  CacheStorageStub.prototype.open = function(cacheName) {
    return this.delegate_ && this.delegate_.open && this.delegate_.open(cacheName);
  }

  CacheStorageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CacheStorageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCacheStorage_Has_Name:
      var params = reader.decodeStruct(CacheStorage_Has_Params);
      this.has(params.cacheName).then(function(response) {
        var responseParams =
            new CacheStorage_Has_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kCacheStorage_Has_Name,
            codec.align(CacheStorage_Has_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorage_Has_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCacheStorage_Delete_Name:
      var params = reader.decodeStruct(CacheStorage_Delete_Params);
      this.delete(params.cacheName).then(function(response) {
        var responseParams =
            new CacheStorage_Delete_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kCacheStorage_Delete_Name,
            codec.align(CacheStorage_Delete_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorage_Delete_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCacheStorage_Keys_Name:
      var params = reader.decodeStruct(CacheStorage_Keys_Params);
      this.keys().then(function(response) {
        var responseParams =
            new CacheStorage_Keys_ResponseParams();
        responseParams.keys = response.keys;
        var builder = new codec.MessageV1Builder(
            kCacheStorage_Keys_Name,
            codec.align(CacheStorage_Keys_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorage_Keys_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCacheStorage_Match_Name:
      var params = reader.decodeStruct(CacheStorage_Match_Params);
      this.match(params.request, params.matchParams).then(function(response) {
        var responseParams =
            new CacheStorage_Match_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kCacheStorage_Match_Name,
            codec.align(CacheStorage_Match_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CacheStorage_Match_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCacheStorage_Open_Name:
      var params = reader.decodeStruct(CacheStorage_Open_Params);
      this.open(params.cacheName).then(function(response) {
        var responseParams =
            new CacheStorage_Open_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV2Builder(
            kCacheStorage_Open_Name,
            codec.align(CacheStorage_Open_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(CacheStorage_Open_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCacheStorageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCacheStorage_Has_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorage_Has_Params;
      break;
      case kCacheStorage_Delete_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorage_Delete_Params;
      break;
      case kCacheStorage_Keys_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorage_Keys_Params;
      break;
      case kCacheStorage_Match_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorage_Match_Params;
      break;
      case kCacheStorage_Open_Name:
        if (message.expectsResponse())
          paramsClass = CacheStorage_Open_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCacheStorageResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCacheStorage_Has_Name:
        if (message.isResponse())
          paramsClass = CacheStorage_Has_ResponseParams;
        break;
      case kCacheStorage_Delete_Name:
        if (message.isResponse())
          paramsClass = CacheStorage_Delete_ResponseParams;
        break;
      case kCacheStorage_Keys_Name:
        if (message.isResponse())
          paramsClass = CacheStorage_Keys_ResponseParams;
        break;
      case kCacheStorage_Match_Name:
        if (message.isResponse())
          paramsClass = CacheStorage_Match_ResponseParams;
        break;
      case kCacheStorage_Open_Name:
        if (message.isResponse())
          paramsClass = CacheStorage_Open_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CacheStorage = {
    name: 'blink.mojom.CacheStorage',
    kVersion: 0,
    ptrClass: CacheStoragePtr,
    proxyClass: CacheStorageProxy,
    stubClass: CacheStorageStub,
    validateRequest: validateCacheStorageRequest,
    validateResponse: validateCacheStorageResponse,
    mojomId: 'third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom',
    fuzzMethods: {
      has: {
        params: CacheStorage_Has_Params,
      },
      delete: {
        params: CacheStorage_Delete_Params,
      },
      keys: {
        params: CacheStorage_Keys_Params,
      },
      match: {
        params: CacheStorage_Match_Params,
      },
      open: {
        params: CacheStorage_Open_Params,
      },
    },
  };
  CacheStorageStub.prototype.validator = validateCacheStorageRequest;
  CacheStorageProxy.prototype.validator = validateCacheStorageResponse;
  exports.CacheStorageError = CacheStorageError;
  exports.OperationType = OperationType;
  exports.QueryParams = QueryParams;
  exports.BatchOperation = BatchOperation;
  exports.OpenResult = OpenResult;
  exports.MatchResult = MatchResult;
  exports.MatchAllResult = MatchAllResult;
  exports.CacheKeysResult = CacheKeysResult;
  exports.CacheStorageCache = CacheStorageCache;
  exports.CacheStorageCachePtr = CacheStorageCachePtr;
  exports.CacheStorageCacheAssociatedPtr = CacheStorageCacheAssociatedPtr;
  exports.CacheStorage = CacheStorage;
  exports.CacheStoragePtr = CacheStoragePtr;
  exports.CacheStorageAssociatedPtr = CacheStorageAssociatedPtr;
})();