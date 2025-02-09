// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/net_benchmarking.mojom';
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



  function NetBenchmarking_CloseCurrentConnections_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_CloseCurrentConnections_Params.prototype.initDefaults_ = function() {
  };
  NetBenchmarking_CloseCurrentConnections_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_CloseCurrentConnections_Params.generate = function(generator_) {
    var generated = new NetBenchmarking_CloseCurrentConnections_Params;
    return generated;
  };

  NetBenchmarking_CloseCurrentConnections_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NetBenchmarking_CloseCurrentConnections_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_CloseCurrentConnections_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_CloseCurrentConnections_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_CloseCurrentConnections_Params.validate = function(messageValidator, offset) {
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

  NetBenchmarking_CloseCurrentConnections_Params.encodedSize = codec.kStructHeaderSize + 0;

  NetBenchmarking_CloseCurrentConnections_Params.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_CloseCurrentConnections_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetBenchmarking_CloseCurrentConnections_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_CloseCurrentConnections_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NetBenchmarking_CloseCurrentConnections_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_CloseCurrentConnections_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetBenchmarking_CloseCurrentConnections_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_CloseCurrentConnections_ResponseParams.generate = function(generator_) {
    var generated = new NetBenchmarking_CloseCurrentConnections_ResponseParams;
    return generated;
  };

  NetBenchmarking_CloseCurrentConnections_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetBenchmarking_CloseCurrentConnections_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_CloseCurrentConnections_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_CloseCurrentConnections_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_CloseCurrentConnections_ResponseParams.validate = function(messageValidator, offset) {
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

  NetBenchmarking_CloseCurrentConnections_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetBenchmarking_CloseCurrentConnections_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_CloseCurrentConnections_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetBenchmarking_CloseCurrentConnections_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_CloseCurrentConnections_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetBenchmarking_ClearCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_ClearCache_Params.prototype.initDefaults_ = function() {
  };
  NetBenchmarking_ClearCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_ClearCache_Params.generate = function(generator_) {
    var generated = new NetBenchmarking_ClearCache_Params;
    return generated;
  };

  NetBenchmarking_ClearCache_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NetBenchmarking_ClearCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_ClearCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_ClearCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_ClearCache_Params.validate = function(messageValidator, offset) {
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

  NetBenchmarking_ClearCache_Params.encodedSize = codec.kStructHeaderSize + 0;

  NetBenchmarking_ClearCache_Params.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_ClearCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetBenchmarking_ClearCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_ClearCache_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NetBenchmarking_ClearCache_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_ClearCache_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  NetBenchmarking_ClearCache_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_ClearCache_ResponseParams.generate = function(generator_) {
    var generated = new NetBenchmarking_ClearCache_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  NetBenchmarking_ClearCache_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  NetBenchmarking_ClearCache_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_ClearCache_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_ClearCache_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_ClearCache_ResponseParams.validate = function(messageValidator, offset) {
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

  NetBenchmarking_ClearCache_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NetBenchmarking_ClearCache_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_ClearCache_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetBenchmarking_ClearCache_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_ClearCache_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetBenchmarking_ClearHostResolverCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_ClearHostResolverCache_Params.prototype.initDefaults_ = function() {
  };
  NetBenchmarking_ClearHostResolverCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_ClearHostResolverCache_Params.generate = function(generator_) {
    var generated = new NetBenchmarking_ClearHostResolverCache_Params;
    return generated;
  };

  NetBenchmarking_ClearHostResolverCache_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NetBenchmarking_ClearHostResolverCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_ClearHostResolverCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_ClearHostResolverCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_ClearHostResolverCache_Params.validate = function(messageValidator, offset) {
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

  NetBenchmarking_ClearHostResolverCache_Params.encodedSize = codec.kStructHeaderSize + 0;

  NetBenchmarking_ClearHostResolverCache_Params.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_ClearHostResolverCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetBenchmarking_ClearHostResolverCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_ClearHostResolverCache_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NetBenchmarking_ClearHostResolverCache_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_ClearHostResolverCache_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetBenchmarking_ClearHostResolverCache_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_ClearHostResolverCache_ResponseParams.generate = function(generator_) {
    var generated = new NetBenchmarking_ClearHostResolverCache_ResponseParams;
    return generated;
  };

  NetBenchmarking_ClearHostResolverCache_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetBenchmarking_ClearHostResolverCache_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_ClearHostResolverCache_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_ClearHostResolverCache_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_ClearHostResolverCache_ResponseParams.validate = function(messageValidator, offset) {
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

  NetBenchmarking_ClearHostResolverCache_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetBenchmarking_ClearHostResolverCache_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_ClearHostResolverCache_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetBenchmarking_ClearHostResolverCache_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_ClearHostResolverCache_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetBenchmarking_ClearPredictorCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_ClearPredictorCache_Params.prototype.initDefaults_ = function() {
  };
  NetBenchmarking_ClearPredictorCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_ClearPredictorCache_Params.generate = function(generator_) {
    var generated = new NetBenchmarking_ClearPredictorCache_Params;
    return generated;
  };

  NetBenchmarking_ClearPredictorCache_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NetBenchmarking_ClearPredictorCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_ClearPredictorCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_ClearPredictorCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_ClearPredictorCache_Params.validate = function(messageValidator, offset) {
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

  NetBenchmarking_ClearPredictorCache_Params.encodedSize = codec.kStructHeaderSize + 0;

  NetBenchmarking_ClearPredictorCache_Params.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_ClearPredictorCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetBenchmarking_ClearPredictorCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_ClearPredictorCache_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NetBenchmarking_ClearPredictorCache_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetBenchmarking_ClearPredictorCache_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetBenchmarking_ClearPredictorCache_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetBenchmarking_ClearPredictorCache_ResponseParams.generate = function(generator_) {
    var generated = new NetBenchmarking_ClearPredictorCache_ResponseParams;
    return generated;
  };

  NetBenchmarking_ClearPredictorCache_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetBenchmarking_ClearPredictorCache_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetBenchmarking_ClearPredictorCache_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetBenchmarking_ClearPredictorCache_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetBenchmarking_ClearPredictorCache_ResponseParams.validate = function(messageValidator, offset) {
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

  NetBenchmarking_ClearPredictorCache_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetBenchmarking_ClearPredictorCache_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetBenchmarking_ClearPredictorCache_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetBenchmarking_ClearPredictorCache_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetBenchmarking_ClearPredictorCache_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kNetBenchmarking_CloseCurrentConnections_Name = 1869619581;
  var kNetBenchmarking_ClearCache_Name = 1640264919;
  var kNetBenchmarking_ClearHostResolverCache_Name = 521805295;
  var kNetBenchmarking_ClearPredictorCache_Name = 298145591;

  function NetBenchmarkingPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetBenchmarking,
                                                   handleOrPtrInfo);
  }

  function NetBenchmarkingAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetBenchmarking, associatedInterfacePtrInfo);
  }

  NetBenchmarkingAssociatedPtr.prototype =
      Object.create(NetBenchmarkingPtr.prototype);
  NetBenchmarkingAssociatedPtr.prototype.constructor =
      NetBenchmarkingAssociatedPtr;

  function NetBenchmarkingProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetBenchmarkingPtr.prototype.closeCurrentConnections = function() {
    return NetBenchmarkingProxy.prototype.closeCurrentConnections
        .apply(this.ptr.getProxy(), arguments);
  };

  NetBenchmarkingProxy.prototype.closeCurrentConnections = function() {
    var params_ = new NetBenchmarking_CloseCurrentConnections_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetBenchmarking_CloseCurrentConnections_Name,
          codec.align(NetBenchmarking_CloseCurrentConnections_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetBenchmarking_CloseCurrentConnections_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetBenchmarking_CloseCurrentConnections_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetBenchmarkingPtr.prototype.clearCache = function() {
    return NetBenchmarkingProxy.prototype.clearCache
        .apply(this.ptr.getProxy(), arguments);
  };

  NetBenchmarkingProxy.prototype.clearCache = function() {
    var params_ = new NetBenchmarking_ClearCache_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetBenchmarking_ClearCache_Name,
          codec.align(NetBenchmarking_ClearCache_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetBenchmarking_ClearCache_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetBenchmarking_ClearCache_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetBenchmarkingPtr.prototype.clearHostResolverCache = function() {
    return NetBenchmarkingProxy.prototype.clearHostResolverCache
        .apply(this.ptr.getProxy(), arguments);
  };

  NetBenchmarkingProxy.prototype.clearHostResolverCache = function() {
    var params_ = new NetBenchmarking_ClearHostResolverCache_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetBenchmarking_ClearHostResolverCache_Name,
          codec.align(NetBenchmarking_ClearHostResolverCache_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetBenchmarking_ClearHostResolverCache_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetBenchmarking_ClearHostResolverCache_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetBenchmarkingPtr.prototype.clearPredictorCache = function() {
    return NetBenchmarkingProxy.prototype.clearPredictorCache
        .apply(this.ptr.getProxy(), arguments);
  };

  NetBenchmarkingProxy.prototype.clearPredictorCache = function() {
    var params_ = new NetBenchmarking_ClearPredictorCache_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetBenchmarking_ClearPredictorCache_Name,
          codec.align(NetBenchmarking_ClearPredictorCache_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetBenchmarking_ClearPredictorCache_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetBenchmarking_ClearPredictorCache_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NetBenchmarkingStub(delegate) {
    this.delegate_ = delegate;
  }
  NetBenchmarkingStub.prototype.closeCurrentConnections = function() {
    return this.delegate_ && this.delegate_.closeCurrentConnections && this.delegate_.closeCurrentConnections();
  }
  NetBenchmarkingStub.prototype.clearCache = function() {
    return this.delegate_ && this.delegate_.clearCache && this.delegate_.clearCache();
  }
  NetBenchmarkingStub.prototype.clearHostResolverCache = function() {
    return this.delegate_ && this.delegate_.clearHostResolverCache && this.delegate_.clearHostResolverCache();
  }
  NetBenchmarkingStub.prototype.clearPredictorCache = function() {
    return this.delegate_ && this.delegate_.clearPredictorCache && this.delegate_.clearPredictorCache();
  }

  NetBenchmarkingStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  NetBenchmarkingStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetBenchmarking_CloseCurrentConnections_Name:
      var params = reader.decodeStruct(NetBenchmarking_CloseCurrentConnections_Params);
      this.closeCurrentConnections().then(function(response) {
        var responseParams =
            new NetBenchmarking_CloseCurrentConnections_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetBenchmarking_CloseCurrentConnections_Name,
            codec.align(NetBenchmarking_CloseCurrentConnections_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetBenchmarking_CloseCurrentConnections_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetBenchmarking_ClearCache_Name:
      var params = reader.decodeStruct(NetBenchmarking_ClearCache_Params);
      this.clearCache().then(function(response) {
        var responseParams =
            new NetBenchmarking_ClearCache_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kNetBenchmarking_ClearCache_Name,
            codec.align(NetBenchmarking_ClearCache_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetBenchmarking_ClearCache_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetBenchmarking_ClearHostResolverCache_Name:
      var params = reader.decodeStruct(NetBenchmarking_ClearHostResolverCache_Params);
      this.clearHostResolverCache().then(function(response) {
        var responseParams =
            new NetBenchmarking_ClearHostResolverCache_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetBenchmarking_ClearHostResolverCache_Name,
            codec.align(NetBenchmarking_ClearHostResolverCache_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetBenchmarking_ClearHostResolverCache_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetBenchmarking_ClearPredictorCache_Name:
      var params = reader.decodeStruct(NetBenchmarking_ClearPredictorCache_Params);
      this.clearPredictorCache().then(function(response) {
        var responseParams =
            new NetBenchmarking_ClearPredictorCache_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetBenchmarking_ClearPredictorCache_Name,
            codec.align(NetBenchmarking_ClearPredictorCache_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetBenchmarking_ClearPredictorCache_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNetBenchmarkingRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetBenchmarking_CloseCurrentConnections_Name:
        if (message.expectsResponse())
          paramsClass = NetBenchmarking_CloseCurrentConnections_Params;
      break;
      case kNetBenchmarking_ClearCache_Name:
        if (message.expectsResponse())
          paramsClass = NetBenchmarking_ClearCache_Params;
      break;
      case kNetBenchmarking_ClearHostResolverCache_Name:
        if (message.expectsResponse())
          paramsClass = NetBenchmarking_ClearHostResolverCache_Params;
      break;
      case kNetBenchmarking_ClearPredictorCache_Name:
        if (message.expectsResponse())
          paramsClass = NetBenchmarking_ClearPredictorCache_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetBenchmarkingResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNetBenchmarking_CloseCurrentConnections_Name:
        if (message.isResponse())
          paramsClass = NetBenchmarking_CloseCurrentConnections_ResponseParams;
        break;
      case kNetBenchmarking_ClearCache_Name:
        if (message.isResponse())
          paramsClass = NetBenchmarking_ClearCache_ResponseParams;
        break;
      case kNetBenchmarking_ClearHostResolverCache_Name:
        if (message.isResponse())
          paramsClass = NetBenchmarking_ClearHostResolverCache_ResponseParams;
        break;
      case kNetBenchmarking_ClearPredictorCache_Name:
        if (message.isResponse())
          paramsClass = NetBenchmarking_ClearPredictorCache_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NetBenchmarking = {
    name: 'chrome.mojom.NetBenchmarking',
    kVersion: 0,
    ptrClass: NetBenchmarkingPtr,
    proxyClass: NetBenchmarkingProxy,
    stubClass: NetBenchmarkingStub,
    validateRequest: validateNetBenchmarkingRequest,
    validateResponse: validateNetBenchmarkingResponse,
    mojomId: 'chrome/common/net_benchmarking.mojom',
    fuzzMethods: {
      closeCurrentConnections: {
        params: NetBenchmarking_CloseCurrentConnections_Params,
      },
      clearCache: {
        params: NetBenchmarking_ClearCache_Params,
      },
      clearHostResolverCache: {
        params: NetBenchmarking_ClearHostResolverCache_Params,
      },
      clearPredictorCache: {
        params: NetBenchmarking_ClearPredictorCache_Params,
      },
    },
  };
  NetBenchmarkingStub.prototype.validator = validateNetBenchmarkingRequest;
  NetBenchmarkingProxy.prototype.validator = validateNetBenchmarkingResponse;
  exports.NetBenchmarking = NetBenchmarking;
  exports.NetBenchmarkingPtr = NetBenchmarkingPtr;
  exports.NetBenchmarkingAssociatedPtr = NetBenchmarkingAssociatedPtr;
})();