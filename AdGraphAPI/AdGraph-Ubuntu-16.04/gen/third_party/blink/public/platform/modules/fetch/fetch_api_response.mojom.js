// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/fetch/fetch_api_response.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var fetch_api$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/fetch_api.mojom', '../../../../../../services/network/public/mojom/fetch_api.mojom.js');
  }
  var serialized_blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/serialized_blob.mojom', '../../../mojom/blob/serialized_blob.mojom.js');
  }
  var service_worker_error_type$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom', '../../../mojom/service_worker/service_worker_error_type.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }



  function FetchAPIResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FetchAPIResponse.prototype.initDefaults_ = function() {
    this.urlList = null;
    this.statusCode = 0;
    this.responseType = 0;
    this.statusText = null;
    this.headers = null;
    this.blob = null;
    this.error = 0;
    this.isInCacheStorage = false;
    this.responseTime = null;
    this.cacheStorageCacheName = null;
    this.corsExposedHeaderNames = null;
    this.sideDataBlob = null;
  };
  FetchAPIResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FetchAPIResponse.generate = function(generator_) {
    var generated = new FetchAPIResponse;
    generated.urlList = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Url, false);
    });
    generated.statusCode = generator_.generateInt32();
    generated.statusText = generator_.generateString(false);
    generated.responseType = generator_.generateEnum(0, 5);
    generated.headers = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateString(false);
      });
    generated.blob = generator_.generateStruct(blink.mojom.SerializedBlob, true);
    generated.error = generator_.generateEnum(0, 16);
    generated.responseTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.cacheStorageCacheName = generator_.generateString(true);
    generated.corsExposedHeaderNames = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.isInCacheStorage = generator_.generateBool();
    generated.sideDataBlob = generator_.generateStruct(blink.mojom.SerializedBlob, true);
    return generated;
  };

  FetchAPIResponse.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.urlList = mutator_.mutateArray(this.urlList, function(val) {
        return mutator_.mutateStruct(url.mojom.Url, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.statusCode = mutator_.mutateInt32(this.statusCode);
    }
    if (mutator_.chooseMutateField()) {
      this.statusText = mutator_.mutateString(this.statusText, false);
    }
    if (mutator_.chooseMutateField()) {
      this.responseType = mutator_.mutateEnum(this.responseType, 0, 5);
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
      this.error = mutator_.mutateEnum(this.error, 0, 16);
    }
    if (mutator_.chooseMutateField()) {
      this.responseTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cacheStorageCacheName = mutator_.mutateString(this.cacheStorageCacheName, true);
    }
    if (mutator_.chooseMutateField()) {
      this.corsExposedHeaderNames = mutator_.mutateArray(this.corsExposedHeaderNames, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.isInCacheStorage = mutator_.mutateBool(this.isInCacheStorage);
    }
    if (mutator_.chooseMutateField()) {
      this.sideDataBlob = mutator_.mutateStruct(blink.mojom.SerializedBlob, true);
    }
    return this;
  };
  FetchAPIResponse.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, this.blob.getHandleDeps());
    }
    if (this.sideDataBlob !== null) {
      Array.prototype.push.apply(handles, this.sideDataBlob.getHandleDeps());
    }
    return handles;
  };

  FetchAPIResponse.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FetchAPIResponse.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.blob.setHandlesInternal_(handles, idx);
    idx = this.sideDataBlob.setHandlesInternal_(handles, idx);
    return idx;
  };

  FetchAPIResponse.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 88}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.urlList
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate FetchAPIResponse.statusText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.responseType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, fetch_api$.FetchResponseType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.headers
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 24, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.blob
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, serialized_blob$.SerializedBlob, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 40, service_worker_error_type$.ServiceWorkerResponseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.responseTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.cacheStorageCacheName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchAPIResponse.corsExposedHeaderNames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 64, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate FetchAPIResponse.sideDataBlob
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, serialized_blob$.SerializedBlob, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FetchAPIResponse.encodedSize = codec.kStructHeaderSize + 80;

  FetchAPIResponse.decode = function(decoder) {
    var packed;
    var val = new FetchAPIResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.urlList = decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    val.statusCode = decoder.decodeStruct(codec.Int32);
    val.responseType = decoder.decodeStruct(codec.Int32);
    val.statusText = decoder.decodeStruct(codec.String);
    val.headers = decoder.decodeMapPointer(codec.String, codec.String);
    val.blob = decoder.decodeStructPointer(serialized_blob$.SerializedBlob);
    val.error = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isInCacheStorage = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.responseTime = decoder.decodeStructPointer(time$.Time);
    val.cacheStorageCacheName = decoder.decodeStruct(codec.NullableString);
    val.corsExposedHeaderNames = decoder.decodeArrayPointer(codec.String);
    val.sideDataBlob = decoder.decodeStructPointer(serialized_blob$.SerializedBlob);
    return val;
  };

  FetchAPIResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FetchAPIResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.urlList);
    encoder.encodeStruct(codec.Int32, val.statusCode);
    encoder.encodeStruct(codec.Int32, val.responseType);
    encoder.encodeStruct(codec.String, val.statusText);
    encoder.encodeMapPointer(codec.String, codec.String, val.headers);
    encoder.encodeStructPointer(serialized_blob$.SerializedBlob, val.blob);
    encoder.encodeStruct(codec.Int32, val.error);
    packed = 0;
    packed |= (val.isInCacheStorage & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.responseTime);
    encoder.encodeStruct(codec.NullableString, val.cacheStorageCacheName);
    encoder.encodeArrayPointer(codec.String, val.corsExposedHeaderNames);
    encoder.encodeStructPointer(serialized_blob$.SerializedBlob, val.sideDataBlob);
  };
  exports.FetchAPIResponse = FetchAPIResponse;
})();