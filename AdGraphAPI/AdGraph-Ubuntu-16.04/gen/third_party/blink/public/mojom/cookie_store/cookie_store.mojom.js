// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/cookie_store/cookie_store.mojom';
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
  var restricted_cookie_manager$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/restricted_cookie_manager.mojom', '../../../../../services/network/public/mojom/restricted_cookie_manager.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function CookieChangeSubscription(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieChangeSubscription.prototype.initDefaults_ = function() {
    this.url = null;
    this.matchType = 0;
    this.name = null;
  };
  CookieChangeSubscription.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieChangeSubscription.generate = function(generator_) {
    var generated = new CookieChangeSubscription;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.matchType = generator_.generateEnum(0, 1);
    generated.name = generator_.generateString(false);
    return generated;
  };

  CookieChangeSubscription.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.matchType = mutator_.mutateEnum(this.matchType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    return this;
  };
  CookieChangeSubscription.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieChangeSubscription.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieChangeSubscription.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieChangeSubscription.validate = function(messageValidator, offset) {
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


    // validate CookieChangeSubscription.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieChangeSubscription.matchType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, restricted_cookie_manager$.CookieMatchType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CookieChangeSubscription.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieChangeSubscription.encodedSize = codec.kStructHeaderSize + 24;

  CookieChangeSubscription.decode = function(decoder) {
    var packed;
    var val = new CookieChangeSubscription();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.matchType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  CookieChangeSubscription.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieChangeSubscription.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int32, val.matchType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.name);
  };
  function CookieStore_AppendSubscriptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_AppendSubscriptions_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
    this.subscriptions = null;
  };
  CookieStore_AppendSubscriptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieStore_AppendSubscriptions_Params.generate = function(generator_) {
    var generated = new CookieStore_AppendSubscriptions_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    generated.subscriptions = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.CookieChangeSubscription, false);
    });
    return generated;
  };

  CookieStore_AppendSubscriptions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.subscriptions = mutator_.mutateArray(this.subscriptions, function(val) {
        return mutator_.mutateStruct(blink.mojom.CookieChangeSubscription, false);
      });
    }
    return this;
  };
  CookieStore_AppendSubscriptions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieStore_AppendSubscriptions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieStore_AppendSubscriptions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieStore_AppendSubscriptions_Params.validate = function(messageValidator, offset) {
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



    // validate CookieStore_AppendSubscriptions_Params.subscriptions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(CookieChangeSubscription), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieStore_AppendSubscriptions_Params.encodedSize = codec.kStructHeaderSize + 16;

  CookieStore_AppendSubscriptions_Params.decode = function(decoder) {
    var packed;
    var val = new CookieStore_AppendSubscriptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    val.subscriptions = decoder.decodeArrayPointer(new codec.PointerTo(CookieChangeSubscription));
    return val;
  };

  CookieStore_AppendSubscriptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_AppendSubscriptions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
    encoder.encodeArrayPointer(new codec.PointerTo(CookieChangeSubscription), val.subscriptions);
  };
  function CookieStore_AppendSubscriptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_AppendSubscriptions_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  CookieStore_AppendSubscriptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieStore_AppendSubscriptions_ResponseParams.generate = function(generator_) {
    var generated = new CookieStore_AppendSubscriptions_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  CookieStore_AppendSubscriptions_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  CookieStore_AppendSubscriptions_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieStore_AppendSubscriptions_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieStore_AppendSubscriptions_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieStore_AppendSubscriptions_ResponseParams.validate = function(messageValidator, offset) {
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

  CookieStore_AppendSubscriptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CookieStore_AppendSubscriptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieStore_AppendSubscriptions_ResponseParams();
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

  CookieStore_AppendSubscriptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_AppendSubscriptions_ResponseParams.encodedSize);
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
  function CookieStore_GetSubscriptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_GetSubscriptions_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
  };
  CookieStore_GetSubscriptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieStore_GetSubscriptions_Params.generate = function(generator_) {
    var generated = new CookieStore_GetSubscriptions_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    return generated;
  };

  CookieStore_GetSubscriptions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    return this;
  };
  CookieStore_GetSubscriptions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieStore_GetSubscriptions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieStore_GetSubscriptions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieStore_GetSubscriptions_Params.validate = function(messageValidator, offset) {
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

  CookieStore_GetSubscriptions_Params.encodedSize = codec.kStructHeaderSize + 8;

  CookieStore_GetSubscriptions_Params.decode = function(decoder) {
    var packed;
    var val = new CookieStore_GetSubscriptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  CookieStore_GetSubscriptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_GetSubscriptions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
  };
  function CookieStore_GetSubscriptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_GetSubscriptions_ResponseParams.prototype.initDefaults_ = function() {
    this.subscriptions = null;
    this.success = false;
  };
  CookieStore_GetSubscriptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CookieStore_GetSubscriptions_ResponseParams.generate = function(generator_) {
    var generated = new CookieStore_GetSubscriptions_ResponseParams;
    generated.subscriptions = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.CookieChangeSubscription, false);
    });
    generated.success = generator_.generateBool();
    return generated;
  };

  CookieStore_GetSubscriptions_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.subscriptions = mutator_.mutateArray(this.subscriptions, function(val) {
        return mutator_.mutateStruct(blink.mojom.CookieChangeSubscription, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  CookieStore_GetSubscriptions_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CookieStore_GetSubscriptions_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CookieStore_GetSubscriptions_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CookieStore_GetSubscriptions_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CookieStore_GetSubscriptions_ResponseParams.subscriptions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(CookieChangeSubscription), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CookieStore_GetSubscriptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CookieStore_GetSubscriptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieStore_GetSubscriptions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.subscriptions = decoder.decodeArrayPointer(new codec.PointerTo(CookieChangeSubscription));
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

  CookieStore_GetSubscriptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_GetSubscriptions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(CookieChangeSubscription), val.subscriptions);
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
  var kCookieStore_AppendSubscriptions_Name = 1132197761;
  var kCookieStore_GetSubscriptions_Name = 1739843402;

  function CookieStorePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CookieStore,
                                                   handleOrPtrInfo);
  }

  function CookieStoreAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CookieStore, associatedInterfacePtrInfo);
  }

  CookieStoreAssociatedPtr.prototype =
      Object.create(CookieStorePtr.prototype);
  CookieStoreAssociatedPtr.prototype.constructor =
      CookieStoreAssociatedPtr;

  function CookieStoreProxy(receiver) {
    this.receiver_ = receiver;
  }
  CookieStorePtr.prototype.appendSubscriptions = function() {
    return CookieStoreProxy.prototype.appendSubscriptions
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieStoreProxy.prototype.appendSubscriptions = function(serviceWorkerRegistrationId, subscriptions) {
    var params_ = new CookieStore_AppendSubscriptions_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    params_.subscriptions = subscriptions;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCookieStore_AppendSubscriptions_Name,
          codec.align(CookieStore_AppendSubscriptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieStore_AppendSubscriptions_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieStore_AppendSubscriptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CookieStorePtr.prototype.getSubscriptions = function() {
    return CookieStoreProxy.prototype.getSubscriptions
        .apply(this.ptr.getProxy(), arguments);
  };

  CookieStoreProxy.prototype.getSubscriptions = function(serviceWorkerRegistrationId) {
    var params_ = new CookieStore_GetSubscriptions_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCookieStore_GetSubscriptions_Name,
          codec.align(CookieStore_GetSubscriptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieStore_GetSubscriptions_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieStore_GetSubscriptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CookieStoreStub(delegate) {
    this.delegate_ = delegate;
  }
  CookieStoreStub.prototype.appendSubscriptions = function(serviceWorkerRegistrationId, subscriptions) {
    return this.delegate_ && this.delegate_.appendSubscriptions && this.delegate_.appendSubscriptions(serviceWorkerRegistrationId, subscriptions);
  }
  CookieStoreStub.prototype.getSubscriptions = function(serviceWorkerRegistrationId) {
    return this.delegate_ && this.delegate_.getSubscriptions && this.delegate_.getSubscriptions(serviceWorkerRegistrationId);
  }

  CookieStoreStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CookieStoreStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCookieStore_AppendSubscriptions_Name:
      var params = reader.decodeStruct(CookieStore_AppendSubscriptions_Params);
      this.appendSubscriptions(params.serviceWorkerRegistrationId, params.subscriptions).then(function(response) {
        var responseParams =
            new CookieStore_AppendSubscriptions_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kCookieStore_AppendSubscriptions_Name,
            codec.align(CookieStore_AppendSubscriptions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieStore_AppendSubscriptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCookieStore_GetSubscriptions_Name:
      var params = reader.decodeStruct(CookieStore_GetSubscriptions_Params);
      this.getSubscriptions(params.serviceWorkerRegistrationId).then(function(response) {
        var responseParams =
            new CookieStore_GetSubscriptions_ResponseParams();
        responseParams.subscriptions = response.subscriptions;
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kCookieStore_GetSubscriptions_Name,
            codec.align(CookieStore_GetSubscriptions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieStore_GetSubscriptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCookieStoreRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCookieStore_AppendSubscriptions_Name:
        if (message.expectsResponse())
          paramsClass = CookieStore_AppendSubscriptions_Params;
      break;
      case kCookieStore_GetSubscriptions_Name:
        if (message.expectsResponse())
          paramsClass = CookieStore_GetSubscriptions_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCookieStoreResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCookieStore_AppendSubscriptions_Name:
        if (message.isResponse())
          paramsClass = CookieStore_AppendSubscriptions_ResponseParams;
        break;
      case kCookieStore_GetSubscriptions_Name:
        if (message.isResponse())
          paramsClass = CookieStore_GetSubscriptions_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CookieStore = {
    name: 'blink.mojom.CookieStore',
    kVersion: 0,
    ptrClass: CookieStorePtr,
    proxyClass: CookieStoreProxy,
    stubClass: CookieStoreStub,
    validateRequest: validateCookieStoreRequest,
    validateResponse: validateCookieStoreResponse,
    mojomId: 'third_party/blink/public/mojom/cookie_store/cookie_store.mojom',
    fuzzMethods: {
      appendSubscriptions: {
        params: CookieStore_AppendSubscriptions_Params,
      },
      getSubscriptions: {
        params: CookieStore_GetSubscriptions_Params,
      },
    },
  };
  CookieStoreStub.prototype.validator = validateCookieStoreRequest;
  CookieStoreProxy.prototype.validator = validateCookieStoreResponse;
  exports.CookieChangeSubscription = CookieChangeSubscription;
  exports.CookieStore = CookieStore;
  exports.CookieStorePtr = CookieStorePtr;
  exports.CookieStoreAssociatedPtr = CookieStoreAssociatedPtr;
})();