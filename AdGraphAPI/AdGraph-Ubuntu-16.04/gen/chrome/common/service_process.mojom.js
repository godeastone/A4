// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/service_process.mojom';
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



  function ServiceProcess_Hello_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceProcess_Hello_Params.prototype.initDefaults_ = function() {
  };
  ServiceProcess_Hello_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceProcess_Hello_Params.generate = function(generator_) {
    var generated = new ServiceProcess_Hello_Params;
    return generated;
  };

  ServiceProcess_Hello_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceProcess_Hello_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceProcess_Hello_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceProcess_Hello_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceProcess_Hello_Params.validate = function(messageValidator, offset) {
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

  ServiceProcess_Hello_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceProcess_Hello_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceProcess_Hello_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceProcess_Hello_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceProcess_Hello_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceProcess_Hello_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceProcess_Hello_ResponseParams.prototype.initDefaults_ = function() {
  };
  ServiceProcess_Hello_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceProcess_Hello_ResponseParams.generate = function(generator_) {
    var generated = new ServiceProcess_Hello_ResponseParams;
    return generated;
  };

  ServiceProcess_Hello_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceProcess_Hello_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceProcess_Hello_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceProcess_Hello_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceProcess_Hello_ResponseParams.validate = function(messageValidator, offset) {
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

  ServiceProcess_Hello_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  ServiceProcess_Hello_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceProcess_Hello_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceProcess_Hello_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceProcess_Hello_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceProcess_GetHistograms_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceProcess_GetHistograms_Params.prototype.initDefaults_ = function() {
  };
  ServiceProcess_GetHistograms_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceProcess_GetHistograms_Params.generate = function(generator_) {
    var generated = new ServiceProcess_GetHistograms_Params;
    return generated;
  };

  ServiceProcess_GetHistograms_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceProcess_GetHistograms_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceProcess_GetHistograms_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceProcess_GetHistograms_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceProcess_GetHistograms_Params.validate = function(messageValidator, offset) {
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

  ServiceProcess_GetHistograms_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceProcess_GetHistograms_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceProcess_GetHistograms_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceProcess_GetHistograms_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceProcess_GetHistograms_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceProcess_GetHistograms_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceProcess_GetHistograms_ResponseParams.prototype.initDefaults_ = function() {
    this.histograms = null;
  };
  ServiceProcess_GetHistograms_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceProcess_GetHistograms_ResponseParams.generate = function(generator_) {
    var generated = new ServiceProcess_GetHistograms_ResponseParams;
    generated.histograms = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  ServiceProcess_GetHistograms_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.histograms = mutator_.mutateArray(this.histograms, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  ServiceProcess_GetHistograms_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceProcess_GetHistograms_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceProcess_GetHistograms_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceProcess_GetHistograms_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceProcess_GetHistograms_ResponseParams.histograms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceProcess_GetHistograms_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ServiceProcess_GetHistograms_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceProcess_GetHistograms_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.histograms = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ServiceProcess_GetHistograms_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceProcess_GetHistograms_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.histograms);
  };
  function ServiceProcess_UpdateAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceProcess_UpdateAvailable_Params.prototype.initDefaults_ = function() {
  };
  ServiceProcess_UpdateAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceProcess_UpdateAvailable_Params.generate = function(generator_) {
    var generated = new ServiceProcess_UpdateAvailable_Params;
    return generated;
  };

  ServiceProcess_UpdateAvailable_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceProcess_UpdateAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceProcess_UpdateAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceProcess_UpdateAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceProcess_UpdateAvailable_Params.validate = function(messageValidator, offset) {
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

  ServiceProcess_UpdateAvailable_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceProcess_UpdateAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceProcess_UpdateAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceProcess_UpdateAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceProcess_UpdateAvailable_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceProcess_ShutDown_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceProcess_ShutDown_Params.prototype.initDefaults_ = function() {
  };
  ServiceProcess_ShutDown_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceProcess_ShutDown_Params.generate = function(generator_) {
    var generated = new ServiceProcess_ShutDown_Params;
    return generated;
  };

  ServiceProcess_ShutDown_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceProcess_ShutDown_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceProcess_ShutDown_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceProcess_ShutDown_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceProcess_ShutDown_Params.validate = function(messageValidator, offset) {
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

  ServiceProcess_ShutDown_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceProcess_ShutDown_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceProcess_ShutDown_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceProcess_ShutDown_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceProcess_ShutDown_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kServiceProcess_Hello_Name = 1368062727;
  var kServiceProcess_GetHistograms_Name = 2054302958;
  var kServiceProcess_UpdateAvailable_Name = 1668380393;
  var kServiceProcess_ShutDown_Name = 1765911655;

  function ServiceProcessPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceProcess,
                                                   handleOrPtrInfo);
  }

  function ServiceProcessAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceProcess, associatedInterfacePtrInfo);
  }

  ServiceProcessAssociatedPtr.prototype =
      Object.create(ServiceProcessPtr.prototype);
  ServiceProcessAssociatedPtr.prototype.constructor =
      ServiceProcessAssociatedPtr;

  function ServiceProcessProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceProcessPtr.prototype.hello = function() {
    return ServiceProcessProxy.prototype.hello
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceProcessProxy.prototype.hello = function() {
    var params_ = new ServiceProcess_Hello_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceProcess_Hello_Name,
          codec.align(ServiceProcess_Hello_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceProcess_Hello_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceProcess_Hello_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceProcessPtr.prototype.getHistograms = function() {
    return ServiceProcessProxy.prototype.getHistograms
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceProcessProxy.prototype.getHistograms = function() {
    var params_ = new ServiceProcess_GetHistograms_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceProcess_GetHistograms_Name,
          codec.align(ServiceProcess_GetHistograms_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceProcess_GetHistograms_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceProcess_GetHistograms_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceProcessPtr.prototype.updateAvailable = function() {
    return ServiceProcessProxy.prototype.updateAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceProcessProxy.prototype.updateAvailable = function() {
    var params_ = new ServiceProcess_UpdateAvailable_Params();
    var builder = new codec.MessageV0Builder(
        kServiceProcess_UpdateAvailable_Name,
        codec.align(ServiceProcess_UpdateAvailable_Params.encodedSize));
    builder.encodeStruct(ServiceProcess_UpdateAvailable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceProcessPtr.prototype.shutDown = function() {
    return ServiceProcessProxy.prototype.shutDown
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceProcessProxy.prototype.shutDown = function() {
    var params_ = new ServiceProcess_ShutDown_Params();
    var builder = new codec.MessageV0Builder(
        kServiceProcess_ShutDown_Name,
        codec.align(ServiceProcess_ShutDown_Params.encodedSize));
    builder.encodeStruct(ServiceProcess_ShutDown_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceProcessStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceProcessStub.prototype.hello = function() {
    return this.delegate_ && this.delegate_.hello && this.delegate_.hello();
  }
  ServiceProcessStub.prototype.getHistograms = function() {
    return this.delegate_ && this.delegate_.getHistograms && this.delegate_.getHistograms();
  }
  ServiceProcessStub.prototype.updateAvailable = function() {
    return this.delegate_ && this.delegate_.updateAvailable && this.delegate_.updateAvailable();
  }
  ServiceProcessStub.prototype.shutDown = function() {
    return this.delegate_ && this.delegate_.shutDown && this.delegate_.shutDown();
  }

  ServiceProcessStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceProcess_UpdateAvailable_Name:
      var params = reader.decodeStruct(ServiceProcess_UpdateAvailable_Params);
      this.updateAvailable();
      return true;
    case kServiceProcess_ShutDown_Name:
      var params = reader.decodeStruct(ServiceProcess_ShutDown_Params);
      this.shutDown();
      return true;
    default:
      return false;
    }
  };

  ServiceProcessStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceProcess_Hello_Name:
      var params = reader.decodeStruct(ServiceProcess_Hello_Params);
      this.hello().then(function(response) {
        var responseParams =
            new ServiceProcess_Hello_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kServiceProcess_Hello_Name,
            codec.align(ServiceProcess_Hello_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceProcess_Hello_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceProcess_GetHistograms_Name:
      var params = reader.decodeStruct(ServiceProcess_GetHistograms_Params);
      this.getHistograms().then(function(response) {
        var responseParams =
            new ServiceProcess_GetHistograms_ResponseParams();
        responseParams.histograms = response.histograms;
        var builder = new codec.MessageV1Builder(
            kServiceProcess_GetHistograms_Name,
            codec.align(ServiceProcess_GetHistograms_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceProcess_GetHistograms_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateServiceProcessRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceProcess_Hello_Name:
        if (message.expectsResponse())
          paramsClass = ServiceProcess_Hello_Params;
      break;
      case kServiceProcess_GetHistograms_Name:
        if (message.expectsResponse())
          paramsClass = ServiceProcess_GetHistograms_Params;
      break;
      case kServiceProcess_UpdateAvailable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceProcess_UpdateAvailable_Params;
      break;
      case kServiceProcess_ShutDown_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceProcess_ShutDown_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceProcessResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServiceProcess_Hello_Name:
        if (message.isResponse())
          paramsClass = ServiceProcess_Hello_ResponseParams;
        break;
      case kServiceProcess_GetHistograms_Name:
        if (message.isResponse())
          paramsClass = ServiceProcess_GetHistograms_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServiceProcess = {
    name: 'chrome.mojom.ServiceProcess',
    kVersion: 0,
    ptrClass: ServiceProcessPtr,
    proxyClass: ServiceProcessProxy,
    stubClass: ServiceProcessStub,
    validateRequest: validateServiceProcessRequest,
    validateResponse: validateServiceProcessResponse,
    mojomId: 'chrome/common/service_process.mojom',
    fuzzMethods: {
      hello: {
        params: ServiceProcess_Hello_Params,
      },
      getHistograms: {
        params: ServiceProcess_GetHistograms_Params,
      },
      updateAvailable: {
        params: ServiceProcess_UpdateAvailable_Params,
      },
      shutDown: {
        params: ServiceProcess_ShutDown_Params,
      },
    },
  };
  ServiceProcessStub.prototype.validator = validateServiceProcessRequest;
  ServiceProcessProxy.prototype.validator = validateServiceProcessResponse;
  exports.ServiceProcess = ServiceProcess;
  exports.ServiceProcessPtr = ServiceProcessPtr;
  exports.ServiceProcessAssociatedPtr = ServiceProcessAssociatedPtr;
})();