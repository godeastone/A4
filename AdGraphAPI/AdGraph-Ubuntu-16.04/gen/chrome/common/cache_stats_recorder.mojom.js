// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/cache_stats_recorder.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chrome.mojom');



  function CacheStatsRecorder_RecordCacheStats_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CacheStatsRecorder_RecordCacheStats_Params.prototype.initDefaults_ = function() {
    this.capacity = 0;
    this.size = 0;
  };
  CacheStatsRecorder_RecordCacheStats_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CacheStatsRecorder_RecordCacheStats_Params.generate = function(generator_) {
    var generated = new CacheStatsRecorder_RecordCacheStats_Params;
    generated.capacity = generator_.generateUint64();
    generated.size = generator_.generateUint64();
    return generated;
  };

  CacheStatsRecorder_RecordCacheStats_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.capacity = mutator_.mutateUint64(this.capacity);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint64(this.size);
    }
    return this;
  };
  CacheStatsRecorder_RecordCacheStats_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CacheStatsRecorder_RecordCacheStats_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CacheStatsRecorder_RecordCacheStats_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CacheStatsRecorder_RecordCacheStats_Params.validate = function(messageValidator, offset) {
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

  CacheStatsRecorder_RecordCacheStats_Params.encodedSize = codec.kStructHeaderSize + 16;

  CacheStatsRecorder_RecordCacheStats_Params.decode = function(decoder) {
    var packed;
    var val = new CacheStatsRecorder_RecordCacheStats_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.capacity = decoder.decodeStruct(codec.Uint64);
    val.size = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  CacheStatsRecorder_RecordCacheStats_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CacheStatsRecorder_RecordCacheStats_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.capacity);
    encoder.encodeStruct(codec.Uint64, val.size);
  };
  var kCacheStatsRecorder_RecordCacheStats_Name = 418277286;

  function CacheStatsRecorderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CacheStatsRecorder,
                                                   handleOrPtrInfo);
  }

  function CacheStatsRecorderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CacheStatsRecorder, associatedInterfacePtrInfo);
  }

  CacheStatsRecorderAssociatedPtr.prototype =
      Object.create(CacheStatsRecorderPtr.prototype);
  CacheStatsRecorderAssociatedPtr.prototype.constructor =
      CacheStatsRecorderAssociatedPtr;

  function CacheStatsRecorderProxy(receiver) {
    this.receiver_ = receiver;
  }
  CacheStatsRecorderPtr.prototype.recordCacheStats = function() {
    return CacheStatsRecorderProxy.prototype.recordCacheStats
        .apply(this.ptr.getProxy(), arguments);
  };

  CacheStatsRecorderProxy.prototype.recordCacheStats = function(capacity, size) {
    var params_ = new CacheStatsRecorder_RecordCacheStats_Params();
    params_.capacity = capacity;
    params_.size = size;
    var builder = new codec.MessageV0Builder(
        kCacheStatsRecorder_RecordCacheStats_Name,
        codec.align(CacheStatsRecorder_RecordCacheStats_Params.encodedSize));
    builder.encodeStruct(CacheStatsRecorder_RecordCacheStats_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CacheStatsRecorderStub(delegate) {
    this.delegate_ = delegate;
  }
  CacheStatsRecorderStub.prototype.recordCacheStats = function(capacity, size) {
    return this.delegate_ && this.delegate_.recordCacheStats && this.delegate_.recordCacheStats(capacity, size);
  }

  CacheStatsRecorderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCacheStatsRecorder_RecordCacheStats_Name:
      var params = reader.decodeStruct(CacheStatsRecorder_RecordCacheStats_Params);
      this.recordCacheStats(params.capacity, params.size);
      return true;
    default:
      return false;
    }
  };

  CacheStatsRecorderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCacheStatsRecorderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCacheStatsRecorder_RecordCacheStats_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CacheStatsRecorder_RecordCacheStats_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCacheStatsRecorderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CacheStatsRecorder = {
    name: 'chrome.mojom.CacheStatsRecorder',
    kVersion: 0,
    ptrClass: CacheStatsRecorderPtr,
    proxyClass: CacheStatsRecorderProxy,
    stubClass: CacheStatsRecorderStub,
    validateRequest: validateCacheStatsRecorderRequest,
    validateResponse: null,
    mojomId: 'chrome/common/cache_stats_recorder.mojom',
    fuzzMethods: {
      recordCacheStats: {
        params: CacheStatsRecorder_RecordCacheStats_Params,
      },
    },
  };
  CacheStatsRecorderStub.prototype.validator = validateCacheStatsRecorderRequest;
  CacheStatsRecorderProxy.prototype.validator = null;
  exports.CacheStatsRecorder = CacheStatsRecorder;
  exports.CacheStatsRecorderPtr = CacheStatsRecorderPtr;
  exports.CacheStatsRecorderAssociatedPtr = CacheStatsRecorderAssociatedPtr;
})();