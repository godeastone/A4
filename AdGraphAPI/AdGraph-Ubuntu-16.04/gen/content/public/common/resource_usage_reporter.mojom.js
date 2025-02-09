// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/resource_usage_reporter.mojom';
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



  function ResourceTypeStat(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceTypeStat.prototype.initDefaults_ = function() {
    this.count = 0;
    this.size = 0;
    this.liveSize = 0;
    this.decodedSize = 0;
  };
  ResourceTypeStat.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResourceTypeStat.generate = function(generator_) {
    var generated = new ResourceTypeStat;
    generated.count = generator_.generateUint64();
    generated.size = generator_.generateUint64();
    generated.liveSize = generator_.generateUint64();
    generated.decodedSize = generator_.generateUint64();
    return generated;
  };

  ResourceTypeStat.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.count = mutator_.mutateUint64(this.count);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint64(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.liveSize = mutator_.mutateUint64(this.liveSize);
    }
    if (mutator_.chooseMutateField()) {
      this.decodedSize = mutator_.mutateUint64(this.decodedSize);
    }
    return this;
  };
  ResourceTypeStat.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResourceTypeStat.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResourceTypeStat.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResourceTypeStat.validate = function(messageValidator, offset) {
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





    return validator.validationError.NONE;
  };

  ResourceTypeStat.encodedSize = codec.kStructHeaderSize + 32;

  ResourceTypeStat.decode = function(decoder) {
    var packed;
    var val = new ResourceTypeStat();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.count = decoder.decodeStruct(codec.Uint64);
    val.size = decoder.decodeStruct(codec.Uint64);
    val.liveSize = decoder.decodeStruct(codec.Uint64);
    val.decodedSize = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  ResourceTypeStat.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceTypeStat.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.count);
    encoder.encodeStruct(codec.Uint64, val.size);
    encoder.encodeStruct(codec.Uint64, val.liveSize);
    encoder.encodeStruct(codec.Uint64, val.decodedSize);
  };
  function ResourceTypeStats(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceTypeStats.prototype.initDefaults_ = function() {
    this.images = null;
    this.cssStyleSheets = null;
    this.scripts = null;
    this.xslStyleSheets = null;
    this.fonts = null;
    this.other = null;
  };
  ResourceTypeStats.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResourceTypeStats.generate = function(generator_) {
    var generated = new ResourceTypeStats;
    generated.images = generator_.generateStruct(content.mojom.ResourceTypeStat, false);
    generated.cssStyleSheets = generator_.generateStruct(content.mojom.ResourceTypeStat, false);
    generated.scripts = generator_.generateStruct(content.mojom.ResourceTypeStat, false);
    generated.xslStyleSheets = generator_.generateStruct(content.mojom.ResourceTypeStat, false);
    generated.fonts = generator_.generateStruct(content.mojom.ResourceTypeStat, false);
    generated.other = generator_.generateStruct(content.mojom.ResourceTypeStat, false);
    return generated;
  };

  ResourceTypeStats.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.images = mutator_.mutateStruct(content.mojom.ResourceTypeStat, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cssStyleSheets = mutator_.mutateStruct(content.mojom.ResourceTypeStat, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scripts = mutator_.mutateStruct(content.mojom.ResourceTypeStat, false);
    }
    if (mutator_.chooseMutateField()) {
      this.xslStyleSheets = mutator_.mutateStruct(content.mojom.ResourceTypeStat, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fonts = mutator_.mutateStruct(content.mojom.ResourceTypeStat, false);
    }
    if (mutator_.chooseMutateField()) {
      this.other = mutator_.mutateStruct(content.mojom.ResourceTypeStat, false);
    }
    return this;
  };
  ResourceTypeStats.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResourceTypeStats.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResourceTypeStats.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResourceTypeStats.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceTypeStats.images
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceTypeStats.cssStyleSheets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceTypeStats.scripts
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceTypeStats.xslStyleSheets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceTypeStats.fonts
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceTypeStats.other
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceTypeStats.encodedSize = codec.kStructHeaderSize + 48;

  ResourceTypeStats.decode = function(decoder) {
    var packed;
    var val = new ResourceTypeStats();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.images = decoder.decodeStructPointer(ResourceTypeStat);
    val.cssStyleSheets = decoder.decodeStructPointer(ResourceTypeStat);
    val.scripts = decoder.decodeStructPointer(ResourceTypeStat);
    val.xslStyleSheets = decoder.decodeStructPointer(ResourceTypeStat);
    val.fonts = decoder.decodeStructPointer(ResourceTypeStat);
    val.other = decoder.decodeStructPointer(ResourceTypeStat);
    return val;
  };

  ResourceTypeStats.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceTypeStats.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ResourceTypeStat, val.images);
    encoder.encodeStructPointer(ResourceTypeStat, val.cssStyleSheets);
    encoder.encodeStructPointer(ResourceTypeStat, val.scripts);
    encoder.encodeStructPointer(ResourceTypeStat, val.xslStyleSheets);
    encoder.encodeStructPointer(ResourceTypeStat, val.fonts);
    encoder.encodeStructPointer(ResourceTypeStat, val.other);
  };
  function ResourceUsageData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceUsageData.prototype.initDefaults_ = function() {
    this.reportsV8Stats = false;
    this.v8BytesAllocated = 0;
    this.v8BytesUsed = 0;
    this.webCacheStats = null;
  };
  ResourceUsageData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResourceUsageData.generate = function(generator_) {
    var generated = new ResourceUsageData;
    generated.reportsV8Stats = generator_.generateBool();
    generated.v8BytesAllocated = generator_.generateUint64();
    generated.v8BytesUsed = generator_.generateUint64();
    generated.webCacheStats = generator_.generateStruct(content.mojom.ResourceTypeStats, true);
    return generated;
  };

  ResourceUsageData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reportsV8Stats = mutator_.mutateBool(this.reportsV8Stats);
    }
    if (mutator_.chooseMutateField()) {
      this.v8BytesAllocated = mutator_.mutateUint64(this.v8BytesAllocated);
    }
    if (mutator_.chooseMutateField()) {
      this.v8BytesUsed = mutator_.mutateUint64(this.v8BytesUsed);
    }
    if (mutator_.chooseMutateField()) {
      this.webCacheStats = mutator_.mutateStruct(content.mojom.ResourceTypeStats, true);
    }
    return this;
  };
  ResourceUsageData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResourceUsageData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResourceUsageData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResourceUsageData.validate = function(messageValidator, offset) {
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





    // validate ResourceUsageData.webCacheStats
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, ResourceTypeStats, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceUsageData.encodedSize = codec.kStructHeaderSize + 32;

  ResourceUsageData.decode = function(decoder) {
    var packed;
    var val = new ResourceUsageData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.reportsV8Stats = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.v8BytesAllocated = decoder.decodeStruct(codec.Uint64);
    val.v8BytesUsed = decoder.decodeStruct(codec.Uint64);
    val.webCacheStats = decoder.decodeStructPointer(ResourceTypeStats);
    return val;
  };

  ResourceUsageData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceUsageData.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.reportsV8Stats & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.v8BytesAllocated);
    encoder.encodeStruct(codec.Uint64, val.v8BytesUsed);
    encoder.encodeStructPointer(ResourceTypeStats, val.webCacheStats);
  };
  function ResourceUsageReporter_GetUsageData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceUsageReporter_GetUsageData_Params.prototype.initDefaults_ = function() {
  };
  ResourceUsageReporter_GetUsageData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResourceUsageReporter_GetUsageData_Params.generate = function(generator_) {
    var generated = new ResourceUsageReporter_GetUsageData_Params;
    return generated;
  };

  ResourceUsageReporter_GetUsageData_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ResourceUsageReporter_GetUsageData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResourceUsageReporter_GetUsageData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResourceUsageReporter_GetUsageData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResourceUsageReporter_GetUsageData_Params.validate = function(messageValidator, offset) {
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

  ResourceUsageReporter_GetUsageData_Params.encodedSize = codec.kStructHeaderSize + 0;

  ResourceUsageReporter_GetUsageData_Params.decode = function(decoder) {
    var packed;
    var val = new ResourceUsageReporter_GetUsageData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ResourceUsageReporter_GetUsageData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceUsageReporter_GetUsageData_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ResourceUsageReporter_GetUsageData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.initDefaults_ = function() {
    this.data = null;
  };
  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResourceUsageReporter_GetUsageData_ResponseParams.generate = function(generator_) {
    var generated = new ResourceUsageReporter_GetUsageData_ResponseParams;
    generated.data = generator_.generateStruct(content.mojom.ResourceUsageData, false);
    return generated;
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateStruct(content.mojom.ResourceUsageData, false);
    }
    return this;
  };
  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ResourceUsageReporter_GetUsageData_ResponseParams.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ResourceUsageData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ResourceUsageReporter_GetUsageData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ResourceUsageReporter_GetUsageData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStructPointer(ResourceUsageData);
    return val;
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceUsageReporter_GetUsageData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ResourceUsageData, val.data);
  };
  var kResourceUsageReporter_GetUsageData_Name = 886880009;

  function ResourceUsageReporterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ResourceUsageReporter,
                                                   handleOrPtrInfo);
  }

  function ResourceUsageReporterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ResourceUsageReporter, associatedInterfacePtrInfo);
  }

  ResourceUsageReporterAssociatedPtr.prototype =
      Object.create(ResourceUsageReporterPtr.prototype);
  ResourceUsageReporterAssociatedPtr.prototype.constructor =
      ResourceUsageReporterAssociatedPtr;

  function ResourceUsageReporterProxy(receiver) {
    this.receiver_ = receiver;
  }
  ResourceUsageReporterPtr.prototype.getUsageData = function() {
    return ResourceUsageReporterProxy.prototype.getUsageData
        .apply(this.ptr.getProxy(), arguments);
  };

  ResourceUsageReporterProxy.prototype.getUsageData = function() {
    var params_ = new ResourceUsageReporter_GetUsageData_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kResourceUsageReporter_GetUsageData_Name,
          codec.align(ResourceUsageReporter_GetUsageData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ResourceUsageReporter_GetUsageData_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ResourceUsageReporter_GetUsageData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ResourceUsageReporterStub(delegate) {
    this.delegate_ = delegate;
  }
  ResourceUsageReporterStub.prototype.getUsageData = function() {
    return this.delegate_ && this.delegate_.getUsageData && this.delegate_.getUsageData();
  }

  ResourceUsageReporterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ResourceUsageReporterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kResourceUsageReporter_GetUsageData_Name:
      var params = reader.decodeStruct(ResourceUsageReporter_GetUsageData_Params);
      this.getUsageData().then(function(response) {
        var responseParams =
            new ResourceUsageReporter_GetUsageData_ResponseParams();
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kResourceUsageReporter_GetUsageData_Name,
            codec.align(ResourceUsageReporter_GetUsageData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ResourceUsageReporter_GetUsageData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateResourceUsageReporterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kResourceUsageReporter_GetUsageData_Name:
        if (message.expectsResponse())
          paramsClass = ResourceUsageReporter_GetUsageData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateResourceUsageReporterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kResourceUsageReporter_GetUsageData_Name:
        if (message.isResponse())
          paramsClass = ResourceUsageReporter_GetUsageData_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ResourceUsageReporter = {
    name: 'content.mojom.ResourceUsageReporter',
    kVersion: 0,
    ptrClass: ResourceUsageReporterPtr,
    proxyClass: ResourceUsageReporterProxy,
    stubClass: ResourceUsageReporterStub,
    validateRequest: validateResourceUsageReporterRequest,
    validateResponse: validateResourceUsageReporterResponse,
    mojomId: 'content/public/common/resource_usage_reporter.mojom',
    fuzzMethods: {
      getUsageData: {
        params: ResourceUsageReporter_GetUsageData_Params,
      },
    },
  };
  ResourceUsageReporterStub.prototype.validator = validateResourceUsageReporterRequest;
  ResourceUsageReporterProxy.prototype.validator = validateResourceUsageReporterResponse;
  exports.ResourceTypeStat = ResourceTypeStat;
  exports.ResourceTypeStats = ResourceTypeStats;
  exports.ResourceUsageData = ResourceUsageData;
  exports.ResourceUsageReporter = ResourceUsageReporter;
  exports.ResourceUsageReporterPtr = ResourceUsageReporterPtr;
  exports.ResourceUsageReporterAssociatedPtr = ResourceUsageReporterAssociatedPtr;
})();