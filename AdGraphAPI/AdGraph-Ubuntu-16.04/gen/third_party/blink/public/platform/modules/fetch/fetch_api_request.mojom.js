// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom';
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
  var fetch_api$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/fetch_api.mojom', '../../../../../../services/network/public/mojom/fetch_api.mojom.js');
  }
  var request_context_frame_type$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/request_context_frame_type.mojom', '../../../../../../services/network/public/mojom/request_context_frame_type.mojom.js');
  }
  var referrer$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/referrer.mojom', '../../referrer.mojom.js');
  }
  var serialized_blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/serialized_blob.mojom', '../../../mojom/blob/serialized_blob.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }


  var RequestContextType = {};
  RequestContextType.UNSPECIFIED = 0;
  RequestContextType.AUDIO = RequestContextType.UNSPECIFIED + 1;
  RequestContextType.BEACON = RequestContextType.AUDIO + 1;
  RequestContextType.CSP_REPORT = RequestContextType.BEACON + 1;
  RequestContextType.DOWNLOAD = RequestContextType.CSP_REPORT + 1;
  RequestContextType.EMBED = RequestContextType.DOWNLOAD + 1;
  RequestContextType.EVENT_SOURCE = RequestContextType.EMBED + 1;
  RequestContextType.FAVICON = RequestContextType.EVENT_SOURCE + 1;
  RequestContextType.FETCH = RequestContextType.FAVICON + 1;
  RequestContextType.FONT = RequestContextType.FETCH + 1;
  RequestContextType.FORM = RequestContextType.FONT + 1;
  RequestContextType.FRAME = RequestContextType.FORM + 1;
  RequestContextType.HYPERLINK = RequestContextType.FRAME + 1;
  RequestContextType.IFRAME = RequestContextType.HYPERLINK + 1;
  RequestContextType.IMAGE = RequestContextType.IFRAME + 1;
  RequestContextType.IMAGE_SET = RequestContextType.IMAGE + 1;
  RequestContextType.IMPORT = RequestContextType.IMAGE_SET + 1;
  RequestContextType.INTERNAL = RequestContextType.IMPORT + 1;
  RequestContextType.LOCATION = RequestContextType.INTERNAL + 1;
  RequestContextType.MANIFEST = RequestContextType.LOCATION + 1;
  RequestContextType.OBJECT = RequestContextType.MANIFEST + 1;
  RequestContextType.PING = RequestContextType.OBJECT + 1;
  RequestContextType.PLUGIN = RequestContextType.PING + 1;
  RequestContextType.PREFETCH = RequestContextType.PLUGIN + 1;
  RequestContextType.SCRIPT = RequestContextType.PREFETCH + 1;
  RequestContextType.SERVICE_WORKER = RequestContextType.SCRIPT + 1;
  RequestContextType.SHARED_WORKER = RequestContextType.SERVICE_WORKER + 1;
  RequestContextType.SUBRESOURCE = RequestContextType.SHARED_WORKER + 1;
  RequestContextType.STYLE = RequestContextType.SUBRESOURCE + 1;
  RequestContextType.TRACK = RequestContextType.STYLE + 1;
  RequestContextType.VIDEO = RequestContextType.TRACK + 1;
  RequestContextType.WORKER = RequestContextType.VIDEO + 1;
  RequestContextType.XML_HTTP_REQUEST = RequestContextType.WORKER + 1;
  RequestContextType.XSLT = RequestContextType.XML_HTTP_REQUEST + 1;

  RequestContextType.isKnownEnumValue = function(value) {
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
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
      return true;
    }
    return false;
  };

  RequestContextType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FetchCacheMode = {};
  FetchCacheMode.kDefault = 0;
  FetchCacheMode.kNoStore = FetchCacheMode.kDefault + 1;
  FetchCacheMode.kBypassCache = FetchCacheMode.kNoStore + 1;
  FetchCacheMode.kValidateCache = FetchCacheMode.kBypassCache + 1;
  FetchCacheMode.kForceCache = FetchCacheMode.kValidateCache + 1;
  FetchCacheMode.kOnlyIfCached = FetchCacheMode.kForceCache + 1;
  FetchCacheMode.kUnspecifiedOnlyIfCachedStrict = FetchCacheMode.kOnlyIfCached + 1;
  FetchCacheMode.kUnspecifiedForceCacheMiss = FetchCacheMode.kUnspecifiedOnlyIfCachedStrict + 1;

  FetchCacheMode.isKnownEnumValue = function(value) {
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

  FetchCacheMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FetchImportanceMode = {};
  FetchImportanceMode.kImportanceLow = 0;
  FetchImportanceMode.kImportanceAuto = FetchImportanceMode.kImportanceLow + 1;
  FetchImportanceMode.kImportanceHigh = FetchImportanceMode.kImportanceAuto + 1;

  FetchImportanceMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  FetchImportanceMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FetchAPIRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FetchAPIRequest.prototype.initDefaults_ = function() {
    this.mode = 0;
    this.isMainResourceLoad = false;
    this.keepalive = false;
    this.isReload = false;
    this.requestContextType = 0;
    this.frameType = 0;
    this.url = null;
    this.method = null;
    this.headers = null;
    this.blob = null;
    this.referrer = null;
    this.credentialsMode = 0;
    this.cacheMode = 0;
    this.redirectMode = 0;
    this.integrity = null;
    this.clientId = null;
  };
  FetchAPIRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FetchAPIRequest.generate = function(generator_) {
    var generated = new FetchAPIRequest;
    generated.mode = generator_.generateEnum(0, 4);
    generated.isMainResourceLoad = generator_.generateBool();
    generated.requestContextType = generator_.generateEnum(0, 33);
    generated.frameType = generator_.generateEnum(0, 3);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.method = generator_.generateString(false);
    generated.headers = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateString(false);
      });
    generated.blob = generator_.generateStruct(blink.mojom.SerializedBlob, true);
    generated.referrer = generator_.generateStruct(blink.mojom.Referrer, false);
    generated.credentialsMode = generator_.generateEnum(0, 2);
    generated.cacheMode = generator_.generateEnum(0, 7);
    generated.redirectMode = generator_.generateEnum(0, 2);
    generated.integrity = generator_.generateString(true);
    generated.keepalive = generator_.generateBool();
    generated.clientId = generator_.generateString(true);
    generated.isReload = generator_.generateBool();
    return generated;
  };

  FetchAPIRequest.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mode = mutator_.mutateEnum(this.mode, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.isMainResourceLoad = mutator_.mutateBool(this.isMainResourceLoad);
    }
    if (mutator_.chooseMutateField()) {
      this.requestContextType = mutator_.mutateEnum(this.requestContextType, 0, 33);
    }
    if (mutator_.chooseMutateField()) {
      this.frameType = mutator_.mutateEnum(this.frameType, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.method = mutator_.mutateString(this.method, false);
    }
    if (mutator_.chooseMutateField()) {
      this.headers = mutator_.mutateMap(this.headers,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateString(val, false);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateStruct(blink.mojom.SerializedBlob, true);
    }
    if (mutator_.chooseMutateField()) {
      this.referrer = mutator_.mutateStruct(blink.mojom.Referrer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.credentialsMode = mutator_.mutateEnum(this.credentialsMode, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.cacheMode = mutator_.mutateEnum(this.cacheMode, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.redirectMode = mutator_.mutateEnum(this.redirectMode, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.integrity = mutator_.mutateString(this.integrity, true);
    }
    if (mutator_.chooseMutateField()) {
      this.keepalive = mutator_.mutateBool(this.keepalive);
    }
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateString(this.clientId, true);
    }
    if (mutator_.chooseMutateField()) {
      this.isReload = mutator_.mutateBool(this.isReload);
    }
    return this;
  };
  FetchAPIRequest.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, this.blob.getHandleDeps());
    }
    return handles;
  };

  FetchAPIRequest.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FetchAPIRequest.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.blob.setHandlesInternal_(handles, idx);
    return idx;
  };

  FetchAPIRequest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 96}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.mode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, fetch_api$.FetchRequestMode);
    if (err !== validator.validationError.NONE)
        return err;



    // validate FetchAPIRequest.requestContextType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, RequestContextType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.frameType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, request_context_frame_type$.RequestContextFrameType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.headers
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 32, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.blob
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, serialized_blob$.SerializedBlob, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.referrer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, referrer$.Referrer, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.credentialsMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 56, fetch_api$.FetchCredentialsMode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.cacheMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 60, FetchCacheMode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.redirectMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 64, fetch_api$.FetchRedirectMode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIRequest.integrity
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, true)
    if (err !== validator.validationError.NONE)
        return err;



    // validate FetchAPIRequest.clientId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FetchAPIRequest.encodedSize = codec.kStructHeaderSize + 88;

  FetchAPIRequest.decode = function(decoder) {
    var packed;
    var val = new FetchAPIRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mode = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isMainResourceLoad = (packed >> 0) & 1 ? true : false;
    val.keepalive = (packed >> 1) & 1 ? true : false;
    val.isReload = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.requestContextType = decoder.decodeStruct(codec.Int32);
    val.frameType = decoder.decodeStruct(codec.Int32);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.method = decoder.decodeStruct(codec.String);
    val.headers = decoder.decodeMapPointer(codec.String, codec.String);
    val.blob = decoder.decodeStructPointer(serialized_blob$.SerializedBlob);
    val.referrer = decoder.decodeStructPointer(referrer$.Referrer);
    val.credentialsMode = decoder.decodeStruct(codec.Int32);
    val.cacheMode = decoder.decodeStruct(codec.Int32);
    val.redirectMode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.integrity = decoder.decodeStruct(codec.NullableString);
    val.clientId = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  FetchAPIRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FetchAPIRequest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.mode);
    packed = 0;
    packed |= (val.isMainResourceLoad & 1) << 0
    packed |= (val.keepalive & 1) << 1
    packed |= (val.isReload & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.requestContextType);
    encoder.encodeStruct(codec.Int32, val.frameType);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.method);
    encoder.encodeMapPointer(codec.String, codec.String, val.headers);
    encoder.encodeStructPointer(serialized_blob$.SerializedBlob, val.blob);
    encoder.encodeStructPointer(referrer$.Referrer, val.referrer);
    encoder.encodeStruct(codec.Int32, val.credentialsMode);
    encoder.encodeStruct(codec.Int32, val.cacheMode);
    encoder.encodeStruct(codec.Int32, val.redirectMode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.integrity);
    encoder.encodeStruct(codec.NullableString, val.clientId);
  };
  exports.RequestContextType = RequestContextType;
  exports.FetchCacheMode = FetchCacheMode;
  exports.FetchImportanceMode = FetchImportanceMode;
  exports.FetchAPIRequest = FetchAPIRequest;
})();