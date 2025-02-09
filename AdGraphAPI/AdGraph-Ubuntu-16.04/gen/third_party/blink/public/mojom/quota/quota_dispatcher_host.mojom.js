// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom';
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
  var quota_types$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/quota/quota_types.mojom', 'quota_types.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../url/mojom/origin.mojom.js');
  }



  function QuotaDispatcherHost_QueryStorageUsageAndQuota_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.storageType = 0;
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.generate = function(generator_) {
    var generated = new QuotaDispatcherHost_QueryStorageUsageAndQuota_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.storageType = generator_.generateEnum(0, 4);
    return generated;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.storageType = mutator_.mutateEnum(this.storageType, 0, 4);
    }
    return this;
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.validate = function(messageValidator, offset) {
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


    // validate QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.storageType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, quota_types$.StorageType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.encodedSize = codec.kStructHeaderSize + 16;

  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.decode = function(decoder) {
    var packed;
    var val = new QuotaDispatcherHost_QueryStorageUsageAndQuota_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.storageType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Int32, val.storageType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.currentUsage = 0;
    this.currentQuota = 0;
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.generate = function(generator_) {
    var generated = new QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams;
    generated.error = generator_.generateEnum(0, 17);
    generated.currentUsage = generator_.generateInt64();
    generated.currentQuota = generator_.generateInt64();
    return generated;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 17);
    }
    if (mutator_.chooseMutateField()) {
      this.currentUsage = mutator_.mutateInt64(this.currentUsage);
    }
    if (mutator_.chooseMutateField()) {
      this.currentQuota = mutator_.mutateInt64(this.currentQuota);
    }
    return this;
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, quota_types$.QuotaStatusCode);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.currentUsage = decoder.decodeStruct(codec.Int64);
    val.currentQuota = decoder.decodeStruct(codec.Int64);
    return val;
  };

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.currentUsage);
    encoder.encodeStruct(codec.Int64, val.currentQuota);
  };
  function QuotaDispatcherHost_RequestStorageQuota_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  QuotaDispatcherHost_RequestStorageQuota_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.storageType = 0;
    this.requestedSize = 0;
  };
  QuotaDispatcherHost_RequestStorageQuota_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  QuotaDispatcherHost_RequestStorageQuota_Params.generate = function(generator_) {
    var generated = new QuotaDispatcherHost_RequestStorageQuota_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.storageType = generator_.generateEnum(0, 4);
    generated.requestedSize = generator_.generateUint64();
    return generated;
  };

  QuotaDispatcherHost_RequestStorageQuota_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.storageType = mutator_.mutateEnum(this.storageType, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.requestedSize = mutator_.mutateUint64(this.requestedSize);
    }
    return this;
  };
  QuotaDispatcherHost_RequestStorageQuota_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  QuotaDispatcherHost_RequestStorageQuota_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  QuotaDispatcherHost_RequestStorageQuota_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  QuotaDispatcherHost_RequestStorageQuota_Params.validate = function(messageValidator, offset) {
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


    // validate QuotaDispatcherHost_RequestStorageQuota_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate QuotaDispatcherHost_RequestStorageQuota_Params.storageType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, quota_types$.StorageType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  QuotaDispatcherHost_RequestStorageQuota_Params.encodedSize = codec.kStructHeaderSize + 24;

  QuotaDispatcherHost_RequestStorageQuota_Params.decode = function(decoder) {
    var packed;
    var val = new QuotaDispatcherHost_RequestStorageQuota_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.storageType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.requestedSize = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  QuotaDispatcherHost_RequestStorageQuota_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(QuotaDispatcherHost_RequestStorageQuota_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Int32, val.storageType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.requestedSize);
  };
  function QuotaDispatcherHost_RequestStorageQuota_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.currentUsage = 0;
    this.grantedQuota = 0;
  };
  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.generate = function(generator_) {
    var generated = new QuotaDispatcherHost_RequestStorageQuota_ResponseParams;
    generated.error = generator_.generateEnum(0, 17);
    generated.currentUsage = generator_.generateInt64();
    generated.grantedQuota = generator_.generateInt64();
    return generated;
  };

  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 17);
    }
    if (mutator_.chooseMutateField()) {
      this.currentUsage = mutator_.mutateInt64(this.currentUsage);
    }
    if (mutator_.chooseMutateField()) {
      this.grantedQuota = mutator_.mutateInt64(this.grantedQuota);
    }
    return this;
  };
  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate QuotaDispatcherHost_RequestStorageQuota_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, quota_types$.QuotaStatusCode);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new QuotaDispatcherHost_RequestStorageQuota_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.currentUsage = decoder.decodeStruct(codec.Int64);
    val.grantedQuota = decoder.decodeStruct(codec.Int64);
    return val;
  };

  QuotaDispatcherHost_RequestStorageQuota_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(QuotaDispatcherHost_RequestStorageQuota_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.currentUsage);
    encoder.encodeStruct(codec.Int64, val.grantedQuota);
  };
  var kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name = 519613979;
  var kQuotaDispatcherHost_RequestStorageQuota_Name = 918741070;

  function QuotaDispatcherHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(QuotaDispatcherHost,
                                                   handleOrPtrInfo);
  }

  function QuotaDispatcherHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        QuotaDispatcherHost, associatedInterfacePtrInfo);
  }

  QuotaDispatcherHostAssociatedPtr.prototype =
      Object.create(QuotaDispatcherHostPtr.prototype);
  QuotaDispatcherHostAssociatedPtr.prototype.constructor =
      QuotaDispatcherHostAssociatedPtr;

  function QuotaDispatcherHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  QuotaDispatcherHostPtr.prototype.queryStorageUsageAndQuota = function() {
    return QuotaDispatcherHostProxy.prototype.queryStorageUsageAndQuota
        .apply(this.ptr.getProxy(), arguments);
  };

  QuotaDispatcherHostProxy.prototype.queryStorageUsageAndQuota = function(origin, storageType) {
    var params_ = new QuotaDispatcherHost_QueryStorageUsageAndQuota_Params();
    params_.origin = origin;
    params_.storageType = storageType;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name,
          codec.align(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  QuotaDispatcherHostPtr.prototype.requestStorageQuota = function() {
    return QuotaDispatcherHostProxy.prototype.requestStorageQuota
        .apply(this.ptr.getProxy(), arguments);
  };

  QuotaDispatcherHostProxy.prototype.requestStorageQuota = function(origin, storageType, requestedSize) {
    var params_ = new QuotaDispatcherHost_RequestStorageQuota_Params();
    params_.origin = origin;
    params_.storageType = storageType;
    params_.requestedSize = requestedSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kQuotaDispatcherHost_RequestStorageQuota_Name,
          codec.align(QuotaDispatcherHost_RequestStorageQuota_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(QuotaDispatcherHost_RequestStorageQuota_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(QuotaDispatcherHost_RequestStorageQuota_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function QuotaDispatcherHostStub(delegate) {
    this.delegate_ = delegate;
  }
  QuotaDispatcherHostStub.prototype.queryStorageUsageAndQuota = function(origin, storageType) {
    return this.delegate_ && this.delegate_.queryStorageUsageAndQuota && this.delegate_.queryStorageUsageAndQuota(origin, storageType);
  }
  QuotaDispatcherHostStub.prototype.requestStorageQuota = function(origin, storageType, requestedSize) {
    return this.delegate_ && this.delegate_.requestStorageQuota && this.delegate_.requestStorageQuota(origin, storageType, requestedSize);
  }

  QuotaDispatcherHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  QuotaDispatcherHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name:
      var params = reader.decodeStruct(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params);
      this.queryStorageUsageAndQuota(params.origin, params.storageType).then(function(response) {
        var responseParams =
            new QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams();
        responseParams.error = response.error;
        responseParams.currentUsage = response.currentUsage;
        responseParams.currentQuota = response.currentQuota;
        var builder = new codec.MessageV1Builder(
            kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name,
            codec.align(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kQuotaDispatcherHost_RequestStorageQuota_Name:
      var params = reader.decodeStruct(QuotaDispatcherHost_RequestStorageQuota_Params);
      this.requestStorageQuota(params.origin, params.storageType, params.requestedSize).then(function(response) {
        var responseParams =
            new QuotaDispatcherHost_RequestStorageQuota_ResponseParams();
        responseParams.error = response.error;
        responseParams.currentUsage = response.currentUsage;
        responseParams.grantedQuota = response.grantedQuota;
        var builder = new codec.MessageV1Builder(
            kQuotaDispatcherHost_RequestStorageQuota_Name,
            codec.align(QuotaDispatcherHost_RequestStorageQuota_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(QuotaDispatcherHost_RequestStorageQuota_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateQuotaDispatcherHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name:
        if (message.expectsResponse())
          paramsClass = QuotaDispatcherHost_QueryStorageUsageAndQuota_Params;
      break;
      case kQuotaDispatcherHost_RequestStorageQuota_Name:
        if (message.expectsResponse())
          paramsClass = QuotaDispatcherHost_RequestStorageQuota_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateQuotaDispatcherHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name:
        if (message.isResponse())
          paramsClass = QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams;
        break;
      case kQuotaDispatcherHost_RequestStorageQuota_Name:
        if (message.isResponse())
          paramsClass = QuotaDispatcherHost_RequestStorageQuota_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var QuotaDispatcherHost = {
    name: 'blink.mojom.QuotaDispatcherHost',
    kVersion: 0,
    ptrClass: QuotaDispatcherHostPtr,
    proxyClass: QuotaDispatcherHostProxy,
    stubClass: QuotaDispatcherHostStub,
    validateRequest: validateQuotaDispatcherHostRequest,
    validateResponse: validateQuotaDispatcherHostResponse,
    mojomId: 'third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom',
    fuzzMethods: {
      queryStorageUsageAndQuota: {
        params: QuotaDispatcherHost_QueryStorageUsageAndQuota_Params,
      },
      requestStorageQuota: {
        params: QuotaDispatcherHost_RequestStorageQuota_Params,
      },
    },
  };
  QuotaDispatcherHostStub.prototype.validator = validateQuotaDispatcherHostRequest;
  QuotaDispatcherHostProxy.prototype.validator = validateQuotaDispatcherHostResponse;
  exports.QuotaDispatcherHost = QuotaDispatcherHost;
  exports.QuotaDispatcherHostPtr = QuotaDispatcherHostPtr;
  exports.QuotaDispatcherHostAssociatedPtr = QuotaDispatcherHostAssociatedPtr;
})();