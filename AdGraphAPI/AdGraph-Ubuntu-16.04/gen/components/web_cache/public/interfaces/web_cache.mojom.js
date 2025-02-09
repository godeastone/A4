// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/web_cache/public/interfaces/web_cache.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('webCache.mojom');



  function WebCache_SetCacheCapacity_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebCache_SetCacheCapacity_Params.prototype.initDefaults_ = function() {
    this.capacity = 0;
  };
  WebCache_SetCacheCapacity_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebCache_SetCacheCapacity_Params.generate = function(generator_) {
    var generated = new WebCache_SetCacheCapacity_Params;
    generated.capacity = generator_.generateUint64();
    return generated;
  };

  WebCache_SetCacheCapacity_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.capacity = mutator_.mutateUint64(this.capacity);
    }
    return this;
  };
  WebCache_SetCacheCapacity_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebCache_SetCacheCapacity_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebCache_SetCacheCapacity_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebCache_SetCacheCapacity_Params.validate = function(messageValidator, offset) {
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

  WebCache_SetCacheCapacity_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebCache_SetCacheCapacity_Params.decode = function(decoder) {
    var packed;
    var val = new WebCache_SetCacheCapacity_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.capacity = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WebCache_SetCacheCapacity_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebCache_SetCacheCapacity_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.capacity);
  };
  function WebCache_ClearCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebCache_ClearCache_Params.prototype.initDefaults_ = function() {
    this.onNavigation = false;
  };
  WebCache_ClearCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebCache_ClearCache_Params.generate = function(generator_) {
    var generated = new WebCache_ClearCache_Params;
    generated.onNavigation = generator_.generateBool();
    return generated;
  };

  WebCache_ClearCache_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.onNavigation = mutator_.mutateBool(this.onNavigation);
    }
    return this;
  };
  WebCache_ClearCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebCache_ClearCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebCache_ClearCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebCache_ClearCache_Params.validate = function(messageValidator, offset) {
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

  WebCache_ClearCache_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebCache_ClearCache_Params.decode = function(decoder) {
    var packed;
    var val = new WebCache_ClearCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.onNavigation = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebCache_ClearCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebCache_ClearCache_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.onNavigation & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWebCache_SetCacheCapacity_Name = 1455629533;
  var kWebCache_ClearCache_Name = 1993075729;

  function WebCachePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WebCache,
                                                   handleOrPtrInfo);
  }

  function WebCacheAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WebCache, associatedInterfacePtrInfo);
  }

  WebCacheAssociatedPtr.prototype =
      Object.create(WebCachePtr.prototype);
  WebCacheAssociatedPtr.prototype.constructor =
      WebCacheAssociatedPtr;

  function WebCacheProxy(receiver) {
    this.receiver_ = receiver;
  }
  WebCachePtr.prototype.setCacheCapacity = function() {
    return WebCacheProxy.prototype.setCacheCapacity
        .apply(this.ptr.getProxy(), arguments);
  };

  WebCacheProxy.prototype.setCacheCapacity = function(capacity) {
    var params_ = new WebCache_SetCacheCapacity_Params();
    params_.capacity = capacity;
    var builder = new codec.MessageV0Builder(
        kWebCache_SetCacheCapacity_Name,
        codec.align(WebCache_SetCacheCapacity_Params.encodedSize));
    builder.encodeStruct(WebCache_SetCacheCapacity_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebCachePtr.prototype.clearCache = function() {
    return WebCacheProxy.prototype.clearCache
        .apply(this.ptr.getProxy(), arguments);
  };

  WebCacheProxy.prototype.clearCache = function(onNavigation) {
    var params_ = new WebCache_ClearCache_Params();
    params_.onNavigation = onNavigation;
    var builder = new codec.MessageV0Builder(
        kWebCache_ClearCache_Name,
        codec.align(WebCache_ClearCache_Params.encodedSize));
    builder.encodeStruct(WebCache_ClearCache_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebCacheStub(delegate) {
    this.delegate_ = delegate;
  }
  WebCacheStub.prototype.setCacheCapacity = function(capacity) {
    return this.delegate_ && this.delegate_.setCacheCapacity && this.delegate_.setCacheCapacity(capacity);
  }
  WebCacheStub.prototype.clearCache = function(onNavigation) {
    return this.delegate_ && this.delegate_.clearCache && this.delegate_.clearCache(onNavigation);
  }

  WebCacheStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebCache_SetCacheCapacity_Name:
      var params = reader.decodeStruct(WebCache_SetCacheCapacity_Params);
      this.setCacheCapacity(params.capacity);
      return true;
    case kWebCache_ClearCache_Name:
      var params = reader.decodeStruct(WebCache_ClearCache_Params);
      this.clearCache(params.onNavigation);
      return true;
    default:
      return false;
    }
  };

  WebCacheStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWebCacheRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebCache_SetCacheCapacity_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebCache_SetCacheCapacity_Params;
      break;
      case kWebCache_ClearCache_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebCache_ClearCache_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebCacheResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebCache = {
    name: 'web_cache.mojom.WebCache',
    kVersion: 0,
    ptrClass: WebCachePtr,
    proxyClass: WebCacheProxy,
    stubClass: WebCacheStub,
    validateRequest: validateWebCacheRequest,
    validateResponse: null,
    mojomId: 'components/web_cache/public/interfaces/web_cache.mojom',
    fuzzMethods: {
      setCacheCapacity: {
        params: WebCache_SetCacheCapacity_Params,
      },
      clearCache: {
        params: WebCache_ClearCache_Params,
      },
    },
  };
  WebCacheStub.prototype.validator = validateWebCacheRequest;
  WebCacheProxy.prototype.validator = null;
  exports.WebCache = WebCache;
  exports.WebCachePtr = WebCachePtr;
  exports.WebCacheAssociatedPtr = WebCacheAssociatedPtr;
})();