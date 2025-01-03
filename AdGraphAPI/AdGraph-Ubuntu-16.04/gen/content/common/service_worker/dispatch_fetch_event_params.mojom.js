// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/dispatch_fetch_event_params.mojom';
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
  var url_loader$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader.mojom', '../../../services/network/public/mojom/url_loader.mojom.js');
  }
  var blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob.mojom', '../../../third_party/blink/public/mojom/blob/blob.mojom.js');
  }



  function FetchEventPreloadHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FetchEventPreloadHandle.prototype.initDefaults_ = function() {
    this.urlLoader = new url_loader$.URLLoaderPtr();
    this.urlLoaderClientRequest = new bindings.InterfaceRequest();
  };
  FetchEventPreloadHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FetchEventPreloadHandle.generate = function(generator_) {
    var generated = new FetchEventPreloadHandle;
    generated.urlLoader = generator_.generateInterface("network.mojom.URLLoader", false);
    generated.urlLoaderClientRequest = generator_.generateInterfaceRequest("network.mojom.URLLoaderClient", false);
    return generated;
  };

  FetchEventPreloadHandle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.urlLoader = mutator_.mutateInterface(this.urlLoader, "network.mojom.URLLoader", false);
    }
    if (mutator_.chooseMutateField()) {
      this.urlLoaderClientRequest = mutator_.mutateInterfaceRequest(this.urlLoaderClientRequest, "network.mojom.URLLoaderClient", false);
    }
    return this;
  };
  FetchEventPreloadHandle.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.urlLoader !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderPtr"]);
    }
    if (this.urlLoaderClientRequest !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderClientRequest"]);
    }
    return handles;
  };

  FetchEventPreloadHandle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FetchEventPreloadHandle.prototype.setHandlesInternal_ = function(handles, idx) {
    this.urlLoader = handles[idx++];;
    this.urlLoaderClientRequest = handles[idx++];;
    return idx;
  };

  FetchEventPreloadHandle.validate = function(messageValidator, offset) {
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


    // validate FetchEventPreloadHandle.urlLoader
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FetchEventPreloadHandle.urlLoaderClientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FetchEventPreloadHandle.encodedSize = codec.kStructHeaderSize + 16;

  FetchEventPreloadHandle.decode = function(decoder) {
    var packed;
    var val = new FetchEventPreloadHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.urlLoader = decoder.decodeStruct(new codec.Interface(url_loader$.URLLoaderPtr));
    val.urlLoaderClientRequest = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FetchEventPreloadHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FetchEventPreloadHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(url_loader$.URLLoaderPtr), val.urlLoader);
    encoder.encodeStruct(codec.InterfaceRequest, val.urlLoaderClientRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DispatchFetchEventParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DispatchFetchEventParams.prototype.initDefaults_ = function() {
    this.request = null;
    this.requestBodyBlobPtrs = null;
    this.requestBodyBlobUuid = null;
    this.requestBodyBlobSize = 0;
    this.requestBodyBlob = new blob$.BlobPtr();
    this.clientId = null;
    this.preloadHandle = null;
  };
  DispatchFetchEventParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DispatchFetchEventParams.generate = function(generator_) {
    var generated = new DispatchFetchEventParams;
    generated.request = generator_.generateStruct(network.mojom.URLRequest, false);
    generated.requestBodyBlobPtrs = generator_.generateArray(function() {
      return generator_.generateInterface("blink.mojom.Blob", false);
    });
    generated.requestBodyBlobUuid = generator_.generateString(false);
    generated.requestBodyBlobSize = generator_.generateUint64();
    generated.requestBodyBlob = generator_.generateInterface("blink.mojom.Blob", true);
    generated.clientId = generator_.generateString(false);
    generated.preloadHandle = generator_.generateStruct(content.mojom.FetchEventPreloadHandle, true);
    return generated;
  };

  DispatchFetchEventParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(network.mojom.URLRequest, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requestBodyBlobPtrs = mutator_.mutateArray(this.requestBodyBlobPtrs, function(val) {
        return mutator_.mutateInterface(val, "blink.mojom.Blob", false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.requestBodyBlobUuid = mutator_.mutateString(this.requestBodyBlobUuid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requestBodyBlobSize = mutator_.mutateUint64(this.requestBodyBlobSize);
    }
    if (mutator_.chooseMutateField()) {
      this.requestBodyBlob = mutator_.mutateInterface(this.requestBodyBlob, "blink.mojom.Blob", true);
    }
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateString(this.clientId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.preloadHandle = mutator_.mutateStruct(content.mojom.FetchEventPreloadHandle, true);
    }
    return this;
  };
  DispatchFetchEventParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.requestBodyBlobPtrs !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.requestBodyBlobPtrs.map(function(val) {
        if (val) {
          return ["blink.mojom.BlobPtr"];
        }
        return [];
      })));
    }
    if (this.requestBodyBlob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobPtr"]);
    }
    if (this.preloadHandle !== null) {
      Array.prototype.push.apply(handles, this.preloadHandle.getHandleDeps());
    }
    return handles;
  };

  DispatchFetchEventParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DispatchFetchEventParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.requestBodyBlobPtrs.forEach(function(val) {
      val = handles[idx++];;
    });
    this.requestBodyBlob = handles[idx++];;
    idx = this.preloadHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  DispatchFetchEventParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DispatchFetchEventParams.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url_loader$.URLRequest, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DispatchFetchEventParams.requestBodyBlobPtrs
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.Interface(blob$.BlobPtr), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DispatchFetchEventParams.requestBodyBlobUuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate DispatchFetchEventParams.requestBodyBlob
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 32, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DispatchFetchEventParams.clientId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DispatchFetchEventParams.preloadHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, FetchEventPreloadHandle, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DispatchFetchEventParams.encodedSize = codec.kStructHeaderSize + 56;

  DispatchFetchEventParams.decode = function(decoder) {
    var packed;
    var val = new DispatchFetchEventParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(url_loader$.URLRequest);
    val.requestBodyBlobPtrs = decoder.decodeArrayPointer(new codec.Interface(blob$.BlobPtr));
    val.requestBodyBlobUuid = decoder.decodeStruct(codec.String);
    val.requestBodyBlobSize = decoder.decodeStruct(codec.Uint64);
    val.requestBodyBlob = decoder.decodeStruct(new codec.NullableInterface(blob$.BlobPtr));
    val.clientId = decoder.decodeStruct(codec.String);
    val.preloadHandle = decoder.decodeStructPointer(FetchEventPreloadHandle);
    return val;
  };

  DispatchFetchEventParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DispatchFetchEventParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url_loader$.URLRequest, val.request);
    encoder.encodeArrayPointer(new codec.Interface(blob$.BlobPtr), val.requestBodyBlobPtrs);
    encoder.encodeStruct(codec.String, val.requestBodyBlobUuid);
    encoder.encodeStruct(codec.Uint64, val.requestBodyBlobSize);
    encoder.encodeStruct(new codec.NullableInterface(blob$.BlobPtr), val.requestBodyBlob);
    encoder.encodeStruct(codec.String, val.clientId);
    encoder.encodeStructPointer(FetchEventPreloadHandle, val.preloadHandle);
  };
  exports.FetchEventPreloadHandle = FetchEventPreloadHandle;
  exports.DispatchFetchEventParams = DispatchFetchEventParams;
})();