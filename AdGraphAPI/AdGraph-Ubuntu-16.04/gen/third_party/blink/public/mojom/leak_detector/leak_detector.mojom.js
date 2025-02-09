// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/leak_detector/leak_detector.mojom';
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



  function LeakDetectionResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LeakDetectionResult.prototype.initDefaults_ = function() {
    this.numberOfLiveAudioNodes = 0;
    this.numberOfLiveDocuments = 0;
    this.numberOfLiveNodes = 0;
    this.numberOfLiveLayoutObjects = 0;
    this.numberOfLiveResources = 0;
    this.numberOfLivePausableObjects = 0;
    this.numberOfLiveScriptPromises = 0;
    this.numberOfLiveFrames = 0;
    this.numberOfLiveV8PerContextData = 0;
    this.numberOfWorkerGlobalScopes = 0;
    this.numberOfLiveUaCssResources = 0;
    this.numberOfLiveResourceFetchers = 0;
  };
  LeakDetectionResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LeakDetectionResult.generate = function(generator_) {
    var generated = new LeakDetectionResult;
    generated.numberOfLiveAudioNodes = generator_.generateUint32();
    generated.numberOfLiveDocuments = generator_.generateUint32();
    generated.numberOfLiveNodes = generator_.generateUint32();
    generated.numberOfLiveLayoutObjects = generator_.generateUint32();
    generated.numberOfLiveResources = generator_.generateUint32();
    generated.numberOfLivePausableObjects = generator_.generateUint32();
    generated.numberOfLiveScriptPromises = generator_.generateUint32();
    generated.numberOfLiveFrames = generator_.generateUint32();
    generated.numberOfLiveV8PerContextData = generator_.generateUint32();
    generated.numberOfWorkerGlobalScopes = generator_.generateUint32();
    generated.numberOfLiveUaCssResources = generator_.generateUint32();
    generated.numberOfLiveResourceFetchers = generator_.generateUint32();
    return generated;
  };

  LeakDetectionResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveAudioNodes = mutator_.mutateUint32(this.numberOfLiveAudioNodes);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveDocuments = mutator_.mutateUint32(this.numberOfLiveDocuments);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveNodes = mutator_.mutateUint32(this.numberOfLiveNodes);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveLayoutObjects = mutator_.mutateUint32(this.numberOfLiveLayoutObjects);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveResources = mutator_.mutateUint32(this.numberOfLiveResources);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLivePausableObjects = mutator_.mutateUint32(this.numberOfLivePausableObjects);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveScriptPromises = mutator_.mutateUint32(this.numberOfLiveScriptPromises);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveFrames = mutator_.mutateUint32(this.numberOfLiveFrames);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveV8PerContextData = mutator_.mutateUint32(this.numberOfLiveV8PerContextData);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfWorkerGlobalScopes = mutator_.mutateUint32(this.numberOfWorkerGlobalScopes);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveUaCssResources = mutator_.mutateUint32(this.numberOfLiveUaCssResources);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfLiveResourceFetchers = mutator_.mutateUint32(this.numberOfLiveResourceFetchers);
    }
    return this;
  };
  LeakDetectionResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LeakDetectionResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LeakDetectionResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LeakDetectionResult.validate = function(messageValidator, offset) {
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













    return validator.validationError.NONE;
  };

  LeakDetectionResult.encodedSize = codec.kStructHeaderSize + 48;

  LeakDetectionResult.decode = function(decoder) {
    var packed;
    var val = new LeakDetectionResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numberOfLiveAudioNodes = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveDocuments = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveNodes = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveLayoutObjects = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveResources = decoder.decodeStruct(codec.Uint32);
    val.numberOfLivePausableObjects = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveScriptPromises = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveFrames = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveV8PerContextData = decoder.decodeStruct(codec.Uint32);
    val.numberOfWorkerGlobalScopes = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveUaCssResources = decoder.decodeStruct(codec.Uint32);
    val.numberOfLiveResourceFetchers = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  LeakDetectionResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LeakDetectionResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveAudioNodes);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveDocuments);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveNodes);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveLayoutObjects);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveResources);
    encoder.encodeStruct(codec.Uint32, val.numberOfLivePausableObjects);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveScriptPromises);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveFrames);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveV8PerContextData);
    encoder.encodeStruct(codec.Uint32, val.numberOfWorkerGlobalScopes);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveUaCssResources);
    encoder.encodeStruct(codec.Uint32, val.numberOfLiveResourceFetchers);
  };
  function LeakDetector_PerformLeakDetection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LeakDetector_PerformLeakDetection_Params.prototype.initDefaults_ = function() {
  };
  LeakDetector_PerformLeakDetection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LeakDetector_PerformLeakDetection_Params.generate = function(generator_) {
    var generated = new LeakDetector_PerformLeakDetection_Params;
    return generated;
  };

  LeakDetector_PerformLeakDetection_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  LeakDetector_PerformLeakDetection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LeakDetector_PerformLeakDetection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LeakDetector_PerformLeakDetection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LeakDetector_PerformLeakDetection_Params.validate = function(messageValidator, offset) {
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

  LeakDetector_PerformLeakDetection_Params.encodedSize = codec.kStructHeaderSize + 0;

  LeakDetector_PerformLeakDetection_Params.decode = function(decoder) {
    var packed;
    var val = new LeakDetector_PerformLeakDetection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LeakDetector_PerformLeakDetection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LeakDetector_PerformLeakDetection_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function LeakDetector_PerformLeakDetection_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LeakDetector_PerformLeakDetection_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  LeakDetector_PerformLeakDetection_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LeakDetector_PerformLeakDetection_ResponseParams.generate = function(generator_) {
    var generated = new LeakDetector_PerformLeakDetection_ResponseParams;
    generated.result = generator_.generateStruct(blink.mojom.LeakDetectionResult, false);
    return generated;
  };

  LeakDetector_PerformLeakDetection_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(blink.mojom.LeakDetectionResult, false);
    }
    return this;
  };
  LeakDetector_PerformLeakDetection_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LeakDetector_PerformLeakDetection_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LeakDetector_PerformLeakDetection_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LeakDetector_PerformLeakDetection_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LeakDetector_PerformLeakDetection_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, LeakDetectionResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LeakDetector_PerformLeakDetection_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LeakDetector_PerformLeakDetection_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LeakDetector_PerformLeakDetection_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(LeakDetectionResult);
    return val;
  };

  LeakDetector_PerformLeakDetection_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LeakDetector_PerformLeakDetection_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(LeakDetectionResult, val.result);
  };
  var kLeakDetector_PerformLeakDetection_Name = 482401182;

  function LeakDetectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LeakDetector,
                                                   handleOrPtrInfo);
  }

  function LeakDetectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LeakDetector, associatedInterfacePtrInfo);
  }

  LeakDetectorAssociatedPtr.prototype =
      Object.create(LeakDetectorPtr.prototype);
  LeakDetectorAssociatedPtr.prototype.constructor =
      LeakDetectorAssociatedPtr;

  function LeakDetectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  LeakDetectorPtr.prototype.performLeakDetection = function() {
    return LeakDetectorProxy.prototype.performLeakDetection
        .apply(this.ptr.getProxy(), arguments);
  };

  LeakDetectorProxy.prototype.performLeakDetection = function() {
    var params_ = new LeakDetector_PerformLeakDetection_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLeakDetector_PerformLeakDetection_Name,
          codec.align(LeakDetector_PerformLeakDetection_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LeakDetector_PerformLeakDetection_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LeakDetector_PerformLeakDetection_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function LeakDetectorStub(delegate) {
    this.delegate_ = delegate;
  }
  LeakDetectorStub.prototype.performLeakDetection = function() {
    return this.delegate_ && this.delegate_.performLeakDetection && this.delegate_.performLeakDetection();
  }

  LeakDetectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  LeakDetectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLeakDetector_PerformLeakDetection_Name:
      var params = reader.decodeStruct(LeakDetector_PerformLeakDetection_Params);
      this.performLeakDetection().then(function(response) {
        var responseParams =
            new LeakDetector_PerformLeakDetection_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kLeakDetector_PerformLeakDetection_Name,
            codec.align(LeakDetector_PerformLeakDetection_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LeakDetector_PerformLeakDetection_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateLeakDetectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLeakDetector_PerformLeakDetection_Name:
        if (message.expectsResponse())
          paramsClass = LeakDetector_PerformLeakDetection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLeakDetectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLeakDetector_PerformLeakDetection_Name:
        if (message.isResponse())
          paramsClass = LeakDetector_PerformLeakDetection_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LeakDetector = {
    name: 'blink.mojom.LeakDetector',
    kVersion: 0,
    ptrClass: LeakDetectorPtr,
    proxyClass: LeakDetectorProxy,
    stubClass: LeakDetectorStub,
    validateRequest: validateLeakDetectorRequest,
    validateResponse: validateLeakDetectorResponse,
    mojomId: 'third_party/blink/public/mojom/leak_detector/leak_detector.mojom',
    fuzzMethods: {
      performLeakDetection: {
        params: LeakDetector_PerformLeakDetection_Params,
      },
    },
  };
  LeakDetectorStub.prototype.validator = validateLeakDetectorRequest;
  LeakDetectorProxy.prototype.validator = validateLeakDetectorResponse;
  exports.LeakDetectionResult = LeakDetectionResult;
  exports.LeakDetector = LeakDetector;
  exports.LeakDetectorPtr = LeakDetectorPtr;
  exports.LeakDetectorAssociatedPtr = LeakDetectorAssociatedPtr;
})();